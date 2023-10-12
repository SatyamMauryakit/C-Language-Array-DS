//Reverse the array
public class reverse_array{
  public static void main(String arg[]){
    int arr[]={1,3,4,5,6,5};
    int i=0;
    int j=arr.length-1;
    while(i<=j){
      int temp=arr[i];
      arr[i]=arr[j];
      arr[j]=temp;
      i++;
      j--;
    }
    for(i=0;i<arr.length;i++){
      System.out.print(" "+arr[i]);
    }
  }
}
