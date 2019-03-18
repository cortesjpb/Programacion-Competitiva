/* Dynamic Programming solution to construct Longest
   Increasing Subsequence */
#include <iostream>
#include <vector>
using namespace std;
 
 int n, v[100010];
 
// Utility function to print LIS
void printLIS(vector<int>& arr)
{
    for (int x : arr)
        cout << x << " ";
    cout << endl;
}
 
// Function to construct and print Longest Increasing
// Subsequence
void constructPrintLIS(int arr[], int n)
{
    // L[i] - The longest increasing sub-sequence 
    // ends with arr[i]
    vector<vector<int> > L(n);
 
    // L[0] is equal to arr[0]
    L[0].push_back(arr[0]);
 
    // start from index 1
    for (int i = 1; i < n; i++)
    {
        // do for every j less than i
        for (int j = 0; j < i; j++)
        {
            /* L[i] = {Max(L[j])} + arr[i]
            where j < i and arr[j] < arr[i] */
            if ((arr[j] == arr[i]-1) &&
                    (L[i].size() < L[j].size() + 1))
                L[i] = L[j];
        }
 
        // L[i] ends with arr[i]
        L[i].push_back(arr[i]);
    }
 
    // L[i] now stores increasing sub-sequence of
    // arr[0..i] that ends with arr[i]
    vector<int> max = L[0];
 
    // LIS will be max of all increasing sub-
    // sequences of arr
    for (vector<int> x : L)
        if (x.size() > max.size())
            max = x;
 
    // max will contain LIS
    printLIS(max);
}
 
// Driver function
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	freopen("entrada.txt","r",stdin);
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>v[i];
 
    // construct and print LIS of arr
    constructPrintLIS(v, n);
 
    return 0;
}
