#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter a and b";
    cin>>a>>b;

    cout << "a&b" << (a&b) <<endl;   //AND - both 1 -> 1 else 0
    cout << "a|b" << (a|b) <<endl;   //OR - one 1 -> 1
    cout << "~a" << (~a) <<endl;     //NOT - 1st negative (1)-> 1's complement -> +1(2's complement) 
    cout << "a^b" << (a^b) <<endl;   //XOR - one 1 -> 1 else 0
    return 0;
}