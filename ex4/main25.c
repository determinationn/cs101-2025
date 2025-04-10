#include <stdio.h>

int multi(int i, int j)
{
	if(i>1 && j == 9)
	{
		multi(i-1,j);
	}

	if(j == 1)
	{
		printf("%d*%d=%d ",i,j,i*j);
	}
	else
	{
		multi(i,j-1);
		printf("%d*%d=%d ",i,j,i*j);
	}
	if(j == 9) printf("\n");
	return 0;
}

int main()
{
	multi(9,9);


	return 0;
}
