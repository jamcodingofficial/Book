int partitionQuickSort(int value[], int start, int end){
    int left = start;
    int right = end;
    int pivot = end;
    int tmp = 0;
    
    while(left < right){
        while(value[left] < value[pivot] && left < right){
            left++;
        }
        
        while(value[right] >= value[pivot] && left < right){
            right--;
        }
        
        if(left < right){
            printf("left(%d), right(%d), pivot(%d), 교환 전 :", left, right, pivot);
            printArray(value, start, end);
            
            tmp = value[left];
            value[left] = value[right];
            value[right] = tmp;
            
            printf("left(%d), right(%d), pivot(%d), 교환 후 :", left, right, pivot);
            printArray(value, start, end);
            printf("\n");
        }
    }
    
    printf("left(%d), right(%d), pivot(%d), 교환 전 :", left, right, pivot);
    printArray(value, start, end);
    
    tmp = value[left];
    value[left] = value[pivot];
    value[pivot] = tmp;

    printf("left(%d), right(%d), pivot(%d), 교환 후 :", left, right, pivot);
    printArray(value, start, end);
    printf("\n");
    
    return right;
}