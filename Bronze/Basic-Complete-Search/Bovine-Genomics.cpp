#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MAX = 101;
set<char> visitedChar[MAX];
bool ans[MAX];
int main(){
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    int N, M;
    scanf("%d %d", &N, &M);
    for(int i = 0; i < M; i++){
        ans[i] = true;
    }
    N*=2;
    int n = N/2;
    while(N--){
        if(N >= n) {
            for (int i = 0; i < M; i++) {
                char c;
                scanf(" %c", &c);
                visitedChar[i].insert(c);
            }
        }else{
            for (int i = 0; i < M; i++) {
                char c;
                scanf(" %c", &c);
                if(ans[i] && visitedChar[i].count(c)){
                    ans[i] = false;
                }
            }
        }
    }
    int cnt = 0;
    for(int i = 0; i < M; i++){
        if(ans[i]){
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}
