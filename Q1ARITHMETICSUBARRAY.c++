1630. Arithmetic Subarrays LEETCODE MEDIUM 


___________________________SOLUTION___________________________________________________

bool checkArth(vector<int> arr, int n) {
    if (n < 3) {
        return true;
    }

    sort(arr.begin(), arr.end());
    int d = (arr[n - 1] - arr[0]) / (n - 1);

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] + d != arr[i + 1]) {
            return false; 
        }
    }

    return true;
}

class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ret;

        for (int j = 0; j < l.size(); j++) {
            vector<int> passarray;

            for (int i = l[j]; i <= r[j]; i++) { 
                passarray.push_back(nums[i]);
            }

            int k = r[j] - l[j] + 1; 
            ret.push_back(checkArth(passarray, k));
        }

        return ret; 
    }
};
