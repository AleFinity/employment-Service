#pragma once
#include "org_lk.h"
#include <string>
#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <string>
using namespace std;

struct organization {
	string login_org, parol_org;
	string name_org;
};

class spiski_organization
{
private:	
	int q_org = 0;
	char *sttO ="Organization.txt";
	ifstream iorg_txt;
	ofstream oorg_txt;
	organization dan_org; 
public:	
	spiski_organization() {};
	int proverka(string login, string parol, int &qo, org_lk &my_dan_org);
	void set_perepodgotovka(string perepodgotovka, string login);
	char *get_sttO() {return sttO;};
	void vvod_dan_org(string login, string parol, string nazvanie);	
	~spiski_organization() {  };
};

