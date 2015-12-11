class NumArray {
public:
    NumArray(vector<int> &nums) {
        sum.push_back(0);   // sum[0] = 0
        for (int i = 0; i < nums.size(); i++) {
            // sum[i] = sum[i-1] + nums[i-1]
            sum.push_back(sum[i] + nums[i]);
        }
    }

    int sumRange(int i, int j) {
        if (i < 0 || i > j) {
            return 0;
        }
        
        return sum[j+1] - sum[i];
    }
    
private:
    vector<int> sum;
    void initialize_table();
};
