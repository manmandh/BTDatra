#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <fstream>
using namespace std;

struct Student
{
    int id;
    string name;
    float mathMark, physicMark, chemistryMark;
};

struct Node
{
    Student data;
    Node *next;
};

struct LinkedList
{
    Node *head;
    Node *tail;
};

/* Linked list */
// Khoi tao list
void initList(LinkedList &list)
{
    list.head = NULL;
    list.tail = NULL;
}

bool isEmptyList(LinkedList &list)
{
    return list.head == NULL;
}

// Tim kiem ten hoc sinh co ton tai trong danh sach khong
bool isStudentNameExistList(LinkedList &list, string &name)
{
    if (!isEmptyList(list))
    {
        Node *node = list.head;
        while (node != NULL)
        {
            if (node->data.name == name)
            {
                return true;
            }

            node = node->next;
        }
    }
    return false;
}

// Tao node moi
Node *createNode(Student &s)
{
    Node *node = new Node();
    node->data = s;
    node->next = NULL;
    return node;
}

// Them dau
void addHead(LinkedList &list, Node *node)
{
    if (list.head == NULL)
    {
        list.head = node;
        list.tail = node;
    }
    else
    {
        node->next = list.head;
        list.head = node;
    }
}

// Them cuoi
void addTail(LinkedList &list, Node *node){
       if (list.head == NULL)
    {
        list.head = node;
        list.tail = node;
    }
    else
    {
        list.tail->next = node;
        list.tail = node;
    }
}

//Sap xep hoc sinh tang dan theo diem toan
void swapNode(Node* a, Node* b) {
    
}

bool sortAscStudentByMathmark(LinkedList &list) {
    if (isEmptyList(list))
    {
        return false;
    }

    Student temp = {};

    for (Node* p = list.head; p != NULL; p = p->next)
    {
        for (Node *q = p->next; q != NULL; q = q->next)
        {
            if (p->data.mathMark > q->data.mathMark)
            {
                temp = p->data;
                p->data = q->data;
                q->data = temp;             
            }
        }
    }
    return true;
}

/*Nhap xuat*/
//Nhap mot hoc sinh
void inputStudent(Student &s)
{
    cout << "\nNhap id: ";
    cin >> s.id;
    cin.ignore();
    cout << "Nhap ten: ";
    getline(cin, s.name);
    cout << "Nhap diem toan: ";
    cin >> s.mathMark;
    cout << "Nhap diem ly: ";
    cin >> s.physicMark;
    cout << "Nhap diem hoa: ";
    cin >> s.chemistryMark;
    cin.ignore();
}

void inputListStudent(LinkedList &list, int &n)
{
    Student s = {};
    for (int i = 0; i < n; i++)
    {
        cout << "\nHoc sinh thu " << i + 1;
        inputStudent(s);
        addHead(list, createNode(s));
    }
}

void outputStudent(Student &s, int tableCell = 20, int marginLeft = 2, int countCol = 5)
{
    cout << endl
        << setw(marginLeft) << left << "|"
        << setw(tableCell) << left << s.id
        << setw(marginLeft) << left << "|"
        << setw(tableCell) << left << s.name
        << setw(marginLeft) << left << "|"
        << setw(tableCell) << left << s.mathMark
        << setw(marginLeft) << left << "|"
        << setw(tableCell) << left << s.physicMark
        << setw(marginLeft) << left << "|"
        << setw(tableCell) << left << s.chemistryMark
        << setw(marginLeft) << left << "|";
}

void outputHeader(int tableCell = 20, int marginLeft = 2, int countCol = 5)
{
    cout
        << endl
        << setw(marginLeft) << left << "|"
        << setw(tableCell) << left << "Id"
        << setw(marginLeft) << left << "|"
        << setw(tableCell) << left << "Ten"
        << setw(marginLeft) << left << "|"
        << setw(tableCell) << left << "Diem toan"
        << setw(marginLeft) << left << "|"
        << setw(tableCell) << left << "Diem ly"
        << setw(marginLeft) << left << "|"
        << setw(tableCell) << left << "Diem hoa"
        << setw(marginLeft) << left << "|";
    cout
        << endl
        << setw((tableCell * countCol + marginLeft * countCol) + 1)
        << setfill('=') << "" << setfill(' ');
}

void outputListStudent(LinkedList &list)
{
    if (isEmptyList(list))
    {
        cout << "\nDanh sach sinh vien rong!";
        return;
    }

    outputHeader();
    for (Node *p = list.head; p != NULL; p = p->next)
    {
        outputStudent(p->data);
    }
}

