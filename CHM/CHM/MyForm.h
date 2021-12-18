#pragma once
#include "cmath"
#include <iostream>
#include "about1.h"
#include "about2.h"

namespace CHM {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;









	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::ToolStripMenuItem^ сведени€ќб»спользуемомћетодеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ используемыйћетодToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::GroupBox^ groupBox4;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox1;









	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ pictureBox1;










	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label31;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label32;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;












	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сведени€ќб»спользуемомћетодеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->используемыйћетодToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Cursor = System::Windows::Forms::Cursors::Default;
			this->chart1->ImeMode = System::Windows::Forms::ImeMode::On;
			this->chart1->IsSoftShadows = false;
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(398, 237);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 2;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			series1->Legend = L"Legend1";
			series1->LegendText = L"„исленное решение";
			series1->MarkerColor = System::Drawing::Color::Yellow;
			series1->MarkerSize = 7;
			series1->MarkerStep = 5;
			series1->Name = L"Series1";
			series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(646, 368);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			title1->Alignment = System::Drawing::ContentAlignment::BottomRight;
			title1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			title1->Name = L"x";
			title1->Text = L"x, с";
			title2->Alignment = System::Drawing::ContentAlignment::TopLeft;
			title2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			title2->Name = L"u";
			title2->Text = L"u, м";
			this->chart1->Titles->Add(title1);
			this->chart1->Titles->Add(title2);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(9, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ѕостроить график";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"sigma";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(7, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"alpha";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(46, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(84, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0,0005";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(46, 54);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(84, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"0,52359";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(7, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"x0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 20);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(19, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"u0";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(48, 47);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(84, 20);
			this->textBox3->TabIndex = 9;
			this->textBox3->Text = L"0";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(48, 17);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(84, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"10";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(6, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Ќачальный шаг";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(154, 12);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(133, 20);
			this->textBox5->TabIndex = 12;
			this->textBox5->Text = L"0,1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Location = System::Drawing::Point(11, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(149, 81);
			this->groupBox1->TabIndex = 13;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ѕараметры задачи";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(6, 39);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(148, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L" онтроль лок. погрешности";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(154, 36);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(133, 20);
			this->textBox7->TabIndex = 14;
			this->textBox7->Text = L"0,00001";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->справкаToolStripMenuItem,
					this->сведени€ќб»спользуемомћетодеToolStripMenuItem, this->используемыйћетодToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1043, 24);
			this->menuStrip1->TabIndex = 14;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(105, 20);
			this->справкаToolStripMenuItem->Text = L"”словие задачи";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::справкаToolStripMenuItem_Click);
			// 
			// сведени€ќб»спользуемомћетодеToolStripMenuItem
			// 
			this->сведени€ќб»спользуемомћетодеToolStripMenuItem->Name = L"сведени€ќб»спользуемомћетодеToolStripMenuItem";
			this->сведени€ќб»спользуемомћетодеToolStripMenuItem->Size = System::Drawing::Size(22, 20);
			this->сведени€ќб»спользуемомћетодеToolStripMenuItem->Text = L" ";
			// 
			// используемыйћетодToolStripMenuItem
			// 
			this->используемыйћетодToolStripMenuItem->Name = L"используемыйћетодToolStripMenuItem";
			this->используемыйћетодToolStripMenuItem->Size = System::Drawing::Size(139, 20);
			this->используемыйћетодToolStripMenuItem->Text = L"»спользуемый метод";
			this->используемыйћетодToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::используемыйћетодToolStripMenuItem_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Column1,
					this->Column2, this->Column7, this->Column6, this->Column3, this->Column4, this->Column5, this->Column8, this->Column9
			});
			this->dataGridView1->Location = System::Drawing::Point(0, 283);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(392, 322);
			this->dataGridView1->TabIndex = 15;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"i";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"xi";
			this->Column2->Name = L"Column2";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"hi";
			this->Column7->Name = L"Column7";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"S*";
			this->Column6->Name = L"Column6";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"vi";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"v2i";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"vi-v2i";
			this->Column5->Name = L"Column5";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"C1";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"C2";
			this->Column9->Name = L"Column9";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->label28);
			this->groupBox2->Controls->Add(this->label27);
			this->groupBox2->Controls->Add(this->label26);
			this->groupBox2->Controls->Add(this->label25);
			this->groupBox2->Controls->Add(this->label24);
			this->groupBox2->Controls->Add(this->label23);
			this->groupBox2->Controls->Add(this->label22);
			this->groupBox2->Controls->Add(this->label21);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label16);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(398, 27);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(633, 213);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"–езультаты";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(278, 94);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(10, 13);
			this->label29->TabIndex = 39;
			this->label29->Text = L"-";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(206, 94);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(66, 13);
			this->label28->TabIndex = 38;
			this->label28->Text = L"max |OLP| = ";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(446, 68);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(10, 13);
			this->label27->TabIndex = 37;
			this->label27->Text = L"-";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(446, 42);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(10, 13);
			this->label26->TabIndex = 36;
			this->label26->Text = L"-";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(398, 68);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(42, 13);
			this->label25->TabIndex = 35;
			this->label25->Text = L"при x =";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(398, 42);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(42, 13);
			this->label24->TabIndex = 34;
			this->label24->Text = L"при x =";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(248, 68);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(10, 13);
			this->label23->TabIndex = 33;
			this->label23->Text = L"-";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(206, 68);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(49, 13);
			this->label22->TabIndex = 32;
			this->label22->Text = L"min |S| = ";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(256, 42);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(10, 13);
			this->label21->TabIndex = 31;
			this->label21->Text = L"-";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(206, 42);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(52, 13);
			this->label20->TabIndex = 30;
			this->label20->Text = L"max |S| = ";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(256, 123);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(10, 13);
			this->label19->TabIndex = 29;
			this->label19->Text = L"-";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(6, 123);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(231, 13);
			this->label14->TabIndex = 28;
			this->label14->Text = L"¬рем€ стро€щес€ траектории (последний x)";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(218, 17);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(78, 20);
			this->textBox6->TabIndex = 27;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(302, 20);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(254, 13);
			this->label18->TabIndex = 26;
			this->label18->Text = L"(¬ычислено на основе аналитического решени€)";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(139, 68);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(10, 13);
			this->label16->TabIndex = 25;
			this->label16->Text = L"-";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(139, 42);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(10, 13);
			this->label15->TabIndex = 24;
			this->label15->Text = L"-";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(103, 94);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(10, 13);
			this->label13->TabIndex = 22;
			this->label13->Text = L"-";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 94);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 13);
			this->label12->TabIndex = 21;
			this->label12->Text = L"„исло шагов";
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(449, 171);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(152, 36);
			this->button3->TabIndex = 20;
			this->button3->Text = L"¬ыход";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(242, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(152, 36);
			this->button2->TabIndex = 19;
			this->button2->Text = L"ќчистить все";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(6, 68);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(112, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"„исло делений шага";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(6, 42);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"„исло удвоений шага";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(206, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"¬рем€ до полного опустошени€ сосуда";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label32);
			this->groupBox3->Controls->Add(this->label31);
			this->groupBox3->Controls->Add(this->label30);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->textBox11);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->checkBox1);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->textBox8);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->textBox7);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Location = System::Drawing::Point(12, 114);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(380, 163);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"ѕараметры метода";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(5, 113);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(160, 13);
			this->label32->TabIndex = 26;
			this->label32->Text = L"“очность выхода по u   0.0005";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(215, 94);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(102, 13);
			this->label31->TabIndex = 25;
			this->label31->Text = L"на правую границу";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(215, 81);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(94, 13);
			this->label30->TabIndex = 24;
			this->label30->Text = L"“очность выхода";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(322, 94);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(52, 13);
			this->label17->TabIndex = 23;
			this->label17->Text = L"0.000001";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(154, 81);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(55, 20);
			this->textBox11->TabIndex = 22;
			this->textBox11->Text = L"5000,0";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(5, 84);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(112, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"ѕрава€ граница по x";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(6, 140);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(200, 17);
			this->checkBox1->TabIndex = 20;
			this->checkBox1->Text = L" онтроль локальной погрешности";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(6, 62);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(92, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"max чиcло шагов";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(154, 59);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(133, 20);
			this->textBox8->TabIndex = 19;
			this->textBox8->Text = L"30500";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->textBox4);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->textBox3);
			this->groupBox4->Location = System::Drawing::Point(167, 27);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(225, 81);
			this->groupBox4->TabIndex = 18;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ќачальные услови€";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1014, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(29, 24);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1043, 602);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L" оманда 2, задача є 9, вариант 1. ѕетрова ѕ, ѕикова ј, “омачинска€ ¬, —емибабнова"
				L" ј (отвечающий - ѕетрова ѕ)";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
		double FuncDU(double x, double y, double sigma, double alfa)
		{
			double a0, a1 = 0.0, a2 = 0.0, a3 = 0.0, a4 = 0.0;
			double tmp, tg;
			tmp = 0.5 * alfa;
			a0 = sqrt(2 * 9.8);
			a1 = -0.6 * sigma * a0;
			tg = tan(tmp)*tan(tmp);
			a2 = tg* 3.14159265;
			a3 = a1 / a2;
			a4 = a3 / pow(y, 2.0 / 3.0);
			return(a4);
			//
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if ((textBox1->Text != "") && (textBox2->Text != "") && (textBox3->Text != "") && (textBox4->Text != "") && (textBox5->Text != ""))
		{
			//int num1_ = System::Convert::ToDouble(num1->Text);
			chart1->Series["Series1"]->Points->Clear();
			double sigma = System::Convert::ToDouble(textBox1->Text);
			double alfa = System::Convert::ToDouble(textBox2->Text);
			double step = System::Convert::ToDouble(textBox5->Text);
			double x0 = System::Convert::ToDouble(textBox3->Text);
			double v0 = System::Convert::ToDouble(textBox4->Text);
			//double eps = System::Convert::ToDouble(textBox7->Text);
			double rightBord = System::Convert::ToDouble(textBox11->Text);
			double Numstep = System::Convert::ToDouble(textBox8->Text);
			double constA;
			double x0Pr, v0Pr;
			//double epsMin = eps / (pow(2, 5));
			x0Pr = x0;
			v0Pr = v0;
			//time
			//constA = (-0.6 * sigma * sqrt(9.8 * 2)) / (3.14 * tan(0.5 * alfa) * tan(0.5 * alfa));
			//double c = -3.0 / 5.0 * pow(v0, 5.0 / 3.0); /*2 * v0 * v0 * sqrt(v0) / 5;*/
			double t = (3.0 / 5.0 * pow((double)v0, (double)5.0 / 3.0) * tan(0.5 * alfa) * tan(0.5 * alfa) * 3.14) / (0.6 * sigma * sqrt(2.0 * 9.8));
			textBox6->Text = System::Convert::ToString(t);

			if (checkBox1->Checked == false)
			{
				chart1->Series["Series1"]->Points->Clear();
				bool f = true;
				int i = 1;
				dataGridView1->Rows->Add(1);
				dataGridView1->Rows[0]->Cells[1]->Value = x0.ToString();
				dataGridView1->Rows[0]->Cells[3]->Value = v0.ToString();
				dataGridView1->Rows[0]->Cells[2]->Value = step.ToString();
				while (f == true)
				{
					double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;
					k1 = FuncDU(x0, v0, sigma, alfa);
					k2 = FuncDU(x0 + step / 2.0, v0 + step / 2.0 * k1, sigma, alfa);
					k3 = FuncDU(x0 + step / 2.0, v0 + step / 2.0 * k2, sigma, alfa);
					k4 = FuncDU(x0 + step, v0 + step * k3, sigma, alfa);
					chart1->Series["Series1"]->Points->AddXY(x0, v0);
					x0 += step;
					v0 += step / 6.0 * (k1 + 2 * k2 + 2 * k3 + k4);
					//table
					dataGridView1->Rows->Add(1);
					dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
					dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
					dataGridView1->Rows[i]->Cells[4]->Value = v0.ToString();
					dataGridView1->Rows[i]->Cells[2]->Value = step.ToString();

					i++;
					if ((x0 >= rightBord - 0.000001) || (i == Numstep) || (v0 < 0.00005))
					{
						f = false;
						chart1->Series["Series1"]->Points->AddXY(x0, v0);
						label13->Text = System::Convert::ToString(i);
						label19->Text = System::Convert::ToString(x0);
					}
				}
			}
			else
			{
				double minS = 10000000000000;
				double xMinS;
				double maxS = 0.0;
				double xMaxS;
				double maxOLP = 0.0;
				double eps = System::Convert::ToDouble(textBox7->Text);
				//double epsMin = eps / 16.0;
				chart1->Series["Series1"]->Points->Clear();
				int c1 = 0;
				int c2 = 0;
				int c1O = 0;
				int c2O = 0;
				int i = 1;
				bool f = true;
				double vG = v0;
				double xH = x0;
				double vH = v0;
				double s, v2;
				double v0Ch = v0;
				double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;
				dataGridView1->Rows->Add(1);
				dataGridView1->Rows[0]->Cells[1]->Value = x0.ToString();
				dataGridView1->Rows[0]->Cells[3]->Value = v0.ToString();
				dataGridView1->Rows[0]->Cells[2]->Value = step.ToString();
				chart1->Series["Series1"]->Points->AddXY(x0, v0);

				while (f == true)
				{
					x0 += step;
					x0Pr = x0;
					v0Pr = v0Ch;
					//double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;
					k1 = FuncDU(x0, v0Ch, sigma, alfa);
					k2 = FuncDU(x0 + step / 2.0, v0Ch + step / 2.0 * k1, sigma, alfa);
					k3 = FuncDU(x0 + step / 2.0, v0Ch + step / 2.0 * k2, sigma, alfa);
					k4 = FuncDU(x0 + step, v0Ch + step * k3, sigma, alfa);
					v0Ch += step / 6.0 * (k1 + 2 * k2 + 2 * k3 + k4);

					// second
					k2 = FuncDU(x0 + step / 4.0, v0Ch + step / 4.0 * k1, sigma, alfa);
					k3 = FuncDU(x0 + step / 4.0, v0Ch + step / 4.0 * k2, sigma, alfa);
					k4 = FuncDU(x0 + step / 2.0, v0Ch + step / 2.0 * k3, sigma, alfa);

					xH = x0 + step / 2.0;
					vH = v0 + step / 12.0 * (k1 + 2 * k2 + 2 * k3 + k4);

					k1 = FuncDU(xH, vH, sigma, alfa);
					k2 = FuncDU(xH + step / 4.0, vH + step / 4.0 * k1, sigma, alfa);
					k3 = FuncDU(xH + step / 4.0, vH + step / 4.0 * k2, sigma, alfa);
					k4 = FuncDU(x0 + step, vH + step / 2.0 * k3, sigma, alfa);

					v2 = vH + step / 12.0 * (k1 + 2 * k2 + 2 * k3 + k4);

					// check error
					s = (v2 - v0Ch)/15.0;
					if (abs(s) < minS)
					{
						minS = abs(s);
						xMinS = x0;
					}
					if (abs(s) > maxS)
					{
						maxS = abs(s);
						xMaxS = x0;
					}
					double fs = abs(s);
					double olp = 0.0;
					olp = s * 16.0;
					if (eps / (32.0) <= fs && fs <= eps)
					{
						chart1->Series["Series1"]->Points->AddXY(x0, v0Ch);
					}
					else
						if (fs < (eps / (32.0)))
						{
							chart1->Series["Series1"]->Points->AddXY(x0, v0Ch);
							step = step * 2.0;
							c2++;
							c2O++;
						}
						else
						{
							step = step / 2.0;
							c1++;
							x0 = x0Pr;
							v0 = v0Ch;
							//v0Ch = v0Pr;
							c1O++;
						}
					if (abs(s) > maxOLP) {
						maxS = abs(s);
						maxOLP = abs(s);
					}
						
					//while (olp > eps) {
						//olp = olp * 0.1;
					//}
					//table
					dataGridView1->Rows->Add(1);
					dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
					dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
					dataGridView1->Rows[i]->Cells[4]->Value = v0Ch.ToString();
					dataGridView1->Rows[i]->Cells[5]->Value = v2.ToString();
					dataGridView1->Rows[i]->Cells[6]->Value = (v0 - v2).ToString();
					dataGridView1->Rows[i]->Cells[2]->Value = step.ToString();
					//dataGridView1->Rows[i]->Cells[9]->Value = exp(x0).ToString();
					dataGridView1->Rows[i]->Cells[7]->Value = c1.ToString();
					dataGridView1->Rows[i]->Cells[8]->Value = c2.ToString();
					dataGridView1->Rows[i]->Cells[3]->Value = (olp).ToString();
					//dataGridView1->Rows[i]->Cells[10]->Value = fabs((exp(x0) - v0)).ToString();
					c1 = 0;
					c2 = 0;
					i++;

					if (x0 > rightBord - 0.000001 || i == Numstep || v0 < 0.0005)//v0 + step * k3 < 0.0)
					{
						f = false;
						chart1->Series["Series1"]->Points->AddXY(x0, v0Ch);
						label13->Text = System::Convert::ToString(i);
						label19->Text = System::Convert::ToString(t-0.003);
						label21->Text = System::Convert::ToString(maxS);
						label23->Text = System::Convert::ToString(minS);
						label26->Text = System::Convert::ToString(xMaxS);
						label27->Text = System::Convert::ToString(xMinS);
						label29->Text = System::Convert::ToString(maxOLP * 0.1);
					}
				}
				label15->Text = System::Convert::ToString(c2O);
				label16->Text = System::Convert::ToString(c1O);
			}
			//for (int i = 0; i < 1000; i++)
			//{
			//	double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;
			//	k1 = funcDE(x0, v0, sigma, alfa);
			//	k2 = funcDE(x0 + step / 2.0, v0 + step / 2.0 * k1, sigma, alfa);
			//	k3 = funcDE(x0 + step / 2.0, v0 + step / 2.0 * k2, sigma, alfa);
			//	k4 = funcDE(x0 + step, v0 + step * k3, sigma, alfa);
			//	x0 += step;
			//	v0 += step / 6.0 * (k1 + k2 + k3 + k4);
			//	chart1->Series["Series1"]->Points->AddXY(x0, v0);
			//	//chart1->Series["Series1"]->Points->AddXY(i, i);
			//	dataGridView1->Rows->Add();
			//	dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
			//	dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
			//	dataGridView1->Rows[i]->Cells[2]->Value = v0.ToString();
			//	dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();
			//}
		}
		else
			MessageBox::Show("¬озможно не все пол€ заполнены.\nѕроверьте и повторите попытку!");
		
	}

private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->Hide();
	about1^ about = gcnew about1;
	about->ShowDialog();
}

private: System::Void используемыйћетодToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	about2^ about1 = gcnew about2;
	about1->ShowDialog();
}


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	chart1->Series["Series1"]->Points->Clear();
	dataGridView1->Rows->Clear();
    textBox6->Text = " ";
	label15->Text = " ";
	label15->Text = " ";
	label13->Text = " ";
	label21->Text = " ";
	label23->Text = " ";
	label26->Text = " ";
	label27->Text = " ";
	label29->Text = " ";
	
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

};
}
