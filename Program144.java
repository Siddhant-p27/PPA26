import java.util.*;

class Marvellous
{
	public int Add(int Brr[])
	{
		int iSum = 0,iCnt = 0;
		for(iCnt = 0;iCnt < Brr.length;iCnt++)
		{
			iSum = iSum + Brr[iCnt];
		}
		return iSum;
	}
}

class Program144
{
	public static void main(String Arg[])
	{
		Scanner sobj = new Scanner(System.in);
		int iSize = 0,iCnt = 0,iRet = 0;
		
		System.out.println("Enter number of elements");
		iSize = sobj.nextInt();
		// Arr = (int*)malloc(sizeof(int)*iSize);
		int Arr[] = new int[iSize];
		
		System.out.println("Enter numbers");
		
		for(iCnt = 0;iCnt<Arr.length;iCnt++)
		{
			Arr[iCnt] = sobj.nextInt();
			//scanf("%d",&Arr[iCnt]);
		}
		Marvellous mobj = new Marvellous();
		
		iRet = mobj.Add(Arr);// iRet = Add(Arr,iSize);
		System.out.println("Addition is :"+iRet);
		
	}
}