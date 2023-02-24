#include<iostream>
using namespace std;
int power(int n, int m){
    if(m == 0){
        return 1;
    }
    return n * power(n,m-1);
    

}

int main(){
    int n, m;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Enter Power";
    cin>>m;
    cout<<power(n,m);

}