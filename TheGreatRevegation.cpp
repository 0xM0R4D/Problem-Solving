// Problem: The Great Revegetation - Bronze - Usaco
// Problem link: http://www.usaco.org/index.php?page=viewproblem2&cpid=916
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define nl '\n'
#define ll long long
#define sec second
#define fs first
#define pb push_back
#define N 105
using namespace std ;

vector<int> G[N] ;  // G-> Pastures
vector<int>values ;
bool mark[105][4]={{true}};           // 0,0  0,1

void findLowest(int node){
    values = {0,1,2,3} ;

    for(int v: G[node]){
        for(int i =0; i<4; i ++){
            if (mark[v][i]){
                values.erase(remove(values.begin(),values.end(), i ), values.end()) ;
            }
        }
    }

    int x = values[0] ;
    mark[node][x]= true ;
    cout<< x+1;
}

int main() {

    freopen("revegetate.in", "r", stdin);
    freopen("revegetate.out", "w", stdout);

    int n , m ;cin>> n >> m ;
    for (int i=0 ; i<m; i ++){
        int a, b ; cin>> a>> b ;
        a-- , b--  ;
        G[a].pb(b);
        G[b].pb(a);
    }

    cout<< 1;
    for(int i =1; i<n;  i++)
        findLowest(i) ;

    return 0;
}
