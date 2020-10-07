# include <bits/stdc++.h>

using namespace std;

int main() {
    char str[100];
    int N, n[3] = {0, 0, 0};
    cin>>N;
    for (int a = 0; a < N; ++a) {
        cin>>str;
        for (int i = 0; str[i] != '\0'; ++i) {
            switch (str[i]) {
                case '{':   n[0] += 1;
                            break;
                case '(':   n[1] += 1;
                            break;
                case '[':   n[2] += 1;
                            break;
                case '}':   n[0] -= 1;
                            break;
                case ')':   n[1] -= 1;
                            break;
                case ']':   n[2] -= 1;
                            break;
            }
        }
        if (n[0] == 0 && n[1] == 0 && n[2] == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


}