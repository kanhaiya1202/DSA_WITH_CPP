#include<iostream>
#include<vector>

using namespace std;
vector<vector<int>> tripletsum(vector<int>& arr, int target){
    vector<vector<int>> ans;
    for(int i = 0; i<arr.size(); i++){
        for(int j = i+1; j<arr.size() ; j++){
            for(int k = i+2; k<arr.size(); k++){
                if(arr[i]+arr[j]+arr[k] == target){
                    vector<int>temp;
                    temp.push_back(min (arr[i], arr[j], arr[k]));
                    temp.push_back(max  (arr[i], arr[j], arr[k]));
                    ans.push_back(temp);
                }
            }
        }
    }

    return ans;
}
int main (){
    vector<int> arr = {1,2,2,1,1,3};
    int target = 12;
    vector<int>tripletsum(vector<int>&arr , 12);
}