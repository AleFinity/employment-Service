#pragma once
#include "spiski_organization.h"
#include "spiski_worker.h"
#include "org_lk.h"

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
	/// Сводка для Registration_organization
	/// </summary>
	public ref class Registration_organization : public System::Windows::Forms::Form
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

		Registration_organization(void)
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
		~Registration_organization()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button2;
	protected:
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;

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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(417, 259);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(155, 47);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Зарегистрироваться";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Registration_organization::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->Location = System::Drawing::Point(497, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 22;
			this->button1->Text = L"назад";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Registration_organization::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 165);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(163, 16);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Название организации";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 139);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(221, 22);
			this->textBox2->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 119);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Пароль";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(13, 93);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(221, 22);
			this->textBox1->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 74);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 16);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Логин";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(13, 211);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 24;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(12, 185);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(221, 22);
			this->textBox3->TabIndex = 25;
			// 
			// Registration_organization
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(584, 311);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Registration_organization";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Регистрация организации";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Возврат ко входу в систему
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
		
		// Регистрация
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		spiski_organization Org;
		org_lk my_dan_org;
		spiski_worker Work;
		wor_lk my_dan_wor;
		string login = SysToStr(textBox1->Text);
		const char *slogin = login.c_str();
		int q1 = strlen(slogin) - 1;
		string parol = SysToStr(textBox2->Text);
		const char *sparol = parol.c_str();
		int q2 = strlen(sparol) - 1;
		string nazvanie = SysToStr(textBox3->Text);
		const char *snazvanie = nazvanie.c_str();
		int q3 = strlen(snazvanie) - 1;

		int qo = 0, qw = 0;
		unsigned short int k=0;	

		// Проверка заполнения полей	
		try
		{
			if (slogin[q1] == ' ' || sparol[q2] == ' ' || snazvanie[q3] == ' ')
			{
				throw 1;
			}
			if ((login == "") || (parol == "") || (nazvanie == ""))
			{
				label4->Text = StdToSys("Не все поля заполнены");
				k++;		
			}
		}
		catch (int ch)
		{
			MessageBox::Show("Ошибка ввода данных");
			k++;
		}

		if(k==0){
			// Проверка существования логина

			Work.proverka(login, "", qw, my_dan_wor);
			Org.proverka(login, "", qo, my_dan_org);
			if (qo != 0 || qw != 0)
			{
				label4->Text = StdToSys("Пользователь с таким логином уже существует");
			}
			// Запись данных организации
			else
			{	
				Org.vvod_dan_org(login, parol, nazvanie);
				label4->Text = "";	
				
				// Переход кo входу		
				this->Close();
			}
		}
	}
		
};
}
