#include <iostream>

int64_t get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int64_t previous = 0;
    int64_t current  = 1; 

    for (int i = 0; i < n - 1; ++i) {
        int64_t tmp_previous = (previous + current) % 10;
        previous = current;
        current = tmp_previous ;
    }

    return current ;
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }