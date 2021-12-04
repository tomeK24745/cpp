#include <iostream>
#include <string>
#include <array>

auto amax(int a[], int n) -> int {
	int maximal = a[0];
	for(auto i=1;i<n;i++) {
		if(a[i] > maximal) {
      maximal = a[i];
    }
	}
	return maximal;
}

auto main() -> int {
	std::array <int, 10> tab {1,2,3,4,5,6,7,8,9,101};
	std::cout << amax(tab.data(), tab.size()) << "\n";

	return 0;
}
