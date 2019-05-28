#include <iostream>

void SetFlag(unsigned long long &flags, char flagIndex)
{
	flags |= 1ULL << flagIndex;
}

void SetFlags(unsigned long long &flags, unsigned long long flagsToSet)
{
	flags |= flagsToSet;
}

void UnsetFlag(unsigned long long &flags, char flagIndex)
{
	flags &= ~(1ULL << flagIndex);
}

void UnsetFlags(unsigned long long &flags, unsigned long long flagsToUnset)
{
	flags &= ~flagsToUnset;
}

bool GetFlag(unsigned long long &flags, char flagIndex)
{
	return flags & (1ULL << flagIndex);
}

int GetFlags(unsigned long long &flags, unsigned long long flagsToGet)
{
	return flags & (1ULL << flagsToGet);
}

void ToggleFlag(unsigned long long &flags, char flagIndex)
{
	flags ^= 1ULL << flagIndex;
}

int main()
{
	unsigned long long flags = 0;

	unsigned long long flagsToEnable = (1 << 7) | (1 << 30);
	//flagsToEnable = (1 << 7) | (1 << 34);

	//SetFlag(flags, 30);
	//SetFlag(flags, 3);

	SetFlags(flags, flagsToEnable);

	std::cout << flagsToEnable << std::endl;
	std::cout << flags << std::endl;

	std::cout << GetFlag(flags, 30) << std::endl;

	return 0;
}
