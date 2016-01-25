vector<int> Solution::maxset(vector<int> &A) {
    long maxSum = 0, curSum = 0;
    int maxLen = 0, curLen = 0;
    int maxIndex = 0, curIndex = 0;
    for (int i = 0; i <= A.size(); ++i) {
        if (i < A.size() && A[i] >= 0) {
            curSum += (long)A[i];
            curLen++;
        } else {
            if (maxSum < curSum ) {
                maxSum = curSum;
                maxLen = curLen;
                maxIndex = curIndex;
            } else {
                if (maxSum == curSum) {
                    if (maxLen < curLen) {
                        maxSum = curSum;
                        maxLen = curLen;
                        maxIndex = curIndex;
                    } else {
                        if (maxLen == curLen) {
                            if (maxIndex > curIndex) {
                                maxSum = curSum;
                                maxLen = curLen;
                                maxIndex = curIndex;
                            }
                        }
                    }
                }
            }
            curSum = 0;
            curIndex = i + 1;
            curLen = 0;
        }
    }
    
    vector<int> res;
    for (int i = 0; i < maxLen; ++i) {
        res.push_back(A[i + maxIndex]);
    }
    
    return res;
}