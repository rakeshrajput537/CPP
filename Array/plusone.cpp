// #include<bits/stdc++.h>  // Non standard 
#include<iostream>
#include<vector>
using namespace std;
vector<int> plusOne(vector<int> &v1, int n){
    vector<int> res;
    int carry = 0;
    int temp = v1[n-1]+1;
    for (int i = n-2; i >= 0; i--)
    {
        if (temp >=10)
        {
            carry = 1;
            temp = temp%10;
        }
        res.push_back(temp);
        temp = carry + v1[i];
        carry = 0;
    }
    if (temp >= 10)
    {
        carry =  1;
        temp = temp%10;
    }
    res.push_back(temp);
    if (carry == 1)
    {
        res.push_back(carry);
    }
    

    return res;
}
void printVector(vector<int> &res){
    for (int i = res.size()-1; i >= 0; i--)
    {
        cout<<res[i]<< " ";
    }
    cout<<endl;
    
}
int main(){
    vector<int> v1;
    int n;
    cout<<"Enter the size of the vector :"<<endl;
    cin>>n;
    for(int i = 0; i< n ; i++){
        cout<<"Enter the "<<(i+1)<<"th Element of the Array :"<<endl;
        int val;
        cin>>val;
        v1.push_back(val);
    }
    vector<int> res = plusOne(v1,n);
    printVector(res);
    return 0;
}