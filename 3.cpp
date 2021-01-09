# include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;
    cin>>t;
    for (int i = 0; i < t; ++i){
        cin>>n;
        int ar[n], sum = 0;
        for (int j = 0; j < n; ++j){
            cin>>ar[j];
            sum += ar[j];
        }
        for (int i1 = 0; i1 < n; ++i1) // starting index of sub array
            for (int i2 = n - 1; i2 >= i1; --i2) { // ending index of sub array
                int sub_sum = 0;
                for (int k = i1; k <= i2; k++) // sum the sub array
                    sub_sum += ar[k];
                if (sub_sum > sum)
                    sum = sub_sum;
            }
        cout<<sum<<endl;
    }
    return 0;
}