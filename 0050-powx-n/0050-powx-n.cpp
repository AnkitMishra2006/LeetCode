class Solution {
public:
    double myPow(double x, int n) {
        double res = 1;
        long binForm = n;
        if(binForm<0)
        {
            x = 1/x;
            binForm = -binForm;
        }
        while(binForm > 0)
        {
            if((binForm & 1) == 1)
            {
                res = res*x;
            }
            x = x*x;
            binForm /= 2;
        }
        return res;
    }
};