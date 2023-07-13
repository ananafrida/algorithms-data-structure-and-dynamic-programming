#creating a linked list
class Node:
	def __init__(self, dataval):
		self.value = dataval
		self.nextvalue = None

class LinkedList:
	def __init__(self):
	    self.head = None

	#inserting newNode at the beginning of the list
	def AtBeginning(self, newdata):
		newNode = Node(newdata)
		if self.head == None:
			self.nextvalue = newdata
			return
		temp = self.head
		self.head = newNode
		newNode.nextvalue = temp

	#inserting newNode at the ending of the list
	def AtEnd(self, newdata):
		newNode = Node(newdata)
		if self.head == None:
			self.nextvalue = newNode
			return
		x = self.head
		while x.nextvalue != None:
			x = x.nextvalue
		x.nextvalue = newNode

	#inserting newNode in between two nodes of the list, 
	#basically after the middleNode
	def InBetween(self, middleNode, newdata):
		newNode = Node(newdata)
		if middleNode == None:
			print("Node doesn't exist\n")
			return
		temp = middleNode.nextvalue
		middleNode.nextvalue = newNode
		newNode.nextvalue = temp

	#deleting Node from a list
	def RemoveNode(self, data):
		if self.head == None:
			return
		x = self.head
		while x.nextvalue != None and x.nextvalue.value != data:
			x = x.nextvalue
		#incase the removable value doesn't exist
		if x.nextvalue == None:
			print("Value not found")
		#incase the removable value exists
		else:
			x.nextvalue = x.nextvalue.nextvalue


#video demonstration of the idea: https://www.youtube.com/watch?v=G0_I-ZF0S38
# def reverseList(self, head):

#     # If head is empty or has reached the list end
#     if head is None or head.next is None:
#         return head

#     # Reverse the rest list
#     rest = self.reverseList(head.next)

#     # Put first element at the end
#     head.next.next = head # the technique for reversing the link between two nodes
#     head.next = None # setting the next pointer of the end node of the reversed list as None

#     # Fix the header pointer
#     return rest


# finding cycle in a linkedlist using floyd's tortoise and hare algorithm
# video explanation: https://www.youtube.com/watch?v=gBTe7lFR3vc
# def hasCycle(self, head: ListNode) -> bool:
#         fast, slow = head, head
#         while fast and fast.next:
#             fast, slow = fast.next.next, slow.next
#             if fast == slow:
#                 return True
#         return False


#swap nodes in pair in linkedlist (my own solution)
# class Solution(object):
#     def swapPairs(self, head):
#         cnt = 0
#         ans = head
#         prev_head = None
#         while head and head.next:
#             if cnt == 0:
#                 ans = head.next
#                 cnt = cnt + 1   
#             temp = head.next.next
#             head.next.next = head
#             if prev_head != None:
#                 prev_head.next = head.next
#             head.next = temp
#             prev_head = head
#             head = temp
#         return ans


lists = LinkedList()
lists.head = Node("Saturday")
lists.head.nextvalue = Node("Sunday")
lists.head.nextvalue.nextvalue = Node("Monday")

#printing a linked list without loop
print(lists.head.value)
print(lists.head.nextvalue.value)
print(lists.head.nextvalue.nextvalue.value, "\n")

#printing a linked list with loop
x = lists.head
while x != None:
	print(x.value)
	x = x.nextvalue

print("\n")


#inserting newNode in the list
lists.AtBeginning("Wednesday")
lists.AtEnd("Friday")
lists.InBetween(lists.head.nextvalue, "Thursday")

#removing a node from a list
lists.RemoveNode("Anan")


x = lists.head
while x != None:
	print(x.value)
	x = x.nextvalue