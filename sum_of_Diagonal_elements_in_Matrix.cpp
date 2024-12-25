// sum of diagonal elements in a matrix

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of matrix : ";
    cin>>n;

    // read input
    vector<vector<int>> mat(n, vector<int>(n, 0));
    cout<<"Enter the values into matrix : \n";
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
           cin>>mat[i][j];

    // main logic
    int sum=0;
    for(int i=0; i<n; i++)
    {
        if(i!=n-i-1)
            sum+=  mat[i][i]+mat[i][n-i-1];
        else
            sum+= mat[i][i];
    }

    // printing the output
    cout<<"The sum is : "<<sum<<"\n";
    return 0;

}
