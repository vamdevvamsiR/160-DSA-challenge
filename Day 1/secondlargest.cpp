
// User function template for C++
class Solution {
    public:
      // Function returns the second
      // largest elements
      int getSecondLargest(vector<int> &arr) {
          int L, SL;
          L=arr[0];
          SL=-1;
          for(int i=1; i< arr.size(); i++)
          {
              if(arr[i]>L)
                {  
                    SL=L;
                  L=arr[i];
                }
              else if(arr[i]>SL && arr[i]!=L)
                  SL=arr[i];
          }
          return SL;
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
          int ans = ob.getSecondLargest(arr);
          cout << ans << endl;
          cout << "~" << endl;
      }
      return 0;