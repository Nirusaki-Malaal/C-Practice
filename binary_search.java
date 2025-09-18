import java.util.Scanner;

public class Program
{
    public static void main(String [] args)
    {
        int arr[] = {-1,0,23,32,33,34,356};
        int target = 28;
        int start = 0;
        int end = arr.length-1;
        int mid = (start + end) /2;
        while (start <= end)
        {
            if (arr [mid] > target)
            {
                end = mid - 1;
                mid = (start + end) / 2;
                
            }
            else if (arr[mid]< target)
            {
                start = mid +1 ;
                mid = (start + end)/2;
                
            }
            else if (arr[mid] == target)
            {
                System.out.println("target found at " + mid);
                return;
            }
        }
        System.out.println("Target Not Found");
    }
}
