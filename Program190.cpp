#include<iostream>
using namespace std;

typedef unsigned int UINT;

int CountBit(int iNo)
{
	int i = 0,iCnt = 0;
	int iMask = 0x00000001;
	int iResult = 0;
	
	for(i = 1; i < 32; i++)
	{
		iResult = iNo & iMask;
		if(iResult == iMask)
		{
			iCnt++;
		}
		iMask = iMask<<1;
	
	}	
	return iCnt;
}

int main()
{
	int iValue = 0,iRet = 0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
	iRet = CountBit(iValue);
	
	
	cout<<"Number of bits which are on:"<<iRet<<"\n";
	return 0;
}	