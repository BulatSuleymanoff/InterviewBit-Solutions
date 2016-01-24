vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long diff = 0, diffSq = 0;
    for (int i = 0; i < A.size(); ++i) {
        diff += (long)A[i] - (long)(i + 1);
        diffSq += (long)A[i] * (long)A[i] - (long)(i + 1) * (long)(i + 1);
    }
    
    int a, b;
    a = (int)(diff + diffSq/diff) / 2;
    b = (int)(a - diff);
    
    vector<int> res;
    res.push_back(a);
    res.push_back(b);
    
    return res;
}