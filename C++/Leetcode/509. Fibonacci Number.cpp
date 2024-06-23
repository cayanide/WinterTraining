class Solution {
public:
    int fib(int n) {
   if(n==0)
    return 0;
    if (n == 1 || n == 2)
        return 1;

    int prev = 1, curr = 1, next;
    for (int i = 3; i <= n; ++i) {
        next = prev + curr;
        prev = curr;
        curr = next;
    }
    return curr;

    }
};
