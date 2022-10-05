// Problme: 11494-Queen  - UVA
// Problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=2489
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define nl '\n'
#define ll long long
#define sec second
#define fs first
#define pb push_back
#define N 102
using namespace std ;


int main() {

    int x1, x2,y1,y2 ;
    while(cin>> x1>> y1>> x2 >> y2 && x1+x2+y1+y2 >0){
        if (x1==x2 and y1 ==y2)
            cout<< 0<< nl ;
        else if (x1==x2 or y1==y2) // same horizontal or vertical
            cout<< 1<< nl ;
        else if ((x1+y1)==(x2+y2)) // same right diagonal
            cout<< 1<< nl ;
        else if (abs(x1-x2)== abs(y1-y2))// same left diagonal
            cout<< 1<< nl ;
        else
            cout<< 2 << nl ;
    }
    return 0;
}
