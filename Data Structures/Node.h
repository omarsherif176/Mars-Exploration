#pragma once

template <typename T>
class Node
{
private:
	T* data; // T* item
	Node* nextNode;
public:
	Node()
	{
		nextItem = nullptr;
	}
	void setNext(Node <T>* passedNode)  //set the next node in the list
	{
		this -> nextNode = passedNode;
	}
	Node* getNext() //get the next node in the list
	{
		return nextNode;
	}
	n getItem()  // get the item data in the node
	{
		return data;
	}
};