bool exportFile(LinkedList &list)
{
    if (isEmptyList(list))
    {
        return false;
    }
    
    int marginLeft = 2;
    int tableCell = 20;
    int countCol = 5;
    string birtday = "";

    fstream fo;
    //Mo file de ghi, truong hop khong co file se tao moi file
    fo.open("StudentList.txt", ios::out);
    
        fo  << setw(45) << setfill('=') << "" << setfill(' ')
            << " "
            << "MANAGE STUDENT LIST"
            << " "
            << setw(45) << setfill('=') << "" << setfill(' ');

        fo  << endl
            << setw(marginLeft) << left << "|"
            << setw(tableCell) << left << "Id"
            << setw(marginLeft) << left << "|"
            << setw(tableCell) << left << "Ten"
            << setw(marginLeft) << left << "|"
            << setw(tableCell) << left << "Diem toan"
            << setw(marginLeft) << left << "|"
            << setw(tableCell) << left << "Diem ly"
            << setw(marginLeft) << left << "|"
            << setw(tableCell) << left << "Diem hoa"
            << setw(marginLeft) << left << "|";
    fo
        << endl
        << setw((tableCell * countCol + marginLeft * countCol) + 1)
        << setfill('=') << "" << setfill(' ');
    for (Node* p = list.head; p != NULL; p = p->next)
    {
        fo  << endl
            << setw(marginLeft) << left << "|"
            << setw(tableCell) << left << p->data.id
            << setw(marginLeft) << left << "|"
            << setw(tableCell) << left << p->data.name
            << setw(marginLeft) << left << "|"
            << setw(tableCell) << left << p->data.mathMark
            << setw(marginLeft) << left << "|"
            << setw(tableCell) << left <<p->data.physicMark
            << setw(marginLeft) << left << "|"
            << setw(tableCell) << left << p->data.chemistryMark
            << setw(marginLeft) << left << "|";
    }
    fo.close();
    return true;
}

/*Menu*/
void titleMenu(string title = "QUAN LY HOC SINH", int length = 43)
{
    cout
        << setw(length) << setfill('=') << "" << setfill(' ')
        << " "
        << title
        << " "
        << setw(length) << setfill('=') << "" << setfill(' ');
}

//Menu nay thay cho lenh dung mang hinh
void menuContinue()
{
    cout << "\nNhap phim bat ki de tiep tuc...";
    cin.get();
}

void menu(char &choose)
{
    titleMenu();
    cout << "\n1) Nhap danh sach hoc sinh";
    cout << "\n2) Xuat danh sach hoc sinh";
    cout << "\n3) Sap xep hoc sinh theo diem Toan";
    cout << "\n4) Tinh diem trung binh cua lop";
    cout << "\n5) Xuat ra hoc sinh gioi cua lop";
    cout << "\n6) Dem va xuat ra so luong hoc sinh cua tung loai(Gioi - Kha - TB - Yeu)";
    cout << "\n7) Xuat danh sach hoc sinh ra file StudentList.txt";
    cout << "\n0) Thoat";
    cout << "\nChon chuc nang: ";
    cin >> choose;
    cin.ignore();
}

void logic(LinkedList &list)
{
    Student s{};
    int n(0);

    /*Data test remember delete*/
    Student s1{1, "Man Man1", 3, 3, 2};
    Student s2{2, "Man Man2", 5, 7, 2};
    Student s3{3, "Man Man3", 1, 8, 6};
    Student s4{4, "Man Man4", 4, 4, 10};
    Student s5{5, "Man Man5", 7, 5, 9};
    addTail(list, createNode(s1));
    addTail(list, createNode(s2));
    addTail(list, createNode(s3));
    addTail(list, createNode(s4));
    addTail(list, createNode(s5));
    /*end data*/
    char choose = ' ';
    do
    {
        system("cls");
        menu(choose);
        switch (choose)
        {
        case '1': // Nhap danh sach hoc sinh
            system("cls");
            titleMenu("Nhap danh sach hoc sinh");
            cout << "\nNhap so luong sinh vien: ";
            cin >> n;
            inputListStudent(list, n);
            menuContinue();
            break;
        case '2': // Xuat danh sach hoc sinh
            system("cls");
            titleMenu("Xuat danh sach hoc sinh");
            outputListStudent(list);
            menuContinue();
            break;
        case '3': // Sap xep hoc sinh theo diem Toan
            system("cls");
            titleMenu("Sap xep hoc sinh theo diem Toan");
            if(sortAscStudentByMathmark(list)) {
                cout << "\nDa sap xep tang dan danh sach sinh vien";
            } else
            {
                cout << "\nDanh sach trong!";
            }
            menuContinue();
            break;
        case '4': // Tinh diem trung binh cua lop
            system("cls");
            titleMenu("Tinh diem trung binh cua lop");
     
            menuContinue();
            break;
        case '5': // Xuat ra hoc sinh gioi cua lop
            system("cls");
            titleMenu("Xuat ra hoc sinh gioi cua lop");
         
            menuContinue();
            break;
        case '6': // Dem va xuat ra so luong hoc sinh cua tung loai(Gioi - Kha - TB - Yeu)
            system("cls");
            titleMenu("Dem va xuat ra so luong hoc sinh cua tung loai(Gioi - Kha - TB - Yeu)");
           
            menuContinue();
            break;
        case '7': // Xuat danh sach hoc sinh ra file StudentList.txt
            system("cls");
            titleMenu("Xuat danh sach hoc sinh ra file StudentList.txt", 14);
           
            menuContinue();
            break;
        case '0':
            cout << "\nThoat chuong trinh";
            break;
        default:
            system("cls");
            cout << "Vui long chuc nang tu 0 toi 7!";
            menuContinue();
            break;
        }
    } while (choose != '0');
}

int main()
{
    LinkedList list;
    initList(list);
    logic(list);
    return 0;
}
