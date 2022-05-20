// Laboratory_Infromation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>

#include "Payment.h"
#include "Card.h"
#include "RegisteredUser.h"
#include "LabReport.h"
#include "LabTest.h"
#include "Reservation_l.h"
#include "Staff.h"
#include "Feedback.h"
#include "Report.h"


using namespace std;


int main()
{
	Payment *payment1 = new Payment();
	payment1->DisplayPaymentDetails();

	Card *card1 = new Card();
	card1->DisplayCardDetails();

	RegisteredUser *user1 = new RegisteredUser();
	user1->DisplayUserDetails();

	Feedback *feed1 = new Feedback();
	feed1->DisplayFeedback();

	LabReport *l_repoort1 = new LabReport();
	l_repoort1->DisplayReportDetails();

	Staff *staff1 = new Staff();
	staff1->DisplayStaffDetails();

	delete payment1;
	delete card1;
	delete user1;
	delete feed1;
	delete l_repoort1;
	delete staff1;
	

    return 0;
}

