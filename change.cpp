#include <iostream>

int64_t get_change(int64_t m) {
  //write your code here
  int64_t a, b , c;
  a = m-(m%10);
  b = (m%10)-((m-a)%5);
  c = (m-a)%5;
  
  int64_t n = (a/10) + (b/5) +c;
  return n;
}

int main() {
  int64_t m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
