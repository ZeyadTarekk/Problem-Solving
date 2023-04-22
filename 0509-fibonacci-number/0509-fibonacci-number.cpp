class Solution {
public:
    int fib(int n) {
        if(n<2)
            return n;
        int fib1, fib2;

        fib1=0;
        fib2=1;
        for(int i=2;i<n;i++){
            int temp = fib1+fib2;
            fib1 = fib2;
            fib2=temp;
        }

        return fib1+fib2;
    }
};