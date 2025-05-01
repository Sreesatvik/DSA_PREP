# include <iostream>
using namespace std;
#include <vector>
int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    for(int num : nums) {
      cout << num << endl;
    }
    return 0;
}