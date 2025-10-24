#include <iostream>
#include "lib/lib.h"
#include <cstdint>



int main(){
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0; i < n; ++i){
        std::cin >> arr[i];
    }
    int count = 0;
    mergeSortRecursive(arr, 0, n, &count);
    std::cout << count << ' ';
}