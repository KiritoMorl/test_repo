#include "lib.h"
#include <cstdint>

void merge(int arr[],int left, int mid, int right,int* count){
    int it1 = 0;
    int it2 = 0;
    int result[right-left];
    for (int i = 0; i < right-left; ++i){
        result[i] = 0;
    }
    int j = mid;
    for(int i = left; i < mid; ++i){
        while(j < right && static_cast<int64_t>(arr[i]) > static_cast<int64_t>(2) * static_cast<int64_t>(arr[j])){
            j++;
        }
        *count += j-mid;
    }
    while (left + it1 < mid && mid + it2 < right){
        if (arr[left + it1] <= arr[mid + it2]){
            result[it1 + it2] = arr[left + it1];
            it1 += 1;
        } 
        else{
            result[it1+it2] = arr[mid+it2];
            it2 +=1;
        } 
    }
    while (left + it1 < mid){
        result[it1 + it2] = arr[left + it1];
        it1 += 1;
    }
    while (mid + it2 < right){
        result[it1 + it2] = arr[mid + it2];
        it2 += 1;
    }
    for (int i = 0; i < it1 + it2; ++i){
        arr[left + i] = result[i]; 
    }

}
void mergeSortRecursive(int arr[], int left, int right, int* count){
    if (left + 1 >= right){
        return;
    }
    int mid = (left + right) / 2;
    mergeSortRecursive(arr, left, mid, count);
    mergeSortRecursive(arr, mid, right, count);
    merge(arr, left, mid, right, count);
}
