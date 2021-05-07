class Solution {
public:
    bool check(vector<int>& nums) {
       int min = INT_MIN;
        int tmp = nums[0];
        int size = nums.size();
        int i =1;
        for(; i < nums.size(); ++i)
        {
            if(nums[i] < nums[i -1])
            {
                break;
            }
        }
        for(; i < nums.size(); ++i)
        {
            if(nums[i] > tmp || nums[i] < min)
            {
                return false;
            }
            else{
                min = nums[i];
            }
        }
        return true;
    }
};
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k %= nums.size();
        if(!k)
        {
            return;
        }
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        return ;
    }
};
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i = 0,j =i+1; i < nums.size()-1; ++i,++j)
        {
              if(nums[i] == nums[j])
              {
                  return true;
              }
        }
        return false;
    }
};
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int count = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] == 0)
            {
                nums.erase(nums.begin()+i);
                ++count;
                i--;
            }
        }
        for(int i = 0; i < count; ++i)
        {
            nums.push_back(0);
        }
        
    }
};
class Solution {
public:
    int reverse(int x) {
       
        long long tmp = 0;
        while(x != 0)
        {
             if((tmp > INT_MAX / 10) || (tmp < INT_MIN / 10))
        {
            return 0;
        }
            tmp *= 10;
            tmp = tmp + (x % 10);
            x /= 10;
        }
        return static_cast<int>(tmp);
    }
};
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    }
};
class Solution {
public:
    int myAtoi(string s) {
        s.append("a");
        stringstream str;
        str<<s;
        int x;
        str>>x;
        return x;
    }
};
class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};