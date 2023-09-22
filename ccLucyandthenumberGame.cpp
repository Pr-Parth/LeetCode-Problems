#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    ll T, N;
    cin >> T;
    while(T--)
    {
        string ime;
        ll X;
        cin >> N;
        map <ll, vector <string> > mapa;
        for(int i = 0; i < N; i++)
        {
            cin >> ime >> X;
            mapa[X].push_back(ime);
        }
        string rez = "Nobody wins.";
        for(auto it = mapa.begin(); it != mapa.end(); it++)
        {
            if(it->second.size() > 1) continue;
            rez = it->second[0];
            break;
        }
        cout << rez << endl;
    }
    return 0;
}