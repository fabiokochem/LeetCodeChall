#include <queue>

using namespace std;

class RecentCounter {
    private:
        queue<int> q;
    
    public:
        RecentCounter() {
    
        }
        
        int ping(int t) {
            if(t <= 3000){
                q.push(t);
                return q.size();
            } else {
                while(q.front() < t - 3000 && !q.empty()) q.pop();
                q.push(t);
                return q.size();
            }
        }
    };
    
    /**
     * Your RecentCounter object will be instantiated and called as such:
     * RecentCounter* obj = new RecentCounter();
     * int param_1 = obj->ping(t);
     */