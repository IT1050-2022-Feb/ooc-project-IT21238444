#pragma once
#include "Payment.h"

class Report
{
private: 
	int reportNumber;
	char reportName[20];

public:
	Report();
	Report(int reportNo, char report_Name[]);
	void DisplayReportDetails();
	~Report();
};

