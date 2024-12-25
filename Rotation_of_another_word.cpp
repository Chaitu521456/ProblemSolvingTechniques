// word is rotation of another word

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of word : ";
    cin>>n;

    string s,t;
    cout<<"Enter the strings : ";
    cin>>s>>t;

    int flag=0;
    s= s+s;
    for(int i=0; i<n; i++)
    {
        if(s.substr(i,n)== t)
        {
            flag=1;
            break;
        }
    }

    if(flag) cout<<"Yes";
    else cout<<"No";
    return 0;
}
