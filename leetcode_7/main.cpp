#include <iostream>
#include "stdio.h"
#include <vector>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > INT_MAX/10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN/10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }
};

int main() {
    Solution solution;
    int data[]={123,-123,120};
    vector<float> dataTest(data, data+sizeof(data)/sizeof(int));
    for (int i = 0; i <dataTest.size() ; ++i) {
        int src=dataTest[i];
        int ret=solution.reverse(dataTest[i]);
        cout<<src<<endl;
        cout<< ret<<endl;

    }
    std::cout << "ok!" << std::endl;
    return 0;
}