#include "pch.h"
#include <stdio.h>
#include "File1.h"
#include "File2.h"
#include "File3.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

eCMD Menu()
{
	//���� ��� ������ ����, ���� ����� ����������� �������
	while (true)
	{
		system("cls");
		puts("�������� ��������:"); 
		puts("1 - ��������� ������ �� �����");
		puts("2 - �������� ������");
		puts("3 - �������� ������");
		puts("4 - �������� ������������");
		puts("5 - ������� ������������");
		puts("6 - ����������� ������ �� �����������");
		puts("7 - ����������� ������ �� ��������");
		puts("8 - ����� ������������");
		puts("9 - ��������� ������");
		puts("10 - ����� ������������� ��������");
		puts("0 - ����� �� ���������");
		unsigned opt;
		fflush(stdin); //��������� �������� ������
		scanf_s("%u", &opt);
		switch (opt) 
		{	//������� �� ������� �������
			case 1: return CMD_READ;
			case 2: return CMD_SHOW;
			case 3: return CMD_EDIT;
			case 4: return CMD_ADD;
			case 5: return CMD_DELETE;
			case 6: return CMD_SORTUP;
			case 7: return CMD_SORTDOWN;
			case 8: return CMD_FIND;
			case 9: return CMD_SAVE;
			case 10: return CMD_MAX;
			case 0: return CMD_EXIT;
			default: puts("����� ������� �� ����������");
				system("pause");
		}
	}						
}