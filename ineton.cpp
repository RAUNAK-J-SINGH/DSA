#include<iostream>
using namespace std;
int num(int n){
    if (n ==0){
        return 1;
    }
    num(n-1);
    cout<<n<<"\n";
    return 0;

}
int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    num(n);

}