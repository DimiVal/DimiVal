/*
 * Address.cpp
 *
 *  Created on: 19.04.2017 ã.
 *      Author: Dimitrinka Valkova
 */

#include "Address.h"
#include <iostream>

Address::Address(int postCode, string city, string street, string country, int number) {
	setCountry(country);
	setPostCode(postCode);
	setStreet(street);
	setTown(city);
	setNumber(number);
}
void Address::print(){
	cout << getPostCode() << " "
			<< getTown() << " "
			<< getStreet() << " "
			<< getCountry() << " "
			<< getNumber() << endl;
}

Address::~Address() {
	// TODO Auto-generated destructor stub
}

const string& Address::getCountry() const {
	return country;
}

void Address::setCountry(const string& country) {
	this->country = country;
}

int Address::getNumber() const {
	return number;
}

void Address::setNumber(int number) {
	this->number = number;
}

int Address::getPostCode() const {
	return postCode;
}

void Address::setPostCode(int postCode) {
	this->postCode = postCode;
}

const string& Address::getStreet() const {
	return street;
}

void Address::setStreet(const string& street) {
	this->street = street;
}

const string& Address::getTown() const {
	return town;
}

void Address::setTown(const string& town) {
	this->town = town;
}
