#include <bits/stdc++.h>

int main() {
  int x = 0;
  int input{};
  std::cin >> input;
  std::string s;
  while(input--){
  std::cin >> s;
    if(s[1] == '+'){
      ++x;
    }else {--x;}
  }

  std::cout << x << '\n';

  return 0;
}
