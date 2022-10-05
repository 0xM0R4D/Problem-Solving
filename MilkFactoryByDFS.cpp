//Problem: Milk Factory - Bronze - Usaco
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
//vector <int>outDeg(102);
int cnt =0,ans=-1 ;

void DFS(int u, bool vis[N]){
    vis[u]= true ;
    cnt++ ;
    for(int e: G[u]){
        if (!vis[e])
            DFS(e,vis) ;
    }
}


int main() {

    freopen("factory.in", "r", stdin);
    freopen("factory.out", "w", stdout);

    int n ;cin>> n;

    for(int i =0 ; i<n-1; i++){
        int a, b ; cin>> a >> b;
        G[b].pb(a) ;
    }


    for (int i=1; i<=n; i++ ){
        bool visited[N]={false} ;
        cnt = 0 ;
        DFS(i,visited) ;
        if (cnt==n){
            ans = i ;
            break;
        }
    }
    cout<< ans ;
    return 0;
}
