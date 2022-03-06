// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void sort012(int a[], int n) {
 
      int i = 0;
      int j = 0;
      int k = n - 1;
      int temp;

      //    0-j-1 ka region /// 0  
      //    j-i-1 ka region  // 1
      //    i-k-1 ka region   //2 

      while (i <= k) {

        if (a[i] == 0) {
          temp = a[i];
          a[i] = a[j];
          a[j] = temp; /// 

          i++;
          j++;

        } else if (a[i] == 1) {

          i++;

        } else                      //a[i]==2 than i will swapped with k to shift 2 at end region
        {

          temp = a[i];
          a[i] = a[k];
          a[k] = temp;
          k--;

        }

      }

    }
};

// { Driver Code Starts.
int main() {

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    Solution ob;
    ob.sort012(a, n);

    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }

    cout << endl;

  }
  return 0;
}

// } Driver Code Ends
