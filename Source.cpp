#include<iostream>
using namespace std;
string arr1[20], arr3[20], arr4[20], arr5[20];
int arr2[20];

int total=0;

void enter()
{
	int choice;
	cout << "how many students do you want to enter: ";
	cin >> choice;
	if(total==0){
	total += choice;
	for (int i = 0; i < choice; i++) {
		cout << "\nEnter data of student: " << i + 1 << endl << endl;
		cout << "Enter name: ";
		cin >> arr1[i];
		cout << "Enter rollno: ";
		cin >> arr2[i];
		cout << "Enter course name: ";
		cin >> arr3[i];
		cout << "Enter class: ";
		cin >> arr4[i];
		cout << "Enter your contact number: ";
		cin >> arr5[i];
	}
	}
	else {
		
		for (int i = total; i <total+ choice; i++) {
			cout << "\nEnter data of student: " << i + 1 << endl << endl;
			cout << "Enter name: ";
			cin >> arr1[i];
			cout << "Enter rollno: ";
			cin >> arr2[i];
			cout << "Enter course name: ";
			cin >> arr3[i];
			cout << "Enter class: ";
			cin >> arr4[i];
			cout << "Enter your contact number: ";
			cin >> arr5[i];
		}
		total += choice;
	}
}
void show()
{
	if (total == 0) {
		cout << "No data is entered" << endl;
	}
	else {
		cout << "\n\n=========Show================" << endl << endl;
		for (int i = 0; i < total; i++) {
			cout << "Data of student: " << i + 1 << endl << endl;
			cout << "Name: " << arr1[i] << endl;
			cout << "Rollno: " << arr2[i] << endl;
			cout << "course: " << arr3[i] << endl;
			cout << "Class: " << arr4[i] << endl;
			cout << "Contact: " << arr5[i] << endl << endl << endl;
		}
	}
}
void search()
{

	if (total == 0) {
		cout << "No data is entered" << endl;
	}
	else {
		int rollno;
		cout << "Enter rollno of student which you want to search: ";
		cin >> rollno;
		for (int i = 0; i < total; i++)
		{
			if (rollno == arr2[i]) {
				cout << "Data of student: " << i + 1 << endl << endl;
				cout << "Name: " << arr1[i] << endl;
				cout << "Rollno: " << arr2[i] << endl;
				cout << "course: " << arr3[i] << endl;
				cout << "Class: " << arr4[i] << endl;
				cout << "Contact: " << arr5[i] << endl;
			}
		}
	}
}
void update()
{

	if (total == 0) {
		cout << "No data is entered" << endl;
	}
	else {
		int rollno;
		cout << "Enter rollno of student which you want to update: ";
		cin >> rollno;
		for (int i = 0; i < total; i++)
		{
			if (rollno == arr2[i]) {
				cout << "\n\n\n======Previous data";
				cout << "Data of student: " << i + 1 << endl << endl;
				cout << "Name: " << arr1[i] << endl;
				cout << "Rollno: " << arr2[i] << endl;
				cout << "course: " << arr3[i] << endl;
				cout << "Class: " << arr4[i] << endl;
				cout << "Contact: " << arr5[i] << endl;
				cout << "\n\n\n=======Enter new data========";
				cout << "\nEnter name: ";
				cin >> arr1[i];
				cout << "Enter rollno: ";
				cin >> arr2[i];
				cout << "Enter course name: ";
				cin >> arr3[i];
				cout << "Enter class: ";
				cin >> arr4[i];
				cout << "Enter your contact number: ";
				cin >> arr5[i];
			}
		}
	}
}
void deletrecord()
{

	if (total == 0) {
		cout << "No data is entered" << endl;
	}
	else {
	int n;
	cout << "\nPress 1 to delet full record." << endl;
	cout << "Press 2 to delete specific recorde." << endl;
	cin >> n;
	if (n == 1) {
		total = 0;
		cout << "All record is deletes..." << endl;
	}
	else if (n == 2) {
		int rollno;
		cout << "Enter rollno which you want to delete. " << endl;
		cin >> rollno;
		for (int i = 0; i < total; i++) {
			if (rollno == arr2[i]) {
				for (int j = i; j < total; j++) {
					arr1[j] = arr1[j + 1];
					arr2[j] = arr2[j + 1];
					arr3[j] = arr3[j + 1];
					arr4[j] = arr1[j + 1];
					arr5[j] = arr5[j + 1];
				}
				total--;
				cout << "Your required record is deleted: " << endl;

			}
		}
	}
	}
}

int main() {
	int value;
	while(true){
	cout << "================================================="<<endl<<endl;
	cout << "Press 1 to enter data";
	cout << "\nPress 2 to show data";
	cout << "\nPress 3 to search data";
	cout << "\nPress 4 to update data";
	cout << "\nPress 5 to delet data";
	cout << "\nPress 6 to exit"<<endl<<endl;

	cout << "================================================="<<endl;
	cin >> value;
	switch (value)
	{
	case 1:
		enter();
		break;
	case 2:
		show();
		break;
	case 3:
		search();
		break;
	case 4:
		update();
	case 5:
		deletrecord();
		break;
	case 6:
		exit(0);
		break;
	default:
		cout << "Invalid input"<<endl;

	}
	}
	return 0;
}