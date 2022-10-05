//Problem: Bridge Hands-555  - UVA 
//Problem link: https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=496
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

string orders="CDSH23456789TJQKA" ;
vector<pair<int,int>> players[4] ;
//vector <int>outDeg(102);
pair<int,int> encode(string str){
    pair<int,int> ret ;
    for(int i=0;i<orders.length(); i++){
        if (str[0]==orders[i])
            ret.first = i ;
        if (str[1]==orders[i])
            ret.second= i ;
    }
    return ret ;
}

string decode(pair<int,int> pr){
    string ret="" ;
    ret+= orders[pr.fs] ;
    ret+= orders[pr.sec];
    return ret ;
}


int main() {

//    freopen("factory.in", "r", stdin);
//    freopen("factory.out", "w", stdout);
    char d ;
    while(cin>> d && d!='#'){
        string s ; cin>> s ;
        string lines = s ;
        cin>> s ; lines+=s ;
        int st ;

        if(d=='N')st = 1 ;
        if(d=='E')st = 2 ;
        if(d=='S')st = 3 ;
        if(d=='W')st = 0 ;
        string en ="" ;
        for(int i =0, j=st; i<lines.length(); i+=2, j = (j+1)%4 ){
            en += lines[i];
            en += lines[i+1];
            players[j].pb(encode(en)) ;
            en = "";
        }

        // sorting then printing
        for(int i =0, j=2 ; i<4; i++, j =(j+1)%4){             // j= 2 ; starting from S // N E S W => 0 1 2 3
            if (j==0)cout<< "N:" ;
            if (j==1)cout<< "E:" ;
            if (j==2)cout<< "S:" ;
            if (j==3)cout<< "W:" ;
            sort(players[j].begin(), players[j].end());
            for( pair<int,int> e : players[j]){
                cout<< " "<< decode(e) ;
            }
            cout<< nl ;
        }
        for( int i =0 ; i<4 ; i++)
            players[i].clear() ;

    }
    return 0;
}
