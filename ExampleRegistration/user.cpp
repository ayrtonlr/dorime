
#include "user.h"

User::User(){
	//id = "";
	//name = "";
	//cel = "";
	//period = "";
	return;
}

User::~User(){
}

string User::GetUserId() const{
		return itsUserId;
}

string User::GetUserName() const{
		return itsUserName;
}

string User::GetUserCel() const{
		return itsUserCel;
}

string User::GetUserPeriod() const{
		return itsUserPeriod;
}

void User::SetUserId(string UserId){
		itsUserId = UserId;
}

void User::SetUserName(string UserName){
		itsUserName = UserName;
}

void User::SetUserCel(string UserCel){
		itsUserCel = UserCel;
}

void User::SetUserPeriod(string UserPeriod){
		itsUserPeriod = UserPeriod;
}