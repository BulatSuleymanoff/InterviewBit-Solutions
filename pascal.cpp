#include <vector>
#include <iostream>

using namespace std;

vector<int> getRow(int A) {
    vector<int> prev;
    vector<int> cur;
    prev.push_back(1);
    for (int i = 0; i < A; ++i) {
        cur.clear();
        cur.push_back(prev[0]);
        for (int k = 1; k <= i; ++k) {
           cur.push_back(prev[i] + prev[i - 1]); 
        }
        cur.push_back(prev[0]);
        prev = cur;
        for (int j = 0; j < cur.size(); ++j) {
            cout << cur[j] << ' ';
        }
        cout << '\n';
        for (int j = 0; j < prev.size(); ++j) {
            cout << prev[j] << ' ';
        }
        cout << '\n';
    }
    return cur;
}

int main()
{
    int N;
    cin >> N;
    getRow(N);
    return 0;
}