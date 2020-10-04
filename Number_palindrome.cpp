/* Day 5

2] Pallindrome check for integer (not for string input)

****IT'S A GENERIC PROGRAM****

*/


#include<iostream>
using namespace std;

int power10(int n)
{
	int x=1;
	for(int i=0;i<n;i++)
	{
		x=x*10;
	}
	return x;
}

int main()
{
	char ans;
	do
	{
		int num,num_cpy;
		cout<<"\nEnter a number : ";
		cin>>num;
		num_cpy=num;
		int digits=0;
		
		while(num_cpy>10)
		{
			num_cpy=num_cpy/10;
			digits++;              // count one less digits in a number
		}
		//cout<<digits;
		
		num_cpy=num;
		int l,r, temp,flag=0;
		
		if(digits==1) // for two digit number
		{
			r=num_cpy%10;
			l=num_cpy/10;
			if(l!=r)
				flag=1;
		}
		else // for number with more than two digits
		{
			for(int i=0,j=0;i<(digits+1)/2;i++)
			{
				r=num_cpy%10;
				temp=power10(digits-i-j);
				l=num_cpy/temp;
				//cout<<"\nl="<<l<<"  r="<<r;
				
				num_cpy=num_cpy%temp;
				num_cpy=num_cpy/10;
				j++;
				if(l!=r)
				{
					flag=1;
					break;
				}
			}
		}
		
		if(flag==0)
			cout<<"\nThe number "<<num<<" is Pallindrome";
		else
			cout<<"\nThe number "<<num<<" is NOT Pallindrome";
		
		cout<<"\nDo you wanna check for more? (y/n) : ";
		cin>>ans;
	}while(ans=='y' || ans=='Y');
	
		
	
return 0;
}

/*
OUTPUT

Enter a number : 1

The number 1 is Pallindrome
Do you wanna check for more? (y/n) : y

Enter a number : 12

The number 12 is NOT Pallindrome
Do you wanna check for more? (y/n) : y

Enter a number : 121

The number 121 is Pallindrome
Do you wanna check for more? (y/n) : y

Enter a number : 12321

The number 12321 is Pallindrome
Do you wanna check for more? (y/n) : y

Enter a number : 12344321

The number 12344321 is Pallindrome
Do you wanna check for more? (y/n) : y

Enter a number : 12345321

The number 12345321 is NOT Pallindrome
Do you wanna check for more? (y/n) : n

--------------------------------

*/
