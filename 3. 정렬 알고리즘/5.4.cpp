#include <stdio.h>

void quickSort(int value[], int start, int end);
int partitionQuickSort(int value[], int start, int end);
void printArray(int value[], int start, int end);

int main(){
    int arr[8] = {90, 85, 25, 37, 61, 54, 11, 42};
    
    printf("퀵 정렬 실행 전 : ");
    printArray(arr, 0, 7);
    printf("\n");
    
    quickSort(arr, 0, 7);
    
    printf("퀵 정렬 최종 결과 : ");
    printArray(arr, 0, 7);
    
}

void quickSort(int value[], int start, int end){
    int pivot = 0;
    if(start < end){
        pivot = partitionQuickSort(value, start, end);
        quickSort(value, start, pivot-1);
        quickSort(value, pivot+1, end);
    }
}

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

void printArray(int value[], int start, int end){
    for(int i=start; i<=end; i++){
        printf("%d ", value[i]);
    }
    printf("\n");
}