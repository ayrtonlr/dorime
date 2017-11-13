#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

#include <vector>
#include "user.cpp"

void register_user(){
	User newUser;
	string id;
	string name;
	string cel;
	string period;
	cout << "ID: " ;
	cin >> id;
	newUser.SetUserId(id);
	cout << "Name: " ;
	cin >> name;
	newUser.SetUserName(name);
	cout << "Cel: " ;
	cin >> cel;
	newUser.SetUserCel(cel);
	cout << "Period: " ;
	cin >> period;
	newUser.SetUserPeriod(period);

	ofstream file("database.txt");
    file << newUser.GetUserId() << "\n" 
    	<< newUser.GetUserName() << "\n"
    	<< newUser.GetUserCel() << "\n"
    	<< newUser.GetUserPeriod() << endl;

    cout << "\nSaved" << endl;
}



int main() {

	int max = 100;


	//Getting all users

	string dataArray[max*5];
	string line;
	int a = 0;
	ifstream fin1;
    fin1.open("database.txt");

    stringstream buffer;
    buffer << fin1.rdbuf();
    string test = buffer.str();

    size_t pos1 = 0;
    size_t pos2;

    //vector<string> lines;                             // Vector for holding all lines in the file
    while (getline(fin1,dataArray[a]))                           // Read lines as long as the file is
    {
       //lines.push_back(line);                                   // Save the line in the vector
    }

    //cout << lines[5] << endl;

    /*
    for (int i = 0; getline(fin1,line) ; ++i){
        //pos2 = test.find(",", pos1); 
        //dataArray[i] = test.substr(pos1, (pos2-pos1)); 
        //pos1 = pos2+1;
        dataArray[i]=line;
    }
    */


    //Creating all the objects

    User* allUsers= new User[max];

    for (int k = 0; k < max; ++k)
    {
	    allUsers[k].SetUserId(dataArray[4*k]);
	    allUsers[k].SetUserName(dataArray[4*k+1]);
	    allUsers[k].SetUserCel(dataArray[4*k+2]);
	    allUsers[k].SetUserPeriod(dataArray[4*k+3]);
    }
    
    cout << dataArray[3] << endl;


	int choice = 0;

	cout << "Hello, Would you like to do" "\n" "[1] Run" "\n" "[2] Register new user" "\n" 
	"[3] Exit" "\n" << endl;
	cin >> choice;

    switch (choice)
    {
    case 1:
    	cout << "Running program..." << endl;
        break;
    case 2:
    	cout << "Registration of a new user\n" << endl;
    	register_user();
        break;
    }

return 0;
}


