#include <iostream>
#include <LaborkaConfig.h>
#include <cstdlib>

#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#else
	#include <cmath>
#endif

int main(int argc, char* argv[])
{ 
	/*...*/ 

	double result;
	int input = 0;
	if (argc > 1)
	{
		input = atoi(argv[1]);
	}
	#ifdef USE_TRIGONOMETRY_DEGREE
		result = degreemath::sin(input);
	#else
		result = sin(pi / 4.0);
	#endif
	
	std::cout << result<<std::endl;
	return 0; 
}
