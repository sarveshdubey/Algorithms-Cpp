#include <iostream>

/*long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}*/
int64_t gcd_fast(int64_t a, int64_t b)
{
    return b ? gcd_fast(b, a % b) : a;
}

int64_t lcm_fast(int64_t a, int64_t b)
{
  return (a/gcd_fast(a,b))*b;
}
int main() {
  int64_t a, b;
  std::cin >> a >> b;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
