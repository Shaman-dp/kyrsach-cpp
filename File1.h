//��� enum ��� ���������� ������ ��������� ������
enum eCMD {
	CMD_EXIT = -1, CMD_NONE, CMD_READ, CMD_SHOW,
	CMD_EDIT, CMD_ADD, CMD_DELETE, CMD_SORTUP, 
	CMD_SORTDOWN, CMD_FIND, CMD_SAVE, CMD_MAX
};

//��������� ������ ������ ������������ �������
const int MAX_SIZE = 10;

//�������� ��������� ������
struct TRec {
	short id_station;
	char name_station[30];
	double time;
	double long_time;
	int rating;
};