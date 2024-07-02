# Part 1: bfs on a binary tree

import collections

# creating the node class for the binary tree nodes
class Node:
    def __init__(self, key):
        self.val = key
        self.left = None
        self.right = None

res = []
def bfs(root):
    q = collections.deque()
    q.append(root) 
    while q:
        qlen = len(q)
        level = []
        for i in range(qlen):
            x = q.popleft()
            if x:
                q.append(x.left)
                q.append(x.right)
                level.append(x.val)
        # because we don't want to add empty levels
        if level:
            res.append(level)

# building the actual tree with key values of the nodes
root = Node(2)
root.left = Node(4)
root.right = Node(6)
root.left.left = Node(34)
root.right.right = Node(45)
root.left.right = Node(23)
bfs(root)
print(res)


# Part 2: bfs on a graph

res = []
def bfs(graph, root):
    q = collections.deque()
    q.append(root)
    # for tracking visited nodes, you could either use 
    # a set (visit) or a bool list (visited).
    # That's why both are used to show
    visited = [False] * (max(graph) + 10) 
    visited[root] = True
    visit = set()
    visit.add(root)
    while q:
        vertex = q.popleft()
        res.append(vertex)
        if vertex in graph:
            for neighbours in graph[vertex]:
                if visited[neighbours] == False:
                    visited[neighbours] = True
                    visit.add(neighbours)
                    q.append(neighbours)

graph = {0: [1, 2], 1: [2], 2: [3], 3: [1, 2]} # directed graph
source = 1
bfs(graph, source)
print(res)



# bfs on a grid/matrix
