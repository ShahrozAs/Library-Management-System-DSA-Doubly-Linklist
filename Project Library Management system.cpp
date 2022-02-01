#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <iomanip>

using namespace std;

class library
{
public:
	library *next, *previous;
	library *S_next, *S_previous;
	library *B_next, *B_previous;

	string  title, author, edition, publication;
	int isbn;
	string name, section, semester, password;
	int enrollment;

	library() 
	{
		isbn = 0;
		title = "0";
		author = "0";
		edition = "0";
		publication = "0";

		name = "0";
		section = "0";
		semester = "0";
		password = "0";
		enrollment = 0;
	}

	~library()
	{
		
	}

};



library *head = NULL;
library *tail = NULL;

library *S_head = NULL;
library *S_tail = NULL;


library *B_head = NULL;
library *B_tail = NULL;


void addbook()
	{

			library *addbooks = new library;
		
		system("cls");
		cout << endl << endl;
		cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
		cout << "\t\t\t\t\t  || LIBRARIAN - INTERFACE ||" << endl;
		cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
		cout << "\n\n\t\t\t\t\t\t   ADD BOOKS " << endl << endl;


			cin.ignore();
			
			cout << "\t\t\t\t\tENTER ISBN : ";
			cin >> addbooks->isbn;
			cout << "\t\t\t\t\tENTER TITLE : ";
			cin >> addbooks->title;

			cout << "\t\t\t\t\tENTER AUTHOR : ";
			cin >> addbooks->author;

			cout << "\t\t\t\t\tENTER EDITION : ";
			cin >> addbooks->edition;

			cout << "\t\t\t\t\tENTER PUBLICATION : ";
			cin >> addbooks->publication;
			cout << endl << endl;
	
	

		
	
			cout << "\t\t\t\t\tBOOK ADDED SUCCESFULLY! \n\n\t\t\t\t\tPress any key to continue..." << endl;
			_getch();
		if (head==NULL)
		{
			head = tail = addbooks;
			addbooks->next = addbooks->previous = NULL;
		}
		else
		{
			tail->next = addbooks;
			tail = addbooks;
			addbooks->previous = tail;
			addbooks->next = NULL;
		}

	}


void addStudentData()
{
	system("cls");
	cout << endl << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
	cout << "\t\t\t\t\t   || STUDENT - INTERFACE ||" << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl << endl;
	library *temp = new library;

		cin.ignore();
		cout << "\t\t\t\t\tEnter student Name     :";
		cin >> temp->name;

		cout << "\t\t\t\t\tEnter student Roll#    :";
		cin >> temp->enrollment;

		cout << "\t\t\t\t\tEnter student Section  :";
		cin >> temp->section;

		cout << "\t\t\t\t\tEnter student Semester :";
		cin >> temp->semester;

		cout << "\t\t\t\t\tEnter student Password :";
		cin >> temp->password;
		cout << endl << endl;

		if (S_head==NULL)
		{
			S_head = S_tail = temp;
			temp->S_next = temp->S_previous = NULL;

		}

		else
		{
			S_tail->S_next=temp;
			S_tail = temp;
			temp->S_previous = S_tail;
			temp->S_next = NULL;
		}

		cout << "\t\t\t\t\tStudent ADDED SUCCESFULLY! \n\n\t\t\t\t\tPress any key to continue..." << endl << endl;
		_getch();
	
}



