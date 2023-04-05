#include <bits/stdc++.h>

int main(){
  int n;
  std::cin >> n;
  int a, b, c;
  int x {0};
  for(int i {0}; i < n ; ++i)
  {
    std::cin >> a >> b >> c;
    int temp { a + b + c};
    if(temp > 1){
      x++;
    }

  }
  std::cout << x; 

  return 0;
}
