//Problem: Grass Planting - Silver - Usaco
//Problem link: http://www.usaco.org/index.php?page=viewproblem2&cpid=894&lang=en

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define nl '\n'
#define ll long long
#define sec second
#define fs first
#define N 100005
using namespace std ;

vector<int> G[N] ; 
int main() {

    freopen("planting.in", "r", stdin);
    freopen("planting.out", "w", stdout);
    int n ; cin>> n ;
    for(int i =0; i<(n-1); i++){
        int a, b ; cin>> a >> b ;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    int mx  =0 ;
    for (int i=1; i<=n; i++){
        int nodeTypes = G[i].size()+1;
        mx= max(mx,nodeTypes) ;
    }
    cout<< mx << nl ;

    return 0;
}
