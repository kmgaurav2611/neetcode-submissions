// class Solution {
// public:
//     int carFleet(int target, vector<int>& position, vector<int>& speed) {
//         // step 1: create car pairs, sort by position desc
//         vector<pair<int, int>> cars;
//         for(int i =0; i< position.size(); i++) {
//             cars.emplace_back(position[i], speed[i]);
//         }
//         sort(cars.rbegin(), cars.rend()); // position descending

//         // step 2: stack for fleet arrival times
//         stack<double> st;

//         for(auto& car : cars) {
//             double time = (target - car.first) * 1.0 / car.second;

//             while(!st.empty() && time >= st.top()) {
//                 st.pop(); // current car catches up -> merge

//             }
//             st.push(time); // new fleet leader or merged fleet
//         }
//         return st.size(); // number of fleets
//     }
// };
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
            double time = (target - car.first) * 1.0 / car.second;
             cout << "Car pos=" << car.first << ", time=" << time << endl;
            // CORRECT: >= merges equal times (same fleet)
            while(!st.empty() && time >= st.top()) {
                st.pop();
            }
            st.push(time);
        }
        return st.size();
    }
};
