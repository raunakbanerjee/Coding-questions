/* Sort an array that has 0's and 1's using a single pass

Very easy q. I will count the number of 0's first,let that number be countZeroes .Then I will fill elements till countZeroes as 0 and all the other after that as 1.

*/

vector<int> sortBinaryArray(vector<int> arr, int n)  {
    // Count number of 0's
    int countZero = 0;
    for(int i=0;i<n;i++) {
        if(arr[i] == 0) {
            countZero++;
        }
    }
   
    for(int i = 0; i < n; i++) {
        if(i < countZero) {
            arr[i] = 0;
        }
        else {
            arr[i] = 1;
        }
    }

    return arr;
}
