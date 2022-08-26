// Dikshant
// 2010991535 
// Set 4
// Question 2

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    void checkArray(vector<int> &arr){
        int n = arr.size();

        // Sorting the elements in the ascending order, to  check consecutive order.
        sort(arr.begin(), arr.end());

        for(int i = 0; i < n-1; i++){
            if(arr[i]+1 != arr[i+1]){
                if(arr[i] == arr[i+1]){
                    cout<<"The array does not contain consecutive integers as element "<<arr[i]<<" is repeated."<<endl;
                }else{
                    cout<<"The array does not contain consecutive integers because there's gap between element "<<arr[i]<<" and "<<arr[i+1]<<endl;
                }
                return ;
            }
        }

        cout<<"The array contains consecutive integers from "<<arr[0]<<" to "<<arr[n-1]<<endl; 
    }
};


int main()
{
    // Taking input of the array from the user
    int n;
    cin>>n;

    // Taking elements into vector.
    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    // Exception Handling
    try{
        string errorMessage = "Can't create the object";
        Solution *s = new Solution;
        if(s != NULL){
            s->checkArray(arr);
        }else{
            throw errorMessage;
        }
    }catch(string errorMessage){
        cout<<errorMessage<<endl;
    }
    
    return 0;
}