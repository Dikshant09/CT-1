// Dikshant
// 2010991535 
// Set 4
// Question 1

#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int giveMinimumIndex(vector<int> &arr){
        int n = arr.size(), miniIndex = -1;

        // Using unordered_map to track the already seen elements.
        unordered_map<int, int> map;
        for(int i = 0; i < n; i++){
            if(map.find(arr[i]) == map.end()) map[arr[i]] = i;
            else{

                // We will only update if, the current index is smaller than miniIndex
                if(miniIndex == -1 || miniIndex > map[arr[i]]){
                    miniIndex = map[arr[i]];
                }
            }
        }
        return miniIndex;
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
            int index = s->giveMinimumIndex(arr);
            if(index != -1) cout<<"The minimum index of the repeating element is "<<index<<endl;
            else cout<<"Invalid input"<<endl;
        }else{
            throw errorMessage;
        }
    }catch(string errorMessage){
        cout<<errorMessage<<endl;
    }
    
    return 0;
}