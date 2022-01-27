#ifndef _MANAGER_
#define _MANAGER_

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include "identity.h"
#include "globalFile.h"
#include "student.h"
#include "teacher.h"
#include "computerRoom.h"
using namespace std;

class Manager : public Identity
{
public:
	//Ĭ�Ϲ���
	Manager();

	//�вι���
	Manager(string name, string pwd);

	//�˵�����
	virtual void operMenu();

	//����˺�
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void cleanFile();

	//��ʼ������	
	void initVector();

	//����ظ�
	bool checkRepeat(int id, int type);

	//ѧ������
	vector<Student>vStu;

	//��ʦ����
	vector<Teacher>vTea;

	//��������
	vector<ComputerRoom> vCom;
};

#endif
