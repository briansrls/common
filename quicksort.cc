#include <stdlib.h>
#include <stdio.h>
#include <array>
#include <iostream>
void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];
 
      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}
int main(){
    int x[5] = {1, 2, 3, 6, 4};
    quickSort(x, 0, 4);
    for(int i = 0; i<5; i++){
        std::cout<<x[i];
    }
}