#include "compute-e.hpp"

void e(int n){
	if(n < 1 || n >30){
		std::cout << "Valid range for the 'e'[n] parameter are: 1 to 30" << std::endl;
		return;
	}

	double sum = 1.0;
	double x = 1.0;

	for(int i = n-1; i > 0; --i)
		sum = 1 + x * sum/i;

	std::cout << sum << std::endl;
}
