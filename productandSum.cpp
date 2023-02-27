#include<iostream>
using namespace std;
class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int prod=1;

        while(n!=0){
            int digit = n%10;
            prod = prod * digit;
            sum = sum +digit;
            n = n/10;
        }
        int ans = prod - sum;
        return ans;
        
        
    }
};
int main(){
    Solution sol1;
    cout<<sol1.subtractProductAndSum(234);
    return 0;


}