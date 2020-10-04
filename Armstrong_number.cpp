/* Day 5

5] Display armstrong numbers from 1-1000

*/

#include<iostream>
using namespace std;

int pow(int num, int p)
{
	int x=1;
	while(p>0)
	{
		x=x*num;
		p--;
	}
	return x;
}


int main()
{
	int max_limit;
	cout<<"\nEnter max limit : ";
	cin>>max_limit;
	int digits, temp, sum, cpy_i;
	
	for(int i=1;i<=max_limit;i++)
	{
		digits=1;
		cpy_i=i;
		sum=0;
		while(i>=10)
		{
			i=i/10;
			digits++;
		}
		i=cpy_i;
		if(digits==1) // for single digit number
		{
			cout<<i<<", ";
		}
		else // for number with more than one digit
		{
			while(i>10)
			{
				temp=i%10;
				sum=sum+pow(temp,digits);
				i=i/10;
			}
			sum=sum+pow(i,digits);
			if(sum==cpy_i)
				cout<<cpy_i<<", ";
			i=cpy_i;
		}	
	}
	
return 0;
}

/*

OUTPUT

Enter max limit : 1000
1, 2, 3, 4, 5, 6, 7, 8, 9, 153, 370, 371, 407,
----------------------------------------------

*/
