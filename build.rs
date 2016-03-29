extern crate gcc;

fn main() {
    gcc::Config::new()
        .file("src/foobar.c")
        .compile("libfoobar.a");
}
