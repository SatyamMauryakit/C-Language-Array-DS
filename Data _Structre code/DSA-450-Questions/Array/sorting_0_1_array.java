//Sorting o 1 alogo without using any of the sorting methord

public class sorting_0_1_array {
  public static void main(String arg[]){
      int arr[]={1,0,2,0,1,0,0,2,1,0};
      int a=0,b=0,c=0;
      for(int i=0;i<arr.length;i++){
          if(arr[i]==0){
              a++;
          }
          else if(arr[i]==1){
              b++;
          }
          else{
              c++;
          }
      }
      int k=0;
      for(int i=0;i<a;i++) arr[k++]=0;
      for(int j=0;j<b;j++) arr[k++]=1;
      for (int i=0;i<c;i++) arr[k++]=2;
System.out.println("Array be:");
      for(int i=0;i<arr.length;i++)
          {
              System.out.print(" "+arr[i]);
          }
      
  }
}
