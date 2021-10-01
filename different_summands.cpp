#include <iostream>
#include <vector>

using std::vector;

vector<int> optimal_summands(int64_t n) {
  vector<int> summands;
  int64_t inc=1,res=0,flag=0;
  while(inc+res <=n)
  {
    res+=inc;
    summands.push_back(inc);
    inc+=1;
    flag+=1;
  }
  summands[flag-1] += n-res;
  return summands;
}

int main() {
  int64_t n;
  std::cin >> n;
  vector<int> summands = optimal_summands(n);
  std::cout << summands.size() << '\n';
  for (size_t i = 0; i < summands.size(); ++i) {
    std::cout << summands[i] << ' ';
  }
}
