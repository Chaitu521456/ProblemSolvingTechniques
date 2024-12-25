// Anagrams or not

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of word : ";
    cin>>n;

    string s,t;
    cout<<"Enter word-1, word-2 : \n";
    cin>>s>>t;

    vector<int> arr(26,0);
    for(int i=0; i<n; i++)
    {
        arr[s[i]-'a']++;
        arr[t[i]-'a']--;
    }

    int flag=0;
    for(int i=0; i<26; i++)
        if(arr[i]!=0)
        {
            flag=1;
            break;
        }

    if(flag) cout<<"Not Anagrams";
    else cout<<"Anagrams";
    return 0;
}
