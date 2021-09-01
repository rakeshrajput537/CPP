#include<iostream>
using namespace std;
void printArr(int *arr, int n ){
    // or printArr(int arr[], int n)
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}


int main(){
    int arr[3];

    // sieze of the Array
    int size = sizeof(arr)/sizeof(arr[0]);

    printArr(arr, size);  // Random number

    int arr1[3] = {};
    printArr(arr1,3); // 0 0 0 

    int arr2[3] = {0};
    printArr(arr2,3); // 0 0 0 

    int arr3[3] = {1};
    printArr(arr3,3); // 1 0 0 

    return 0;
}