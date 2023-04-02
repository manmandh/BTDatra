#include <bits/stdc++.h>
using namespace std;

// dinh nghia cau trúc sinh vien
struct Student
{
	string name, dob;
	float mathMark, physicMark, languageMark;
};
// dinh nghia mot node
struct Node
{
	Student s;
	Node *next;
};

typedef struct Node *node;

// khoi tao mot node moi voi du lieu là student
node createNode(Student s)
{
	node temp = new Node();
	temp->s = s;
	temp->next = NULL;
	return temp;
}

void inputStudent(node &head, int n)
{
	node temp = head;
	for (int i = 0; i < n; i++)
	{
		cin.ignore();
		Student s;
		cout << "Enter name: ";
		getline(cin, s.name);
		cout << "Enter day of birth: ";
		getline(cin, s.dob);
		cout << "Enter math's mark: ";
		cin >> s.mathMark;
		cout << "Enter physic's mark: ";
		cin >> s.physicMark;
		cout << "Enter language's mark: ";
		cin >> s.languageMark;
		cin.ignore();
		node student = createNode(s);
		if (head == NULL)
		{
			head = student; // neu danh sach null (chua co sinh vien nao) thi gan no la sinh vien dau tien
			temp = head;
		}
		else
		{
			temp->next = student;
			temp = temp->next;
		}
	}
}

int getSize(node &head)
{
	int count = 0;
	while (head != NULL)
	{
		++count;
		head = head->next;
	}
	return count;
}

void printList(node &head)
{
	if (head == NULL)
	{
		cout << "Empty List" << endl;
		return;
	}
	else
	{
		cout << "List of students" << endl;
		while (head != NULL)
		{
			cout << head->s.name << endl;
			head = head->next;
		}
	}
}

void enterStudent(node &head)
{
	Student s;
	cin.ignore();
	cout << "Enter name: ";
	getline(cin, s.name);
	cout << "Enter day of birth: ";
	getline(cin, s.dob);
	cout << "Enter math's mark: ";
	cin >> s.mathMark;
	cout << "Enter physic's mark: ";
	cin >> s.physicMark;
	cout << "Enter language's mark: ";
	cin >> s.languageMark;
	node student = createNode(s);
	node temp = head;
	// duyet den phan tu cuoi gan next cho node moi
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = student;
}

void countStudentByYear(node &head, string yearFind)
{
	int count = 0;
	if (head == NULL)
	{
		cout << "Empty List" << endl;
		return;
	}
	else
	{
		cout << "Hello" << endl;
		int size = getSize(head);
		while (head != NULL)
		{
			string year = head->s.dob.substr(head->s.dob.size() - 4, 4);
			if (year == yearFind)
			{
				++count;
			}
			head = head->next;
		}
	}
	cout << "Number of student with year: " << yearFind << " is: " << count << endl;
}

void checkName(node &head, string name)
{
	if (head == NULL)
	{
		cout << "Empty List" << endl;
		return;
	}
	else
	{
		while (head != NULL)
		{
			if (name == head->s.name)
			{ // kiem tra ten trung hay khong
				cout << "Exists" << endl;
				return;
			}
			head = head->next;
		}
	}
	cout << "Not exists" << endl;
}

void deleteStudentByName(node &head, string name)
{
	if (head == NULL)
	{
		cout << "Empty List" << endl;
		return;
	}
	else
	{
		node temp = head;
		while (temp != NULL)
		{
			if (temp->next->s.name == name)
			{
				temp->next = temp->next->next; // gan next cho phan next cua node tim duoc
			}
			temp = temp->next;
		}
	}
}

void findMaxAverage(node &head)
{
	if (head == NULL)
	{
		cout << "Empty List" << endl;
		return;
	}
	else
	{
		node temp1 = head;
		node temp2 = head;
		float maxAverage = 0;
		while (temp1 != NULL)
		{
			float avg = (temp1->s.languageMark + temp1->s.mathMark + temp1->s.physicMark) / 3;
			maxAverage = (avg > maxAverage) ? avg : maxAverage;
			temp1 = temp1->next;
		}
		cout << "List of student with the best average: " << endl;
		while (temp2 != NULL)
		{
			float avg = (temp2->s.languageMark + temp2->s.mathMark + temp2->s.physicMark) / 3;
			if (avg == maxAverage)
			{
				cout << "Name: " << temp2->s.name << endl;
				cout << "Average: " << avg << endl;
				cout << "+--------------------------------+" << endl;
			}
			temp2 = temp2->next;
		}
	}
}

void mathMarkMore5(node &head)
{
	bool check = false;
	if (head == NULL)
	{
		cout << "Empty List" << endl;
		return;
	}
	else
	{
		cout << "Students with math's mark > 5" << endl;
		while (head != NULL)
		{
			if (head->s.mathMark > 5)
			{
				check = true;
				cout << "Name: " << head->s.name << endl;
			}
		}
	}
	if (!check)
		cout << "Have no student" << endl;
}

void writeFile(node &head)
{
	ifstream in;
	in.open("StudentList.txt");
	while (head != NULL)
	{
		in >> head->s.name >> head->s.dob >> head->s.languageMark >> head->s.mathMark >> head->s.physicMark;
		head = head->next;
	}
}

int main()
{
	node head = NULL;
	int number;
	string name;
	string year;
	int n;
	do
	{

		cout << "1.Input n students information." << endl;
		cout << "2.Print out the student list." << endl;
		cout << "3.Add a new student to the list." << endl;
		cout << "4.Count the number of students in a given year of birth." << endl;
		cout << "5.Check if a student name x exists in the list or not." << endl;
		cout << "6. Delete a student from the list by a given name x." << endl;
		cout << "7.Find the student(s) having the biggest average of math, physic and language marks." << endl;
		cout << "8.Print the list of students whose math mark is less than " << endl;
		cout << "9.Write the student list to a file named StudentList.txt." << endl;
		cout << "10.Exit" << endl;
		cout << "==> Enter  number : ";
		cin >> number;
		switch (number)
		{

		case 1:
			cout << " Enter n";
			cin >> n;
			inputStudent(head, n);
			break;

		case 2:
			printList(head);
			break;
		case 3:
			enterStudent(head);

			break;
		case 4:

			cout << "Enter the year of birth to search";
			cin >> year;
			countStudentByYear(head, year);
			break;
		case 5:

			cout << "Enter name";
			cin >> name;
			checkName(head, name);
			break;

		case 6:
			cout << "Enter name";
			cin >> name;
			deleteStudentByName(head, name);
			break;
		case 7:
			findMaxAverage(head);
			break;
		case 8:
			mathMarkMore5(head);
			break;
		case 9:
			writeFile(head);
			break;
		}
	} while (number != 10);
	cout << "Exit";
	return 0;
}