fn main() {
    let name: String = "Sayan".to_string();
    println!("Hello, {}!", name);
    let y = 7;
    let y=20;
    println!("{}",y);
    
    if y>10 {
        println!("YES!")
    }
    else {
        println!("NO!")
    }

    let grade ='C';
     match grade{
        'A' | 'B' => println!("Excellent grade"),
        'C' | 'D' => println!("Good grade"),
        'F' | 'G' => println!("Poor grade"),
        _ => println!("Invalid grade"),
     }
}
