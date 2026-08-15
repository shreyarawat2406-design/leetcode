class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int ,int>>>pq;
        pq.push({0,0});
        vector<bool>visited(points.size(),false);
        int n=points.size();
        int result=0, count=0;
        while(count<n){
            auto curr=pq.top();
            pq.pop();
            int weight=curr.first;
            int source=curr.second;
            if(visited[source])continue;
            visited[source]=1;
            result+=weight;
            count++;
            
            for(int v=0;v<n;v++){
                if(!visited[v]){
                    int dist=abs(points[source][0]-points[v][0]) + abs(points[source][1]-points[v][1]);
                    pq.push({dist,v});

                }
            }  
           
            }
            return result;
    }
    
    
};