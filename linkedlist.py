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



lists = LinkedList()
lists.head = Node("Saturday")
lists.head.nextvalue = Node("Sunday")
lists.head.nextvalue.nextvalue = Node("Monday")

#printing a linked list without loop
print(lists.head.value)
print(lists.head.nextvalue.value)
print(lists.head.nextvalue.nextvalue.value, "\n")

#creating a linked list with loop
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