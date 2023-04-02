#include<iostream>
using namespace std;

void swapAlt(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
        swap(arr[i],arr[i+1]);
    }
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void enterArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int main(){
    int size;
    cout<<"ENter size of the array";
    cin>>size;
    int arr[size];

    cout<<"Enter the elements:\n";
    enterArray(arr,size);
    // printArray(arr,size);

    swapAlt(arr,size);
    printArray(arr,size);

}