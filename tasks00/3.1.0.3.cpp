#include <iostream>
#include <string>
#include <array>

auto asum(int a[], int n) -> int
{
	int result = 0;
	for(auto i=0;i<n;i++)
	{
		result += a[i];
	}
	return result;
}

auto main() -> int
{
	std::array <int, 10> sum {1,2,3,4,5,6,7,8,9,10};
	std::cout << asum(sum.data(), sum.size()) << "\n";

	return 0;
}
