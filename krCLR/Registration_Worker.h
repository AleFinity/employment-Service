#pragma once
#include "spiski_organization.h"
#include "spiski_worker.h"

#include "msclr/marshal_cppstd.h"
#include <iostream>
#include <fstream>
#include <istream>
#include <ostream>
#include <string>
using namespace std;
namespace krCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Registration_Worker
	/// </summary>
	public ref class Registration_Worker : public System::Windows::Forms::Form
	{
		static System::String^ StdToSys(std::string StdStr)
		{
			return gcnew System::String(StdStr.c_str());
		}
		std::string SysToStr(String^ str)
		{
			return msclr::interop::marshal_as<std::string>(str);
		}
	public:
		char *filename(System::String^ path_f)
		{
			std::string vsSt = "";
			for (int j = 0; j < path_f->Length; j++)
				vsSt += (char)path_f[j];
			int it = vsSt.rfind("\\") + 1;
			vsSt = vsSt.substr(it, vsSt.size() - it);
			char * stt = new char[vsSt.size() + 1];
			int it1 = vsSt.size(); int j;
			for (j = 0; j<it1; j++)
				stt[j] = vsSt[j];
			stt[j] = '\0';
			return stt;
		}
		Registration_Worker(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Registration_Worker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label7;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(417, 251);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 47);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Зарегистрироваться";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Registration_Worker::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(497, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 26;
			this->button1->Text = L"назад";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Registration_Worker::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(59, 268);
			this->textBox6->Margin = System::Windows::Forms::Padding(4);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(240, 22);
			this->textBox6->TabIndex = 25;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(56, 244);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(177, 16);
			this->label6->TabIndex = 24;
			this->label6->Text = L"Название специальности";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(59, 218);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(240, 22);
			this->textBox5->TabIndex = 23;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(56, 198);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(149, 16);
			this->label5->TabIndex = 22;
			this->label5->Text = L"Шифр специальности";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(59, 172);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(240, 22);
			this->textBox4->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(56, 152);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 16);
			this->label4->TabIndex = 20;
			this->label4->Text = L"Стаж";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(59, 126);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(240, 22);
			this->textBox3->TabIndex = 19;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 106);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 16);
			this->label3->TabIndex = 18;
			this->label3->Text = L"ФИО";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(59, 80);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(240, 22);
			this->textBox2->TabIndex = 17;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 60);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 16);
			this->label2->TabIndex = 16;
			this->label2->Text = L"Пароль";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(59, 34);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(240, 22);
			this->textBox1->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(56, 14);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 16);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Логин";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Location = System::Drawing::Point(354, 103);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 20);
			this->label7->TabIndex = 28;
			// 
			// Registration_Worker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(584, 311);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Registration_Worker";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Регистрация работника";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
/*
	private:
		int proverka(char *stt, unsigned short int k)
		{
			char *sttO = filename("Organization.txt");	
			char probel[150];
			ifstream iorg_txt(sttO, ios::in);
			ifstream iw_txt(stt, ios::in);
			string login, parol;
			while (iorg_txt&&k == 0)
			{
				iorg_txt >> login;
				iorg_txt >> probel;
				iorg_txt.get();
				iorg_txt.getline(probel,150);
				if (login == SysToStr(textBox1->Text))
				{
					iorg_txt.close();
					return 1;
				}
			}
			while (iw_txt&&k == 0)
			{
				iw_txt >> login;
				iw_txt >> probel;
				iw_txt.get();
				iw_txt.getline(probel, 150);
				iw_txt >> probel;
				iw_txt >> probel;
				iw_txt.get();
				iw_txt.getline(probel, 150);
				iw_txt >> probel;
				iw_txt >> probel;
				if (login == SysToStr(textBox1->Text))
				{
					iw_txt.close();
					return 1;
				}
			}
			iorg_txt.close();
			iw_txt.close();
			return 0;
		}
		*/

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	spiski_organization Org;
	spiski_worker Work;
	string login= SysToStr(textBox1->Text);
	const char *slogin = login.c_str();
	int q1 = strlen(slogin) - 1;
	string parol= SysToStr(textBox2->Text);
	const char *sparol = parol.c_str();
	int q2 = strlen(sparol) - 1;
	string FIO= SysToStr(textBox3->Text);
	const char *sFIO = FIO.c_str();
	int q3 = strlen(sFIO) - 1;
	string stag= SysToStr(textBox4->Text);
	const char *sstag = stag.c_str();
	int q4 = strlen(sstag) - 1;
	string shifr= SysToStr(textBox5->Text);
	const char *sshifr = shifr.c_str();
	int q5 = strlen(sshifr) - 1;
	string nazvansp= SysToStr(textBox6->Text);
	const char *snazvansp = nazvansp.c_str();
	int q6 = strlen(snazvansp) - 1;

	wor_lk my_dan_wor;
	org_lk my_dan_org;
	int qo = 0, qw = 0;
	unsigned short int k = 0;

	// Проверка заполнения полей	
	try
	{
		if (slogin[q1] == ' '|| sparol[q2] == ' ' || sFIO[q3] == ' '
			|| sstag[q4] == ' ' || sshifr[q5] == ' ' || snazvansp[q6] == ' ')
		{
			throw 1;
		}
		if ((login == "") || (parol == "") || (FIO == "") ||
			(stag == "")|| (shifr == "") || (nazvansp == ""))
		{
			label7->Text = StdToSys("Не все поля \n заполнены");
			k++;
		}
	}
	catch (int ch)
	{
		MessageBox::Show("Ошибка ввода данных");
		k++;
	}

	if (k == 0) {
		// Проверка существования логина
		Work.proverka(login, "", qw, my_dan_wor);
		Org.proverka(login, "", qo, my_dan_org);
		if (qo != 0 || qw != 0)
		{
			label7->Text = StdToSys("Пользователь с таким\nлогином уже существует");
		}

		// Запись данных работника
		else
		{
			label7->Text = "";
			// Ввод данных в txt файл
			Work.vvod_dan_work(login, parol, FIO, stag, shifr, nazvansp);

			// Переход кo входу		
			this->Close();
		}
	}
}
};
}
