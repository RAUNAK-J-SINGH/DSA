#include<iostream>
using namespace std;

//left shift -> 5<<2 (5 left shift 2) means 00000...000101 --> 00000..00010100 (ANS 10100 is 12)
//left shift -> 5<<2 (3 left shift 1) means 00000...00011 --> 00000..000110 (ANS 110 is 6)

//Right shift -> 5>>2 (5 right shift 2) means 00000...000101 --> 00000..000001 (ANS 001 is 1)
//Right shift -> 5>>2 (3 right shift 1) means 00000...00011 --> 00000..00001 (ANS 001 is 1)


// for >>,<< padding always with 0 (for positive numbers)   in general -> multiply by 2
// for >>,<< padding depends on compiler (for negative numbers) in general -> divide by 2
int main(){
cout << (17>>1)<< endl;
cout << (17>>2) << endl;

cout << (21<<1) << endl;
cout<< (21<<2) << endl;
return 0;
}