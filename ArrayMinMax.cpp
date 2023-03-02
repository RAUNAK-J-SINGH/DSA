#include<iostream>
using namespace std;

int getMax(int arr[],int n){
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]> max){
            max = arr[i];
        }
    }
    return max;

}

int getMin(int arr[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;

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
