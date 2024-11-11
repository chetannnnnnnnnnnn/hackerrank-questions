#include <stdio.h>
#include <stdlib.h>

int main(){
    int tmp;
    int num, *arr, i, *arr2,index;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    arr2 = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    for (int i = 0; i < num; i++){
        index = (num-1)-i;
     arr2[index] = arr[i];
     
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(arr2 + i));
    return 0;
}

