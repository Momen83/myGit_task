#include "iostream"
#include "vector"
using namespace std;
int getSum(vector<int>nums) {

    int sum = 0;

    for(auto num : nums) {
        sum +=num;
    }

    return sum;
}
int getMin(vector<int>nums) {

    int minElement = INT32_MAX;

    for(auto num : nums) {

        if(minElement > num) {
            minElement = num;
        }
    }

    return minElement;
}
int main() {
    
    cout<<"Sum = "<<getSum({1,2,3,4,5,6,7,8,9,10})<<'\n';
    cout<<"Min Element  = "<<getMin({-10,-2,-8,10,8,15,1,2,3,-100})<<'\n';
        
}