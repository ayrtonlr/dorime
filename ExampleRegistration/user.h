#pragma once
#include <iostream>
#include <string>

using namespace std;

class User{
	private:
		string itsUserId;
		string itsUserName;
		string itsUserCel;
		string itsUserPeriod;
	public:
		User();
		~User();
		string GetUserId() const;
		string GetUserName() const;
		string GetUserCel() const;
		string GetUserPeriod() const;
		void SetUserId(string UserId);
		void SetUserName(string UserName);
		void SetUserCel(string UserCel);
		void SetUserPeriod(string UserPeriod);
};