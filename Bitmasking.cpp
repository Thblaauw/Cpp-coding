#include <iostream>

int main() {

	int set[] = { 1, 2, 3, 4 };
	setSize = 4;
	totalAmount = 1 << setSize; // 2^n elements

	for (int mask = 0; mask < totalAmount; mask++) {
		for (int i = 0; i < setSize; i++) {
			if (mask & (1 << i))
				std::cout << set[i] << ' ';
		}
		std::cout << std::endl;
	}

	
}