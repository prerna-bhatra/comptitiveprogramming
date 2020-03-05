class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums)
    {
        void myfunction(vector<int>nums,int size,int curpos,vector<int>temp)
        {
            if(curpos==n)
            {
                ans.push_back(temp);
                return;
            }
            myfunction(nums,size,curpos+1,temp);
	temp.push_back(nums(curpos));
              myfunction(nums,size,curpos+1,temp);
            
            
        }
    }
};

int main()
{
}
