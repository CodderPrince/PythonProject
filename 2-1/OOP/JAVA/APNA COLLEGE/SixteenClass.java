public class SixteenClass {
    public static void main(String[] args) {
        // bubble sort
        // int arr[] = { 4, 2, 65, 1, 3 };

        // for (int i = 0; i < arr.length - 1; i++) {
        // for (int j = 0; j < arr.length - i - 1; j++) {
        // if (arr[j] > arr[j + 1]) {
        // int temp = arr[j];
        // arr[j] = arr[j + 1];
        // arr[j + 1] = temp;
        // }

        // }
        // }

        // // print array
        // for (int i = 0; i < arr.length; i++) {

        // System.out.print(arr[i] + " ");

        // }
        // System.out.println();

        // Selection Sort
        // int arr[]={7,8,3,1,2};
        // for(int i=0;i<arr.length-1;i++){
        // int smallest = i;
        // for(int j=i+1;j<arr.length;j++){
        // if(arr[smallest]>arr[j]){
        // smallest=j;
        // }
        // }
        // int temp = arr[smallest];
        // arr[smallest]=arr[i];
        // arr[i]=temp;
        // }

        // //print array
        // for(int i=0;i<arr.length;i++){
        // System.out.print(arr[i]+" ");
        // }

        /* Insertion sort */

        int arr[] = { 7, 8, 3, 1, 2 };
        for (int i = 1; i < arr.length; i++) {
            int current = arr[i];

            // sorted element in first index
            int j = i - 1;

            while (j >= 0 && current < arr[j]) {
                arr[j + 1] = arr[j];
                j--;
            }

            // placement
            /*
             * if sorted side last element is not greater than unsorted side first element
             * it's means 8<7 then we need to push 8 after 7
             * so increase j+1 = 1 index to place 8 in sorted side
             * after first iteration sorted side is 7, 8
             * and unsorted side is 3, 1, 2
             * 
             * second iteration i = 2, j= 1
             * now i indicate 3 and j indicate 8
             * here 3 is smaller than 8 so push 8 in right{j+1} index 7 8 8 1 2
             * j=0 3<7 also true so again push 7 in right[j+1] index 7 7 8 1 2
             * j=-1 so out of bounds and close while loop
             * placement arr[-1+1]=3 so push 3 most left index 3 7 8 1 2
             */
            arr[j + 1] = current;
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }

    }
}
