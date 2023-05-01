class Solution {
public:
    double average(vector<int>& salary) {
        int min = INT_MAX;
        int max = INT_MIN;
        int sum = 0;
        for(int i=0;i<salary.size();i++){
            sum+=salary[i];
            if(salary[i]>max)
                max = salary[i];
            if(salary[i]<min)
                min = salary[i];
        }
        sum -= max;
        sum -= min;
        return (double) sum /(salary.size() - 2);
    }
};