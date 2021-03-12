#include <iostream>
#include <LaborkaConfig.h>

#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#else
	#include <cmath>
#endif
int main() 
{ 
	/*...*/ 
	//std::cout << degreemath::sin(50.0);
	//std::cout << degreemath::cos(50.0);
	//std::cout << degreemath::tg(50.0);
	//std::cout << degreemath::ctg(50.0);
	#ifdef USE_TRIGONOMETRY_DEGREE
		result = degreematg::cos(45.0);
	#else
		result = cos(pi / 4.0);
	#endif
	return 0; 
}
