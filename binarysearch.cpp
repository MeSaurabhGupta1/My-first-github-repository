#include<conio.h>
#include<stdio.h>
int main()
{
	int a[]={1,9,7,8,5,4,3,2,6};
	int i,temp,ptr,k;
	for(k=0;k<8;k++)
	{
		for(ptr=0;ptr<8-k;ptr++)
		if(a[ptr]>a[ptr+1])
		{
			temp=a[ptr+1];
			a[ptr+1]=a[ptr];
			a[ptr]=temp;
		}
	}
	for(i=0;i<9;i++)
	printf("%d  ",a[i]);
	printf("\n");printf("saurabh\n");
	int b=0;int e=8;int m;int item=8;
	m=(b+e)/2;
	while(b<=e && a[m]!=item)
	{
		if(item<a[m])
		e=m-1;
		else
		b=m+1;
		m=(b+e)/2;
	} 
	 if(a[m]==item)
	 printf("element found");
	 else 
	 printf("not found");
	getch();
	return 0;
	
}
