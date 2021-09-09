#pragma once
#include <vector>
class ProbalityHandle
{
public:
	//We don't need default constructor in this case, so delete it
	ProbalityHandle() = delete;
	//Template for array reference at constructor
	template<class _Type, unsigned int _Size>
	explicit ProbalityHandle(const _Type(&_ArrayRef)[_Size]) noexcept;
	//Virtual destructor, nothign special
	virtual ~ProbalityHandle() = default;
	//PrintInfWeight() methode defined at ProbalityHandle.cpp
	void PrintInfWeigth();
private:
	//Private vector<float> for Probality of each letter
	std::vector<float> ProbalityOfEachLetter;
};

template<class _Type, unsigned int _Size>
ProbalityHandle::ProbalityHandle(const _Type(&_ArrayRef)[_Size]) noexcept
{
	//Add each probality to vector<float>
	for (auto i : _ArrayRef)
	{
		ProbalityOfEachLetter.push_back(i);
	}
}
