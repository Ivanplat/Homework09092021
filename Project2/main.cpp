#include "ProbalityHandle.h"

/*Ivan Platonov 02121-DB ISU IMIT*/
/*E-Mail: EventGraphDev@gmail.com*/
/*GitHub: https://github.com/Ivanplat */
/*Homework | 09.09.2021*/
/*Using C++17 Standart*/
/*Using C ISO 17 Standart*/

int main()
{
	//Array with each Russian letter probality
	const float ProbalityOfEachLetter[33] = { 0.10983f, 0.08483f, 0.07998f, 0.07367f,
										0.067f,   0.06318f, 0.05473f, 0.04746f,
										0.04533f, 0.04343f, 0.03486f, 0.03203f,
										0.02977f, 0.02804f, 0.02615f, 0.02001f,
										0.01898f, 0.01735f, 0.01687f, 0.01641f,
										0.01592f, 0.0145f,  0.01208f, 0.00966f,
										0.0094f,  0.00718f, 0.00639f, 0.00486f,
										0.00361f, 0.00331f, 0.00267f, 0.00037f,
										0.00013f };
	//Crate ProbalyHandle class Object with constructor (const _Type(&_ArrayName)[_Size])
	ProbalityHandle PH(ProbalityOfEachLetter);
	//Call PrintInfWeight() methode defined at ProbalityHandle.cpp
	PH.PrintInfWeigth();

	return 0;
}