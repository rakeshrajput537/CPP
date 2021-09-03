#include<iostream>
#include<vector>
using namespace std;
void moveZeros(vector<int> &nums){
    int n = nums.size();
    for(int i = 0 ; i< n;i++){
        if(nums[i] == 0){
            for(int j = i+1; j< n ;j++){
                if(nums[j] != 0){
                    int val = nums[j];
                    nums[j] = 0;
                    nums[i] = val;
                    break;
                }
            }
        }
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
    moveZeros(arr);
    return 0;
    
}