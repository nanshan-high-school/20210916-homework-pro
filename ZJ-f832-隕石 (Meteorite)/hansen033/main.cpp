#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N, M;
    while(cin >> N){
        cin >> M;
        int meteorite[N], catcher[M];
        for(int t=0; t<N; t++)
            cin >> meteorite[t];
        for(int t=0; t<M; t++)
            cin >> catcher[t];

        sort(meteorite, meteorite+N);
        sort(catcher, catcher+M);

        int candidate=M-1, ans=0;
        for(int n=N-1; n>=0&& candidate>=0; n--){
            if(meteorite[n]<=catcher[candidate]){
                ans+=meteorite[n];
                candidate--;
            }
        }
        cout << ans<< endl;
    }
}