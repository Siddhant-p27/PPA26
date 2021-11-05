#include<iostream>
using namespace std;

typedef unsigned int UINT;


UINT SwapByte(UINT iNo)
{
	UINT iMask = 0x00FFFF00;
	UINT iTemp = iNo &iMask;
	
	UINT Byte1 = iNo<<24;
	UINT Byte4 = iNo>>24;
    
	
	UINT iResult = iTemp | Byte1 | Byte4;
	return iResult;
	
}
int main()
{
	UINT iValue = 0,iRet = 0,i = 0,j = 0;
	
	cout<<"Enter number\n";
	cin>>iValue;
	
    iRet =  SwapByte(iValue);
    cout<<"Data is"<<iRet<<"\n";	
	
	return 0;
}





 /*

   ABCD
   
   //Step1
   000D
   
   //Step2
   00B0
   000B
  
   //Step3
   0B00
   000B
   
  //Step4
  A000
  000A


*/
	