#include <iostream>
using namespace std;
int main(void){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N, R;
    string S;
    cin>>N;
    for(int i = 0; i < N; i++){
        cin >> R >> S;
        for(int j = 0; j < S.length(); j++)
            for(int k = 0; k < R; k++)
                cout << S[j];
        cout<<'\n';
    }
}
