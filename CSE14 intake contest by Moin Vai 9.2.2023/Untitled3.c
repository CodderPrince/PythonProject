#include<stdio.h>
int main(){
for (int i = n - 1; i >= 0; i--) {
            int j = 0;
            int k = i - 1;
            while (j < k) {
                if (arr[i] == arr[j] + arr[k]) {

                    // pair found
                    Console.WriteLine("numbers are "
                                      + arr[i] + " " + arr[j]
                                      + " " + arr[k]);

                    return;
                }
                else if (arr[i] > arr[j] + arr[k])
                    j += 1;
                else
                    k -= 1;
            }
        }

        // no such triplet is found in array
        Console.WriteLine("No such triplet exists");
    }


    public static void Main()
    {
        int[] arr = { 5, 32, 1, 7, 10, 50,
                      19, 21, 2 };
        int n = arr.Length;

        findTriplet(arr, n);
    }
}
