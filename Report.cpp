#include "stdafx.h"
#include "Report.h"
#include <cstring>
#include <iostream>
using namespace std;


Report::Report()
{
	reportNumber = 104;
	strcpy_s(reportName, "Financial Report");
}

Report::Report(int reportNo, char report_Name[])
{
	reportNumber = reportNo;
	strcpy_s(reportName, report_Name);
}

void Report::DisplayReportDetails()
{
	cout << "Report Number : " << reportNumber << endl
		<< "Report Name : " << reportName << endl;
}


Report::~Report()
{
	cout << "Destructed" << endl;
}
