#include <bits/stdc++.h>

int main(int argc, char *argv[]) {
  std::string string1{};
  std::string string2{};
  std::cin >> string1 >> string2;
  transform(string1.begin(), string1.end(), string1.begin(),
            [](unsigned char c) { return tolower(c); });
  transform(string2.begin(), string2.end(), string2.begin(),
            [](unsigned char c) { return tolower(c); });

  // Compare the strings
  if (string1 > string2) {
    std::cout << 1;
  } else if (string1 < string2) {
    std::cout << -1;
  } else {
    std::cout << 0;
  }

  return 0;
}
