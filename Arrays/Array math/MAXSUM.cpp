int Solution::maxSubArray(const vector<int> &A) {
    if (A.size() == 0)
        return 0;
        
    int curSum = A[0], endSum = A[0];
    for (int i = 1; i < A.size(); ++i) {
        if (curSum < 0) {
            curSum = 0;
        }
        if (endSum < curSum + A[i])
            endSum = curSum + A[i];
        curSum += A[i];
    }
    return endSum;
}