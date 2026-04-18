class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, int>> cars(n);
        for(int i = 0; i < n; i++) {
            cars[i] = {position[i], speed[i]};
        }
        // Explicitly sort by POSITION DESCENDING
        sort(cars.begin(), cars.end(), greater<pair<int,int>>());
        
        stack<double> st;
        for(auto& car : cars) {
            double time = (double)(target - car.first) / car.second;
            // A car becomes a fleet with the car ahead if its time is <= the time of the car ahead
            if(st.empty() || time > st.top()) {
                st.push(time);
            }
        }
        return st.size();
    }
};

