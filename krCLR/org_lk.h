#pragma once
#include <string>
#include <iostream>
using namespace std;

class org_lk
{
private:
	string my_login_org, my_parol_org;
	string my_name_org;
	string perepodgotovka;

public:
	org_lk() {};

	void set(string login, string parol, string name, string perepodgotovka)
	{
		my_login_org = login;
		my_parol_org = parol;
		my_name_org = name; 
		this->perepodgotovka = perepodgotovka;
	};
	string get_name() { return my_name_org; };
	string get_login_org() { return my_login_org; };
	~org_lk() {};
};

