#ifndef _TEACHER_
#define _TEACHER_

#include <iostream>
#include <vector>
#include "identity.h"
#include "orderFile.h"
using namespace std;

class Teacher : public Identity
{
public:
	//Ĭ�Ϲ���
	Teacher();

	//�вι���
	Teacher(int empId, string name, string pwd);

	//�˵�����
	virtual void operMenu();
	
	//�鿴����ԤԼ
	void showAllOrder();

	//���ԤԼ
	void validOrder();

	//ְ����
	int m_EmpId;

};

#endif
