class Solution {
public:
    int reverse(int x) {
         int minValuew = std::numeric_limits<int>::min();
        int maxValuew = std::numeric_limits<int>::max();

        if (x >= minValuew && x <= maxValuew) {
            long long mains = 0; 
            int temp1 = x;

            while (temp1 != 0) {
                int temp2 = temp1 % 10;
                mains = mains * 10 + temp2;

                
                if (mains > maxValuew || mains < minValuew) {
                    return 0; 
                }

                temp1 = temp1 / 10;
            }

            return static_cast<int>(mains); 
        } else {
            return 0; 
        }
    }
};