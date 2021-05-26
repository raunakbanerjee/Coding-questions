/* This answer uses an extra array. See the most optimized solution also later /*
/* Basic logic used here is that we will compare both arrays.

Lets say we have [1 4 5 6]
                 [0 2 8]
                 [0 1 2 4 5 6 8]
We will compare each element and then the smalles will be appended in result array/vector.
In the end if elements of any array are present which are yet to be compared we will just insert them as it means this array is larger.

*/

vector<int> solve(vector<int>& a, vector<int>& b) {
     int i = 0, j = 0, k = 0;
    int m = a.size(), n = b.size();
    vector<int> output(m + n, 0);
    while (i < m and j < n) {
        if (a[i] < b[j]){
            output[k] = a[i];
            i++;
            k++;}
        else
            output[k++] = b[j++];
    }
    while (i < m) output[k++] = a[i++];


    while (j < n) output[k++] = b[j++];
    return output;

}
     
           
