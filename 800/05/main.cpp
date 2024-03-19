#include <bits/stdc++.h>

int main(){
  int m, n;
  std::cin>>m>>n;
  if(n % 2 == 0)std::cout << m * n / 2 << '\n';
  else std::cout << (m * (n / 2) + m / 2) << '\n';
  return 0;
}
