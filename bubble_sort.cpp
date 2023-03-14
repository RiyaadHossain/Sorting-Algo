#include <iostream>
using namespace std;

void printArr(int arr[], int n){
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
}

void swap(int arr[], int a, int b){
     int temp = arr[a];
     arr[a] = arr[b];
     arr[b] = temp;
}

// Bubble Sort
void bubble_sort(int arr[], int n){
    
    bool didSwap = false;
    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < i - 1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr, j, j+1);
                didSwap = true;
            }
        }
        
        if(!didSwap) break;
    }
    
}

int main() {
    
    int n = 5;
    int arr[n] = {2, 5, 1, 3, 4};
    
    bubble_sort(arr, n);
    printArr(arr, n);

    return 0;
}