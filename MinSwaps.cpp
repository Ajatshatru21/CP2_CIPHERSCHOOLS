#include <iostream>
using namespace std;
int getMinSwaps(int *arr, int n, int k) {
   int cnt = 0;
   for (int i = 0; i < n; ++i) {
      if (arr[i] <= k) {
         ++cnt;
      }
   }
   int outOfRange = 0;
   for (int i = 0; i < cnt; ++i) {
      if (arr[i] > k) {
         ++outOfRange;
      }
   }
   int result = outOfRange;
   for (int i = 0, j = cnt; j < n; ++i, ++j) {
      if (arr[i] > k) {
         --outOfRange;
      }
      if (arr[j] > k) {
         ++outOfRange;
      }
      result = min(result, outOfRange);
   }
   return result;
}
int main() {
   int arr[] = {1, 5, 4, 7, 2, 10};
   int n = sizeof(arr) / sizeof(arr[0]);
   int k = 6;
   cout << "Minimum swaps = " << getMinSwaps(arr, n, k) <<
   endl;
   return 0;
}
