pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int floor = -1;
    int ceil = -1;


    for (int i = 0; i < n; i++) {
        if (a[i] <= x) {
            floor = max(floor, a[i]);
        }
        if (a[i] >= x) {
            if (ceil == -1 || a[i] < ceil) {
                ceil = a[i];
            }
        }
    }

    return make_pair(floor, ceil);
	// Write your code here.
}
