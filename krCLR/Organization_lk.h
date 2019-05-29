#pragma once
#include "spiski_worker.h"
#include "spiski_organization.h"
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
	/// Сводка для Organization_lk
	/// </summary>
	public ref class Organization_lk : public System::Windows::Forms::Form
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
	public:
		Organization_lk(void)
		{
			InitializeComponent();
		}

		org_lk *org_dan;

		// Заполнение окна
		Organization_lk(org_lk &my_dan_org)
		{
			org_dan = &my_dan_org;
			InitializeComponent();
			label1->Text = StdToSys(my_dan_org.get_name());
		}
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	public:
		
		
	
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Organization_lk()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(743, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Organization_lk::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(203, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Название организации\r\n";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Column6,
					this->Column1, this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->Location = System::Drawing::Point(211, 58);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 25;
			this->dataGridView1->Size = System::Drawing::Size(607, 258);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->RowHeaderMouseDoubleClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &Organization_lk::dataGridView1_RowHeaderMouseDoubleClick);
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Логин";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Visible = false;
			// 
			// Column1
			// 
			this->Column1->FillWeight = 166.6167F;
			this->Column1->HeaderText = L"ФИО";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->FillWeight = 44.31962F;
			this->Column2->HeaderText = L"Стаж";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->FillWeight = 58.99509F;
			this->Column3->HeaderText = L"Шифр спец.";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->FillWeight = 166.6167F;
			this->Column4->HeaderText = L"Название спец.";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->FillWeight = 63.45177F;
			this->Column5->HeaderText = L"Заявка отпр.";
			this->Column5->Name = L"Column5";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(109, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Специальность";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(16, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(186, 22);
			this->textBox1->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(16, 105);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 45);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Вывести\r\nсписок";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Organization_lk::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(208, 332);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 6;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(17, 315);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(185, 54);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Отправить уведомление о переподготовке";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Organization_lk::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(17, 287);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(185, 22);
			this->textBox2->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(14, 268);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Переподготовка";
			// 
			// Organization_lk
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(834, 381);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Organization_lk";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Личный кабинет";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// очистить таблицу
		void clear()
		{
			int rowsCount = dataGridView1->Rows->Count;
			for (int i = 0; i < rowsCount - 1; i++)
			{
				dataGridView1->Rows->Remove(dataGridView1->Rows[0]);
			}
			label3->Text = "";
		}
		// Поиск выбранной специальности
		void poisk(ifstream &iw_txt)
		{
			string dan = SysToStr(textBox1->Text);
			const char *sdan = dan.c_str();
			int q1 = strlen(sdan) - 1;
			worker person;
			char per[1024], name[150];
			int j = 0,k=0;
			try
			{
				if (sdan[q1] == ' ')
				{
					throw 1;
				}
				iw_txt >> per;
				while (iw_txt)
				{
					iw_txt >> person.login_w;
					iw_txt >> per;
					iw_txt.get();
					iw_txt.getline(name, 150);
					person.FIO = name;
					iw_txt >> person.stag;
					iw_txt >> person.shifr_spec;
					iw_txt.get();
					iw_txt.getline(name, 150);
					person.nazvanie_spec = name;
					iw_txt.get();
					iw_txt.getline(per, 1024);
					if (dan== person.nazvanie_spec|| dan == person.shifr_spec) {
						dataGridView1->Rows->Add();
						dataGridView1->Rows[j]->Cells[0]->Value = StdToSys(person.login_w);
						dataGridView1->Rows[j]->Cells[1]->Value = StdToSys(person.FIO);
						dataGridView1->Rows[j]->Cells[2]->Value = StdToSys(person.stag);
						dataGridView1->Rows[j]->Cells[3]->Value = StdToSys(person.shifr_spec);
						dataGridView1->Rows[j]->Cells[4]->Value = StdToSys(person.nazvanie_spec);
					
						string str = SysToStr(label1->Text);
						const char *str1 = str.c_str();
						if (strstr(per, str1))
						{
							dataGridView1->Rows[j]->Cells[5]->Value = "отпр.";
						}
						k++;
						j++;
					}				
				}
				if (k == 0)
					label3->Text = "Работники с данной специальностью не найдены";
			}
			catch (int ch)
			{
				MessageBox::Show("Ошибка ввода данных");
			}
		}
		// Вывод списка работников
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		clear();
		spiski_worker professions;
		char *stt = filename("Worker.txt");
		ifstream iw_txt;
		char per[150], org[1024],login[150];
		int j = 0;
		worker person;

		//Отображение файла
		if (SysToStr(textBox1->Text)!="")
		{		
			iw_txt.open(stt, ios::in);
			poisk(iw_txt); 
			iw_txt.close();
		}
		else{
			//iw_txt.close();
			iw_txt.open(stt, ios::in);
			iw_txt >> per;
			while (!iw_txt.eof())
			{
				iw_txt >> person.login_w;
				iw_txt >> per;
				iw_txt.get();
				iw_txt.getline(per, 150);
				person.FIO = per;
				iw_txt >> person.stag;
				iw_txt >> person.shifr_spec;
				iw_txt.get();
				iw_txt.getline(per, 150);
				person.nazvanie_spec = per;				
				iw_txt.get();
				iw_txt.getline(org, 1024);
				dataGridView1->Rows->Add();
				dataGridView1->Rows[j]->Cells[0]->Value = StdToSys(person.login_w);
				dataGridView1->Rows[j]->Cells[1]->Value = StdToSys(person.FIO);
				dataGridView1->Rows[j]->Cells[2]->Value = StdToSys(person.stag);
				dataGridView1->Rows[j]->Cells[3]->Value = StdToSys(person.shifr_spec);
				dataGridView1->Rows[j]->Cells[4]->Value = StdToSys(person.nazvanie_spec);
				string str= SysToStr(label1->Text);
				const char *str1 = str.c_str();
				if (strstr(org, str1))
				{
					dataGridView1->Rows[j]->Cells[5]->Value = "отпр.";
				}
				j++;
			}
			iw_txt.close();
		}			
	}	
		// Выход
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
		// Переподготовка
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	string prof = SysToStr(textBox2->Text);
	const char *sprof = prof.c_str();
	int q1 = strlen(sprof) - 1;
	try
	{
		if (sprof[q1] == ' ' )
		{
			throw 1;
		}
		if(textBox2->Text!="")
		{ 
			spiski_organization org;	
			string perepodgotovka=SysToStr(textBox2->Text);
			org.set_perepodgotovka(perepodgotovka, org_dan->get_login_org());
			MessageBox::Show("Уведомление отправлено");
			textBox2->Text = "";
		}
	}
	catch (int ch)
	{
		MessageBox::Show("Ошибка ввода данных");
	}
}

private: System::Void dataGridView1_RowHeaderMouseDoubleClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^  e) {
	spiski_worker persons;
	int index = dataGridView1->CurrentCell->RowIndex;
	string login = SysToStr(Convert::ToString(dataGridView1->Rows[index]->Cells[0]->Value));
	persons.take_person(login, org_dan->get_name());
	if(login != "")
		dataGridView1->Rows[index]->Cells[5]->Value = "отпр.";
}
};
}
