/* Amit Bansal - @amitbansal7 */
#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int t;
    cin>>t;

    // To clear the buffer after taking the number of test cases.
    string a;
    getline(cin, a);
    
    while(t--)
    {
        string s;
        getline(cin, s);
        reverse(s.begin(), s.end());
        cout<<s<<endl;
    }

    return 0;
}
