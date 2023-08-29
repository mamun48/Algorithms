#include <bits/stdc++.h>
using namespace std;
int main() {
  int arr[] = {2, 6, 3, 4, 2, 2, 7, 9}; // Here size is 8
  int output[8];
  int max_num = INT32_MIN;
  for (int i = 0; i < 8; i++) {
    max_num = max(max_num, arr[i]); // for getting max num
  }
  int count[max_num + 1] = {0};
  for (int i = 0; i < 8; i++) {
    count[arr[i]]++; // count array generating
  }
  for (int i = 1; i <= max_num; i++) {
    count[i] += count[i - 1]; // end position of each element
  }
  for (int i = 7; i >= 0; i--) {
    count[arr[i]]--;
    output[count[arr[i]]] = arr[i];
  }
  for (int i = 0; i < 8; i++)
    cout << output[i] << " ";
}