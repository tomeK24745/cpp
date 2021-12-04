#include <iostream>
#include <string>
#include <array>

auto get(std::string s1) -> int{
	std::string n;
	std::cout << s1;
	std::getline(std::cin,n);

	return std::stoi(n);
}


auto search(int a[], int n, int needle) -> int{
  for(auto i=0;1<n;i++){
    if(a[1] == needle){
      return i;
    }
  }
  return -1;
}

auto main() -> int {
  std::array <int, 10> tab {3,4,6,7,8,9,10,-4,3,1};
	std::cout << search(tab.data(), tab.size(), get("enter value:")) << "\n";
  return 0;
}