void login()
{
	library *temp_S = S_head;
	
	library *boro = new library;
    string name, pass;
	int choice;




	system("cls");
	cout << endl << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
	cout << "\t\t\t\t\t   || STUDENT - INTERFACE ||" << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl << endl;


		cout << "\t\t\t\t\tPlease Enter Your name :";
		cin >> name;

		cout << "\t\t\t\t\tPlaese enter your password :";
		cin >> pass;
		cout << endl << endl;
	 
		while (temp_S!=NULL)
		{

			if (temp_S->password == pass)
			{
				cout << "\t\t\t\t\tYou are successfully login your profile !\n";
				cout << "\n\t\t\t\t\tPress any key to continue . . .";
				_getch();


				int select, borrow, returnbook;
				int isbn;

			
				system("cls");
			b:


				library *current;
				library *per;


				per = head;
				current = head->next;

				system("cls");
				cout << endl << endl;
				cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
				cout << "\t\t\t\t\t   || STUDENT - INTERFACE ||" << endl;
				cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl << endl << endl;


				cout << "\t\t\t\t\tWHAT DO YOU WANT NEXT :\n\n";

				cout << "\t\t\t\t\t[1] - For Borrow_Books: \n";
				cout << "\t\t\t\t\t[2] - For Return_Books: \n";
				cout << "\t\t\t\t\t[3] - For Checking all Books in Library :\n";
				cout << "\t\t\t\t\t[4] - For Checking Borrow Books: \n\n";

				cout << "\t\t\t\t\tPlaese enter your choice :";
				cin >> select;

				system("cls");
				cout << endl << endl;
				cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
				cout << "\t\t\t\t\t   || STUDENT - INTERFACE ||" << endl;
				cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl << endl << endl;

				if (select == 1)
				{

					cout << "\t\t\t\t\tPlaese enter Book ISBN: ";
					cin >> isbn;
	               
					if (per->isbn == isbn)
					{
						cout << "\n\n\t\t\t\t\tBOOK FOUND!\n" << endl;
						cout << "\t\t\t\t\tDo You Want to delete this books yes[1], no[2] :";
						cin >> choice;
						if (choice == 1)
						{

							boro->isbn = per->isbn;
							boro->title = per->title;
							boro->author = per->author;
							boro->edition = per->edition;
							boro->publication = per->publication;

							head = current;
							delete(per);



							//cout << "\t\t\t\t\tBOOK DELETED SUCCESFULLY!\n Press any key to continue.." << endl;
							//_getch();

						}

					}

					else
					{
						while (current->isbn != isbn)
						{
							current = current->next;
							per = per->next;
						}

						if (current->next == NULL)
						{
							cout << "\n\n\t\t\t\t\tBOOK FOUND!\n" << endl;
							cout << "\t\t\t\t\tDo You Want to delete this books yes[1], no[2] :";
							cin >> choice;
							if (choice == 1)
							{
								boro->isbn = current->isbn;
								boro->title = current->title;
								boro->author = current->author;
								boro->edition = current->edition;
								boro->publication = current->publication;

								per->next = NULL;
								delete(current);


								//cout << "\t\t\t\t\tBOOK DELETED SUCCESFULLY!\n Press any key to continue.." << endl;
								//_getch();

							}

						}

						else
						{
							cout << "\n\n\t\t\t\t\tBOOK FOUND!\n" << endl;
							cout << "\t\t\t\t\tDo You Want to delete this books yes[1], no[2] :";
							cin >> choice;
							if (choice == 1)
							{

								boro->isbn = current->isbn;
								boro->title = current->title;
								boro->author = current->author;
								boro->edition = current->edition;
								boro->publication = current->publication;

								per->next = current->next;
								delete(current);

								//cout << "\t\t\t\t\tBOOK DELETED SUCCESFULLY!\n Press any key to continue.." << endl;
								//_getch();

							}
						}

					}

					if (B_head==NULL)
					{
						B_head = B_tail = boro;
						boro->B_next = boro->B_previous = NULL;
					}
					else
					{
						B_tail->B_next = boro;
						boro->B_previous = B_tail;
						B_tail = boro;
						boro->B_next = NULL;
					}


					cout << "\n\t\t\t\t\tPROCESSING . . .\n" << endl;
					Sleep(2000);
					cout << "\t\t\t\t\tBOOK BORROW SUCCESSFULLY\n ";
					cout << "\n\t\t\t\t\tPress any key to continue . . .";
					_getch();
					goto b;



				}

				else if (select == 2)
				{
					library *tempr = head;
					
					cout << "\t\t\t\t\tDo yo want to return books: yes [1] or No [2] :";
					cin >> returnbook;

					if (returnbook == 1)
					{

						while (tempr->next!=NULL)
						{
							tempr = tempr->next;
						}
						tempr->next = boro;
						boro->B_previous = tempr;
						tempr = boro;
						boro->B_next = NULL;
					
						cout << "\n\t\t\t\t\tPROCESSING . . .\n";
						cout << "\n\t\t\t\t\tBOOK RETURN SUCCESSFULLY ! \n";

					}
					cout << "\n\t\t\t\t\tPress any key to continue . . .";
					_getch();
					goto b;
				}
				else if (select == 3)
				{
					library *temp = head;
					system("cls");

					cout << setw(75) << setfill('~') << "~" << endl;
					cout << "\t\t\t    BOOK DETAILS " << endl;
					cout << setw(75) << setfill('~') << "~" << endl;

					cout << "ISBN          TiTLE           AUTHOR          EDITION        PUBLICATION " << endl;

					while (temp!= NULL)
					{


						cout << temp->isbn << "\t\t"
							<< temp->title << "\t\t"
							<< temp->author << "\t\t"
							<< temp->edition << "\t\t"
							<< temp->publication << endl
							<< endl;
						temp = temp->next;
					}




					cout << "\n\t\t\t\t\tPress any key to continue . . .";
					_getch();
					goto b;
				}

				else if (select == 4)
				{
					library *temp1 = B_head;
					system("cls");

					cout << setw(75) << setfill('~') << "~" << endl;
					cout << "\t\t\t\t\t    BOOK DETAILS " << endl;
					cout << setw(75) << setfill('~') << "~" << endl;
					cout << "ISBN           TiTLE              AUTHOR               EDITION             PUBLICATION" << endl << endl;

					while (temp1!= NULL)
					{

						cout<< temp1->isbn << "\t\t"
							<< temp1->title << "\t\t"
							<< temp1->author << "\t\t"
							<< temp1->edition << "\t\t"
							<< temp1->publication << endl;
								   
						temp1 = temp1->next;

					}

					cout << "\n\t\t\t\t\tPress any key to continue . . .";
					_getch();
					goto b;
				}


			}

			temp_S = temp_S->S_next;
		}

	
	
}



