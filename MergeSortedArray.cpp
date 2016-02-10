class Solution {
public:
    /**
     * @param A: sorted integer array A which has m elements, 
     *           but size of A is m+n
     * @param B: sorted integer array B which has n elements
     * @return: void
     */
    void mergeSortedArray(int A[], int m, int B[], int n) {
        // write your code here
        int a = m - 1, b = n - 1;
        for (int i = m + n - 1; i >= 0; i--) {
            if (b < 0 || A[a] > B[b]) {
                A[i] = A[a];
                a--;
            } else if (a < 0 || A[a] <= B[b]) {
                A[i] = B[b];
                b--;
            }
        }
    }
};