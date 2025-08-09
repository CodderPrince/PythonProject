
//L-22: Merge Sort

public class TwentyTwo {

    // create conquer function
    public static void conquer(int arr[], int start_index, int middle, int end_index) {

        // merged array size
        int merged[] = new int[end_index - start_index + 1];

        int index1 = start_index;// first half 0 index
        int index2 = middle + 1;// second half starting index
        int x = 0;

        // when both side array size is same
        while (index1 <= middle && index2 <= end_index) {
            if (arr[index1] <= arr[index2]) {
                merged[x] = arr[index1];
                x++;
                index1++;
            } else {
                merged[x] = arr[index2];
                x++;
                index2++;
            }
        }

        // when 1st array has more element
        while (index1 <= middle) {
            merged[x] = arr[index1];
            x++;
            index1++;
        }

        // when 2nd array part has more element
        while (index2 <= end_index) {
            merged[x] = arr[index2];
            x++;
            index2++;
        }

        /*
         * it's a recursive process
         * so i can not directly print the array
         * First need to copy the array then print in main fucntion
         */

        /*
         * copy the array
         * mind it it's a recursive rule in merged sort
         * start j = start_index not j = 0
         * and arr[j] = merged[i] not arr[i] = merged[j]
         */

        for (int i = 0, j = start_index; i < merged.length; i++, j++) {
            arr[j] = merged[i];
        }
    }

    // create divide function
    public static void divide(int arr[], int start_index, int end_index) {
        // base
        /*
         * When both part has single element
         * or
         * When total array has only single element then starting index in bigger than
         * ending index
         */
        if (start_index >= end_index) {
            return;
        }

        // calculate middle by best way
        int middle = start_index + (end_index - start_index) / 2;
        divide(arr, start_index, middle);// first part
        divide(arr, middle + 1, end_index);// 2nd part

        // conquer all part
        conquer(arr, start_index, middle, end_index);
    }

    public static void main(String[] args) {
        int arr[] = { 6, 3, 9, 5, 2, 8 };
        int n = arr.length;

        // called divide function
        divide(arr, 0, n - 1);

        // print the merged array
        System.out.print("Merged sorted array in ascending order: ");
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
