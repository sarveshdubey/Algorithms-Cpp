#include <iostream>
#include<vector>
using std::vector;

/*long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}*/

int fibonacci_fast(int n, int m) {
   vector<int64_t> fibb(n+2);
        fibb[0]=0;
        fibb[1]=1;
    for (int i=2; i<=n; i++)
    { 
        fibb[i]=fibb[i-1]+fibb[i-2];
    }
    

    return fibb[n] % m;
}

int main() {
    long long n, m;
    std::cin >> n >> m;
    std::cout << fibonacci_fast(n, m) << '\n';
}
