import java.util.*;
public class max_and_min_array{
    public static void max(int arr[]){
        int max=arr[0];
        for(int i=1;i<arr.length;i++){
            if(arr[i]>max){
                max=arr[i];
            }
        }
        System.out.println("Maximum Element be:"+max);
    }

    public static void min(int arr[]){
        int min=arr[0];
        for(int i=1;i<arr.length;i++){
            if(arr[i]<min){
                min=arr[i];
            }
        }
        System.out.println("Minimum Number be::"+min);
    }
    public static void main(String arg[]){
        int arr[]={1,2,33,34,2,432,54,23,4,99,834};
        min(arr);
        max(arr);
    }
}
