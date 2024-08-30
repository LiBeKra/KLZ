public class PrimeNumbers {
    public static void main(String[] args) {
        int limit = 50; // Set the limit up to which you want to find prime numbers
        System.out.println("Prime numbers up to " + limit + ":");

        for (int num = 2; num <= limit; num++) {
            if (isPrime(num)) {
                System.out.println(num);
            }
        }
    }

    public static boolean isPrime(int n) {
        if (n < 2) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}
