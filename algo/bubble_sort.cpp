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
