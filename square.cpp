#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int num=1;
    for (int i = 0; i < n; i++) //outer loop
    {
        for (int j = 0; j < n; j++) //inner loop
        {
            cout << num<<" ";
            num++;
        }
        cout << endl;
    }

            /*
                A B C 
                D E F
                G H I
            */
            //     int n=3;
            //     char ch='A';
            //     for(int i=0;i<n;i++){
            //             cout<<ch<<" ";
            //             ch++;
            //         }
            //         cout<<endl;
            //     }
}