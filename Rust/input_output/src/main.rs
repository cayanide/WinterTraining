use std::io::{self, Read};

fn main() {
    let mut input1 = String::new();
    let mut input2 = String::new();

    println!("Enter the first number: ");
    io::stdin().read_line(&mut input1).expect("Failed to read input");

    println!("Enter the second number: ");
    io::stdin().read_line(&mut input2).expect("Failed to read input");

    let num1: i32 = input1.trim().parse().expect("Invalid input");
    let num2: i32 = input2.trim().parse().expect("Invalid input");

    if num1 == num2 {
        println!("The numbers { } are equal.",num1);
    } else {
        println!("The numbers { } , { } are not equal.",num1,num2);
    }
}
