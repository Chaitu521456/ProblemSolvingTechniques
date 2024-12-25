// Count of Divisors for a Number

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    // main logic
    int cnt=0;
    for(int i=1; i<=n/i; i++)
    {
        if(n%i ==0)
        {
            if(i== n/i) cnt++;
            else cnt+= 2;
        }
    }

    // printing count
    cout<<"The no.of Divisors for "<<n<<" is : "<<cnt;
    return 0;
}
