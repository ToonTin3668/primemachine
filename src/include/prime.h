#include <stdbool.h>

bool isPrime(int number) {
    int cnt = 0;

    // If number is less than/equal to 1,
    // it is not prime
    if (number <= 1)
		return false;
    else {
        // Count the all divisors of 
        // given number
        for (int i = 1; i <= number; i++) {
            // Check n is divided by
            // i or not
            if (number % i == 0)
                cnt++;
        }
        // If n is divisible by more than 2 numbers
        // then it is not prime
        if (cnt > 2)
			return false;
        // else it is prime
        else
			return true;
    }
}
