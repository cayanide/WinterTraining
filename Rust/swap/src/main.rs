fn main() {
   let mut num1 = 20;
   let num2= 10;
   println!("num 1 : {} , num 2 : {} ", num1,num2);


   swap(&mut num1, &mut num2);
   println!("num1: {}, num2: {}", num1, num2);
}
