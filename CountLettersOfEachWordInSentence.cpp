/******************************************************************************

    Write a program to count the letters of each word in given sentence
    
    Sample input : "this is my house"
    Sample output : this -> 4
                    is -> 2
                    my -> 2
                    house -> 5

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string mainstr="this is my house";
    int count=0;
    for(int i=0;i<mainstr.length();i++)
    {
        if(mainstr[i]!=' ')
        {
            cout<<mainstr[i];
            count++;
        }
        else
        {
            cout<<" -> "<<count<<"\n";
            count=0;
        }
    }
    cout<<" -> "<<count<<"\n";

    return 0;
}

/*
OUTPUT

this -> 4                                                                                                                                        
is -> 2                                                                                                                                          
my -> 2                                                                                                                                          
house -> 5

*/
