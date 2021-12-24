#include <iostream>

auto get(std::string s1) -> int{
	std::string n;
	std::cout << s1;
	std::getline(std::cin,n);

	return std::stoi(n);
}

auto init(int a[], int n) -> void{
	for(auto i=0; i<n; i++){
		a[i] = 0;
    std::cout << a[i] << " ";
	}
	std::cout << "\n";
}

auto main() -> int{\	int tab[100];
	init(tab,get("Enter array size :"));
	return 0;
}
