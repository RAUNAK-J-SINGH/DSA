#include<iostream>
using namespace std;

int getMax(int arr[],int n){
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;

}

int getMin(int arr[],int n){
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        mini = min(mini, arr[i]);
    }
    return mini;

}
int main(){
    int n;
    int arr[n];
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    for (int i; i<n;i++){
        cin>>arr[i];

    }
    cout<<"Max value is"<<endl<<getMax(arr,n)<<endl;
    cout<<"Min value is"<<endl<<getMin(arr,n);

}
