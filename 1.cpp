// 1
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums;
    }
    
};

// 2
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        nums1.erase(nums1.begin() + nums1.size() - nums2.size(), nums1.end() );
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(), nums1.end());
    }
};
// 3
std::ifstream file("text.txt");
std::string line;
for(int i = 0; i < 10; ++i)
{
  file >> line;
}
std::cout << line;
