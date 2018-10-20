#include<iostream>
using namespace std;

int main()
{
    int num,count=0,fact=1,rem;
    cout<<"Enter the number: ";
    cin>>num;

    //Factorial of that number..
    for(int i=num;i>0;i--)
    {
        fact=fact*i;
    }

    //Counting the number of zeros..
    while(fact>0)
    {
        rem=fact%10;
        if(rem==0)
        {
            count++;
        }
        fact/=10;
    }
    cout<<"The number of zeros are: "<<count;
}
