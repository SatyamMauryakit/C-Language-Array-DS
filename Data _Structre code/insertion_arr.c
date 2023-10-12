#include<stdio.h>

int dishplay(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d "  , arr[i]);
    }
    printf("\n");
 }

int insertion(int arr[],int size,int element,int capacity,int index){
if(size>=capacity){
    return -1;
}
else{
    for(int i=size-1;i>index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;}
return 1;

}
int main(){
int arr[100]={1,2,3,4,5,6,7,8};
int size=10, element=45,index=4;
dishplay(arr,8);
insertion(arr,size,element,100,index);
size -=1;
dishplay(arr,size);


}