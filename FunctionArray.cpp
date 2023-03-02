#include<iostream>
using namespace std;

int printArray(int arr[],int size){
    cout<<"Printing the array:\n";
    for(int i =0; i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<"\n"<<"Printing DONE";
    return 0;

}
int main(){
    int size1=10;
    int array[size1]={1,2};
    printArray(array,size1);
}

