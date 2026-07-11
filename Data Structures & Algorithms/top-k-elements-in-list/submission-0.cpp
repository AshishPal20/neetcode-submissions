class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Min heap stores pair: {frequency, element}
        std::priority_queue<std::pair<int, int>, 
                            std::vector<std::pair<int, int>>, 
                            std::greater<std::pair<int, int>>> minHeap;
        
        unordered_map<int, int> mp;

        // Count frequencies of each number
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        // Maintain a min heap of size K
        for(auto i = mp.begin(); i != mp.end(); i++){
                //Used pointer arrow syntax -> for map iterator
            minHeap.push({i->second, i->first});

            if(minHeap.size() > k){
                minHeap.pop(); // Removes the element with the lowest frequency
            }
        }

        // Extract results from the heap into a vector
        vector<int> result;
        while(!minHeap.empty()){
            result.push_back(minHeap.top().second); // Get the element (not its frequency)
            minHeap.pop();
        }

        return result;
    }
};
