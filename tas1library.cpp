#include<iostream>
using namespace std;

int main(){
	int option,returndate,issuedate , bookname;
	cout<<"1 - Borrow a book"<<endl;
	cout<<"2 - Return a book"<<endl;
	cout<<"Choose any option\n";
	cin>>option;
	if(option==1){
	cout<<"Enter your book name";
	cin >> bookname;
	cout<<"Book issued for 12 Thank You !";
}
	else if(option==2){
	
	cout << "Issue date : ";
	cin >> issuedate;
	cout << "Return date : ";
	cin >> returndate;
     if((returndate - issuedate) > 12){
	 cout<<"You returned the book very late "<<returndate-issuedate <<" $ ";
    }
   }

	else
	{
		cout<<"Invalid number";
	}
	return 0;
}
