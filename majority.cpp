#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
	int majorityElement(vector<int> nums) {

		map<int, int> count;
		int n = nums.size();

		for (int i = 0; i < n; i++)
		{
			count[nums[i]]++;   //key为数组元素，value为元素出现次数
			if (count[nums[i]] > n / 2)
			{
				cout << nums[i] << endl;
				return nums[i];
			}
				
		}

	}
};

int main()
{
	Solution s;
	s.majorityElement({ 1,2,3,3,3 ,4,3});
	system("pause");
}
