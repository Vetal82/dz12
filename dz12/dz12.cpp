// dz12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

////���������� �������� �� ����. 8 - 9,
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	int i, j;
//	// ���� ��� ����� ������������� ������.
//	// m1 � ������� �����, m2 � ������� ��������
//	int m1, m2;
//	cout << "How many rows:\n";
//	cin >> m1;
//	int** pArr = new int* [m1];
//	for (i = 0; i < m1; i++)
//	{
//		cout << "How many cells in the row-" << i << "?\n";
//		cin >> m2;
//		pArr[i] = new int[m2];
//		// ���������� ����� ����������� ����������
//// ������ ������ �� ����
//		for (j = 0; j < m2; j++)
//		{
//			pArr[i][j] = i * j;
//			cout << pArr[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	// ��������� �������� ����������� ������...
//	for (i = 0; i < m1; i++)
//	{
//		delete[]pArr[i];
//	}
//	delete[]pArr;
//	return 0;
//}
//
////���������� �������� �� ����. 10 - 11
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	// m1 � ������� �����, m2 � ������� ��������
//	int m1 = 5, m2 = 5;
//	int i, j, k;
//	int** pXArr = new int* [m1];
//	k = m2;
//	// ���������� ����������� ���������� ������
//	for (i = 0; i < m1; i++, k--)
//	{
//		pXArr[i] = new int[k];
//	}
//	for (i = 0; i < m1; i++, m2--)
//	{
//		for (j = 0; j < m2; j++)
//		{
//			// ���������� ����� �����������
//			// ���������� ������ ������ �� ����
//			pXArr[i][j] = 5;
//			cout << pXArr[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	// ��������� �������� ����������� ������...
//	for (i = 0; i < m1; i++)
//	{
//		delete[]pXArr[i];
//	}
//	delete[]pXArr;
//	return 0;
//}
//
////���������� �������� �� ����. 11 - 12
//
//#include <iostream>
//using namespace std;
//int main()
//{
//	// m1 � ������� ����� (������),
//	// m2 � ������� �������� (������), m3 � �������
//	int m1 = 5, m2 = 3, m3 = 2;
//	int i, j;
//	// �������� �� �������� �� �������� :)
//	int*** pXArr = new int** [m1];
//	// ���������� ����������� ���������� ������
//	for (i = 0; i < m1; i++)
//	{
//		pXArr[i] = new int* [m2];
//		for (j = 0; j < m2; j++)
//		{
//			pXArr[i][j] = new int[m3];
//		}
//	}
//	// ������ �� �������� ������
//	pXArr[1][2][3] = 750;
//	cout << pXArr[1][2][3] << "\n";
//	// ��������� � �����������, �������� ���������
//	for (i = 0; i < m1; i++)
//	{
//		for (j = 0; j < m2; j++)
//		{
//			delete[]pXArr[i][j];
//		}
//		delete[]pXArr[i];
//	}
//	delete[] pXArr;
//	return 0;
//}

//2.	���� ���������� �����.�������� � ����� ��� ����� � ���� : ���� ����� s1 - � ������, ������ - ����� s2 - � ������;
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//void printArray(const vector<vector<int>>& arr) {
//    for (const auto& row : arr) {
//        for (int num : row) {
//            cout << num << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    
//    vector<vector<int>> array = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };
//
//    
//    int s1 = 1; 
//    int s2 = 3; 
//
//    
//    array.insert(array.begin() + s1, vector<int>(array[0].size(), 0));
//
//    
//    array.insert(array.begin() + s2, vector<int>(array[0].size(), 0));
//
//    
//    cout << "Massive pisla dodania zero:" << endl;
//    printArray(array);
//
//    return 0;
//}

//3.	���� ���������� �����.����������� ������ ����� �� ���� ����������.��� ����� ������, �����, ..., ������� ����� ������.

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//
//void printArray(const vector<vector<int>>& arr) {
//    for (const auto& row : arr) {
//        for (int num : row) {
//            cout << num << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    
//    vector<vector<int>> array = {
//        {11, 22, 13},
//        {41, 65, 86},
//        {7, 28, 59}
//    };
//
//    
//    vector<int> firstRow = array.front(); 
//    array.erase(array.begin()); 
//    array.push_back(firstRow); 
//
//    
//    for (int i = array.size() - 1; i > 0; --i) {
//        swap(array[i], array[i - 1]);
//    }
//
//    
//    cout << "Massive:" << endl;
//    printArray(array);
//
//    return 0;
//}

//4.	 �������� �������, ��� ������� � ����� ���������� ��������� ��������� �����, �� ���������� � N �����(N - ������� ���� �����).
//N = 5 � = *
//
//*
//**
//***
//**
//*
//
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void printTriangle(int N, char C) {
//    
//    if (N % 2 == 0) {
//        cout << "N neparne" << endl;
//        return;
//    }
//
//    
//    vector<vector<char>> triangle(N, vector<char>(N, ' '));
//
//    // ���������� ���������� ������
//    int a = N / 2;
//    for (int i = 0; i <= a; ++i) {
//        for (int j = a - i; j <= a + i; ++j) {
//            triangle[i][j] = C;
//        }
//    }
//    for (int i = a + 1; i < N; ++i) {
//        for (int j = i - a; j < N - (i - a); ++j) {
//            triangle[i][j] = C;
//        }
//    }
//
//    
//    for (const auto& row : triangle) {
//        for (char symbol : row) {
//            cout << symbol << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    int N = 5; 
//    char C = '*'; 
//    printTriangle(N, C);
//    return 0;
//}

//5.	³��� ��� ��� N ���� : �������, ���� �� ������ � �����������.��������� ������� ���� 9 - � �����, �� ����� ������ "5".

#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct Student {
    string surname;
    int grade;
    int informaticsGrade;
};

int main() {
    int N;
    cout << "Enter students: ";
    cin >> N;

    vector<Student> students(N);

    
    for (int i = 0; i < N; ++i) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "First name: ";
        cin >> students[i].surname;
        cout << "Klas: ";
        cin >> students[i].grade;
        cout << "Bal z informatyki: ";
        cin >> students[i].informaticsGrade;
    }

    
    cout << "Students 9 klas z balom \"5\" z informatyki:" << endl;
    for (const auto& student : students) {
        if (student.grade == 9 && student.informaticsGrade == 5) {
            cout << student.surname << endl;
        }
    }

    return 0;
}



//#include <iostream>
//
//int main()
//{
//    std::cout << "Hello World!\n";
//}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
