#include <iostream>
#include <string>
#include <array>

auto amin(int a[], int n) -> int {
	int minimal = a[0];
	for(auto i=1;i<n;i++) {
		if(a[1] < minimal) {
      minimal = a[i];
    }
	}
	return minimal;
}

auto main() -> int{
	std::array <int, 10> tab {1,2,3,4,5,6,7,8,9,10};
	std::cout << amin(tab.data(), tab.size()) << "\n";

	return 0;
}
