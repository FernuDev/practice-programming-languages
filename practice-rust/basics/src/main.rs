use std::io;

fn main() {
    let mut input = String::new();
    println!("Digit your name: ");

    io::stdin().read_line(&mut input).expect("Error reading your name");

    println!("Your name is {}", input);
}
