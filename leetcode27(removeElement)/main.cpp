#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size = nums.size();
        for (int i = 0; i < size; i++) {
            if (nums[i] == val) {
                for (int j = i + 1; j < size; j++) {
                    nums[j-1] = nums[j];
                }
                i--;
                size--;
            }
        }
        return size;
    }
};

int main() {
//    std::cout << "Hello, World!" << std::endl;
    vector<int> test;
    int numbers, n;
    cout << "Please enter the number of integers: ";
    cin >> numbers;
    cout << "Please enter the integers: ";
    for (int i = 0; i < numbers; i++) {
        cin >> n;
        test.push_back(n);
    }
    cout << "Enter the integer that you want to remove.";
    int removeElement;
    cin >> removeElement;
    int output = Solution().removeElement(test, removeElement);
    cout << output << endl;
    cout << "[";
    for (int j = 0; j < output-1; j++) {
        cout << test[j] << ",";
    }
    cout << test[output-1] << "]" << endl;
    return 0;
}
