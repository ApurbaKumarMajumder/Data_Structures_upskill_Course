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

int main()
{

    /*
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
    */

    int a = 9;
    auto b = 9;
    auto c = 9.5;

    vector<int> v{1, 2, 3, 4, 5};
    printVec(v);

    // cout << v.size() << endl; // size
    // v.push_back(8); // O(1)
    // v.pop_back(); // O(1)
    // v.begin();
    // v.end();
    // v.front();
    // v.end();

    v.resize(3);
    printVec(v);

    // return 0 if vector is empty else return 1
    int ans = v.empty(); // O(1)
    cout << ans << endl;

    // v.clear();
    // printVec(v);

    v.emplace(v.begin(), 7);
    printVec(v);
}