void deleteBooks()
{
	library *current;
	library *per;
	per = head;
	current = head->next;

	int isbn;
	int choice;
	system("cls");
	cout << endl << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
	cout << "\t\t\t\t\t  || LIBRARIAN - INTERFACE ||" << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
	cout << "\n\n\t\t\t\t\t\t   DELETE BOOKS " << endl << endl;

	if (head == NULL)
	{
		cout << "\t\t\t\t\tTHERE IS NOT BOOKS TO BE DELETED " << endl;
		cout << "\n\t\t\t\t\tPress any key to continue..." << endl;
		_getch();
	}
	else
	{
	cin.ignore();

	cout << "\t\t\t\t\tENTER ISBN : ";
	cin >> isbn;
	//getline(cin, isbn);
	 
   
	if (per->isbn==isbn)
	{
		cout << "\n\n\t\t\t\t\tBOOK FOUND!\n" << endl;
		cout << "\t\t\t\t\tDo You Want to delete this books yes[1], no[2] :";
		cin >> choice;
		if (choice == 1)
		{

		head = current;
		delete(per);
		
			cout << "\t\t\t\t\tBOOK DELETED SUCCESFULLY!\n Press any key to continue.." << endl;
			_getch();

		}

	}

	else
	{
		while (current->isbn!=isbn)
		{
			current = current->next;
			per = per->next;
		}

		if (current->next==NULL)
		{
			cout << "\n\n\t\t\t\t\tBOOK FOUND!\n" << endl;
			cout << "\t\t\t\t\tDo You Want to delete this books yes[1], no[2] :";
			cin >> choice;
			if (choice == 1)
			{


			per->next = NULL;
			delete(current);
		

				cout << "\t\t\t\t\tBOOK DELETED SUCCESFULLY!\n Press any key to continue.." << endl;
				_getch();

			}

		}

		else
		{
			cout << "\n\n\t\t\t\t\tBOOK FOUND!\n" << endl;
			cout << "\t\t\t\t\tDo You Want to delete this books yes[1], no[2] :";
			cin >> choice;
			if (choice == 1)
			{


			per->next = current->next;
			delete(current);

				cout << "\t\t\t\t\tBOOK DELETED SUCCESFULLY!\n Press any key to continue.." << endl;
				_getch();

			}
		}

	}



	}

	
	
}


