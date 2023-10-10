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

extern int Count;
extern TRec Data[];

void ShowData()
{
	system("cls");

	cout << "-----------------------------------------" << endl;

	int i = 0;
	
	while (i != Count)
	{
		cout << "| " << Data[i].id_station << " | ";
		cout << Data[i].name_station << " | ";
		cout << Data[i].time << " | ";
		cout << Data[i].long_time << " | ";
		cout << Data[i].rating << " |" << endl;
		cout << "-----------------------------------------" << endl;

		i++;
	} 
	system("pause");
}

void EditRecord() 
{
	system("cls");
	int id, i = 0;
	cout << "������� ID ������������ ��� ���������: ";
	cin >> id;
	while (Data[i].id_station != id)	i++;
	cout << "\n������� ����� ������:" << endl;
	cout << "ID ������������: ";
	cin >> Data[i].id_station;
	cout << "\n�������� ������������: ";
	cin >> Data[i].name_station;
	cout << "\n����� ���������: ";
	cin >> Data[i].time;
	cout << "\n�����������������: ";
	cin >> Data[i].long_time;
	cout << "\n������� ������������: ";
	cin >> Data[i].rating;
	cout << "������������ ��������" << endl;
	system("pause");
}

void AddRecord()
{
	system("cls");
	cout << "���������� ����� ������������" << endl;
	
	int i = Count;
	Count++;

	cout << "\n����� ������" << endl;
	cout << "ID ������������: ";
	cin >> Data[i].id_station;
	cout << "\n�������� ������������: ";
	cin >> Data[i].name_station;
	cout << "\n����� ���������: ";
	cin >> Data[i].time;
	cout << "\n�����������������: ";
	cin >> Data[i].long_time;
	cout << "\n������� ������������: ";
	cin >> Data[i].rating;
	cout << "����� ������������ ���������" << endl;
	system("pause");
}

void RemoveRecord()
{
	system("cls");
	int id, i = 0;
	cout << "�������� ������������" << endl;
	cout << "������� ID ������������: ";
	cin >> id;
	while (Data[i].id_station != id)	i++;
	for (int j = i;j < Count;j++)
		Data[j] = Data[j + 1];
	Count--;
	cout << "������������ �������" << endl;
	system("pause");
}

void FindStation()
{
	system("cls");
	string name_st;
	int i = 1;
	cout << "����� ������������" << endl;
	cout << "������� �������� ������������: ";
	cin >> name_st;
	while (i) { 
		if(Data[i].name_station == name_st) break; 
		i++;
	}

	cout << "��������� ������:\n" << "-----------------------------------------" << endl;

	cout << "| " << Data[i].id_station << " | ";
	cout << Data[i].name_station << " | ";
	cout << Data[i].time << " | ";
	cout << Data[i].long_time << " | ";
	cout << Data[i].rating << " |" << endl;
	cout << "-----------------------------------------" << endl;

	system("pause");
}

void MaxRating()
{
	system("cls");
	int max = Data[0].rating, i_max = 0;
	cout << "����� ������������ � ������ ���������" << endl;
	
	for (int i = 0; i < Count; i++) {
		if (Data[i].rating > max) {
			max = Data[i].rating;
			i_max = i;
		}
	}

	cout << "������ ������������ �������:\n" << "-----------------------------------------" << endl;

	cout << "| " << Data[i_max].id_station << " | ";
	cout << Data[i_max].name_station << " | ";
	cout << Data[i_max].time << " | ";
	cout << Data[i_max].long_time << " | ";
	cout << Data[i_max].rating << " |" << endl;
	cout << "-----------------------------------------" << endl;

	system("pause");
}

void SortUp()
{
	cout << "������ ������������ �� �����������" << endl;
	
	int temp = Data[0].id_station;

	for (int i = 0; i < Count - 1; i++)
	{
		for (int j = i + 1; j < Count; j++)
		{
			if (Data[i].id_station > Data[j].id_station)
			{
				temp = Data[i].id_station;
				Data[i].id_station = Data[j].id_station;
				Data[j].id_station = temp;
			}
		}
	}
	system("pause");
}

void SortDown()
{
	int temp = Data[0].id_station;

	cout << "������ ������������ �� ��������" << endl;

	for (int i = 0; i < Count - 1; i++)
	{
		for (int j = i + 1; j < Count; j++)
		{
			if (Data[i].id_station < Data[j].id_station)
			{
				temp = Data[i].id_station;
				Data[i].id_station = Data[j].id_station;
				Data[j].id_station = temp;
			}
		}
	}
	system("pause");
}