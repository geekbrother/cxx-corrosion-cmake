#[cxx::bridge]
mod ffi {
    extern "Rust" {
        fn rusty_cxxbridge_bool(some: bool) -> bool;
        fn rusty_cxxbridge_integer(some: i32) -> i32;
        fn rusty_cxxbridge_string(some: &str) -> String;
        fn rusty_cxxbridge_panicked_function() -> String;
    }
}

pub fn rusty_cxxbridge_bool(some: bool) -> bool {
    if some {
        return false;
    }
    true
}

pub fn rusty_cxxbridge_integer(some: i32) -> i32 {
    some + 10
}

pub fn rusty_cxxbridge_string(some: &str) -> String {
    String::from("Say hello to ".to_owned() + &some)
}

pub fn rusty_cxxbridge_panicked_function() -> String {
    panic!("Panicked_function in panic");
}