void editBooks()
{
	int editisbn;
	
	string choice;
	library *current = new library;

	current = head;
	system("cls");
	cout << endl << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
	cout << "\t\t\t\t\t  || LIBRARIAN - INTERFACE ||" << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
	cout << "\n\n\t\t\t\t\t\t   EDIT BOOKS " << endl << endl;

	if (head==NULL)
	{
		cout << "\t\t\t\t\tTHERE IS NO BOOKS TO BE EDITED FIRST ADD THE BOOKS!,Press any key to continue... " << endl;
		_getch();
	}
	cin.ignore();
	cout << "\t\t\t\t\tENTER ISBN : ";
	cin >> editisbn;
	//getline(cin, editisbn);

	while (current!=NULL)
	{

		if (current->isbn == editisbn)
		{
			cout << "\n\n\t\t\t\t\tBOOK FOUND!" << endl << endl;
			cout << "\t\t\t\t\tDO YOU WANT TO EDIT THE BOOK edit [1] OR exit [2]? ";
			getline(cin, choice);

			if (choice == "1")
			{
				cout << "\t\t\t\t\tENTER ISBN : ";
				cin >> current->isbn;

				cout << "\t\t\t\t\tENTER TITLE : ";
				cin >> current->title;

				cout << "\t\t\t\t\tENTER AUTHOR : ";
				cin >> current->author;

				cout << "\t\t\t\t\tENTER EDITION : ";
				cin >> current->edition;

				cout << "\t\t\t\t\tENTER PUBLICATION : ";
				cin >> current->publication;

			

				cout << "\t\t\t\t\tPress any key to proceed.." << endl;
				_getch();
			}
			else if (choice != "1")
			{
				cout << "\t\t\t\t\tPRESS ANY KEY TO CONTINUE.." << endl;
				_getch();
			}
		}

		else
		{
		}
		current = current->next;
	}

	
}

void searchBooks()
{
	int isbn;
	library *temp = head;
	bool print = false;
	system("cls");
	cout << endl << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
	cout << "\t\t\t\t\t  || LIBRARIAN - INTERFACE ||" << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
	cout << "\n\n\t\t\t\t\t\t   SEARCH BOOKS " << endl << endl;

	if (head==NULL)
	{
		cout << "\t\t\t\t\tTHERE IS NO BOOK TO SEARCH PLEASE ADD A BOOK FIRST " << endl;
		cout << "\t\t\t\t\tPress any key to continue..." << endl;
		_getch();
	}
	cin.ignore();

	cout << "\t\t\t\t\tENTER ISBN : ";
	cin >> isbn;
	//getline(cin, isbn);

	while (temp!=NULL)
	{

		if (temp->isbn == isbn)
		{
			cout << "\n\n\t\t\t\t\tBOOK FOUND " << endl << endl;
			cout << "\t\t\t\t\tISBN : " << temp->isbn << endl;
			cout << "\t\t\t\t\tTITLE : " << temp->title << endl;
			cout << "\t\t\t\t\tAUTHOR : " << temp->author << endl;
			cout << "\t\t\t\t\tEDITION : " << temp->edition << endl;
			cout << "\t\t\t\t\tPUBLICATION : " <<temp->publication<< endl;
			print = true;
		}
		if (print)
		{
			cout << "\t\t\t\t\tPRESS ANY KEY TO CONTINUE..." << endl;
			_getch();
		}
		temp = temp->next;
	}

	
}

void viewAllBooks()
{
	system("cls");
	library *temp = head;
	cout << endl << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
	cout << "\t\t\t\t\t  || LIBRARIAN - INTERFACE ||" << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
	cout << "\n\n\t\t\t\t\t\t   VIEW ALL THE BOOKS " << endl << endl;

	if (head==NULL)
	{
		cout << "\t\t\t\t\tTHERE IS NO BOOK TO VIEW FIRST ADD THE BOOK! \n\n\t\t\t\t\tpresss any key to continue..." << endl;
		_getch();
	}
	else
	{
		system("cls");

		cout << setw(90) << setfill('~') << "~" << endl;
		cout << "\t\t\t    BOOK DETAILS " << endl;
		cout << setw(90) << setfill('~') << "~" << endl;

		cout << "ISBN          TiTLE           AUTHOR          EDITION        PUBLICATION " << endl;

		while (temp!=NULL)
		{

			
				cout << temp->isbn << "\t\t"
				<<temp->title << "\t\t"
				<<temp->author<< "\t\t"
				<<temp->edition<< "\t\t"
				<<temp->publication<< endl
				<< endl;
			temp = temp->next;
		}
		

		cout << "\t\t\t\t\tPress any key to continue . . .";
		_getch();
	}
}

