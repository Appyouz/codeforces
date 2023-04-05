#include <bits/stdc++.h>
#include <string>

int main (int argc, char *argv[])
{
   int l;
  // std::string str[]{};
  std::cin >> l;
  std::string str {};

  for (int i = 0; i < l; ++i) {
    std::cin >> str;
  }
  std::cout << '\n';

  for (int i {0}; i < str.length(); i++) {
    if (str.length() > 10) {
      std::cout << str[0] << str.length() - 2 <<str[l] << '\n';
    }else {
      std::cout << str << '\n';
    }
  }
  return 0;
} 
