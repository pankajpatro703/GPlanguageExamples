use std::io;
use std::io::Write;

fn main() {
	let mut input = String::new();
	print!("Enter a number: ");	
	io::stdout().flush().unwrap();	
	match io::stdin().read_line(&mut input) {
		Ok(_) => {
			let number: i32 = input.trim().parse().unwrap();
			if number % 2 == 0 {
				println!("Even number");
			}
			else {
				println!("Odd number");
			}
		},
		Err(e) => println!("Error: {}",e)
	}
}
