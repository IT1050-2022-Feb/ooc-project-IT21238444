#include "stdafx.h"
#include "Staff.h"
#include <cstring>
#include <iostream>
using namespace std;


Staff::Staff()
{
	strcpy_s(s_Name, "Kamal");
	s_Phone = 0716342633;
	strcpy_s(s_Email, "kamal@gmail.com");
	strcpy_s(s_ID, "S1912");
	s_Salary = 100000.0;
}

Staff::Staff(char sName[], int sPhone, char sMail[], char sId[], double sSalary)
{
	strcpy_s(s_Name, sName);
	s_Phone = sPhone;
	strcpy_s(s_Email, sMail);
	strcpy_s(s_ID, sId);
	s_Salary = sSalary;
}

void Staff::UpdateLabTest(LabTest *test)
{
}

void Staff::UploadLabReport(LabReport *lReport)
{
}

void Staff::DisplayStaffDetails()
{
	cout << "Staff Name : " << s_Name << endl
		<< "Staff Phone Number : " << s_Phone << endl
		<< "Staff Email : " << s_Email << endl
		<< "Staff ID : " << s_ID << endl
		<< "Staff Salary : " << s_Salary << endl;
}


Staff::~Staff()
{
	cout << "Destructed" << endl;
}
