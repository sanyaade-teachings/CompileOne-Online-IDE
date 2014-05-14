#include<stdio.h>
#include<math.h>
int getgrade(char c)
{
	switch(c)
	{
		case 'S':
			return 10;
		case 'A':
			return 9;
		case 'B':
			return 8;
		case 'C':
			return 7;
		case 'D':
			return 6;
		case 'E':
			return 5;
	}
}
int main()
{
	int t,n,credit[17],i,totalcredits;
	char grade[17];
	double gpa;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		totalcredits = 0;
		gpa = 0.0;
		for(i = 1;i <= n ;i++)
		{
			scanf("%d %c",&credit[i],&grade[i]);
			totalcredits += credit[i];
		}
		for(i = 1;i <= n ;i++)
		{
			gpa += credit[i]*getgrade(grade[i]);
		}
		gpa = gpa/totalcredits;
		printf("%.2lf\n",gpa);
	}
	return 0;
}

