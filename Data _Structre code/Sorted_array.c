#include<stdio.h>
int main(){
    int arr[]={18,14,82,1,13,16};
    int temp,i,j;
     int length=sizeof(arr)/sizeof(arr[0]);
    // dishplay elements of orignal array 
    printf("The orignal array : \n");
    for( i=0;i<length;i++){
        printf("%d \n",arr[i]);
    }
    for(i=0;i<length;++i){
          // sorted array in ascending order.
          for(j=i+1;j<length;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;

            }
          }
    }
    printf("\n");
    for(int i=0;i<length;i++){
        printf("The sorted array is :%d \n",arr[i]);
    }
}