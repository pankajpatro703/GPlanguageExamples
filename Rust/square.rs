use std::io;
use std::io::Write;

fn square(x:i32) ->i32 {x*x}

fn main() {
  let mut input = String::new();
  
  print!("Enter a number: ");
  io::stdout().flush().unwrap();
  
  match io::stdin().read_line(&mut input) {
    Ok(_) => {
      let number: i32 = input.trim().parse().unwrap();
      println!("Square is {}",square(number));
    },
    Err(e) => println!("Error: {}",e)
  }
}
