#include "pch.h"
#include <stdio.h>
#include "File1.h"
#include "File2.h"
#include "File3.h"
#include <iostream>

using namespace std;

eCMD Menu();

int main()
{
	system("chcp 1251");

	eCMD cmd = CMD_NONE;
	// цикл для обработки команд основного меню
	while (true)
	{
		if (cmd == CMD_EXIT) break; //выход из цикла
		cmd = Menu(); //отображение меню и ввод команд
		// вызов функции для соответствующей команды
		switch (cmd)
		{
			case CMD_READ: ReadDatabase(); break;
			case CMD_SHOW: ShowData(); break;
			case CMD_EDIT: EditRecord(); break;
			case CMD_ADD: AddRecord(); break;
			case CMD_DELETE: RemoveRecord(); break;
			case CMD_SORTUP: SortUp(); break;
			case CMD_SORTDOWN: SortDown(); break;
			case CMD_FIND: FindStation(); break;
			case CMD_SAVE: SaveDatabase(); break;
			case CMD_MAX: MaxRating(); break;
			case CMD_EXIT: break;
		}
	};

	puts("Работа программы завершена");
	system("pause");
	return 0;
};