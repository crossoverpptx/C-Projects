#pragma once
#include <iostream>
using namespace std;
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
#include <deque>
#include <functional>
#include <numeric>
#include <string>
#include <fstream>

class SpeechManager
{
public:
	SpeechManager();

	void show_Menu();

	void exitSystem();

	void createSpeaker();

	void initSpeech();

	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�������
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//�ļ�Ϊ�յı�־
	bool fileIsEmpty;

	//�����¼
	map<int, vector<string>> m_Record;

	//��ʾ����÷�
	void showRecord();

	//��ռ�¼
	void clearRecord();

	~SpeechManager();

	vector<int>v1;

	vector<int>v2;

	vector<int>vVictory;

	map<int, Speaker>m_Speaker;

	int m_Index;
};