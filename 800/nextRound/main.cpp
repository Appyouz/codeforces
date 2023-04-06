#include <bits/stdc++.h>

int main(){

  int n, k , x = 0;
  std::cin >> n >> k;

  int arr[n];
  for(int i {0}; i < n; i++){
    std::cin >> arr[i];
  }

  for(int i {0}; i < n; i++){
    // since asking for kth place
    if(arr[i] >=  arr[k - 1] && arr[i] > 0){
      x++;
    }
  }

  std::cout << x;
  return 0;
}
