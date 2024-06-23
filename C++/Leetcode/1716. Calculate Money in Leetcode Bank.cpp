class Solution {
public:
    int totalMoney(int n) {
       int totalMoney = 0;
    int currentMoney = 1;

    for (int day = 1; day <= n; day++) {
        if (day % 7 == 1) {

            currentMoney = (day / 7) + 1;
        }
        totalMoney += currentMoney;
        currentMoney++;
    }

    return totalMoney;
    }
};
