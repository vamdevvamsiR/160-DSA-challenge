//The code is my version which do not match with the given main code, indiidually it's a correct but a bit of exaggerated logic
// THIS IS MY VERSION 
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int s=arr.size();
        vector<int> arr1(s);
        
        for(int k=1,n=0,i=0;i<s;i++)
        {
            if(arr[i]==0)
            {
                arr1[s-k++]=0;
            }
            else
            {
                arr1[n++]=arr[i];
            }
        }
        for(int i=0;i<s;i++)
        {
            cout<< arr1[i]<<" ";
        }
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int n = arr.size();
        ob.pushZerosToEnd(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends