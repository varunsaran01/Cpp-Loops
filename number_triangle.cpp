/*PRN - 22070123130
Print Number Triaangle*/


#include <iostream>
using namespace std;

int main() {
    int k,i,j;

    cout<<"Enter the number of rows :";
    cin>>k;

    for(i = 0;i < k;i++)
    {
        for(j = 0;j < i;j++)
        {
            cout<<i;
        }

        cout<<endl;
    }

    return 0;
}
/*
Output:
Enter the number of rows :6

1
22
333
4444
55555
*/
