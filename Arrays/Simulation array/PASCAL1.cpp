vector<vector<int> > Solution::generate(int A) {
    vector<vector<int> > res;
    vector<int> prev;
    vector<int> cur;
    prev.push_back(1);
    
    if (A == 0)
        return res;
    res.push_back(prev);
    for (int i = 0; i < A - 1; ++i) {
        cur.clear();
        cur.push_back(prev[0]);
        for (int k = 1; k <= i; ++k) {
           cur.push_back(prev[k] + prev[k - 1]); 
        }
        cur.push_back(prev[0]);
        prev = cur;
        res.push_back(cur);
    }
    return res;
}