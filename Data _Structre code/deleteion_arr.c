#include<stdio.h>
int dishplay(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
printf("\n");
}
int deleteion(int arr[], int size, int index ){
    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }
}



int main(){
int arr[100]={11,12,13,14,15,16};
int index=3, size=5;
dishplay(arr,size);
deleteion(arr,size,index);
size -=1;
dishplay(arr,size);
}