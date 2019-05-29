#pragma once
#include "wor_lk.h"
#include <string>
#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
using namespace std;

class lk_org;
class lk_work;

struct worker {
	string login_w, parol_w;
	string FIO;
	string stag;
	string shifr_spec;
	string nazvanie_spec;
	string name_take_org;
};

class spiski_worker
{
private:	
	int q_work = 0;
	char *sttW = "Worker.txt";
	ifstream iw_txt;
	ofstream ow_txt;
	worker dan_person;

public:
	spiski_worker() {};
	int proverka(string login, string parol,int &qw, wor_lk &my_dan_wor);
	void vvod_dan_work(string login, string parol, string FIO, string stag, string shifr, string nazvansp);
	void take_person(string take, string org);
	~spiski_worker() {};
};