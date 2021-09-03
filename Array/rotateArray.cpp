#include<iostream>
#include<vector>
using namespace std;
void rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> res(n,0);
    int j = 0;
    for(int i = n-k ; i < n+k+1 ; i++){
        res[j++] = nums[i%n];
    }
    for(int i = 0 ; i< n ; i++){
        nums[i] = res[i];
    }
    for(int i = 0 ; i<n; i++){
    cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr;
    cout<<"Enter the size of the Array :"<<endl;
    int size;
    cin>>size;
    cout<<"Enter the vector element :"<<endl;
    for (int i = 0; i < size; i++)
    {
        int val;
        cin>>val;
        arr.push_back(val);
    }
    cout<<"Enter the kth element :";
    int k;
    cin>>k;
    rotateArray(arr, k);
    return 0;
    
}