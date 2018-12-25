#include "Customer.h"
#include "Person.h"
#include <iostream>
using namespace std;

template <class ItemType>
Customer<ItemType>::Customer(){

}
template <class ItemType>
 int Customer<ItemType>::GetPhoneNumber() {
	 return PhoneNumber;
}
template <class ItemType>
 char Customer<ItemType>::GetOperators() {
	 return Operators;
}

 template <class ItemType>
 void Customer<ItemType>::PrintCustomersInfo() {
	 cout << "Customers Information: " << endl;
	 cout << "Phone Number: " << PhoneNumber << endl;
     cout << "Operators: " << Operators << endl;


 }

