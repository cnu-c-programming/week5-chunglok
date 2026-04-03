#include <stdio.h>

void print_reverse(int *arr, int size) {
    *arr = nums[4];
    for(int i = 4; i >= 0; i--){
        *arr[i] = nums[4-i];
}
int main() {
    int nums[] = {1, 2, 3, 4, 5};

    print_reverse(nums, 5);
    printf("\n");

    return 0;
}
