#include <iostream>
#include "ProbalityHandle.h"

void ProbalityHandle::PrintInfWeigth()
{
	std::cout << "--------------------------------------" << std::endl
	<< "| InfWeight by Shenon | IntWeight by standart |" << std::endl;
	float WeightByShenon = 0.0f;
	for (auto lProb : ProbalityOfEachLetter)
	{
		//Add calculated result to WeightByShenon
		WeightByShenon += -(lProb * log2(lProb));
	}
	//Get vector<float> size
	auto NumOfLetters = ProbalityOfEachLetter.size();
	//Calculate WeightStandart
	int WeightStandart = std::ceil(log2(NumOfLetters));
	//Print results
	std::cout << "|" << WeightByShenon <<" \t      | "<< WeightStandart << "\t\t      |"<< std::endl;
}
