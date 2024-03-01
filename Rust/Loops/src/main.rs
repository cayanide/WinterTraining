use text_io::readln;

fn main() {
    let mut count = 0;
    let i=0;
    loop{
        if count ==5{
            break;
        }
        println!("{}",count);
        count += 1;
    }

    while count <10 {
        println!("{}",count);
        count += 1;
    }
    for i  in 0..5{
        println!("{}",i);
    }
}
