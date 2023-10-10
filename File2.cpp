#include "pch.h"
#include <stdio.h>
#include "File1.h"
#include "File2.h"
#include "File3.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

//����������� ������ ��������
extern TRec Data[MAX_SIZE] = 
{
	{10, "������", 1, 11, 111},
	{20, "Second", 2, 22, 222},
	{30, "Third", 3, 33, 333}
};
//���������� ��������� ���������� ������� � �������
extern int Count = 3;

void ReadDatabase()
{	
	system("cls");

	ifstream fromfile("file.txt");

	string line;
	int i = 0;	 

	while (getline(fromfile, line))
	{
		//�������� ������
		istringstream iss(line);

		iss >> Data[i].id_station >> Data[i].name_station >> Data[i].time >> Data[i].long_time >> Data[i].rating;

		i++;
		
	}
	Count = i;
	cout << "�������� ������ � ����� ���������" << endl;
	system("pause");
	fromfile.close();
}

void SaveDatabase()
{
	system("cls");

	ofstream infile("file.txt");

	int i = 0;

	while (i != Count)
	{
		infile << Data[i].id_station <<	"\t"
			<< Data[i].name_station << "\t" 
			<< Data[i].time << "\t" 
			<< Data[i].long_time << "\t" 
			<< Data[i].rating << "\n";

		i++;
	}

	cout << "������ ��������� � ����" << endl;

	system("pause");
	infile.close();
} 