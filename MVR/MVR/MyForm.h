// Copyrighting Polya Busko
#pragma once
// #include «stdafx.h»
#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <cmath>
//#include "grafik__U.h"

#define M_PI       3.14159265358979323846

namespace MVR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label39;



	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label46;


		   /// <summary>
		   /// Обязательная переменная конструктора.
		   /// </summary>
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			   this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			   this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			   this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			   this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			   this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			   this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			   this->label49 = (gcnew System::Windows::Forms::Label());
			   this->label48 = (gcnew System::Windows::Forms::Label());
			   this->label47 = (gcnew System::Windows::Forms::Label());
			   this->label46 = (gcnew System::Windows::Forms::Label());
			   this->label22 = (gcnew System::Windows::Forms::Label());
			   this->label21 = (gcnew System::Windows::Forms::Label());
			   this->label20 = (gcnew System::Windows::Forms::Label());
			   this->label19 = (gcnew System::Windows::Forms::Label());
			   this->label18 = (gcnew System::Windows::Forms::Label());
			   this->label17 = (gcnew System::Windows::Forms::Label());
			   this->label16 = (gcnew System::Windows::Forms::Label());
			   this->label15 = (gcnew System::Windows::Forms::Label());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			   this->label45 = (gcnew System::Windows::Forms::Label());
			   this->label44 = (gcnew System::Windows::Forms::Label());
			   this->label43 = (gcnew System::Windows::Forms::Label());
			   this->label42 = (gcnew System::Windows::Forms::Label());
			   this->label41 = (gcnew System::Windows::Forms::Label());
			   this->label40 = (gcnew System::Windows::Forms::Label());
			   this->label39 = (gcnew System::Windows::Forms::Label());
			   this->label38 = (gcnew System::Windows::Forms::Label());
			   this->label37 = (gcnew System::Windows::Forms::Label());
			   this->label36 = (gcnew System::Windows::Forms::Label());
			   this->label35 = (gcnew System::Windows::Forms::Label());
			   this->label34 = (gcnew System::Windows::Forms::Label());
			   this->label33 = (gcnew System::Windows::Forms::Label());
			   this->label32 = (gcnew System::Windows::Forms::Label());
			   this->label31 = (gcnew System::Windows::Forms::Label());
			   this->label30 = (gcnew System::Windows::Forms::Label());
			   this->label29 = (gcnew System::Windows::Forms::Label());
			   this->label28 = (gcnew System::Windows::Forms::Label());
			   this->label27 = (gcnew System::Windows::Forms::Label());
			   this->label26 = (gcnew System::Windows::Forms::Label());
			   this->label25 = (gcnew System::Windows::Forms::Label());
			   this->label24 = (gcnew System::Windows::Forms::Label());
			   this->label23 = (gcnew System::Windows::Forms::Label());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			   this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			   this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			   this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			   this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			   this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->tabControl1->SuspendLayout();
			   this->tabPage1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			   this->groupBox6->SuspendLayout();
			   this->groupBox5->SuspendLayout();
			   this->groupBox4->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->tabPage2->SuspendLayout();
			   this->groupBox3->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->groupBox2->SuspendLayout();
			   this->groupBox1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // tabControl1
			   // 
			   this->tabControl1->Controls->Add(this->tabPage1);
			   this->tabControl1->Controls->Add(this->tabPage2);
			   this->tabControl1->Location = System::Drawing::Point(1, 1);
			   this->tabControl1->Name = L"tabControl1";
			   this->tabControl1->SelectedIndex = 0;
			   this->tabControl1->Size = System::Drawing::Size(1063, 611);
			   this->tabControl1->TabIndex = 0;
			   // 
			   // tabPage1
			   // 
			   this->tabPage1->Controls->Add(this->dataGridView2);
			   this->tabPage1->Controls->Add(this->button2);
			   this->tabPage1->Controls->Add(this->groupBox6);
			   this->tabPage1->Controls->Add(this->groupBox5);
			   this->tabPage1->Controls->Add(this->groupBox4);
			   this->tabPage1->Controls->Add(this->pictureBox1);
			   this->tabPage1->Location = System::Drawing::Point(4, 22);
			   this->tabPage1->Name = L"tabPage1";
			   this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage1->Size = System::Drawing::Size(1055, 585);
			   this->tabPage1->TabIndex = 0;
			   this->tabPage1->Text = L"Тестовая задача";
			   this->tabPage1->UseVisualStyleBackColor = true;
			   // 
			   // dataGridView2
			   // 
			   this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			   this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				   this->Column4,
					   this->Column3
			   });
			   this->dataGridView2->Location = System::Drawing::Point(286, 215);
			   this->dataGridView2->Name = L"dataGridView2";
			   this->dataGridView2->Size = System::Drawing::Size(766, 363);
			   this->dataGridView2->TabIndex = 14;
			   // 
			   // Column4
			   // 
			   this->Column4->HeaderText = L"";
			   this->Column4->Name = L"Column4";
			   this->Column4->ReadOnly = true;
			   // 
			   // Column3
			   // 
			   this->Column3->HeaderText = L"i";
			   this->Column3->Name = L"Column3";
			   this->Column3->ReadOnly = true;
			   // 
			   // button2
			   // 
			   this->button2->BackColor = System::Drawing::Color::DeepSkyBlue;
			   this->button2->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button2->Location = System::Drawing::Point(3, 514);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(264, 68);
			   this->button2->TabIndex = 13;
			   this->button2->Text = L"Расчет";
			   this->button2->UseVisualStyleBackColor = false;
			   this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			   // 
			   // groupBox6
			   // 
			   this->groupBox6->Controls->Add(this->radioButton6);
			   this->groupBox6->Controls->Add(this->radioButton5);
			   this->groupBox6->Controls->Add(this->radioButton4);
			   this->groupBox6->Location = System::Drawing::Point(7, 341);
			   this->groupBox6->Name = L"groupBox6";
			   this->groupBox6->Size = System::Drawing::Size(260, 105);
			   this->groupBox6->TabIndex = 12;
			   this->groupBox6->TabStop = false;
			   this->groupBox6->Text = L"Данные в таблице";
			   // 
			   // radioButton6
			   // 
			   this->radioButton6->AutoSize = true;
			   this->radioButton6->Location = System::Drawing::Point(8, 70);
			   this->radioButton6->Name = L"radioButton6";
			   this->radioButton6->Size = System::Drawing::Size(124, 17);
			   this->radioButton6->TabIndex = 2;
			   this->radioButton6->TabStop = true;
			   this->radioButton6->Text = L"| U ( x , y) - V ( x , y ) |";
			   this->radioButton6->UseVisualStyleBackColor = true;
			   // 
			   // radioButton5
			   // 
			   this->radioButton5->AutoSize = true;
			   this->radioButton5->Location = System::Drawing::Point(8, 47);
			   this->radioButton5->Name = L"radioButton5";
			   this->radioButton5->Size = System::Drawing::Size(67, 17);
			   this->radioButton5->TabIndex = 1;
			   this->radioButton5->TabStop = true;
			   this->radioButton5->Text = L"U ( x , y )";
			   this->radioButton5->UseVisualStyleBackColor = true;
			   // 
			   // radioButton4
			   // 
			   this->radioButton4->AutoSize = true;
			   this->radioButton4->Location = System::Drawing::Point(8, 24);
			   this->radioButton4->Name = L"radioButton4";
			   this->radioButton4->Size = System::Drawing::Size(66, 17);
			   this->radioButton4->TabIndex = 0;
			   this->radioButton4->TabStop = true;
			   this->radioButton4->Text = L"V ( x , y )";
			   this->radioButton4->UseVisualStyleBackColor = true;
			   // 
			   // groupBox5
			   // 
			   this->groupBox5->Controls->Add(this->textBox8);
			   this->groupBox5->Controls->Add(this->textBox7);
			   this->groupBox5->Controls->Add(this->label10);
			   this->groupBox5->Controls->Add(this->label9);
			   this->groupBox5->Controls->Add(this->textBox6);
			   this->groupBox5->Controls->Add(this->textBox5);
			   this->groupBox5->Controls->Add(this->label8);
			   this->groupBox5->Controls->Add(this->label7);
			   this->groupBox5->Controls->Add(this->label6);
			   this->groupBox5->Location = System::Drawing::Point(8, 215);
			   this->groupBox5->Name = L"groupBox5";
			   this->groupBox5->Size = System::Drawing::Size(259, 120);
			   this->groupBox5->TabIndex = 2;
			   this->groupBox5->TabStop = false;
			   this->groupBox5->Text = L"Параметры";
			   // 
			   // textBox8
			   // 
			   this->textBox8->Location = System::Drawing::Point(64, 86);
			   this->textBox8->Name = L"textBox8";
			   this->textBox8->Size = System::Drawing::Size(64, 20);
			   this->textBox8->TabIndex = 11;
			   this->textBox8->Text = L"0,0000005";
			   // 
			   // textBox7
			   // 
			   this->textBox7->Location = System::Drawing::Point(64, 63);
			   this->textBox7->Name = L"textBox7";
			   this->textBox7->Size = System::Drawing::Size(64, 20);
			   this->textBox7->TabIndex = 10;
			   this->textBox7->Text = L"1500";
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Location = System::Drawing::Point(6, 89);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(37, 13);
			   this->label10->TabIndex = 9;
			   this->label10->Text = L"Eps = ";
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->Location = System::Drawing::Point(6, 66);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(52, 13);
			   this->label9->TabIndex = 8;
			   this->label9->Text = L"N_max = ";
			   // 
			   // textBox6
			   // 
			   this->textBox6->Location = System::Drawing::Point(134, 37);
			   this->textBox6->Name = L"textBox6";
			   this->textBox6->Size = System::Drawing::Size(64, 20);
			   this->textBox6->TabIndex = 7;
			   this->textBox6->Text = L"10";
			   // 
			   // textBox5
			   // 
			   this->textBox5->Location = System::Drawing::Point(31, 37);
			   this->textBox5->Name = L"textBox5";
			   this->textBox5->Size = System::Drawing::Size(64, 20);
			   this->textBox5->TabIndex = 6;
			   this->textBox5->Text = L"10";
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->Location = System::Drawing::Point(101, 40);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(27, 13);
			   this->label8->TabIndex = 5;
			   this->label8->Text = L"m = ";
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->Location = System::Drawing::Point(6, 40);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(25, 13);
			   this->label7->TabIndex = 4;
			   this->label7->Text = L"n = ";
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->Location = System::Drawing::Point(6, 16);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(86, 13);
			   this->label6->TabIndex = 3;
			   this->label6->Text = L"Размеры сетки";
			   // 
			   // groupBox4
			   // 
			   this->groupBox4->Controls->Add(this->label49);
			   this->groupBox4->Controls->Add(this->label48);
			   this->groupBox4->Controls->Add(this->label47);
			   this->groupBox4->Controls->Add(this->label46);
			   this->groupBox4->Controls->Add(this->label22);
			   this->groupBox4->Controls->Add(this->label21);
			   this->groupBox4->Controls->Add(this->label20);
			   this->groupBox4->Controls->Add(this->label19);
			   this->groupBox4->Controls->Add(this->label18);
			   this->groupBox4->Controls->Add(this->label17);
			   this->groupBox4->Controls->Add(this->label16);
			   this->groupBox4->Controls->Add(this->label15);
			   this->groupBox4->Controls->Add(this->label14);
			   this->groupBox4->Controls->Add(this->label13);
			   this->groupBox4->Controls->Add(this->label12);
			   this->groupBox4->Controls->Add(this->label11);
			   this->groupBox4->Location = System::Drawing::Point(393, 13);
			   this->groupBox4->Name = L"groupBox4";
			   this->groupBox4->Size = System::Drawing::Size(652, 192);
			   this->groupBox4->TabIndex = 1;
			   this->groupBox4->TabStop = false;
			   this->groupBox4->Text = L"Справка";
			   // 
			   // label49
			   // 
			   this->label49->AutoSize = true;
			   this->label49->Location = System::Drawing::Point(564, 87);
			   this->label49->Name = L"label49";
			   this->label49->Size = System::Drawing::Size(56, 13);
			   this->label49->TabIndex = 15;
			   this->label49->Text = L"#######";
			   // 
			   // label48
			   // 
			   this->label48->AutoSize = true;
			   this->label48->Location = System::Drawing::Point(534, 87);
			   this->label48->Name = L"label48";
			   this->label48->Size = System::Drawing::Size(24, 13);
			   this->label48->TabIndex = 14;
			   this->label48->Text = L"y = ";
			   // 
			   // label47
			   // 
			   this->label47->AutoSize = true;
			   this->label47->Location = System::Drawing::Point(564, 74);
			   this->label47->Name = L"label47";
			   this->label47->Size = System::Drawing::Size(56, 13);
			   this->label47->TabIndex = 13;
			   this->label47->Text = L"#######";
			   // 
			   // label46
			   // 
			   this->label46->AutoSize = true;
			   this->label46->Location = System::Drawing::Point(534, 74);
			   this->label46->Name = L"label46";
			   this->label46->Size = System::Drawing::Size(24, 13);
			   this->label46->TabIndex = 12;
			   this->label46->Text = L"x = ";
			   // 
			   // label22
			   // 
			   this->label22->AutoSize = true;
			   this->label22->Location = System::Drawing::Point(401, 151);
			   this->label22->Name = L"label22";
			   this->label22->Size = System::Drawing::Size(56, 13);
			   this->label22->TabIndex = 11;
			   this->label22->Text = L"#######";
			   // 
			   // label21
			   // 
			   this->label21->AutoSize = true;
			   this->label21->Location = System::Drawing::Point(401, 128);
			   this->label21->Name = L"label21";
			   this->label21->Size = System::Drawing::Size(56, 13);
			   this->label21->TabIndex = 10;
			   this->label21->Text = L"#######";
			   // 
			   // label20
			   // 
			   this->label20->AutoSize = true;
			   this->label20->Location = System::Drawing::Point(401, 100);
			   this->label20->Name = L"label20";
			   this->label20->Size = System::Drawing::Size(56, 13);
			   this->label20->TabIndex = 9;
			   this->label20->Text = L"#######";
			   // 
			   // label19
			   // 
			   this->label19->AutoSize = true;
			   this->label19->Location = System::Drawing::Point(401, 74);
			   this->label19->Name = L"label19";
			   this->label19->Size = System::Drawing::Size(56, 13);
			   this->label19->TabIndex = 8;
			   this->label19->Text = L"#######";
			   // 
			   // label18
			   // 
			   this->label18->AutoSize = true;
			   this->label18->Location = System::Drawing::Point(401, 49);
			   this->label18->Name = L"label18";
			   this->label18->Size = System::Drawing::Size(56, 13);
			   this->label18->TabIndex = 7;
			   this->label18->Text = L"#######";
			   // 
			   // label17
			   // 
			   this->label17->AutoSize = true;
			   this->label17->Location = System::Drawing::Point(401, 27);
			   this->label17->Name = L"label17";
			   this->label17->Size = System::Drawing::Size(56, 13);
			   this->label17->TabIndex = 6;
			   this->label17->Text = L"#######";
			   // 
			   // label16
			   // 
			   this->label16->AutoSize = true;
			   this->label16->Location = System::Drawing::Point(10, 151);
			   this->label16->Name = L"label16";
			   this->label16->Size = System::Drawing::Size(314, 13);
			   this->label16->TabIndex = 5;
			   this->label16->Text = L"Схема на сетке решена с невязкой (евклидова норма) R(p)=";
			   // 
			   // label15
			   // 
			   this->label15->AutoSize = true;
			   this->label15->Location = System::Drawing::Point(10, 128);
			   this->label15->Name = L"label15";
			   this->label15->Size = System::Drawing::Size(355, 13);
			   this->label15->TabIndex = 4;
			   this->label15->Text = L"Невязка СЛАУ на начальном приближении (евклидова норма) R(0)=";
			   // 
			   // label14
			   // 
			   this->label14->AutoSize = true;
			   this->label14->Location = System::Drawing::Point(10, 100);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(212, 13);
			   this->label14->TabIndex = 3;
			   this->label14->Text = L"Начальное приближения посчитано как ";
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Location = System::Drawing::Point(10, 74);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(324, 13);
			   this->label13->TabIndex = 2;
			   this->label13->Text = L"Максимальная разность точного и численного решений |U-V|=";
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->Location = System::Drawing::Point(10, 49);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(134, 13);
			   this->label12->TabIndex = 1;
			   this->label12->Text = L"Погрешность решения = ";
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->Location = System::Drawing::Point(10, 27);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(128, 13);
			   this->label11->TabIndex = 0;
			   this->label11->Text = L"Количество итераций = ";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(0, 3);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(363, 183);
			   this->pictureBox1->TabIndex = 0;
			   this->pictureBox1->TabStop = false;
			   // 
			   // tabPage2
			   // 
			   this->tabPage2->Controls->Add(this->button1);
			   this->tabPage2->Controls->Add(this->groupBox3);
			   this->tabPage2->Controls->Add(this->dataGridView1);
			   this->tabPage2->Controls->Add(this->groupBox2);
			   this->tabPage2->Controls->Add(this->groupBox1);
			   this->tabPage2->Controls->Add(this->pictureBox2);
			   this->tabPage2->Location = System::Drawing::Point(4, 22);
			   this->tabPage2->Name = L"tabPage2";
			   this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			   this->tabPage2->Size = System::Drawing::Size(1055, 585);
			   this->tabPage2->TabIndex = 1;
			   this->tabPage2->Text = L"Основная задача";
			   this->tabPage2->UseVisualStyleBackColor = true;
			   // 
			   // button1
			   // 
			   this->button1->BackColor = System::Drawing::Color::DeepSkyBlue;
			   this->button1->Font = (gcnew System::Drawing::Font(L"Courier New", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->button1->Location = System::Drawing::Point(3, 522);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(340, 60);
			   this->button1->TabIndex = 11;
			   this->button1->Text = L"Расчет";
			   this->button1->UseVisualStyleBackColor = false;
			   this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			   // 
			   // groupBox3
			   // 
			   this->groupBox3->Controls->Add(this->label45);
			   this->groupBox3->Controls->Add(this->label44);
			   this->groupBox3->Controls->Add(this->label43);
			   this->groupBox3->Controls->Add(this->label42);
			   this->groupBox3->Controls->Add(this->label41);
			   this->groupBox3->Controls->Add(this->label40);
			   this->groupBox3->Controls->Add(this->label39);
			   this->groupBox3->Controls->Add(this->label38);
			   this->groupBox3->Controls->Add(this->label37);
			   this->groupBox3->Controls->Add(this->label36);
			   this->groupBox3->Controls->Add(this->label35);
			   this->groupBox3->Controls->Add(this->label34);
			   this->groupBox3->Controls->Add(this->label33);
			   this->groupBox3->Controls->Add(this->label32);
			   this->groupBox3->Controls->Add(this->label31);
			   this->groupBox3->Controls->Add(this->label30);
			   this->groupBox3->Controls->Add(this->label29);
			   this->groupBox3->Controls->Add(this->label28);
			   this->groupBox3->Controls->Add(this->label27);
			   this->groupBox3->Controls->Add(this->label26);
			   this->groupBox3->Controls->Add(this->label25);
			   this->groupBox3->Controls->Add(this->label24);
			   this->groupBox3->Controls->Add(this->label23);
			   this->groupBox3->Location = System::Drawing::Point(357, 13);
			   this->groupBox3->Name = L"groupBox3";
			   this->groupBox3->Size = System::Drawing::Size(691, 264);
			   this->groupBox3->TabIndex = 10;
			   this->groupBox3->TabStop = false;
			   this->groupBox3->Text = L"Справка";
			   // 
			   // label45
			   // 
			   this->label45->AutoSize = true;
			   this->label45->Location = System::Drawing::Point(8, 108);
			   this->label45->Name = L"label45";
			   this->label45->Size = System::Drawing::Size(0, 13);
			   this->label45->TabIndex = 31;
			   // 
			   // label44
			   // 
			   this->label44->AutoSize = true;
			   this->label44->Location = System::Drawing::Point(181, 234);
			   this->label44->Name = L"label44";
			   this->label44->Size = System::Drawing::Size(56, 13);
			   this->label44->TabIndex = 30;
			   this->label44->Text = L"#######";
			   // 
			   // label43
			   // 
			   this->label43->AutoSize = true;
			   this->label43->Location = System::Drawing::Point(80, 234);
			   this->label43->Name = L"label43";
			   this->label43->Size = System::Drawing::Size(56, 13);
			   this->label43->TabIndex = 29;
			   this->label43->Text = L"#######";
			   // 
			   // label42
			   // 
			   this->label42->AutoSize = true;
			   this->label42->Location = System::Drawing::Point(473, 210);
			   this->label42->Name = L"label42";
			   this->label42->Size = System::Drawing::Size(56, 13);
			   this->label42->TabIndex = 28;
			   this->label42->Text = L"#######";
			   // 
			   // label41
			   // 
			   this->label41->AutoSize = true;
			   this->label41->Location = System::Drawing::Point(473, 188);
			   this->label41->Name = L"label41";
			   this->label41->Size = System::Drawing::Size(56, 13);
			   this->label41->TabIndex = 27;
			   this->label41->Text = L"#######";
			   // 
			   // label40
			   // 
			   this->label40->AutoSize = true;
			   this->label40->Location = System::Drawing::Point(473, 166);
			   this->label40->Name = L"label40";
			   this->label40->Size = System::Drawing::Size(56, 13);
			   this->label40->TabIndex = 26;
			   this->label40->Text = L"#######";
			   // 
			   // label39
			   // 
			   this->label39->AutoSize = true;
			   this->label39->Location = System::Drawing::Point(473, 143);
			   this->label39->Name = L"label39";
			   this->label39->Size = System::Drawing::Size(56, 13);
			   this->label39->TabIndex = 25;
			   this->label39->Text = L"#######";
			   // 
			   // label38
			   // 
			   this->label38->AutoSize = true;
			   this->label38->Location = System::Drawing::Point(473, 121);
			   this->label38->Name = L"label38";
			   this->label38->Size = System::Drawing::Size(56, 13);
			   this->label38->TabIndex = 24;
			   this->label38->Text = L"#######";
			   // 
			   // label37
			   // 
			   this->label37->AutoSize = true;
			   this->label37->Location = System::Drawing::Point(473, 86);
			   this->label37->Name = L"label37";
			   this->label37->Size = System::Drawing::Size(56, 13);
			   this->label37->TabIndex = 23;
			   this->label37->Text = L"#######";
			   // 
			   // label36
			   // 
			   this->label36->AutoSize = true;
			   this->label36->Location = System::Drawing::Point(473, 64);
			   this->label36->Name = L"label36";
			   this->label36->Size = System::Drawing::Size(56, 13);
			   this->label36->TabIndex = 22;
			   this->label36->Text = L"#######";
			   // 
			   // label35
			   // 
			   this->label35->AutoSize = true;
			   this->label35->Location = System::Drawing::Point(473, 42);
			   this->label35->Name = L"label35";
			   this->label35->Size = System::Drawing::Size(56, 13);
			   this->label35->TabIndex = 21;
			   this->label35->Text = L"#######";
			   // 
			   // label34
			   // 
			   this->label34->AutoSize = true;
			   this->label34->Location = System::Drawing::Point(473, 20);
			   this->label34->Name = L"label34";
			   this->label34->Size = System::Drawing::Size(56, 13);
			   this->label34->TabIndex = 20;
			   this->label34->Text = L"#######";
			   // 
			   // label33
			   // 
			   this->label33->AutoSize = true;
			   this->label33->Location = System::Drawing::Point(151, 234);
			   this->label33->Name = L"label33";
			   this->label33->Size = System::Drawing::Size(24, 13);
			   this->label33->TabIndex = 19;
			   this->label33->Text = L"y = ";
			   // 
			   // label32
			   // 
			   this->label32->AutoSize = true;
			   this->label32->Location = System::Drawing::Point(14, 234);
			   this->label32->Name = L"label32";
			   this->label32->Size = System::Drawing::Size(68, 13);
			   this->label32->TabIndex = 18;
			   this->label32->Text = L"в узле :  x = ";
			   // 
			   // label31
			   // 
			   this->label31->AutoSize = true;
			   this->label31->Location = System::Drawing::Point(8, 210);
			   this->label31->Name = L"label31";
			   this->label31->Size = System::Drawing::Size(346, 13);
			   this->label31->TabIndex = 17;
			   this->label31->Text = L"Максимальная разность двух решений |V2-V| (точность решения) =";
			   // 
			   // label30
			   // 
			   this->label30->AutoSize = true;
			   this->label30->Location = System::Drawing::Point(8, 188);
			   this->label30->Name = L"label30";
			   this->label30->Size = System::Drawing::Size(438, 13);
			   this->label30->TabIndex = 16;
			   this->label30->Text = L"Схема на сетке с половинным шагом решена с невязкой (евклидова норма) R(p2) = ";
			   // 
			   // label29
			   // 
			   this->label29->AutoSize = true;
			   this->label29->Location = System::Drawing::Point(8, 166);
			   this->label29->Name = L"label29";
			   this->label29->Size = System::Drawing::Size(355, 13);
			   this->label29->TabIndex = 15;
			   this->label29->Text = L"Невязка СЛАУ на начальном приближении (евклидова норма) R(0)=";
			   // 
			   // label28
			   // 
			   this->label28->AutoSize = true;
			   this->label28->Location = System::Drawing::Point(8, 143);
			   this->label28->Name = L"label28";
			   this->label28->Size = System::Drawing::Size(138, 13);
			   this->label28->TabIndex = 14;
			   this->label28->Text = L"Достнигнутая точность = ";
			   // 
			   // label27
			   // 
			   this->label27->AutoSize = true;
			   this->label27->Location = System::Drawing::Point(8, 121);
			   this->label27->Name = L"label27";
			   this->label27->Size = System::Drawing::Size(242, 13);
			   this->label27->TabIndex = 13;
			   this->label27->Text = L"Количество итераций при половинном шаге = ";
			   // 
			   // label26
			   // 
			   this->label26->AutoSize = true;
			   this->label26->Location = System::Drawing::Point(8, 86);
			   this->label26->Name = L"label26";
			   this->label26->Size = System::Drawing::Size(314, 13);
			   this->label26->TabIndex = 12;
			   this->label26->Text = L"Схема на сетке решена с невязкой (евклидова норма) R(p)=";
			   // 
			   // label25
			   // 
			   this->label25->AutoSize = true;
			   this->label25->Location = System::Drawing::Point(8, 64);
			   this->label25->Name = L"label25";
			   this->label25->Size = System::Drawing::Size(355, 13);
			   this->label25->TabIndex = 2;
			   this->label25->Text = L"Невязка СЛАУ на начальном приближении (евклидова норма) R(0)=";
			   // 
			   // label24
			   // 
			   this->label24->AutoSize = true;
			   this->label24->Location = System::Drawing::Point(8, 42);
			   this->label24->Name = L"label24";
			   this->label24->Size = System::Drawing::Size(138, 13);
			   this->label24->TabIndex = 1;
			   this->label24->Text = L"Достнигнутая точность = ";
			   // 
			   // label23
			   // 
			   this->label23->AutoSize = true;
			   this->label23->Location = System::Drawing::Point(8, 20);
			   this->label23->Name = L"label23";
			   this->label23->Size = System::Drawing::Size(128, 13);
			   this->label23->TabIndex = 0;
			   this->label23->Text = L"Количество итераций = ";
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				   this->Column1,
					   this->Column2
			   });
			   this->dataGridView1->Location = System::Drawing::Point(356, 282);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->Size = System::Drawing::Size(692, 296);
			   this->dataGridView1->TabIndex = 3;
			   // 
			   // Column1
			   // 
			   this->Column1->HeaderText = L"";
			   this->Column1->Name = L"Column1";
			   this->Column1->ReadOnly = true;
			   // 
			   // Column2
			   // 
			   this->Column2->HeaderText = L"i";
			   this->Column2->Name = L"Column2";
			   this->Column2->ReadOnly = true;
			   // 
			   // groupBox2
			   // 
			   this->groupBox2->Controls->Add(this->radioButton3);
			   this->groupBox2->Controls->Add(this->radioButton2);
			   this->groupBox2->Controls->Add(this->radioButton1);
			   this->groupBox2->Location = System::Drawing::Point(9, 352);
			   this->groupBox2->Name = L"groupBox2";
			   this->groupBox2->Size = System::Drawing::Size(342, 94);
			   this->groupBox2->TabIndex = 9;
			   this->groupBox2->TabStop = false;
			   this->groupBox2->Text = L"Данные в таблице";
			   // 
			   // radioButton3
			   // 
			   this->radioButton3->AutoSize = true;
			   this->radioButton3->Location = System::Drawing::Point(9, 66);
			   this->radioButton3->Name = L"radioButton3";
			   this->radioButton3->Size = System::Drawing::Size(129, 17);
			   this->radioButton3->TabIndex = 2;
			   this->radioButton3->TabStop = true;
			   this->radioButton3->Text = L"| V2 ( x , y) - V ( x , y ) |";
			   this->radioButton3->UseVisualStyleBackColor = true;
			   // 
			   // radioButton2
			   // 
			   this->radioButton2->AutoSize = true;
			   this->radioButton2->Location = System::Drawing::Point(9, 43);
			   this->radioButton2->Name = L"radioButton2";
			   this->radioButton2->Size = System::Drawing::Size(72, 17);
			   this->radioButton2->TabIndex = 1;
			   this->radioButton2->TabStop = true;
			   this->radioButton2->Text = L"V2 ( x , y )";
			   this->radioButton2->UseVisualStyleBackColor = true;
			   // 
			   // radioButton1
			   // 
			   this->radioButton1->AutoSize = true;
			   this->radioButton1->Location = System::Drawing::Point(9, 20);
			   this->radioButton1->Name = L"radioButton1";
			   this->radioButton1->Size = System::Drawing::Size(66, 17);
			   this->radioButton1->TabIndex = 0;
			   this->radioButton1->TabStop = true;
			   this->radioButton1->Text = L"V ( x , y )";
			   this->radioButton1->UseVisualStyleBackColor = true;
			   // 
			   // groupBox1
			   // 
			   this->groupBox1->Controls->Add(this->textBox4);
			   this->groupBox1->Controls->Add(this->label5);
			   this->groupBox1->Controls->Add(this->textBox3);
			   this->groupBox1->Controls->Add(this->label4);
			   this->groupBox1->Controls->Add(this->textBox2);
			   this->groupBox1->Controls->Add(this->textBox1);
			   this->groupBox1->Controls->Add(this->label3);
			   this->groupBox1->Controls->Add(this->label2);
			   this->groupBox1->Controls->Add(this->label1);
			   this->groupBox1->Location = System::Drawing::Point(9, 220);
			   this->groupBox1->Name = L"groupBox1";
			   this->groupBox1->Size = System::Drawing::Size(342, 126);
			   this->groupBox1->TabIndex = 1;
			   this->groupBox1->TabStop = false;
			   this->groupBox1->Text = L"Параметры";
			   // 
			   // textBox4
			   // 
			   this->textBox4->Location = System::Drawing::Point(47, 100);
			   this->textBox4->Name = L"textBox4";
			   this->textBox4->Size = System::Drawing::Size(71, 20);
			   this->textBox4->TabIndex = 8;
			   this->textBox4->Text = L"0,0000005";
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Location = System::Drawing::Point(4, 103);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(37, 13);
			   this->label5->TabIndex = 7;
			   this->label5->Text = L"Eps = ";
			   // 
			   // textBox3
			   // 
			   this->textBox3->Location = System::Drawing::Point(62, 69);
			   this->textBox3->Name = L"textBox3";
			   this->textBox3->Size = System::Drawing::Size(71, 20);
			   this->textBox3->TabIndex = 6;
			   this->textBox3->Text = L"1500";
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->Location = System::Drawing::Point(4, 72);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(52, 13);
			   this->label4->TabIndex = 5;
			   this->label4->Text = L"N_max = ";
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(145, 41);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(71, 20);
			   this->textBox2->TabIndex = 4;
			   this->textBox2->Text = L"10";
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(35, 41);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(71, 20);
			   this->textBox1->TabIndex = 3;
			   this->textBox1->Text = L"10";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Location = System::Drawing::Point(112, 44);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(27, 13);
			   this->label3->TabIndex = 2;
			   this->label3->Text = L"m = ";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Location = System::Drawing::Point(4, 44);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(25, 13);
			   this->label2->TabIndex = 1;
			   this->label2->Text = L"n = ";
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Location = System::Drawing::Point(4, 23);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(81, 13);
			   this->label1->TabIndex = 0;
			   this->label1->Text = L"Размер сетки:";
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			   this->pictureBox2->Location = System::Drawing::Point(9, 8);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(342, 206);
			   this->pictureBox2->TabIndex = 0;
			   this->pictureBox2->TabStop = false;
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1059, 613);
			   this->Controls->Add(this->tabControl1);
			   this->Name = L"MyForm";
			   this->Text = L"Метод Верхней релаксации, вариант 4 // Copyrighting Polya Busko";
			   this->tabControl1->ResumeLayout(false);
			   this->tabPage1->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			   this->groupBox6->ResumeLayout(false);
			   this->groupBox6->PerformLayout();
			   this->groupBox5->ResumeLayout(false);
			   this->groupBox5->PerformLayout();
			   this->groupBox4->ResumeLayout(false);
			   this->groupBox4->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->tabPage2->ResumeLayout(false);
			   this->groupBox3->ResumeLayout(false);
			   this->groupBox3->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->groupBox2->ResumeLayout(false);
			   this->groupBox2->PerformLayout();
			   this->groupBox1->ResumeLayout(false);
			   this->groupBox1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   this->ResumeLayout(false);

		   }
