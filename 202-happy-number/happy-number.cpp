class Solution {
public:
    int getSquareSum(int n)
    {
        int sum = 0;
        while(n>0)
        {
            int digit = n%10;
            sum = sum + digit * digit;
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = getSquareSum(n);

        while(fast != 1 && slow != fast)
        {
            slow = getSquareSum(slow);
            fast = getSquareSum(getSquareSum(fast));
        }
        return fast == 1;
    }
};