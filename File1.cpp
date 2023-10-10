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
	//цикл для вывода меню, если ввели неправильно команду
	while (true)
	{
		system("cls");
		puts("Выберите действие:"); 
		puts("1 - Загрузить данные из файла");
		puts("2 - Просмотр данных");
		puts("3 - Изменить данные");
		puts("4 - Добавить радиостанцию");
		puts("5 - Удалить радиостанцию");
		puts("6 - Сортировать данные по возрастанию");
		puts("7 - Сортировать данные по убыванию");
		puts("8 - Поиск радиостанции");
		puts("9 - Сохранить данные");
		puts("10 - Поиск максимального рейтинга");
		puts("0 - Выход из программы");
		unsigned opt;
		fflush(stdin); //обнуление входного потока
		scanf_s("%u", &opt);
		switch (opt) 
		{	//возврат из функции команды
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
			default: puts("Такой команды не существует");
				system("pause");
		}
	}						
}