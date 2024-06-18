// SPDX-License-Identifier: Apache-2.0

extern crate alloc;

use ciborium::{
    cbor,
    value::{Integer, Value, Value::Null},
};

use rstest::rstest;
use serde_bytes::Bytes;

macro_rules! map {
    ($($key:expr => $val:expr),* $(,)*) => {
        Value::Map(vec![$(
            (
                Value::serialized(&$key).unwrap(),
                Value::serialized(&$val).unwrap()
            )
        ),*])
    };
}

macro_rules! arr {
    ($($val:expr),*) => {
        Value::Array(vec![$(
            Value::serialized(&$val).unwrap()
        ),*])
    };
}

#[rstest(answer, question,
    // Non-numeric simple types
    case(Value::Null, cbor!(null).unwrap()),
    case(Value::Bool(true), cbor!(true).unwrap()),
    case(Value::Bool(false), cbor!(false).unwrap()),
    case(Value::Text("foo".into()), cbor!("foo").unwrap()),
    case(Value::Bytes(vec![0, 1, 2]), cbor!(Bytes::new(b"\x00\x01\x02")).unwrap()),

    // Numeric simple types
    case(Value::Integer(Integer::from(123)), cbor!(123).unwrap()),
    case(Value::Integer(Integer::from(-123)), cbor!(-123).unwrap()),
    case(Value::Float(1.23), cbor!(1.23).unwrap()),
    case(Value::Float(-1.23), cbor!(-1.23).unwrap()),
    case(Value::Float(2.5e+1), cbor!(2.5e+1).unwrap()),
    case(Value::Float(-2.5e+1), cbor!(-2.5e+1).unwrap()),

    // Simple array formulations
    case(arr![], cbor!([]).unwrap()),
    case(arr![Null], cbor!([null]).unwrap()),
    case(arr![true], cbor!([true]).unwrap()),
    case(arr![false], cbor!([false]).unwrap()),
    case(arr!["foo"], cbor!(["foo"]).unwrap()),
    case(arr![123], cbor!([123]).unwrap()),
    case(arr![-123], cbor!([-123]).unwrap()),
    case(arr![1.23], cbor!([1.23]).unwrap()),
    case(arr![-1.23], cbor!([-1.23]).unwrap()),
    case(arr![2.5e+1], cbor!([2.5e+1]).unwrap()),
    case(arr![2.5e+1], cbor!([2.5e+1]).unwrap()),
    case(arr![[1, 2]], cbor!([[1, 2]]).unwrap()),
    case(arr![map! {1=>2,3=>4}], cbor!([{1=>2,3=>4}]).unwrap()),

    // Two-item array formluations
    case(arr![Null, Null], cbor!([null, null]).unwrap()),
    case(arr![Null, true], cbor!([null, true]).unwrap()),
    case(arr![Null, false], cbor!([null, false]).unwrap()),
    case(arr![Null, "foo"], cbor!([null, "foo"]).unwrap()),
    case(arr![Null, 123], cbor!([null, 123]).unwrap()),
    case(arr![Null, -123], cbor!([null, -123]).unwrap()),
    case(arr![Null, 1.23], cbor!([null, 1.23]).unwrap()),
    case(arr![Null, -1.23], cbor!([null, -1.23]).unwrap()),
    case(arr![Null, 2.5e+1], cbor!([null, 2.5e+1]).unwrap()),
    case(arr![Null, 2.5e+1], cbor!([null, 2.5e+1]).unwrap()),
    case(arr![Null, [1, 2]], cbor!([null, [1, 2]]).unwrap()),
    case(arr![Null, map! {1=>2,3=>4}], cbor!([null, {1=>2,3=>4}]).unwrap()),
    case(arr![true, Null], cbor!([true, null]).unwrap()),
    case(arr![true, true], cbor!([true, true]).unwrap()),
    case(arr![true, false], cbor!([true, false]).unwrap()),
    case(arr![true, "foo"], cbor!([true, "foo"]).unwrap()),
    case(arr![true, 123], cbor!([true, 123]).unwrap()),
    case(arr![true, -123], cbor!([true, -123]).unwrap()),
    case(arr![true, 1.23], cbor!([true, 1.23]).unwrap()),
    case(arr![true, -1.23], cbor!([true, -1.23]).unwrap()),
    case(arr![true, 2.5e+1], cbor!([true, 2.5e+1]).unwrap()),
    case(arr![true, 2.5e+1], cbor!([true, 2.5e+1]).unwrap()),
    case(arr![true, [1, 2]], cbor!([true, [1, 2]]).unwrap()),
    case(arr![true, map! {1=>2,3=>4}], cbor!([true, {1=>2,3=>4}]).unwrap()),
    case(arr![false, Null], cbor!([false, null]).unwrap()),
    case(arr![false, true], cbor!([false, true]).unwrap()),
    case(arr![false, false], cbor!([false, false]).unwrap()),
    case(arr![false, "foo"], cbor!([false, "foo"]).unwrap()),
    case(arr![false, 123], cbor!([false, 123]).unwrap()),
    case(arr![false, -123], cbor!([false, -123]).unwrap()),
    case(arr![false, 1.23], cbor!([false, 1.23]).unwrap()),
    case(arr![false, -1.23], cbor!([false, -1.23]).unwrap()),
    case(arr![false, 2.5e+1], cbor!([false, 2.5e+1]).unwrap()),
    case(arr![false, 2.5e+1], cbor!([false, 2.5e+1]).unwrap()),
    case(arr![false, [1, 2]], cbor!([false, [1, 2]]).unwrap()),
    case(arr![false, map! {1=>2,3=>4}], cbor!([false, {1=>2,3=>4}]).unwrap()),
    case(arr!["foo", Null], cbor!(["foo", null]).unwrap()),
    case(arr!["foo", true], cbor!(["foo", true]).unwrap()),
    case(arr!["foo", false], cbor!(["foo", false]).unwrap()),
    case(arr!["foo", "foo"], cbor!(["foo", "foo"]).unwrap()),
    case(arr!["foo", 123], cbor!(["foo", 123]).unwrap()),
    case(arr!["foo", -123], cbor!(["foo", -123]).unwrap()),
    case(arr!["foo", 1.23], cbor!(["foo", 1.23]).unwrap()),
    case(arr!["foo", -1.23], cbor!(["foo", -1.23]).unwrap()),
    case(arr!["foo", 2.5e+1], cbor!(["foo", 2.5e+1]).unwrap()),
    case(arr!["foo", 2.5e+1], cbor!(["foo", 2.5e+1]).unwrap()),
    case(arr!["foo", [1, 2]], cbor!(["foo", [1, 2]]).unwrap()),
    case(arr!["foo", map! {1=>2,3=>4}], cbor!(["foo", {1=>2,3=>4}]).unwrap()),
    case(arr![123, Null], cbor!([123, null]).unwrap()),
    case(arr![123, true], cbor!([123, true]).unwrap()),
    case(arr![123, false], cbor!([123, false]).unwrap()),
    case(arr![123, "foo"], cbor!([123, "foo"]).unwrap()),
    case(arr![123, 123], cbor!([123, 123]).unwrap()),
    case(arr![123, -123], cbor!([123, -123]).unwrap()),
    case(arr![123, 1.23], cbor!([123, 1.23]).unwrap()),
    case(arr![123, -1.23], cbor!([123, -1.23]).unwrap()),
    case(arr![123, 2.5e+1], cbor!([123, 2.5e+1]).unwrap()),
    case(arr![123, 2.5e+1], cbor!([123, 2.5e+1]).unwrap()),
    case(arr![123, [1, 2]], cbor!([123, [1, 2]]).unwrap()),
    case(arr![123, map! {1=>2,3=>4}], cbor!([123, {1=>2,3=>4}]).unwrap()),
    case(arr![-123, Null], cbor!([-123, null]).unwrap()),
    case(arr![-123, true], cbor!([-123, true]).unwrap()),
    case(arr![-123, false], cbor!([-123, false]).unwrap()),
    case(arr![-123, "foo"], cbor!([-123, "foo"]).unwrap()),
    case(arr![-123, 123], cbor!([-123, 123]).unwrap()),
    case(arr![-123, -123], cbor!([-123, -123]).unwrap()),
    case(arr![-123, 1.23], cbor!([-123, 1.23]).unwrap()),
    case(arr![-123, -1.23], cbor!([-123, -1.23]).unwrap()),
    case(arr![-123, 2.5e+1], cbor!([-123, 2.5e+1]).unwrap()),
    case(arr![-123, 2.5e+1], cbor!([-123, 2.5e+1]).unwrap()),
    case(arr![-123, [1, 2]], cbor!([-123, [1, 2]]).unwrap()),
    case(arr![-123, map! {1=>2,3=>4}], cbor!([-123, {1=>2,3=>4}]).unwrap()),
    case(arr![1.23, Null], cbor!([1.23, null]).unwrap()),
    case(arr![1.23, true], cbor!([1.23, true]).unwrap()),
    case(arr![1.23, false], cbor!([1.23, false]).unwrap()),
    case(arr![1.23, "foo"], cbor!([1.23, "foo"]).unwrap()),
    case(arr![1.23, 123], cbor!([1.23, 123]).unwrap()),
    case(arr![1.23, -123], cbor!([1.23, -123]).unwrap()),
    case(arr![1.23, 1.23], cbor!([1.23, 1.23]).unwrap()),
    case(arr![1.23, -1.23], cbor!([1.23, -1.23]).unwrap()),
    case(arr![1.23, 2.5e+1], cbor!([1.23, 2.5e+1]).unwrap()),
    case(arr![1.23, 2.5e+1], cbor!([1.23, 2.5e+1]).unwrap()),
    case(arr![1.23, [1, 2]], cbor!([1.23, [1, 2]]).unwrap()),
    case(arr![1.23, map! {1=>2,3=>4}], cbor!([1.23, {1=>2,3=>4}]).unwrap()),
    case(arr![-1.23, Null], cbor!([-1.23, null]).unwrap()),
    case(arr![-1.23, true], cbor!([-1.23, true]).unwrap()),
    case(arr![-1.23, false], cbor!([-1.23, false]).unwrap()),
    case(arr![-1.23, "foo"], cbor!([-1.23, "foo"]).unwrap()),
    case(arr![-1.23, 123], cbor!([-1.23, 123]).unwrap()),
    case(arr![-1.23, -123], cbor!([-1.23, -123]).unwrap()),
    case(arr![-1.23, 1.23], cbor!([-1.23, 1.23]).unwrap()),
    case(arr![-1.23, -1.23], cbor!([-1.23, -1.23]).unwrap()),
    case(arr![-1.23, 2.5e+1], cbor!([-1.23, 2.5e+1]).unwrap()),
    case(arr![-1.23, 2.5e+1], cbor!([-1.23, 2.5e+1]).unwrap()),
    case(arr![-1.23, [1, 2]], cbor!([-1.23, [1, 2]]).unwrap()),
    case(arr![-1.23, map! {1=>2,3=>4}], cbor!([-1.23, {1=>2,3=>4}]).unwrap()),
    case(arr![2.5e+1, Null], cbor!([2.5e+1, null]).unwrap()),
    case(arr![2.5e+1, true], cbor!([2.5e+1, true]).unwrap()),
    case(arr![2.5e+1, false], cbor!([2.5e+1, false]).unwrap()),
    case(arr![2.5e+1, "foo"], cbor!([2.5e+1, "foo"]).unwrap()),
    case(arr![2.5e+1, 123], cbor!([2.5e+1, 123]).unwrap()),
    case(arr![2.5e+1, -123], cbor!([2.5e+1, -123]).unwrap()),
    case(arr![2.5e+1, 1.23], cbor!([2.5e+1, 1.23]).unwrap()),
    case(arr![2.5e+1, -1.23], cbor!([2.5e+1, -1.23]).unwrap()),
    case(arr![2.5e+1, 2.5e+1], cbor!([2.5e+1, 2.5e+1]).unwrap()),
    case(arr![2.5e+1, 2.5e+1], cbor!([2.5e+1, 2.5e+1]).unwrap()),
    case(arr![2.5e+1, [1, 2]], cbor!([2.5e+1, [1, 2]]).unwrap()),
    case(arr![2.5e+1, map! {1=>2,3=>4}], cbor!([2.5e+1, {1=>2,3=>4}]).unwrap()),
    case(arr![2.5e+1, Null], cbor!([2.5e+1, null]).unwrap()),
    case(arr![2.5e+1, true], cbor!([2.5e+1, true]).unwrap()),
    case(arr![2.5e+1, false], cbor!([2.5e+1, false]).unwrap()),
    case(arr![2.5e+1, "foo"], cbor!([2.5e+1, "foo"]).unwrap()),
    case(arr![2.5e+1, 123], cbor!([2.5e+1, 123]).unwrap()),
    case(arr![2.5e+1, -123], cbor!([2.5e+1, -123]).unwrap()),
    case(arr![2.5e+1, 1.23], cbor!([2.5e+1, 1.23]).unwrap()),
    case(arr![2.5e+1, -1.23], cbor!([2.5e+1, -1.23]).unwrap()),
    case(arr![2.5e+1, 2.5e+1], cbor!([2.5e+1, 2.5e+1]).unwrap()),
    case(arr![2.5e+1, 2.5e+1], cbor!([2.5e+1, 2.5e+1]).unwrap()),
    case(arr![2.5e+1, [1, 2]], cbor!([2.5e+1, [1, 2]]).unwrap()),
    case(arr![2.5e+1, map! {1=>2,3=>4}], cbor!([2.5e+1, {1=>2,3=>4}]).unwrap()),
    case(arr![[1, 2], Null], cbor!([[1, 2], null]).unwrap()),
    case(arr![[1, 2], true], cbor!([[1, 2], true]).unwrap()),
    case(arr![[1, 2], false], cbor!([[1, 2], false]).unwrap()),
    case(arr![[1, 2], "foo"], cbor!([[1, 2], "foo"]).unwrap()),
    case(arr![[1, 2], 123], cbor!([[1, 2], 123]).unwrap()),
    case(arr![[1, 2], -123], cbor!([[1, 2], -123]).unwrap()),
    case(arr![[1, 2], 1.23], cbor!([[1, 2], 1.23]).unwrap()),
    case(arr![[1, 2], -1.23], cbor!([[1, 2], -1.23]).unwrap()),
    case(arr![[1, 2], 2.5e+1], cbor!([[1, 2], 2.5e+1]).unwrap()),
    case(arr![[1, 2], 2.5e+1], cbor!([[1, 2], 2.5e+1]).unwrap()),
    case(arr![[1, 2], [1, 2]], cbor!([[1, 2], [1, 2]]).unwrap()),
    case(arr![[1, 2], map! {1=>2,3=>4}], cbor!([[1, 2], {1=>2,3=>4}]).unwrap()),
    case(arr![map! {1=>2,3=>4}, Null], cbor!([{1=>2,3=>4}, null]).unwrap()),
    case(arr![map! {1=>2,3=>4}, true], cbor!([{1=>2,3=>4}, true]).unwrap()),
    case(arr![map! {1=>2,3=>4}, false], cbor!([{1=>2,3=>4}, false]).unwrap()),
    case(arr![map! {1=>2,3=>4}, "foo"], cbor!([{1=>2,3=>4}, "foo"]).unwrap()),
    case(arr![map! {1=>2,3=>4}, 123], cbor!([{1=>2,3=>4}, 123]).unwrap()),
    case(arr![map! {1=>2,3=>4}, -123], cbor!([{1=>2,3=>4}, -123]).unwrap()),
    case(arr![map! {1=>2,3=>4}, 1.23], cbor!([{1=>2,3=>4}, 1.23]).unwrap()),
    case(arr![map! {1=>2,3=>4}, -1.23], cbor!([{1=>2,3=>4}, -1.23]).unwrap()),
    case(arr![map! {1=>2,3=>4}, 2.5e+1], cbor!([{1=>2,3=>4}, 2.5e+1]).unwrap()),
    case(arr![map! {1=>2,3=>4}, 2.5e+1], cbor!([{1=>2,3=>4}, 2.5e+1]).unwrap()),
    case(arr![map! {1=>2,3=>4}, [1, 2]], cbor!([{1=>2,3=>4}, [1, 2]]).unwrap()),
    case(arr![map! {1=>2,3=>4}, map! {1=>2,3=>4}], cbor!([{1=>2,3=>4}, {1=>2,3=>4}]).unwrap()),

    // Map formulations
    case(map! {}, cbor!({}).unwrap()),
    case(map! {Null => Null}, cbor!({ null => null }).unwrap()),
    case(map! {Null => true}, cbor!({ null => true }).unwrap()),
    case(map! {Null => false}, cbor!({ null => false }).unwrap()),
    case(map! {Null => "foo"}, cbor!({ null => "foo" }).unwrap()),
    case(map! {Null => 123}, cbor!({ null => 123 }).unwrap()),
    case(map! {Null => -123}, cbor!({ null => -123 }).unwrap()),
    case(map! {Null => 1.23}, cbor!({ null => 1.23 }).unwrap()),
    case(map! {Null => -1.23}, cbor!({ null => -1.23 }).unwrap()),
    case(map! {Null => 2.5e+1}, cbor!({ null => 2.5e+1 }).unwrap()),
    case(map! {Null => 2.5e+1}, cbor!({ null => 2.5e+1 }).unwrap()),
    case(map! {Null => [1, 2]}, cbor!({ null => [1, 2] }).unwrap()),
    case(map! {Null => map! {1=>2,3=>4}}, cbor!({ null => {1=>2,3=>4} }).unwrap()),
    case(map! {true => Null}, cbor!({ true => null }).unwrap()),
    case(map! {true => true}, cbor!({ true => true }).unwrap()),
    case(map! {true => false}, cbor!({ true => false }).unwrap()),
    case(map! {true => "foo"}, cbor!({ true => "foo" }).unwrap()),
    case(map! {true => 123}, cbor!({ true => 123 }).unwrap()),
    case(map! {true => -123}, cbor!({ true => -123 }).unwrap()),
    case(map! {true => 1.23}, cbor!({ true => 1.23 }).unwrap()),
    case(map! {true => -1.23}, cbor!({ true => -1.23 }).unwrap()),
    case(map! {true => 2.5e+1}, cbor!({ true => 2.5e+1 }).unwrap()),
    case(map! {true => 2.5e+1}, cbor!({ true => 2.5e+1 }).unwrap()),
    case(map! {true => [1, 2]}, cbor!({ true => [1, 2] }).unwrap()),
    case(map! {true => map! {1=>2,3=>4}}, cbor!({ true => {1=>2,3=>4} }).unwrap()),
    case(map! {false => Null}, cbor!({ false => null }).unwrap()),
    case(map! {false => true}, cbor!({ false => true }).unwrap()),
    case(map! {false => false}, cbor!({ false => false }).unwrap()),
    case(map! {false => "foo"}, cbor!({ false => "foo" }).unwrap()),
    case(map! {false => 123}, cbor!({ false => 123 }).unwrap()),
    case(map! {false => -123}, cbor!({ false => -123 }).unwrap()),
    case(map! {false => 1.23}, cbor!({ false => 1.23 }).unwrap()),
    case(map! {false => -1.23}, cbor!({ false => -1.23 }).unwrap()),
    case(map! {false => 2.5e+1}, cbor!({ false => 2.5e+1 }).unwrap()),
    case(map! {false => 2.5e+1}, cbor!({ false => 2.5e+1 }).unwrap()),
    case(map! {false => [1, 2]}, cbor!({ false => [1, 2] }).unwrap()),
    case(map! {false => map! {1=>2,3=>4}}, cbor!({ false => {1=>2,3=>4} }).unwrap()),
    case(map! {"foo" => Null}, cbor!({ "foo" => null }).unwrap()),
    case(map! {"foo" => true}, cbor!({ "foo" => true }).unwrap()),
    case(map! {"foo" => false}, cbor!({ "foo" => false }).unwrap()),
    case(map! {"foo" => "foo"}, cbor!({ "foo" => "foo" }).unwrap()),
    case(map! {"foo" => 123}, cbor!({ "foo" => 123 }).unwrap()),
    case(map! {"foo" => -123}, cbor!({ "foo" => -123 }).unwrap()),
    case(map! {"foo" => 1.23}, cbor!({ "foo" => 1.23 }).unwrap()),
    case(map! {"foo" => -1.23}, cbor!({ "foo" => -1.23 }).unwrap()),
    case(map! {"foo" => 2.5e+1}, cbor!({ "foo" => 2.5e+1 }).unwrap()),
    case(map! {"foo" => 2.5e+1}, cbor!({ "foo" => 2.5e+1 }).unwrap()),
    case(map! {"foo" => [1, 2]}, cbor!({ "foo" => [1, 2] }).unwrap()),
    case(map! {"foo" => map! {1=>2,3=>4}}, cbor!({ "foo" => {1=>2,3=>4} }).unwrap()),
    case(map! {123 => Null}, cbor!({ 123 => null }).unwrap()),
    case(map! {123 => true}, cbor!({ 123 => true }).unwrap()),
    case(map! {123 => false}, cbor!({ 123 => false }).unwrap()),
    case(map! {123 => "foo"}, cbor!({ 123 => "foo" }).unwrap()),
    case(map! {123 => 123}, cbor!({ 123 => 123 }).unwrap()),
    case(map! {123 => -123}, cbor!({ 123 => -123 }).unwrap()),
    case(map! {123 => 1.23}, cbor!({ 123 => 1.23 }).unwrap()),
    case(map! {123 => -1.23}, cbor!({ 123 => -1.23 }).unwrap()),
    case(map! {123 => 2.5e+1}, cbor!({ 123 => 2.5e+1 }).unwrap()),
    case(map! {123 => 2.5e+1}, cbor!({ 123 => 2.5e+1 }).unwrap()),
    case(map! {123 => [1, 2]}, cbor!({ 123 => [1, 2] }).unwrap()),
    case(map! {123 => map! {1=>2,3=>4}}, cbor!({ 123 => {1=>2,3=>4} }).unwrap()),
    case(map! {-123 => Null}, cbor!({ -123 => null }).unwrap()),
    case(map! {-123 => true}, cbor!({ -123 => true }).unwrap()),
    case(map! {-123 => false}, cbor!({ -123 => false }).unwrap()),
    case(map! {-123 => "foo"}, cbor!({ -123 => "foo" }).unwrap()),
    case(map! {-123 => 123}, cbor!({ -123 => 123 }).unwrap()),
    case(map! {-123 => -123}, cbor!({ -123 => -123 }).unwrap()),
    case(map! {-123 => 1.23}, cbor!({ -123 => 1.23 }).unwrap()),
    case(map! {-123 => -1.23}, cbor!({ -123 => -1.23 }).unwrap()),
    case(map! {-123 => 2.5e+1}, cbor!({ -123 => 2.5e+1 }).unwrap()),
    case(map! {-123 => 2.5e+1}, cbor!({ -123 => 2.5e+1 }).unwrap()),
    case(map! {-123 => [1, 2]}, cbor!({ -123 => [1, 2] }).unwrap()),
    case(map! {-123 => map! {1=>2,3=>4}}, cbor!({ -123 => {1=>2,3=>4} }).unwrap()),
    case(map! {1.23 => Null}, cbor!({ 1.23 => null }).unwrap()),
    case(map! {1.23 => true}, cbor!({ 1.23 => true }).unwrap()),
    case(map! {1.23 => false}, cbor!({ 1.23 => false }).unwrap()),
    case(map! {1.23 => "foo"}, cbor!({ 1.23 => "foo" }).unwrap()),
    case(map! {1.23 => 123}, cbor!({ 1.23 => 123 }).unwrap()),
    case(map! {1.23 => -123}, cbor!({ 1.23 => -123 }).unwrap()),
    case(map! {1.23 => 1.23}, cbor!({ 1.23 => 1.23 }).unwrap()),
    case(map! {1.23 => -1.23}, cbor!({ 1.23 => -1.23 }).unwrap()),
    case(map! {1.23 => 2.5e+1}, cbor!({ 1.23 => 2.5e+1 }).unwrap()),
    case(map! {1.23 => 2.5e+1}, cbor!({ 1.23 => 2.5e+1 }).unwrap()),
    case(map! {1.23 => [1, 2]}, cbor!({ 1.23 => [1, 2] }).unwrap()),
    case(map! {1.23 => map! {1=>2,3=>4}}, cbor!({ 1.23 => {1=>2,3=>4} }).unwrap()),
    case(map! {-1.23 => Null}, cbor!({ -1.23 => null }).unwrap()),
    case(map! {-1.23 => true}, cbor!({ -1.23 => true }).unwrap()),
    case(map! {-1.23 => false}, cbor!({ -1.23 => false }).unwrap()),
    case(map! {-1.23 => "foo"}, cbor!({ -1.23 => "foo" }).unwrap()),
    case(map! {-1.23 => 123}, cbor!({ -1.23 => 123 }).unwrap()),
    case(map! {-1.23 => -123}, cbor!({ -1.23 => -123 }).unwrap()),
    case(map! {-1.23 => 1.23}, cbor!({ -1.23 => 1.23 }).unwrap()),
    case(map! {-1.23 => -1.23}, cbor!({ -1.23 => -1.23 }).unwrap()),
    case(map! {-1.23 => 2.5e+1}, cbor!({ -1.23 => 2.5e+1 }).unwrap()),
    case(map! {-1.23 => 2.5e+1}, cbor!({ -1.23 => 2.5e+1 }).unwrap()),
    case(map! {-1.23 => [1, 2]}, cbor!({ -1.23 => [1, 2] }).unwrap()),
    case(map! {-1.23 => map! {1=>2,3=>4}}, cbor!({ -1.23 => {1=>2,3=>4} }).unwrap()),
    case(map! {2.5e+1 => Null}, cbor!({ 2.5e+1 => null }).unwrap()),
    case(map! {2.5e+1 => true}, cbor!({ 2.5e+1 => true }).unwrap()),
    case(map! {2.5e+1 => false}, cbor!({ 2.5e+1 => false }).unwrap()),
    case(map! {2.5e+1 => "foo"}, cbor!({ 2.5e+1 => "foo" }).unwrap()),
    case(map! {2.5e+1 => 123}, cbor!({ 2.5e+1 => 123 }).unwrap()),
    case(map! {2.5e+1 => -123}, cbor!({ 2.5e+1 => -123 }).unwrap()),
    case(map! {2.5e+1 => 1.23}, cbor!({ 2.5e+1 => 1.23 }).unwrap()),
    case(map! {2.5e+1 => -1.23}, cbor!({ 2.5e+1 => -1.23 }).unwrap()),
    case(map! {2.5e+1 => 2.5e+1}, cbor!({ 2.5e+1 => 2.5e+1 }).unwrap()),
    case(map! {2.5e+1 => 2.5e+1}, cbor!({ 2.5e+1 => 2.5e+1 }).unwrap()),
    case(map! {2.5e+1 => [1, 2]}, cbor!({ 2.5e+1 => [1, 2] }).unwrap()),
    case(map! {2.5e+1 => map! {1=>2,3=>4}}, cbor!({ 2.5e+1 => {1=>2,3=>4} }).unwrap()),
    case(map! {2.5e+1 => Null}, cbor!({ 2.5e+1 => null }).unwrap()),
    case(map! {2.5e+1 => true}, cbor!({ 2.5e+1 => true }).unwrap()),
    case(map! {2.5e+1 => false}, cbor!({ 2.5e+1 => false }).unwrap()),
    case(map! {2.5e+1 => "foo"}, cbor!({ 2.5e+1 => "foo" }).unwrap()),
    case(map! {2.5e+1 => 123}, cbor!({ 2.5e+1 => 123 }).unwrap()),
    case(map! {2.5e+1 => -123}, cbor!({ 2.5e+1 => -123 }).unwrap()),
    case(map! {2.5e+1 => 1.23}, cbor!({ 2.5e+1 => 1.23 }).unwrap()),
    case(map! {2.5e+1 => -1.23}, cbor!({ 2.5e+1 => -1.23 }).unwrap()),
    case(map! {2.5e+1 => 2.5e+1}, cbor!({ 2.5e+1 => 2.5e+1 }).unwrap()),
    case(map! {2.5e+1 => 2.5e+1}, cbor!({ 2.5e+1 => 2.5e+1 }).unwrap()),
    case(map! {2.5e+1 => [1, 2]}, cbor!({ 2.5e+1 => [1, 2] }).unwrap()),
    case(map! {2.5e+1 => map! {1=>2,3=>4}}, cbor!({ 2.5e+1 => {1=>2,3=>4} }).unwrap()),
    case(map! {[1, 2] => Null}, cbor!({ [1, 2] => null }).unwrap()),
    case(map! {[1, 2] => true}, cbor!({ [1, 2] => true }).unwrap()),
    case(map! {[1, 2] => false}, cbor!({ [1, 2] => false }).unwrap()),
    case(map! {[1, 2] => "foo"}, cbor!({ [1, 2] => "foo" }).unwrap()),
    case(map! {[1, 2] => 123}, cbor!({ [1, 2] => 123 }).unwrap()),
    case(map! {[1, 2] => -123}, cbor!({ [1, 2] => -123 }).unwrap()),
    case(map! {[1, 2] => 1.23}, cbor!({ [1, 2] => 1.23 }).unwrap()),
    case(map! {[1, 2] => -1.23}, cbor!({ [1, 2] => -1.23 }).unwrap()),
    case(map! {[1, 2] => 2.5e+1}, cbor!({ [1, 2] => 2.5e+1 }).unwrap()),
    case(map! {[1, 2] => 2.5e+1}, cbor!({ [1, 2] => 2.5e+1 }).unwrap()),
    case(map! {[1, 2] => [1, 2]}, cbor!({ [1, 2] => [1, 2] }).unwrap()),
    case(map! {[1, 2] => map! {1=>2,3=>4}}, cbor!({ [1, 2] => {1=>2,3=>4} }).unwrap()),
    case(map! {map! {1=>2,3=>4} => Null}, cbor!({ {1=>2,3=>4} => null }).unwrap()),
    case(map! {map! {1=>2,3=>4} => true}, cbor!({ {1=>2,3=>4} => true }).unwrap()),
    case(map! {map! {1=>2,3=>4} => false}, cbor!({ {1=>2,3=>4} => false }).unwrap()),
    case(map! {map! {1=>2,3=>4} => "foo"}, cbor!({ {1=>2,3=>4} => "foo" }).unwrap()),
    case(map! {map! {1=>2,3=>4} => 123}, cbor!({ {1=>2,3=>4} => 123 }).unwrap()),
    case(map! {map! {1=>2,3=>4} => -123}, cbor!({ {1=>2,3=>4} => -123 }).unwrap()),
    case(map! {map! {1=>2,3=>4} => 1.23}, cbor!({ {1=>2,3=>4} => 1.23 }).unwrap()),
    case(map! {map! {1=>2,3=>4} => -1.23}, cbor!({ {1=>2,3=>4} => -1.23 }).unwrap()),
    case(map! {map! {1=>2,3=>4} => 2.5e+1}, cbor!({ {1=>2,3=>4} => 2.5e+1 }).unwrap()),
    case(map! {map! {1=>2,3=>4} => 2.5e+1}, cbor!({ {1=>2,3=>4} => 2.5e+1 }).unwrap()),
    case(map! {map! {1=>2,3=>4} => [1, 2]}, cbor!({ {1=>2,3=>4} => [1, 2] }).unwrap()),
    case(map! {map! {1=>2,3=>4} => map! {1=>2,3=>4}}, cbor!({ {1=>2,3=>4} => {1=>2,3=>4} }).unwrap()),
)]
fn test(answer: Value, question: Value) {
    assert_eq!(answer, question);
}
