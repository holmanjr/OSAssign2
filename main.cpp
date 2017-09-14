#include <string>
#include "compute-fib.hpp"
#include "compute-e.hpp"
#include "compute-pi.hpp"

void printHelpMessage();

void runProgram(int n, std::string test);

int main(int argc, char* argv[]){
	const int DESIRED_ARGS = 3;
	int NumOfArgs = argc;

	if(NumOfArgs == DESIRED_ARGS){
		int n = std::stoi(argv[2]);
		std::string test = argv[1];

		runProgram(n, test);
	}
	else printHelpMessage();

	return 0;
}

void printHelpMessage(){
	std::cout << "--- Assign 2 Help ---" << std::endl;
	std::cout << " -fib [n] : Compute the fibonacci of [n]" << std::endl;
	std::cout << " -e [n] : Compute the value of 'e' using [n] iterations" << std::endl;
	std::cout << " -pi [n] : Compute Pi to [n] digits" << std::endl;
}

void runProgram(int n, std::string test){
	if(test == "-fib") fib(n);
	else if(test == "-e") e(n);
	else if(test == "-pi") pi(n);
	else{
		printHelpMessage();
	}
}
