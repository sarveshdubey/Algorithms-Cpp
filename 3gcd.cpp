#include <iostream>

/*int64_t gcd_naive(int64_t a, int64_t b) {
  int64_t current_gcd = 1;
  for (int64_t d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}*/

int64_t gcd_fast(int64_t a, int64_t b)
{
    return b ? gcd_fast(b, a % b) : a;
}

int main() {
  int64_t a, b;
  std::cin >> a >> b;
  std::cout << gcd_fast(a, b) << std::endl;
  return 0;
}
