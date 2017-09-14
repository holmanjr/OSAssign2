#include "compute-fib.hpp"

void fib(int n){
	if(n < 0 || n > 40){
		std::cout << "Valid ranges for the 'Fibonacci'[n] parameter are: 0 to 40" << std::endl;
		return;
	}

	if(n == 0){
		std::cout << "0" << std::endl;
		return;
	}

	if(n ==1){
		std::cout << "1" << std::endl;
	}

	int prev = 0;
	int curr = 1;
	int sum = 0;

	for(int i = 2; i <= n; i++){
		sum = prev + curr;
		prev = curr;
		curr = sum;
	}
	std::cout << sum << std::endl;
}