void viewAllBooks_isbn(){
	system("cls");
	library *temp = head;
	library *temp1 = head;
	string titlts,authors,editions,publications;
	int isbns;
	cout << endl << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
	cout << "\t\t\t\t\t  || LIBRARIAN - INTERFACE ||" << endl;
	cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
	cout << "\n\n\t\t\t\t\t\t   VIEW ALL THE BOOKS " << endl << endl;

	if (head == NULL)
	{
		cout << "\t\t\t\t\tTHERE IS NO BOOK TO VIEW FIRST ADD THE BOOK! \n\n\t\t\t\t\tpresss any key to continue..." << endl;
		_getch();
	}

	else
	{
		system("cls");

		cout << setw(90) << setfill('~') << "~" << endl;
		cout << "\t\t\t    BOOK DETAILS " << endl;
		cout << setw(90) << setfill('~') << "~" << endl;

		cout << "ISBN          TiTLE           AUTHOR          EDITION        PUBLICATION " << endl;

		while (temp != NULL)
		{
			temp1 = temp;
			while (temp1!=NULL)
			{
				if (temp->isbn>temp1->isbn)
				{
					isbns =        temp->isbn;
					titlts =       temp->title;
					authors =      temp->author;
					editions =     temp->edition;
					publications = temp->publication;

					temp->isbn=       temp1->isbn;
					temp->title=      temp1->title;
					temp->author=     temp1->author;
					temp->edition=    temp1->edition;
					temp->publication=temp1->publication;


					temp1->isbn=isbns;
					temp1->title=titlts;
					temp1->author=authors;
					temp1->edition=editions;
					temp1->publication=publications;

				}
				temp1 = temp1->next;
			}

			cout << temp->isbn << "\t\t"
				<< temp->title << "\t\t"
				<< temp->author << "\t\t"
				<< temp->edition << "\t\t"
				<< temp->publication << endl
				<< endl;
			temp = temp->next;
		}


		cout << "\t\t\t\t\tPress any key to continue . . .";
		_getch();
	}



}

void viewstudentprofile()
{
	system("cls");
	library *temp = S_head;
	cout << setw(90) << setfill('~') << "~" << endl;
	cout << "\t\t\t    Students  DETAILS " << endl;
	cout << setw(90) << setfill('~') << "~" << endl;

	cout << "Name          Enrollment           Section          Semester        Password " << endl;

	while (temp!=NULL)
	{
		cout <<temp->name<< "\t\t"
			<< temp->enrollment << "\t\t"
			<< temp->section << "\t\t"
			<< temp->semester << "\t\t"
			<< temp->password << endl
			<< endl;
		temp = temp->S_next;
	}

	
	cout << "\t\t\t\t\tPress any key to continue . . .";
	_getch();
}



void viewstudentprofile_enrollment()
{
	system("cls");
	library *temp = S_head;
	library *temp1 = S_head;
	int enrollment;
	string names, sections, semesters, passwords;
	cout << setw(90) << setfill('~') << "~" << endl;
	cout << "\t\t\t    Students  DETAILS " << endl;
	cout << setw(90) << setfill('~') << "~" << endl;

	cout << "Name          Enrollment           Section          Semester        Password " << endl;

	while (temp != NULL)
	{
		temp1 = temp;
		while (temp1!=NULL)
		{
			if (temp->enrollment>temp1->enrollment)
			{
				names =    temp->name;
				sections = temp->section;
				semesters = temp->semester;
				passwords = temp->password;
				enrollment = temp->enrollment;


				temp->name=   temp1->name;
				temp->section=temp1->section;
				temp->semester=temp1->semester;
				temp->password=temp1->password;
				temp->enrollment=temp1->enrollment;


				temp1->name=names;
				temp1->section=sections;
				temp1->semester=semesters;
				temp1->password=passwords;
				temp1->enrollment=enrollment;




			}
			temp1 = temp1->S_next;
		}

		cout << temp->name << "\t\t"
			<< temp->enrollment << "\t\t"
			<< temp->section << "\t\t"
			<< temp->semester << "\t\t"
			<< temp->password << endl
			<< endl;
		temp = temp->S_next;
	}


	cout << "\t\t\t\t\tPress any key to continue . . .";
	_getch();
}


