/***********************************************************
// OOP244 Workshop 2: Dynamic Memory
// File Kingdom.cpp
// Version 1.0
// Date ???????????
// Author ?????????
// Description
// ?????????????????????
//// Date: May 18, 2018
// Author: Callum Dodge
//
// Revision History
///////////////////////////////////////////////////////////
// Name     Date    Reason
// 
///////////////////////////////////////////////////////////
***********************************************************/


// TODO: include the necessary headers
#include <iostream>
#include "Kingdom.h"

using namespace std;

// TODO: the sict namespace
namespace sict {

	// TODO:definition for display(...) 
	void display(const Kingdom &kingdom) {
		cout << kingdom.m_name << ", " << "population " << kingdom.m_population << endl;
	}

	void display(const Kingdom kingdom[], int count) {

		cout << "------------------------------" << endl;
		cout << "Kingdoms of SICT              " << endl;
		cout << "------------------------------" << endl;
		
		int total = 0;

		for (int i = 0; i < count; i++) {
			cout << i + 1 << ". " << kingdom[i].m_name << ", population " << kingdom[i].m_population << endl;

			total = total + kingdom[i].m_population;
		}

		cout << "-------------------------" << endl;
		cout << "Total population of SICT: " << total << endl;

	}

}