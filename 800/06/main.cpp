#include <bits/stdc++.h>

int main(int argc, char *argv[]) {
  int matrix[5][5]{};
  int row {0}, col{0};
  for (int i {0}; i < 5; ++i) {
    for (int j {0}; j < 5; ++j) {
      std::cin >> matrix[i][j];
      if(matrix[i][j] == 1){
        row = i;
        col = j;
      }
    }
  }
  int result{std::abs(2 - row) + std::abs(2 - col)};
  std::cout << result;
  return 0;
}
