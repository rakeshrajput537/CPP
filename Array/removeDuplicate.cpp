
#include<iostream>
#include<vector>
using namespace std;
vector<int>  removeDuplicates(vector<int>& nums) {
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    return nums;
}
int main(){
    return 0;
}