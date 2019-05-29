#pragma once
// Forms
#include "Registration.h"
#include "Organization_lk.h"
#include "Worker_lk.h"
// Class
#include "spiski_organization.h"
#include "spiski_worker.h"
#include "org_lk.h"
#include "wor_lk.h"

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
	/// Сводка для Vhod_Registration
	/// </summary>
	public ref class Vhod_Registration : public System::Windows::Forms::Form
	{
		static System::String^ StdToSys(std::string StdStr)
		{
			return gcnew System::String(StdStr.c_str());
		}
		std::string SysToStr(String^ str)
		{
			return msclr::interop::marshal_as<std::string>(str);
		}

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
	public:
		Vhod_Registration(void)
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
		~Vhod_Registration()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label3;

	protected:


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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(439, 17);
			this->button2->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(130, 40);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Регистрация";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Vhod_Registration::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(143, 158);
			this->textBox2->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(314, 26);
			this->textBox2->TabIndex = 28;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(139, 130);
			this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 20);
			this->label2->TabIndex = 27;
			this->label2->Text = L"Пароль";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(143, 84);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(314, 26);
			this->textBox1->TabIndex = 26;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(139, 56);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 20);
			this->label1->TabIndex = 25;
			this->label1->Text = L"Логин";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(225, 254);
			this->button1->Margin = System::Windows::Forms::Padding(6, 8, 6, 8);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 40);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Войти";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Vhod_Registration::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(139, 210);
			this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 24);
			this->label3->TabIndex = 31;
			// 
			// Vhod_Registration
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(584, 311);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Vhod_Registration";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Вход в систему";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion	
		// Регистрация
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		clear();
		this->Hide();
		krCLR::Registration Reg;
		Reg.ShowDialog();
		this->Show();
	}
		// Очистка полей
	void clear()
	{
		textBox1->Text = "";
		textBox2->Text = "";
		label3->Text = "";
	}
		// Вход в систему
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int qw=0, qo=0;
		unsigned short int k = 0;
		
		string login = SysToStr(textBox1->Text);
		string parol = SysToStr(textBox2->Text);
		
		spiski_organization Org;
		org_lk my_dan_org;
		wor_lk my_dan_wor;

		spiski_worker Work;

		// Проверка заполнения полей	
		if ((login == "") || (parol == ""))
		{
			label3->Text = "Не все поля заполнены";
			k++;
		}
		if(k == 0){
			// Проверка существования пользователя
			int o = Org.proverka(login, parol, qo, my_dan_org);
			int w = Work.proverka(login, parol, qw, my_dan_wor);
			if (o == 0 && w ==0)
			{
				label3->Text = "Неверно введены данные";
				k++;
			}
			// вход в лк
			if(o==1) {
				this->Hide();
				krCLR::Organization_lk O_lk(my_dan_org);
				O_lk.ShowDialog();
				this->Show();
				clear();
			}
			if (w == 1) {
				this->Hide();
				krCLR::Worker_lk w_lk(my_dan_wor);
				w_lk.ShowDialog();
				this->Show();
				clear();
			}
		}	
}
};
}