#pragma endregion
		   // =========  Functions =========
		   double u1(double x, double y) // GU
		   {
			   return sin(M_PI * x * y);
		   }

		   double f1(double x, double y) // test
		   {
			   return M_PI * M_PI * sin(M_PI * x * y) * (x * x + y * y);
		   }

		   double f2(double x, double y) // main
		   {
			   return -exp(-x * y * y);
		   }

		   double mu1(double y)
		   {
			   return (y - 2) * (y - 3);
		   }

		   double mu2(double y)
		   {
			   return y * (y - 2) * (y - 3);
		   }

		   double mu3(double x)
		   {
			   return (x - 1) * (x - 2);
		   }

		   double mu4(double x)
		   {
			   return x * (x - 1) * (x - 2);
		   }

		   // =========  Test Task =========
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = Convert::ToInt32(textBox5->Text);
		int m = Convert::ToInt32(textBox6->Text);
		int N_max = Convert::ToInt32(textBox7->Text);
		double Eps = Convert::ToDouble(textBox8->Text);
		double h = 1.0 / n, k = 1.0 / m; //Шаги по x и y
		double h2 = 1.0 / (h * h), k2 = 1.0 / (k * k);
		double A = -2 * (h2 + k2);
		double** v, ** f, ** u, ** hv, ** R;
		double* x, * y;
		int p = 0; //Текущее число итераций
		char buffer[100];
		double MaxPogr = 0.0;
		double Pogr;
		double MaxF = 0.0;
		double maxR1 = 0.0;

		x = new double[n + 1];
		y = new double[m + 1];
		v = new double* [n + 1];
		hv = new double* [n + 1];
		R = new double* [n + 1];
		f = new double* [n + 1];
		u = new double* [n + 1];

		for (int i = 0; i <= n; i++)
		{
			v[i] = new double[m + 1];
			f[i] = new double[m + 1];
			u[i] = new double[m + 1];
			hv[i] = new double[m + 1];
			R[i] = new double[m + 1];
		}

		std::ofstream file_x;
		file_x.open("C:\\Users\\user\\Desktop\\coordinate_x.txt");
		for (int i = 0; i <= n; i++)  //Заполнение массива x
		{
			x[i] = 1 + i * h;
			if (i < n)
				file_x << x[i] << " ";
			else
				file_x << x[i];
		}
		file_x.close();

		std::ofstream file_y;
		file_y.open("C:\\Users\\user\\Desktop\\coordinate_y.txt");
		for (int j = 0; j <= m; j++)  //Заполнение массива y
		{
			y[j] = 2 + j * k;
			if (j < n)
				file_y << y[j] << " ";
			else
				file_y << y[j];
		}
		file_y.close();


		for (int j = 0; j <= m; j++)            //Заполнение массивов f и u
		{
			for (int i = 0; i <= n; i++)
			{
				f[i][j] = f1(x[i], y[j]);
				u[i][j] = u1(x[i], y[j]);
				hv[i][j] = -f[i][j];
				MaxF += f[i][j] * f[i][j];
			}
		}

		MaxF = std::sqrt(MaxF);

		for (int j = 0; j <= m; j++)  //Заполнение граничных условий в массив v
		{
			v[0][j] = u1(1, y[j]);
			v[n][j] = u1(2, y[j]);
			R[0][j] = 0.0;
			R[n][j] = 0.0;
		}

		for (int i = 0; i <= n; i++)  //Заполнение граничных условий в массив v
		{
			v[i][0] = u1(x[i], 2);
			v[i][m] = u1(x[i], 3);
			R[i][0] = 0.0;
			R[i][m] = 0.0;
		}

		for (int j = 1; j < m; j++)    //Нулевое начальное приближение
		{
			for (int i = 1; i < n; i++)
			{
				v[i][j] = 0.0;
			}
		}

		// UpRelaxMethod
		double temp, prev, currentEps;
		double Eps_max;
		double w = 1.99;
		while (true)
		{
			Eps_max = 0.0;
			for (int j = 1; j < m; j++)
			{
				for (int i = 1; i < n; i++)
				{
					prev = v[j][i];
					temp = A * prev + h2 * (v[j][i - 1] + v[j][i + 1]) + k2 * (v[j - 1][i] + v[j + 1][i]);
					v[j][i] = prev - w * (temp + f1(x[i], y[i])) / A;

					//maxR1 += R[i][j] * R[i][j];
					currentEps = std::fabs(v[j][i] - prev);
					if (currentEps > Eps_max)
						Eps_max = currentEps;
				}
			}

			p++;
			if ((Eps_max < Eps) || (p > N_max))
				break;
		}
		// nevyazka na vyhode
		temp = 0.0;
		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				temp = A * v[j][i] + h2 * (v[j][i - 1] + v[j][i + 1]) + k2 * (v[j - 1][i] + v[j + 1][i]) + f1(x[i], y[i]);
				maxR1 += temp * temp;
			}
		}
		maxR1 = std::sqrt(maxR1);

		// table

		dataGridView2->Rows->Clear();
		dataGridView2->Columns->Clear();

		dataGridView2->Columns->Add("C1", "");
		dataGridView2->Columns[0]->Width = 50;
		dataGridView2->Columns[0]->Frozen = true;
		dataGridView2->Columns->Add("C2", "i");
		dataGridView2->Columns[1]->Width = 50;
		dataGridView2->Columns[1]->Frozen = true;

		for (int i = 0; i <= n; i++)                        //Создание столбцов для таблиц
		{
			sprintf_s(buffer, "%d", i);
			dataGridView2->Columns->Add(gcnew String(buffer), gcnew String(buffer));
		}

		dataGridView2->Rows->Add("j", "Y\\X");  // Создание второй строки

		for (int i = 0; i <= n; i++)               //Заполнение второй строки
		{
			dataGridView2->Rows[0]->Cells[i + 2]->Value = x[i];
		}
		for (int j = 0; j <= m; j++)          //Заполнение первых двух столбцов
		{
			dataGridView2->Rows->Add();
			for (int i = 0; i <= 1; i++)
			{
				dataGridView2->Rows[j + 1]->Cells[0]->Value = j;
				dataGridView2->Rows[j + 1]->Cells[1]->Value = y[j];
			}
		}
		double xMax = 0.0;
		double yMax = 0.0;
		std::ofstream mas_u;
		std::ofstream mas_v;
		mas_u.open("C:\\Users\\user\\Desktop\\mas_u.txt");
		mas_v.open("C:\\Users\\user\\Desktop\\mas_v.txt");
		for (int j = 0; j <= m; j++)              //Заполнение таблиц значениями
		{
			for (int i = 0; i <= n; i++)
			{
				Pogr = abs(u[i][j] - v[i][j]);
				v[i][j] = round(v[i][j] * 1000) / 1000;
				u[i][j] = round(u[i][j] * 1000) / 1000;
				if (radioButton4->Checked)
				{
					dataGridView2->Rows[j + 1]->Cells[i + 2]->Value = v[i][j];
					if (i != n)
						mas_v << v[i][j] << " ";
					else
						mas_v << v[i][j];
				}
				if (radioButton5->Checked)
				{
					dataGridView2->Rows[j + 1]->Cells[i + 2]->Value = u[i][j];
					mas_u << u[i][j] << " ";
				}
				if (radioButton6->Checked)
					dataGridView2->Rows[j + 1]->Cells[i + 2]->Value = Pogr;
				if (Pogr > MaxPogr)
				{
					MaxPogr = Pogr;
					xMax = x[i];
					yMax = y[j];
				}
			}
			mas_u << "\n";
			mas_v << "\n";
		}
		mas_u.close();
		mas_v.close();
		// Справка

		label17->Text = Convert::ToString(p);
		label18->Text = Convert::ToString(Eps_max);
		label19->Text = Convert::ToString(MaxPogr);
		label21->Text = Convert::ToString(MaxF);
		label22->Text = Convert::ToString(maxR1);
		label47->Text = Convert::ToString(xMax);
		label49->Text = Convert::ToString(yMax);

		label20->Text = "Нулелвое начально приближение";

		for (int i = 0; i <= n; i++)
		{
			delete[] v[i];
			delete[] f[i];
			delete[] u[i];
			delete[] hv[i];
		}
		delete[] x;
		delete[] y;
	}

		   //  ========= main task =========
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int n = Convert::ToInt32(textBox1->Text);
		int m = Convert::ToInt32(textBox2->Text);
		int N_max = Convert::ToInt32(textBox3->Text);
		double Eps = Convert::ToDouble(textBox4->Text);
		double h = 1.0 / n, k = 1.0 / m; //Шаги по x и y
		double h2 = 1.0 / (h * h), k2 = 1.0 / (k * k);
		double A = -2 * (h2 + k2);
		double** v, ** f, ** R;
		double* x, * y;
		int p = 0; //Текущее число итераций
		char buffer[100];
		double MaxPogr = 0.0;
		double Pogr;
		double xMax, yMax;
		double MaxF = 0.0, MaxF2 = 0.0;
		double maxR1 = 0.0;

		x = new double[n + 1];
		y = new double[m + 1];
		v = new double* [n + 1];
		R = new double* [n + 1];
		f = new double* [n + 1];

		for (int i = 0; i <= n; i++)
		{
			v[i] = new double[m + 1];
			f[i] = new double[m + 1];
			R[i] = new double[m + 1];
		}

		for (int i = 0; i <= n; i++)  //Заполнение массива x
		{
			x[i] = 1 + i * h;
		}

		for (int j = 0; j <= m; j++)  //Заполнение массива y
		{
			y[j] = 2 + j * k;
		}

		for (int j = 0; j <= m; j++)            //Заполнение массива f 
		{
			for (int i = 0; i <= n; i++)
			{
				f[i][j] = f2(x[i], y[j]);
				MaxF += f[i][j] * f[i][j];
			}
		}
		MaxF = sqrt(MaxF);

		for (int j = 0; j <= m; j++)  //Заполнение граничных условий в массив v
		{
			v[0][j] = mu1(y[j]);
			v[n][j] = mu2(y[j]);
			R[0][j] = 0.0;
			R[n][j] = 0.0;
		}

		for (int i = 0; i <= n; i++)  //Заполнение граничных условий в массив v
		{
			v[i][0] = mu3(x[i]);
			v[i][m] = mu4(x[i]);
			R[i][0] = 0.0;
			R[i][m] = 0.0;
		}

		for (int j = 1; j < m; j++)    //Нулевое начальное приближение
		{
			for (int i = 1; i < n; i++)
			{
				v[i][j] = 0.0;
			}
		}
		// UpRelaxMethod
		double temp, prev, currentEps;
		double Eps_max = 0.0;
		double w = 1.99;
		while (true)
		{
			Eps_max = 0.0;
			for (int j = 1; j < m; j++)
			{
				for (int i = 1; i < n; i++)
				{
					//R[i][j] = f[i][j] + A * v[i][j] + h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]);

					prev = v[j][i];
					temp = A * prev + h2 * (v[j][i - 1] + v[j][i + 1]) + k2 * (v[j - 1][i] + v[j + 1][i]);
					v[j][i] = prev - w * (temp + f2(x[i], y[i])) / A;

					//maxR1 += R[i][j] * R[i][j];
					currentEps = std::fabs(v[j][i] - prev);
					if (currentEps > Eps_max)
						Eps_max = currentEps;
				}
			}

			p++;
			if ((Eps_max < Eps) || (p > N_max))
				break;
		}
		// nevyazka na vyhode
		temp = 0.0;
		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				temp = A * v[j][i] + h2 * (v[j][i - 1] + v[j][i + 1]) + k2 * (v[j - 1][i] + v[j + 1][i]) + f2(x[i], y[i]);
				maxR1 += temp * temp;
			}
		}
		maxR1 = std::sqrt(maxR1);

		for (int i = 0; i <= n; i++)
		{
			delete[] f[i];
			delete[] R[i];
		}

		delete[]x;
		delete[]y;

		// solution whis step / 2
		n = 2 * n;
		m = 2 * m;
		double** v2;
		x = new double[n + 1];
		y = new double[m + 1];
		v2 = new double* [n + 1];
		f = new double* [n + 1];
		R = new double* [n + 1];

		h = 1.0 / n;
		k = 1.0 / m;
		h2 = 1.0 / (h * h);
		k2 = 1.0 / (k * k);
		A = -2 * (h2 + k2);

		int p2 = 0;
		double maxR = 0.0;

		for (int i = 0; i <= n; i++)
		{
			v2[i] = new double[m + 1];
			f[i] = new double[m + 1];
			R[i] = new double[m + 1];
		}

		for (int i = 0; i <= n; i++)  //Заполнение массива x
		{
			x[i] = 1 + i * h;
		}

		for (int j = 0; j <= m; j++)  //Заполнение массива y
		{
			y[j] = 2 + j * k;
		}

		for (int j = 0; j <= m; j++)            //Заполнение массива f 
		{
			for (int i = 0; i <= n; i++)
			{
				f[i][j] = f2(x[i], y[j]);
				MaxF2 += f[i][j] * f[i][j];
			}
		}

		MaxF2 = sqrt(MaxF2);

		for (int j = 0; j <= m; j++)  //Заполнение граничных условий в массив v
		{
			v2[0][j] = mu1(y[j]);
			v2[n][j] = mu2(y[j]);
			R[0][j] = 0.0;
			R[n][j] = 0.0;
		}

		for (int i = 0; i <= n; i++)  //Заполнение граничных условий в массив v
		{
			v2[i][0] = mu3(x[i]);
			v2[i][m] = mu4(x[i]);
			R[i][0] = 0.0;
			R[i][m] = 0.0;
		}

		for (int j = 1; j < m; j++)    //Нулевое начальное приближение
		{
			for (int i = 1; i < n; i++)
			{
				v2[i][j] = 0.0;
			}
		}

		// UpRelaxMethod
		temp = 0.0;
		prev = 0.0;
		currentEps = 0.0;
		double Eps_max2;
		w = 1.99;
		while (true)
		{
			Eps_max2 = 0.0;
			for (int j = 1; j < m; j++)
			{
				for (int i = 1; i < n; i++)
				{
					//R[i][j] = f[i][j] + A * v[i][j] + h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1]);

					prev = v2[j][i];
					temp = A * prev + h2 * (v2[j][i - 1] + v2[j][i + 1]) + k2 * (v2[j - 1][i] + v2[j + 1][i]);
					v2[j][i] = prev - w * (temp + f2(x[i], y[i])) / A;

					// maxR += R[i][j] * R[i][j];
					currentEps = std::fabs(v2[j][i] - prev);
					if (currentEps > Eps_max2)
						Eps_max2 = currentEps;
				}
			}

			p2++;
			if ((Eps_max2 < Eps) || (p2 > N_max))
				break;
		}

		// nevyazka na vyhode
		temp = 0.0;
		for (int j = 1; j < m; j++)
		{
			for (int i = 1; i < n; i++)
			{
				temp = A * v2[j][i] + h2 * (v2[j][i - 1] + v2[j][i + 1]) + k2 * (v2[j - 1][i] + v2[j + 1][i]) + f2(x[i / 2], y[i / 2]);
				maxR += temp * temp;
			}
		}

		maxR = sqrt(maxR);

		n = n / 2;
		m = m / 2;
		// table

		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();

		dataGridView1->Columns->Add("C1", "");
		dataGridView1->Columns[0]->Width = 50;
		dataGridView1->Columns[0]->Frozen = true;
		dataGridView1->Columns->Add("C2", "i");
		dataGridView1->Columns[1]->Width = 50;
		dataGridView1->Columns[1]->Frozen = true;

		for (int i = 0; i <= n; i++)                        //Создание столбцов для таблиц
		{
			sprintf_s(buffer, "%d", i);
			dataGridView1->Columns->Add(gcnew String(buffer), gcnew String(buffer));
		}

		dataGridView1->Rows->Add("j", "Y\\X");  // Создание второй строки

		for (int i = 0; i <= n; i++)               //Заполнение второй строки
		{
			dataGridView1->Rows[0]->Cells[i + 2]->Value = x[2 * i];
		}
		for (int j = 0; j <= m; j++)          //Заполнение первых двух столбцов
		{
			dataGridView1->Rows->Add();
			for (int i = 0; i <= 1; i++)
			{
				dataGridView1->Rows[j + 1]->Cells[0]->Value = j;
				dataGridView1->Rows[j + 1]->Cells[1]->Value = y[2 * j];
			}
		}
		for (int j = 0; j <= m; j++)              //Заполнение таблиц значениями
		{
			for (int i = 0; i <= n; i++)
			{
				Pogr = 0.0;
				Pogr = std::fabs(v[i][j] - v2[i * 2][j * 2]);
				v[i][j] = round(v[i][j] * 1000) / 1000;
				v2[2 * i][2 * j] = round(v2[2 * i][2 * j] * 1000) / 1000;
				if (radioButton1->Checked)
					dataGridView1->Rows[j + 1]->Cells[i + 2]->Value = v[i][j];
				if (radioButton2->Checked)
					dataGridView1->Rows[j + 1]->Cells[i + 2]->Value = v2[2 * i][2 * j];
				if (radioButton3->Checked)
					dataGridView1->Rows[j + 1]->Cells[i + 2]->Value = Pogr;
				if (Pogr > MaxPogr)
				{
					MaxPogr = Pogr;
					xMax = x[2 * i];
					yMax = y[2 * j];
				}
			}
		}

		// Справка
		label34->Text = Convert::ToString(p);
		label35->Text = Convert::ToString(Eps_max);
		label36->Text = Convert::ToString(MaxF);
		label37->Text = Convert::ToString(maxR1);

		label38->Text = Convert::ToString(p2);
		label39->Text = Convert::ToString(Eps_max2);
		label40->Text = Convert::ToString(MaxF2);
		label41->Text = Convert::ToString(maxR);
		label42->Text = Convert::ToString(MaxPogr);
		label43->Text = Convert::ToString(xMax);
		label44->Text = Convert::ToString(yMax);


	}
	};
}
