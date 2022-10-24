#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> a)
{
    cout << "Size: " << a.size() << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {

    // vector<int> v{1, 2, 3, 4, 5, 6};
    // printVec(v);

    // vector<int> :: iterator it = v.begin();

    // cout << (*it) << endl;
    // cout << (*(it+1)) << endl;

    // for (it = v.begin(); it != v.end(); it++) {
    //     cout << *it << endl;
    // }

    vector<pair<int, int>> v_p = {{2, 3}, {3, 4}, {4, 5}};
    // vector<pair<int, int>> :: iterator it1;

    cout << "first iteration" << endl;
    for(auto it1 = v_p.begin(); it1 != v_p.end(); it1++) {
        cout << (*it1).first << " " << (*it1).second << endl;
    }

    cout << "\n";

    cout << "second iteration" << endl;
    for(auto it1 = v_p.begin(); it1 != v_p.end(); it1++) {
        cout << it1 -> first << " " << it1 -> second << endl;
    }

    // (*it).first <=> it -> first
}