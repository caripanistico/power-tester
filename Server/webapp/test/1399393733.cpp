#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

int main(){
	std::vector<int> v;
	for (int i = 1000000; i > 0; i--){
		v.push_back(i);
	}
	std::sort(v.begin(), v.end());
}