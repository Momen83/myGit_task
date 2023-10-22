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

double getAverage(vector<int>nums) {

    int sum = getSum(nums);
    int size = nums.size();
    
    return (double)sum / size;
}
int main() {
    
    cout<<"Sum = "<<getSum({1,2,3,4,5,6,7,8,9,10})<<'\n';
    cout<<"Average = "<<getAverage({1,2,3,4,5,6,7,8,9,10})<<'\n';
        
}