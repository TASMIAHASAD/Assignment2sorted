#include "Person.h"
#include "SortedType.h"
#include <iostream>
using namespace std;

template <class ItemType>
Person<ItemType>::Person()
{


     PersonName =" ";
	 FatherName =" ";
	 MotherName =" ";
	 MaritalStatus =" ";
	 NationalID =" ";
	 SpouseName =" ";
	 PresentAddress =" ";
	 PermanentAddress =" ";
	 Height =0.0;
	 Weight = 0.0;
	 EyeColor =" ";
	 HairColor =" ";

}


template <class ItemType>
 string Person<ItemType>::GetPersonName() {
	 return PersonName;
}
 template <class ItemType>
 string Person<ItemType>::GetFatherName() {
	 return FatherName;
 }
 template <class ItemType>
 string Person<ItemType>::GetMotherName() {
	 return MotherName;
 }
 template <class ItemType>
 string Person<ItemType>::GetMaritalStatus() {
	 return MaritalStatus;
 }
 template <class ItemType>
 int Person<ItemType>::GetNationalID() {

	 return NationalID;
 }
 template <class ItemType>
 string Person<ItemType>::GetSpouseName()
 {
	 return SpouseName;
 }
 template <class ItemType>
 string Person<ItemType>::GetPresentAddress()
 {
	 return PresentAddress;
 }
 template <class ItemType>
 string Person<ItemType>::GetPermanentAddress()
 {
	 return PermanentAddress;
 }
 template <class ItemType>
 float Person<ItemType>::GetHeight()
 {
	 return Height;
 }
 template <class ItemType>
 float Person<ItemType>::GetWeight()
 {
	 return Weight;
 }
 template <class ItemType>
 string Person<ItemType>::GetEyeColor()
 {
	 return EyeColor;
 }
 template <class ItemType>
 string Person<ItemType>::GetHairColor()
 {
	 return HairColor;
 }
 template <class ItemType>
 void Person<ItemType>::SetPersonName(string inputPersonName) {
	 this->PersonName = inputPersonName;
 }
 template <class ItemType>
 void Person<ItemType>::SetFatherName(string inputFatherName) {
	 this->FatherName = inputFatherName;
 }
 template <class ItemType>
 void Person<ItemType>::SetMotherName(string inputMotherName) {
	 this->MotherName = inputMotherName;
 }
 template <class ItemType>
 void Person<ItemType>::SetMaritalStatus(string inputMaritalStatus)
 {
	 this->MaritalStatus = inputMaritalStatus;
 }

 template <class ItemType>
 void Person<ItemType>::SetNationalId(int inputNationalID)
 {
	 this->NationalID = inputNationalID;
 }
 template <class ItemType>
 void Person<ItemType>::SetSpouseName(string inputSpouseName)
 {
	 this->SpouseName = inputSpouseName;
 }
 template <class ItemType>
 void Person<ItemType>::SetPresentAddress(string inputPresentAddress)
 {
	 this->PresentAddress = inputPresentAddress;

 }
 template <class ItemType>
 void Person<ItemType>::SetPermanentAddress(string inputPermanentAddress)
 {
	 this->PermanentAddress = inputPermanentAddress;

 }
 template <class ItemType>
 void Person<ItemType>::SetHeight(float inputHeight)
 {
	 this->Height = inputHeight;
 }
 template <class ItemType>
 void Person<ItemType>::SetWeight(float inputWeight)
 {
	 this->Weight =inputWeight;
 }
 template <class ItemType>
 void Person<ItemType>::SetEyeColor(string inputEyeColor)
 {
	 this->EyeColor = inputEyeColor;
 }
 template <class ItemType>
 void Person<ItemType>::SetHairColor(string inputHairColor){
 this->HairColor = inputHairColor;
 }
 template <class ItemType>
 void Person<ItemType>::PrintPerson() {
	 cout << "Personal information: " << endl;
	 cout << "Person Name: " << PersonName << endl;
	 cout << "Father Name: " << FatherName << endl;
	 cout << "Mother Name: " << MotherName << endl;
	 cout << "Marital Status: " << MaritalStatus << endl;
	 cout << "National ID: " << NationalID << endl;
	 cout << "Spouse Name: " << SpouseName << endl;
	 cout << "Present Address: " << PresentAddress << endl;
	 cout << "Permanent Address: " << PermanentAddress << endl;
	 cout << "Height: " << Height << endl;
	 cout << "Weight: " << Weight << endl;
	 cout << "Eye Color: " << EyeColor << endl;
	 cout << "Hair Color: " << HairColor << endl;
 }
