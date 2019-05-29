#pragma once
#include "wor_lk.h"
#include "spiski_organization.h"
#include "msclr/marshal_cppstd.h"
#include <string>
#include <iostream>
using namespace std;

namespace krCLR {	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Сводка для Worker_lk
	/// </summary>
	public ref class Worker_lk : public System::Windows::Forms::Form
	{		
		static System::String^ StdToSys(std::string StdStr)
		{
			return gcnew System::String(StdStr.c_str());
		}
		std::string SysToStr(String^ str)
		{
			return msclr::interop::marshal_as<std::string>(str);
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private:	wor_lk * my_wor;
	public:
		Worker_lk(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		Worker_lk(wor_lk &my_dan_wor)
		{
			my_wor = &my_dan_wor;
			InitializeComponent();
			label1->Text = StdToSys(my_dan_wor.get_my_FIO());
			label2->Text = "Стаж: " + StdToSys(my_dan_wor.get_my_stag());
			label3->Text = "Шифр: " + StdToSys(my_dan_wor.get_my_shifr_spec());
			label4->Text = "Специальность: " + StdToSys(my_dan_wor.get_my_nazvanie_spec());			
		}
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Worker_lk()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;


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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(544, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(84, 26);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Worker_lk::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(15, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"ФИО";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(16, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Стаж";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 18);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Шифр спец";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(111, 18);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Название спец";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(228, 124);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(301, 18);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Уведомления от следующих организаций:";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(39, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(131, 52);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Уведомления о работе";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Worker_lk::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(39, 203);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(131, 52);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Уведомления о переподготовке";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Worker_lk::button3_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Location = System::Drawing::Point(231, 145);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 25;
			this->dataGridView1->Size = System::Drawing::Size(397, 164);
			this->dataGridView1->TabIndex = 11;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Организация";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Специальность:";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Worker_lk
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(645, 326);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Worker_lk";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Личный кабинет";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		// Перейти ко входу
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
		// Вывести уведомления о принятии на работу
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	clear();
	this->Column2->Visible = false;
	int j = 0;
	string org_take = (*my_wor).get_my_name_take_org();
	const char *str = org_take.c_str();
	char *pch = strtok(const_cast<char*>(str), "|");
	while (pch != NULL)
	{
		dataGridView1->Rows->Add();
		dataGridView1->Rows[j]->Cells[0]->Value = StdToSys(pch);
		pch = strtok(NULL, "|");
		j++;
	}
}
void clear()
	{
		int rowsCount = dataGridView1->Rows->Count;
		for (int i = 0; i < rowsCount ; i++)
		{			
			dataGridView1->Rows->Remove(dataGridView1->Rows[0]);
		}
	}

		 // Вывести уведомления о переподготовке
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	clear();
	this->Column2->Visible = true;
	spiski_organization org_perepodg;
	ifstream iorg_txt(org_perepodg.get_sttO(), ios::in);
	int j = 0;
	char per[150], perepodg[1024], name[1024];
	iorg_txt >> per;
	while (!iorg_txt.eof())
	{
		iorg_txt >> per;
		iorg_txt >> per;
		iorg_txt.get();
		iorg_txt.getline(name, 150);
		iorg_txt.getline(perepodg, 1024);

		char *pch = strtok(perepodg, "|");
		if(pch != NULL){
			dataGridView1->Rows->Add();
			dataGridView1->Rows[j]->Cells[0]->Value = StdToSys(name);		
			j++;
		}
		while (pch != NULL)
		{		
			j--;
			dataGridView1->Rows[j]->Cells[1]->Value = dataGridView1->Rows[j]->Cells[1]->Value + StdToSys(pch);
			pch = strtok(NULL, "|");
			if (pch != NULL)
				dataGridView1->Rows[j]->Cells[1]->Value = dataGridView1->Rows[j]->Cells[1]->Value + "\n";
			j++;
		}
	}
}

};
}
