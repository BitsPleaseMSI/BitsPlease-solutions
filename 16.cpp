# include <bits/stdc++.h>

using namespace std;

int main() {
    char str[100];
    int N, n[3] = {0, 0, 0}; // To keep track of how many parentheses have been opened/closed
    cin>>N;
    for (int a = 0; a < N; ++a) {
        cin>>str;
        for (int i = 0; str[i] != '\0'; ++i) {
            switch (str[i]) {
                case '{':   n[0] += 1; // Parentheses open
                            break;
                case '(':   n[1] += 1;
                            break;
                case '[':   n[2] += 1;
                            break;
                case '}':   n[0] -= 1; //Parentheses close
                            break;
                case ')':   n[1] -= 1;
                            break;
                case ']':   n[2] -= 1;
                            break;
            }
        }
        if (n[0] == 0 && n[1] == 0 && n[2] == 0) // Check whether parentheses are valid
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


}