class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        int max = *max_element(candies.begin(), candies.end());
        // int max = candies[0];
        // for (size_t i = 0; i < candies.size(); ++i)
        // {
        //     if(max < candies[i])
        //     {
        //         max = candies[i];
        //     }
        // }

        vector<bool> result;
        for (int candyCount : candies)
        {
            result.push_back(candyCount + extraCandies >= max);
        }
        // for (size_t i = 0; i < candies.size(); ++i)
        // {
        //     if( (candies[i] + extraCandies) >= max)
        //     {
        //         result.push_back(true);
        //     }
        //     else
        //     {
        //         result.push_back(false);
        //     }
        // }

        return result;

    }
};
