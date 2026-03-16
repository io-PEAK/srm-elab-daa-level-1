#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
#define SOLVE while(t--)
#define INPUT for(i=0;i<n;i++)
#define CHECK if
#define OTHERWISE else

int main() {
    int t, l = 1;
    cin >> t;
    
    SOLVE {
        int n, i, x, s = 0, c = 0;
        cin >> n;
        INPUT {
            cin >> x;
            s += abs(x);
            CHECK(x > 0) c++;
        }
        CHECK(c == 0) cout << "Line " << l++ << ": inf" << endl;
        OTHERWISE {
            int g = __gcd(s, c);
            cout << "Line " << l++ << ": " << s/g << "/" << c/g << endl;
        }
    }
    return 0;
}