int quit(void)
{
	system("cls");

	cout << "\n\n\n\n\t\t\t\t\t WAIT FOR A MOMENT , PROGRAM IS GOING TO CLOSE ! ";
	Sleep(3000);
	cout << "\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@     @@         @@     @@@@@@@@@@@@            \n";
	cout << "\t\t\t\t\t@@        @@      @@       @@      @@                         \n";
	cout << "\t\t\t\t\t@@        @@       @@     @@       @@                         \n";
	cout << "\t\t\t\t\t@@@@@@@@@@@@        @@   @@        @@                         \n";
	cout << "\t\t\t\t\t@@          @@       @@ @@         @@@@@@@@@               \n";
	cout << "\t\t\t\t\t@@          @@        @@@          @@                         \n";
	cout << "\t\t\t\t\t@@          @@        @@@          @@                         \n";
	cout << "\t\t\t\t\t@@@@@@@@@@@@          @@@          @@@@@@@@@@@@            \n";

	cout << endl;

	cout << "\n\n\t\t\t\t\t" << setw(58) << setfill('~') << "~" << endl;
	cout << "\t\t\t\t\t||           COPY RIGHT - SHEHROZ ASHRAF KHAN           ||\n";
	cout << "\t\t\t\t\t||                      - MUHAMMAD HASEEB AKBAR         ||\n";
	cout << "\t\t\t\t\t||                      - MUHAMMAD AMEER HAMZA          ||\n";
	cout << "\t\t\t\t\t" << setw(58) << setfill('~') << "~" << endl;
	cout << "\n\n\t\t\t\t\tPress any key to continue . . .";
	_getch();
	exit(1);
}


