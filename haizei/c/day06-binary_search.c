/*************************************************************************
	> File Name: day06-binary_search.c
	> Author: 
	> Mail: 
	> Created Time: Sat 24 Oct 2020 08:50:30 PM CST
 ************************************************************************/

#include<stdio.h>

int binary_search(int *arr, int l, int r, int x) {
  if (l > r) return -1;
  int mid = (l + r) >> 1;
  if (arr[mid] == x) return mid;
  if (arr[mid] < x) l = mid + 1;
  else r = mid - 1;
  return binary_search(arr, l, r, x);
}

int main() {
 int arr[100], n;
  scanf("%d",&n);
  for (int i = 0; i < n; i++) scanf("%d", arr + i);
  int x;
  while ( ~scanf("%d", &x) ) {
    int ans = binary_search(arr, 0 , n - 1, x);
    printf("find %d in arr[%d]\n", x, ans);
  }

  return 0;
}
