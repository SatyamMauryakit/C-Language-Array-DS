#include<stdio.h>
int Linear_search(int arr[],int size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            printf("The element index is %d and the element is %d",i,element);
        }
    }
    return 0;

}

int main(){
    int arr[100];
    for(int i=0;i<10;i++){
        printf("Enter the element of array : ");
        scanf("%d \n", & arr[i]);
    }
    int size= 10;
    int element;
    printf("Enter element to find index :  ");
    scanf("%d \n", & element);
    Linear_search( arr, size, element);
    return 0;




}