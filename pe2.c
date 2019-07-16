#include<stdio.h>
int main()
{
	int i,a[100000],sum=0,temp;
	a[0]=1;
	a[1]=2;
	while(i>=0)
	{
		a[i+2]=a[i+1]+a[i];
		if(a[i]<=400000)
		{
			sum=sum+a[i+1];
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=a[i+2];			
		}	
		else
		{
			break;
		}
		i=+1;
	}
printf("%d",sum);
return 0;
}
