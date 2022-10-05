//Problem: milk factory - Bronze - Usaco
//Problem link: http://www.usaco.org/index.php?page=viewproblem2&cpid=940 
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

vector<int> G[N] ;
vector <int>outDeg(102);
int main() {

    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);

    int n ;cin>> n;

    for(int i =0 ; i<n-1; i++){
        int a, b ; cin>> a >> b;
        a-- , b-- ;
        outDeg[a]++ ;
    }
    int ans = -1 ;
    for (int i=0; i<n; i++ ){
        if (outDeg[i]==0 and ans!= -1){     // case 2 nodes its outDeg equals zero, ans = -1
            ans = -1 ;
            break ;
        }
        if (outDeg[i]==0)ans = i+1 ;
    }
    cout<<ans ;

    return 0;
}
