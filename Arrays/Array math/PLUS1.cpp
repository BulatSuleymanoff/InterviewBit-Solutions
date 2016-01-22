vector<int> Solution::plusOne(vector<int> &A) {
    for (int i = A.size() - 1; i >= 0; --i) {
        if (A[i] < 9) {
            ++A[i];
            break;
        }
        A[i] = 0;
        if (i == 0) {
            A[i] = 1;
            A.push_back(0);
        }
    }
    
    while (*(A.begin()) == 0)
        A.erase(A.begin());
    
    return A;
}