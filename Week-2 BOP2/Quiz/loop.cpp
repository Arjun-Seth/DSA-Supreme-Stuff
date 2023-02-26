#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n = 15;
    // for (;;)
    //     cout << n;

    // int a = 0, b = 10;
    // a = 2, b = 7;
    // if (a && b)
    // {
    //     cout << "true: " << endl;
    // }
    // else
    // {
    //     cout << "false:" << endl;
    // }

    // int a, b, c;
    // a = 2, b = 7;
    // c = (a > b) ? a : b;
    // cout << "c:" << c;

    // int a = 5, b = 6, c, d;
    // c = a, b;
    // d = (a, b);
    // cout << c << " " << d;

    // int i,j;
    // i=10;
    // i =(j++, j+100,999+j);
    // cout<<i;

    // int a = 10;
    // if (a = 15)
    // {
    //     time;
    //     cout << a;
    //     if (n == 3)
    //         goto time;
    // }
    // break;

    // int a = 5, b = -7, c = 0, d;
    // d = ++a && ++b || ++c;
    // printf("\n%d%d%d%d", a, b, c, d);

    // int a=-5;
    // int k=(a++, ++a);
    // cout<<k;

    // int y = 0;
    // if (1 | (y = 1))
    //     cout << "y is " << y;
    // else
    //     cout << y;

    // int y=1;
    // if(y & (y=2))
    // cout<<"true "<<y;
    // else
    // cout<<"false"<<y;

//     #include<stdio.h>
// int main(){
// int c = 2^3;
// printf("%d\n",c);
// }

    char code ='A';
    switch(code){
        case 64+1: printf("ANT");
        break;
        case 8*8+4: printf("KING");
        break;
        default: printf("NOKING");
    }
    printf("PALACE");


    return 0;
}