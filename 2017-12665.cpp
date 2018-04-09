#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	std::vector<int> vec;
	int num;
	
	while (cin >> num) {
		if (num == EOF) break;
		
		else vec.push_back(num);
	}

	std::sort(vec.rbegin(), vec.rend());

	std::cout << endl;
	std::cout << "ordered array" << endl;
	for (auto i : vec)
		std::cout << i << " ";

	return 0;
}