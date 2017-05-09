/*
 * Address.h
 *
 *  Created on: 19.04.2017 ã.
 *      Author: Dimitrinka Valkova
 */

#ifndef ADDRESS_H_
#define ADDRESS_H_
#include <string>
using namespace std;

class Address {

public:
	Address();
	Address(int, string, string, string, int);

	virtual ~Address();
	const string& getCountry() const;
	void setCountry(const string& country);
	int getNumber() const;
	void setNumber(int number);
	int getPostCode() const;
	void setPostCode(int postCode);
	const string& getStreet() const;
	void setStreet(const string& street);
	const string& getTown() const;
	void setTown(const string& town);
	void print();

private:
	int postCode;
	string country;
	string town;
	string street;
	int number;

};

#endif /* ADDRESS_H_ */
