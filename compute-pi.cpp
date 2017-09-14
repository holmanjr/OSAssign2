#include "compute-pi.hpp"

void pi(int n){
	if(n < 1 || n > 10){
		std::cout << "Valid ranges for the 'pi'[n] parameter are: 1 to 10" << std::endl;
		return;
	}

	double pie = 0.0;

	for(int i = 0; i < 2500000; i++){
		pie += 4*(pow(-1,i) / (2.0 * i + 1));
	}

	std::cout << std::setprecision(n+1) << pie << std::endl;
}
