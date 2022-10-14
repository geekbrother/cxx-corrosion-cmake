use anyhow::Result;

#[cxx::bridge]
mod ffi {
    extern "Rust" {
        // Primitive types:
        fn lib_cxxbridge_bool(some: bool) -> bool;
        fn lib_cxxbridge_integer(some: i32) -> i32;
        fn lib_cxxbridge_string(some: &str) -> String;
        // Return Result:
        fn lib_cxxbridge_return_result_ok() -> Result<String>;
        fn lib_cxxbridge_return_result_error() -> Result<String>;
        // Panic in a function call:
        fn lib_cxxbridge_panicked_function() -> String;
    }
}

pub fn lib_cxxbridge_bool(some: bool) -> bool {
    if some {
        return false;
    }
    true
}

pub fn lib_cxxbridge_integer(some: i32) -> i32 {
    some + 10
}

pub fn lib_cxxbridge_string(some: &str) -> String {
    String::from("Say hello to ".to_owned() + &some)
}

pub fn lib_cxxbridge_return_result_ok() -> Result<String> {
    Ok(String::from("This is a string from result"))
}

pub fn lib_cxxbridge_return_result_error() -> Result<String> {
    let some_string = std::fs::read_to_string("cluster.json")?;
    Ok(some_string)
}

pub fn lib_cxxbridge_panicked_function() -> String {
    panic!("Panicked_function in panic");
}
