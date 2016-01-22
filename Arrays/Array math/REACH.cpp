// Input : X and Y co-ordinates of the points in order. 
// Each point is represented by (X[i], Y[i])
int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
    int numOfSteps = 0;
    for (int i = 0; i < X.size() - 1; ++i) {
        int nextX = X[i+1], nextY = Y[i+1];
        numOfSteps += max(abs(nextX - X[i]), abs(nextY - Y[i]));
    }
    return numOfSteps;
}