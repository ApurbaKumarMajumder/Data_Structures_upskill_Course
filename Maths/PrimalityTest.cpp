#include <bits/stdc++.h>
using namespace std;

// method 1

// int main() {
//     ios_base::sync_with_stdio(false); cin.tie(NULL);

//     int n;
//     cin >> n;

//     if (n <= 1) {
//         cout << "Provide a valid number" << endl;


//     }

//     for (int i = 2; i < n; i++) {
//         if (n % i == 0) {
//             cout << "Composite \n";
//             return 0;
//         }
//     }
//     cout << "Prime \n";
//     return 0;

//     // TC :- O(n) and SC :- O(1)
// }


// method 2

int main() {
    int n;
    cin >> n;

    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            cout << "Composite \n";
            return 0;
        }
    }

    // TC :- O(sqrt(n)) and SC :- O(1)
    cout << "Prime \n";
    return 0;
}