#include <iostream>
#include <unordered_map>
#include <vector>

std::vector<int> TwoSum(int, std::vector<int>);

int main() {
	
	std::vector<int> vec1 = {2, 7, 11, 15};
	std::vector<int> vec2 = {3, 2, 4};
	std::vector<int> vec3 = {3, 3};

	std::vector<int> soln1 = TwoSum(9, vec1);
	std::vector<int> soln2 = TwoSum(6, vec2);
	std::vector<int> soln3 = TwoSum(6, vec3);
	
	std::cout << soln1[0] << ", " << soln1[1] << std::endl;
	std::cout << soln2[0] << ", " << soln2[1] << std::endl;
	std::cout << soln3[0] << ", " << soln3[1] << std::endl;

}

std::vector<int> TwoSum(int total, std::vector<int> nums) {

	std::unordered_map<int, int> map;

	int need;
	for(int i = 0; i < nums.size(); i++) {
		need = total - nums[i];
		if(map.find(need) != map.end()) {
			return {i, map[need]};
		}

		map[nums[i]] = i;
	}	

	return {-1, -1};

}
