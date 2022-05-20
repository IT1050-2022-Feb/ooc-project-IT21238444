#pragma once
#include  "LabTest.h"
#include  "LabReport.h"
#define SIZE 2
class Staff
{
private:
	char s_Name[20];
	int s_Phone;
	char s_Email[10];
	char s_ID[5];
	double s_Salary;
	LabTest *test[SIZE];
	LabReport *lReport[SIZE];

public:
	Staff();
	Staff(char sName[], int sPhone, char sMail[], char sId[], double sSalary);
	void UpdateLabTest(LabTest *test);
	void UploadLabReport(LabReport *lReport);
	void DisplayStaffDetails();
	~Staff();
};

