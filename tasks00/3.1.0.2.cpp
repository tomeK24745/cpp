#include <iostream>

auto get(std::string s1) -> int{
	std::string n;
	std::cout << s1;
	std::getline(std::cin,n);

	return std::stoi(n);
}

auto init(int a[], int n, int start) -> void {
	for(auto i=0; i<n; i++){
		a[i] = start++;
    std::cout << a[i] << " ";
	}
	std::cout << "\n";
}

auto main() -> int{
	int tab[100];
	init(tab,get("Enter array size :"),get("Enter starting number :"));
	return 0;
}
