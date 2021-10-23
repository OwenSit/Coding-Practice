#include <iostream>
using namespace std;

int main() {
  int arr[] = {10, 10, 10, 1, 10};
  int l = 0;
  int h = sizeof(arr) / sizeof(arr[1]) - 1;

  if (arr[l] < arr[h]) return arr[l];

  while(l < h){
    int mid = (l + h) / 2;
    if (arr[mid] < arr[h]){
      h = mid;
    } 
    else if(arr[mid] > arr[h]) {
      l = mid + 1;
    }
    else{
      h--;
    }
  }
  cout << arr[h] << endl;
  return 0;
}