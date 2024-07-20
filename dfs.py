# create an adjacency list from an adjacency matrix
# run dfs on the adjacency list
# 1. create a dict of ajd list 
# 2. calling dfs on multiple unvisited sources
class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        adj = defaultdict(list)
        count = 0
        visit = set()
        def dfs(x):
            if x in visit:
                return
            visit.add(x)
            for neigh in adj[x]:
                dfs(neigh)

        n = len(isConnected)
        for i in range(n):
            for j in range(n):
                if isConnected[i][j]:
                    adj[i].append(j)
                    adj[j].append(i)
        for key in adj:
            if key not in visit:
                dfs(key)
                count += 1
        return count