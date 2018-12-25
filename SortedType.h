#ifndef SORTEDTYPE_H_INCLUDED
#define SORTEDTYPE_H_INCLUDED

template <class ItemType>
class SortedType
{
 struct NodeType {
 ItemType info = ItemType();
 NodeType* next = NULL;
 };
public:
 SortedType();
 ~SortedType();
 bool IsFull();
 int GetLength();
 void MakeEmpty();
 bool IsEmpty();
 ItemType GetItem(ItemType item, bool& found);
 bool PutItem(ItemType item);
 bool DeleteItem(ItemType item);
 //Iterator Operations
 void ResetList();
 bool HasNextItem();
 ItemType GetNextItem();
private:
 NodeType* listData = NULL;
 int length = 0;
 NodeType* currentPos = NULL;
};

#endif // SORTEDTYPE_H_INCLUDED
