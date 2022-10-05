// Problem: Mad scientist - Bronze - USACO
// Problem link: http://www.usaco.org/index.php?page=viewproblem2&cpid=1012
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

    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);

    int n ; cin>> n ;
    string str1, str2;
    cin>> str1 ;
    cin>> str2 ;

    bool firstDiff= true ;
    int ans= 0 ;
    for(int i =0 ;i<n;i++){
        if (str1[i]!=str2[i] ) {
            if (firstDiff){
                ans++ ;
                firstDiff=false ;
            }
        }
        else {
            firstDiff= true ;
        }
    }
    cout<< ans ;

    return 0;
}
