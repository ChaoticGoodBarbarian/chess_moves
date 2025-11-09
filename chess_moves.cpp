#include <iostream>
#include <cmath>


int main() {
	int a, b, c, d;
	std::cin >> a >> b >> c >> d;
	if ((a == c) || (b == d) || std::abs(a - c) == std::abs(b - d)) {
		std::cout << "YES" << std::endl;
	}
	else {
		std::cout << "NO";
	}
}