//L-23: Quick Sort for Beginners

public class TwentyThirty {
    // create partition function
    public static int partition(int arr[], int low, int high) {
        // we choose last element as a pivot
        int pivot = arr[high];

        // let assume no elements are smaller than pivot
        int i = low - 1;// -1

        for (int j = low; j < high; j++) {
            if (arr[j] < pivot) {
                i++;
                // swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        // now fixed the pivot right index
        i++;
        int temp = arr[i];
        arr[i] = pivot;
        arr[high] = temp;

        // return pivot index
        return i;

    }

    // create quicksort function
    public static void quicksort(int arr[], int low, int high) {
        // base case alltime need low < high
        if (low < high) {
            int pivot_index = partition(arr, low, high);

            /*
             * when found pivot then infront of pivot_index-1 all elements are unsorted
             * also all elements are smaller
             * so called function low(0 index) to pivot_index - 1
             * when pivot 8
             * 6 3 9 5 2
             * all are unsorted so called low to pivot index - 1
             */
            quicksort(arr, low, pivot_index - 1);

            /*
             * now called pivot_index + 1 to high
             * all index are higher than pivot
             */
            quicksort(arr, pivot_index + 1, high);
        }
    }

    public static void main(String[] args) {
        int[] arr = { 6, 3, 9, 5, 2, 8 };
        int n = arr.length;

        // called quicksort function
        quicksort(arr, 0, n - 1);

        // print sorted array
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

}
