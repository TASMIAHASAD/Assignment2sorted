//SortedType.cpp
#include "SortedType.h"
#include <exception>
#include <iostream>
template <class ItemType>
SortedType<ItemType>::SortedType(){
 length = 0;
 listData = NULL;
 currentPos = NULL;
}
template<class ItemType>
SortedType<ItemType>::~SortedType(){
 MakeEmpty();
}
template<class ItemType>
bool SortedType<ItemType>::IsFull(){
 try{
 NodeType* newNode = new NodeType;
 delete newNode;
 }
 catch (std::bad_alloc exception){
 //This means a new node can not be allocated
 //From the dynamic memory.
 //This means we have reached capacity.
 return true;
 }
 return false;
}
template<class ItemType>
int SortedType<ItemType>::GetLength(){
 return length;
}
template<class ItemType>
bool SortedType<ItemType>::IsEmpty(){
 return (length == 0 && listData == NULL);
}
template<class ItemType>
void SortedType<ItemType>::MakeEmpty(){
 NodeType* locationToDelete = NULL;
 while (listData != NULL){
 locationToDelete = listData;
 listData = listData->next;
 if (currentPos == locationToDelete){
 //Iterator is pointing to the item to be deleted
 currentPos = currentPos->next;
 }
 delete locationToDelete;
 length--;
 }
}
template<class ItemType>
ItemType SortedType<ItemType>::GetItem(ItemType item, bool & found){
 NodeType* curr = listData;
 found = false;
 while (curr != NULL && !found){
 if (curr->info != item)
 curr = curr->next;
 else{
 //Found a copy of the item inside the linked list.
 //return the fresh copy of the item inside the list.
 found = true;
 return curr->info;
 }
 }
 return item;
}
template<class ItemType>
void SortedType<ItemType>::ResetList(){
 currentPos = NULL;
}
template<class ItemType>
bool SortedType<ItemType>::HasNextItem(){
 if (currentPos == NULL)
 return (listData != NULL);

 return (currentPos->next != NULL);
}
template<class ItemType>
bool SortedType<ItemType>::PutItem(ItemType item){
 if (IsFull())
 return false;
 NodeType* newNode = new NodeType;
 newNode->info = item;
 NodeType* curr = listData;
 NodeType* prev = NULL;
 bool posFound = false;
 while (curr != NULL && !posFound){
 if (curr->info < item){
 prev = curr;
 curr = curr->next;
 }
 else {
 posFound = true;
 newNode->next = curr;
 if (prev == NULL){
 listData = newNode;
 }
 else {
 prev->next = newNode;
 }
 }
 }
 if (!posFound)
 {
 posFound = true;
 newNode->next = curr;
 if (prev == NULL) {
 listData = newNode;
 }
 else {
 prev->next = newNode;
 }
 }
 length++;
 return posFound;
}
template<class ItemType>
ItemType SortedType<ItemType>::GetNextItem(){
 currentPos = ((currentPos == NULL) ? listData : currentPos->next);
 return currentPos->info;
}
template<class ItemType>
bool SortedType<ItemType>::DeleteItem(ItemType item){
 NodeType* curr = listData;
 NodeType* prev = NULL;
 bool found = false;
 while (curr != NULL && !found){
 if (curr->info == item) {
 found = true;
 if (prev == NULL) {
 //This means, the item to delete is the linked list
 //Head. This means, after deleteing current node,
 //we need to update listData head pointer.
 listData = curr->next;
 }
 else {
 prev->next = curr->next;
 }
 delete curr;
 length--;
 }
 else {
 prev = curr;
 curr = curr->next;
 }
 }
 return found;
}
template<class ItemType>
void SortedType<ItemType>::ResetList(){
 currentPos = NULL;
}
