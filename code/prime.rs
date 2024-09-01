fn main() {
    let limit = 50; // Set the limit up to which you want to find prime numbers
    println!("Prime numbers up to {}:", limit);

    for num in 2..=limit {
        if is_prime(num) {
            println!("{}", num);
        }
    }
}

fn is_prime(n: u32) -> bool {
    if n < 2 {
        return false;
    }
    for i in 2..=((n as f64).sqrt() as u32) {
        if n % i == 0 {
            return false;
        }
    }
    true
}
