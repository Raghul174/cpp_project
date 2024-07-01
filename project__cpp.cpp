	#include<iostream> 
	#include<string> 
	#include<vector> 
	#include<algorithm> 
	#include<map> 
	using namespace std; 
	struct User { 
	string name; 
	string dob; 
	int age,door; 
	long long number; 
	string blood_type; 
	string street,town,district; 
	string gender; 
	string pulse,bp,weight; 
	}; 
	class BloodDonationApp { 
	private: 
	map<string, User> users; 
	string admin_username; 
	string admin_password; 
	public: 
	void createProfile() { 
	string username, password, name; 
	int age,door; 
	    long long number; 
	    string dob; 
	    string blood_type; 
	    string street,town,district; 
	    string gender; 
	    string pulse,bp,weight; 
	    cout<<"Create a new profile\n"; 
	    cout<<"Username:"; 
	    cin>>username; 
	    cout<<"Password at least one uppercase letter, one number, and one special character: "; 
	    cin>>password; 
	    // Validate password 
	    bool has_upper=false, has_digit=false, has_special=false; 
	    for(char c: password) 
	    { 
	     if(isupper(c)) has_upper = true; 
	     if(isdigit(c)) has_digit = true; 
	     if(!isalnum(c)) has_special = true; 
	    } 
	    if(!(has_upper && has_digit && 
	has_special)) 
	    { 
	     cout<<"Invalid password. password must contain at least one uppercase letter, one number, and one special character.\n"; 
	     return; 
	    } 
	     
	    admin_username = username; 
	    admin_password = password; 
	    cout<<"---Enter the Personal Details--\n"; 
	    cout<<"Name :"; 
	    cin>>name; 
	    cout<<"Gender :"; 
	    cin>>gender; 
	    cout<<"DOB :"; 
	    cin>>dob; 
	    cout<<"Age :"; 
	    cin>>age; 
	    cout<<"Blood type :"; 
	    cin>>blood_type; 
	    cout<<"Address :"; 
	    cin>>door>>street>>town>>district; 
	cout<<"Number :"; 
	cin>>number; 
	cout<<"Enter the Medical Details---"; 
	cout<<"Pulse rate:"; 
	cin>>pulse; 
	cout<<"BP :"; 
	cin>>bp; 
	cout << "Weight :"; 
	cin >>weight; 
	cout << "Profile created successfully!\n"; 
	} 
	bool login() { 
	string username, password; 
	cout<<"Please enter your username: "; 
	cin>> username; 
	cout << "Please enter your password: "; 
	cin>> password; 
	if (username== admin_username && password == 
	admin_password) 
	{  
	cout<<"Login successful. \nWelcome," << username << 
	"!\n"; 
	return true; 
	} 
	else 
	{ 
	cout <<"Invalid username or password. \n"; 
	return false; 
	} 
	} 
	void addUser (User user) 
	{ 
	users [user.name] = user; 
	} 
	vector<User> searchUsers (string blood_type, string town) { 
	vector<User> results;  
	for (auto it= users.begin(); it!= users.end(); ++it) { 
	User user = it-> second; 
	if (user.blood_type == blood_type && user.town == town) {  
	results.push_back(user); 
	} 
	}  
	return results; 
	}; 
	void displayUsers(vector<User>users) 
	{ 
	if(users.empty()) 
	{ 
	cout<<"No results found.\n"; 
	} 
	else  
	{ 
	cout<<"Results:\n"; 
	for(User user : users) 
	{ 
	cout<<"\n---Personal details---\n"; 
	cout<<"Name :"<<user.name<<"\n"; 
	cout<<"Gender :"<<user.gender<<"\n"; 
	cout<<"DOB :"<<user.dob<<"\n"; 
	cout<<"Age :"<<user.age<<"\n"; 
	cout<<"Blood type :"<<user.blood_type<<"\n"; 
	cout<<"Address :"<<user.door<<","<<user.street<<","<<user.town<<","<<user.district<<".\n"; 
	cout<<"Number :"<<user.number<<"\n"; 
	cout<<"\n---Medical Details---\n"; 
	cout<<"Pulse rate :"<<user.pulse<<"\n"; 
	cout<<"BP :"<<user.bp<<"\n"; 
	cout<<"Weight :"<<user.weight<<"\n"; 
	} 
	} 
	} 
	}; 
	int main() 
	{ 
	BloodDonationApp app; 
	int choice; 
	while(true) 
	{ 
	cout<<"\nWelcome to BLEED FOR A CAUSE\n"; 
	cout<<"1. Create a profile\n"; 
	cout<<"2. Login\n"; 
	cout<<"3. Exit\n"; 
	cout<<"Choice:"; 
	cin>>choice; 
	switch(choice) 
	  { 
	   case 1: 
	    app.createProfile(); 
	    break; 
	    case 2: 
	     if(app.login()) 
	     { 
	      while(true) 
	      { 
	       cout<<"\nWELCOME TO BLEED FOR A CAUSE\n"; 
	       cout<<"1. Add user\n"; 
	       cout<<"2. Search for users\n"; 
	       cout<<"3. Logout\n"; 
	       cout<<"Choice:"; 
	       cin>>choice; 
	       switch(choice) 
	       { 
	        case 1: 
	         { 
	          User user; 
	         
	 cout<<"\nEnter User Personal details\n"; 
	         
	 cout<<"Name:"; 
	         
	 cin>>user.name; 
	         
	 cout<<"Gender:"; 
	         
	 cin>>user.gender; 
	         
	 cout<<"DOB:"; 
	         
	 cin>>user.dob; 
	         
	 cout<<"Age:"; 
	         
	 cin>>user.age; 
	         
	 cout<<"Blood type:"; 
	         
	 cin>>user.blood_type; 
	         
	 cout<<"Address:"; 
	         
	 cin>>user.door>>user.street>>user.town>>user.district; 
	         
	 cout<<"Number:"; 
	         
	 cin>>user.number; 
	         
	 cout<<"Enter User Medical details:\n"; 
	         
	 cout<<"Pulse rate:"; 
	         
	 cin>>user.pulse; 
	         
	 cout<<"BP:"; 
	         
	 cin>>user.bp; 
	         
	 cout<<"Weight:"; 
	         
	 cin>>user.weight; 
	         
	 app.addUser(user); 
	         
	 cout<<"User added successfully!\n"; 
	         
	 cout<<"Please upload the certified documents\n"; 
	          break; 
	         } 
	         case 2: 
	          { 
	           string blood_type, town; 
	          
	 cout<<"Enter search details:\n"; 
	          
	 cout<<"Blood type:"; 
	          
	 cin>>blood_type; 
	          
	 cout<<"Location:"; 
	          
	 cin>>town; 
	          
	 vector<User>users = 
	app.searchUsers(blood_type,town); 
	          
	 app.displayUsers(users); 
	           break; 
	          } 
	          case 3:     
	 cout<<"Logout successful.\n"; 
	           goto end_program; 
	          
	 default: 
	 cout<<"Invalid choice.\n"; 
	       } 
	      } 
	     } 
	     break; 
	     case 3: 
	      goto end_program; 
	      default: 
	       cout<<"Invalid choice.\n"; 
	  } 
	 } 
	 end_program: 
	  cout<<"Exiting Bleed for a cause. Goodbye!\n"; 
	  return 0; 
	} 