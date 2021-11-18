class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        for(int i=0;i<numbers.size()-1;i++){
            
             if(i !=0 && numbers[i] == numbers[i-1])
                 continue;
            //cout << numbers[i] << endl;
            for(int j=i+1;j<numbers.size();j++){
                if(j!=i+1 && numbers[j] == numbers[j-1])
                    continue;
                //cout << numbers[j] << endl;
                if(numbers[i] + numbers[j] == target){
                    ans.push_back(i+1);
                    ans.push_back(j+1);
                }
                
            }
            
        }
        return ans;
    }
};
