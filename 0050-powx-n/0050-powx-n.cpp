class Solution {
public:
    double myPow(double x, int n) {

        if(n == 0 ) return 1.0;
        if(x == 0) return 0.0;
        if(x == 1) return 1.0;
        if(x == -1 && n%2 == 0) return 1.0;
        if (x == -1 && n%2 != 0) return -1.0;



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