int main()
{
	system("color 02");

	string c, choice;
	int q;

	 

	system("CLS");
	do
	{
		system("cls");
		cout << endl << endl;
		cout << "\t\t\t\t\t" << setw(32) << setfill('~') << "~" << endl;
		cout << "\t\t\t\t\t|| LIBRARY MANAGMENT SOFTWARE ||" << endl;
		cout << "\t\t\t\t\t" << setw(32) << setfill('~') << "~" << endl;
		cout << "\t\t\t\t\t       Discover Knowledge " << endl;
		cout << endl << endl << endl;
		cout << "\t\t\t\t\t     PROGRAM IS LOADING . . . \n\n\t\t\t\t\t\t JUST A MOMENT !\n ";
		//Sleep(3000);

		system("cls");
		cout << endl << endl;
		cout << "\t\t\t\t\t" << setw(32) << setfill('~') << "~" << endl;
		cout << "\t\t\t\t\t|| LIBRARY MANAGMENT SOFTWARE ||" << endl;
		cout << "\t\t\t\t\t" << setw(32) << setfill('~') << "~" << endl;
		cout << "\t\t\t\t\t       Discover Knowledge " << endl;

		cout << "\n\n\t\t\t\t\t[1] - For Librarian Interface \n";
		cout << "\t\t\t\t\t[2] - For Student Interface \n";
		cout << "\t\t\t\t\t[3] - About  \n";
		cout << "\t\t\t\t\t[4] - Quit \n\n";
		cout << "\n\t\t\t\t\tEnter your choice here : ";
		cin >> q;

		if (q == 1)
		{
		a:
			system("cls");
			cout << endl << endl;
			cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
			cout << "\t\t\t\t\t  || LIBRARIAN - INTERFACE ||" << endl;
			cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;


			cout << "\n\n\n\t\t\t\t\t[1] - ADD A BOOK " << endl;
			cout << "\t\t\t\t\t[2] - DELETE A BOOK " << endl;
			cout << "\t\t\t\t\t[3] - EDIT A BOOK " << endl;
			cout << "\t\t\t\t\t[4] - SEARCH A BOOK " << endl;
			cout << "\t\t\t\t\t[5] - VIEW ALL THE BOOKS " << endl;
			cout << "\t\t\t\t\t[6] - VIEW ALL THE BOOKS ASCENDING TO DESCENDING ORDER " << endl;
			cout << "\t\t\t\t\t[7] - VIEW ALL STUDENT PROFILE " << endl;
			cout << "\t\t\t\t\t[8] - VIEW ALL STUDENT PROFILE ASCENDING TO DESCENDING ORDER " << endl;
			cout << "\t\t\t\t\t[9] - QUIT " << endl;
			cout << "\t\t\t\t\t[10] - MAIN " << endl;

			cout << "\n\t\t\t\t\tEnter your choice here : ";
			cin >> c;

			if (c == "1")
			{
			    addbook();
				goto a;
			}
			else if (c == "2")
			{
				deleteBooks();
			}

			else if (c == "3")
			{
				editBooks();
			}

			else if (c == "4")
			{
				searchBooks();
			}

			else if (c == "5")
			{

				viewAllBooks();
			
			}

			else if (c == "6")
			{

				viewAllBooks_isbn();
			}

			else if (c == "7")
			{
		    viewstudentprofile();
			}


			else if (c == "8")
			{
				viewstudentprofile_enrollment();
			}


			else if (c == "9")
			{
				quit();
			}
			else
			{
				main();
			}
		}

		else if (q == 2)
		{
		b:
			system("cls");
			cout << endl << endl;
			cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;
			cout << "\t\t\t\t\t   || STUDENT - INTERFACE ||" << endl;
			cout << "\t\t\t\t\t" << setw(31) << setfill('~') << "~" << endl;


			cout << "\n\t\t\t\t\t[1] - FOR ADD STUDENT " << endl;
			cout << "\t\t\t\t\t[2] - FOR login STUDENT " << endl;
			cout << "\t\t\t\t\t[3] - FOR Quit " << endl;
			cout << "\t\t\t\t\t[4] - FOR MAIN " << endl;

			cout << "\n\t\t\t\t\tEnter your choice here : ";
			cin >> choice;

			if (choice == "1")
			{
				addStudentData();
				goto b;
			}

			else if (choice == "2")
			{
				login();

			   
			}
			else if (choice == "3")
			{
				quit();
			}
			else
			{
				main();
			}
		}

		else if (q == 3)
		{
			system("cls");
			cout << endl << endl;
			cout << "\t\t\t\t\t\t\t" << setw(21) << setfill('~') << "~" << endl;
			cout << "\t\t\t\t\t\t\t|| ABOUT - PROGRAM ||\n";
			cout << "\t\t\t\t\t\t\t" << setw(21) << setfill('~') << "~" << endl;
			cout << endl << endl << endl;
			cout << "\t\t\t\t\t[1] - IF YOU PRESS 1 A LIBRARIAN POP-UP MAIN MENU APPEAR \n\t\t\t\t\tIN WHICH YOU CAN ADD A BOOK \n\t\t\t\t\tDELETE A BOOK EDIT A BOOK SEARCH A BOOK AND YOU CAN \n\t\t\t\t\tVIEW ALL BOOKS IN LIBRARY  \n\t\t\t\t\tAND ALSO VIEW ALL STUDENTS PROFILE\n\n";

			cout << "\t\t\t\t\t[2] - IF YOU PRESS 2 A STUDENT POP - UP MAIN MENU APPEAR \n\t\t\t\t\tIN WHICH YOU CAN CREATE YOUR STUDENT PROFILE\n\t\t\t\t\tOR USE THIS PROFILE TO LOGIN YOUR ACCOUNT \n\t\t\t\t\tTHEN YOU CAN BORROW A BOOK RETURN A BOOK\n\n";

			cout << "\t\t\t\t\t[3] - IF YOU PRESS 3 THE ABOUT MENU IS SHOWN\n\n";

			cout << "\t\t\t\t\t[4] - IF YOU PRESS 4 THE PROGRAM IS CLOSED\n\n";
			cout << "\n\n\t\t\t\t\tPress any key to continue . . .";
			_getch();
		}

		else if (q == 4)
		{

			quit();
		}

	} while (q != 10);
	_getch();
	system("pause");
}