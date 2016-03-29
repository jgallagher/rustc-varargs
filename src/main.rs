#[link(name="foobar")]
extern "C" {
    fn foobar(x: i32, ...);
}

fn main() {
    extern "C" fn callback() {
    }

    println!("calling foobar(1, 0x{:x}, 3u64)", callback as usize);
    unsafe { foobar(1, callback, 3u64); }
}
