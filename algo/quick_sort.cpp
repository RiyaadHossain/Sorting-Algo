int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int pIndex = low;
    
    for(int i = low; i <= high - 1; i++){
        if(arr[i] <= pivot){
            
            // Swaping arr[i] -> arr[pIndex]
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            
            pIndex++;
        }
    }
    
    // Swaping arr[high] -> arr[pIndex]
    int temp = arr[high];
    arr[high] = arr[pIndex];
    arr[pIndex] = temp;
    
    return pIndex;
}

void quick_sort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}