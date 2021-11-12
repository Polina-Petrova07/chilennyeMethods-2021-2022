#pragma once
#include <stdlib.h>
#include <math.h>

namespace CHMlab1 {

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

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ComboBox^ comboBox3;

	private:
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(13, 175);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"вычислить траекторию";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Controls->Add(this->comboBox3);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(5, -2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(482, 216);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"v01 (x)", L"v02 (x)", L"v01 (v02)" });
			this->comboBox3->Location = System::Drawing::Point(16, 130);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(191, 21);
			this->comboBox3->TabIndex = 18;
			this->comboBox3->Text = L"Отображаемый график (для 2 основной)";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(368, 118);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(91, 20);
			this->textBox10->TabIndex = 17;
			this->textBox10->Text = L"1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(215, 121);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(25, 13);
			this->label11->TabIndex = 16;
			this->label11->Text = L"v02";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(106, 104);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(91, 20);
			this->textBox9->TabIndex = 15;
			this->textBox9->Text = L"1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(13, 107);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(67, 13);
			this->label10->TabIndex = 14;
			this->label10->Text = L"Параметр b";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(106, 74);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(91, 20);
			this->textBox8->TabIndex = 13;
			this->textBox8->Text = L"2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 81);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(67, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Параметр a";
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(321, 175);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(148, 35);
			this->button3->TabIndex = 5;
			this->button3->Text = L"выход";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"тестовая задача", L"основная №1", L"основная №2" });
			this->comboBox2->Location = System::Drawing::Point(9, 16);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(155, 21);
			this->comboBox2->TabIndex = 11;
			this->comboBox2->Text = L"тип задачи";
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(167, 175);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"истинное решение";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(368, 144);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(91, 20);
			this->textBox5->TabIndex = 10;
			this->textBox5->Text = L"1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(214, 146);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"правая граница";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(368, 13);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(91, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->Text = L"1E-05";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(215, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(147, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"контроль лок. погрешности";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(368, 40);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(91, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->Text = L"1000";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(215, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"max чило шагов";
			// 
			// comboBox1
			// 
			this->comboBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"не учитывать (постоянный шаг)", L"учитывать (задайте eps)" });
			this->comboBox1->Location = System::Drawing::Point(9, 43);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(198, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->Text = L"контроль локальной погрешности";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(368, 92);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(91, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(215, 95);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(25, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"v01";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(368, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(91, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0,001";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(215, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(84, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"начальный шаг";
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(884, 510);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(148, 35);
			this->button4->TabIndex = 12;
			this->button4->Text = L"очитить все";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11
			});
			this->dataGridView1->Location = System::Drawing::Point(5, 220);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(405, 332);
			this->dataGridView1->TabIndex = 3;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"i";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"xi";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"vi";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"v2i";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"vi-v2i";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"OLP";
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"hi";
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"C1";
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"C2";
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"ui";
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"|ui-vi|";
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend1->IsTextAutoFit = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(416, 220);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::Navy;
			series1->Legend = L"Legend1";
			series1->LegendText = L"численное решение";
			series1->MarkerColor = System::Drawing::SystemColors::GrayText;
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series2->Color = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			series2->Legend = L"Legend1";
			series2->LegendText = L"истиное решение";
			series2->MarkerColor = System::Drawing::Color::Yellow;
			series2->Name = L"Series2";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(626, 332);
			this->chart1->TabIndex = 4;
			this->chart1->Text = L"chart1";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox2->Controls->Add(this->pictureBox4);
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Controls->Add(this->pictureBox1);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->textBox7);
			this->groupBox2->Controls->Add(this->textBox6);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Location = System::Drawing::Point(490, -2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(552, 216);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Справка";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(188, 77);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(364, 106);
			this->pictureBox4->TabIndex = 16;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(509, 13);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(32, 28);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(188, 77);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(366, 108);
			this->pictureBox2->TabIndex = 14;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(336, 13);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(206, 146);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(271, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Задача: ";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(151, 51);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(99, 20);
			this->textBox7->TabIndex = 3;
			this->textBox7->Text = L"0";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(151, 22);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(99, 20);
			this->textBox6->TabIndex = 2;
			this->textBox6->Text = L"0";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(12, 51);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(112, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Число делений шага";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 28);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(117, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Число удвоений шага";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1044, 557);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Команда 2. ЛР 1. Вариант 2";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		double FuncDU(double x0, double v0)
		{
			return (v0);
		}
		double FuncMain_1(double x0, double v0)
		{
			double f = x0 / (1 + x0 * x0);
			return (f * v0 * v0 + v0 - pow(v0, 3) * sin(10 * x0));
		}
		double FuncMain_2_1(double x0, double v01, double v02)
		{
			return (v02);
		}
		double FuncMain_2_2(double x0, double v01, double v02, double a, double b)
		{
			return (-a * a * sin(v01) - b * sin(x0));
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series["Series1"]->Points->Clear();
		double x0Pr, v0Pr, v0Pr2;
		double step = System::Convert::ToDouble(textBox1->Text);
		double v01 = System::Convert::ToDouble(textBox2->Text);
		double v02 = System::Convert::ToDouble(textBox10->Text);
		int Numstep = System::Convert::ToDouble(textBox3->Text);
		double rightBord = System::Convert::ToDouble(textBox5->Text);
		double a = System::Convert::ToDouble(textBox8->Text);
		double b = System::Convert::ToDouble(textBox9->Text);
		double x0 = 0.0;
		x0Pr = x0;
		v0Pr = v01;
		v0Pr2 = v02;
		switch (comboBox2->SelectedIndex)//what task
		{
		case 0:   //test task
		{
			pictureBox1->Visible = true;
			if (comboBox1->SelectedIndex != -1 && comboBox2->SelectedIndex != -1)
			{
				switch (comboBox1->SelectedIndex)
				{
				case 0: //без ЛП
				{
					chart1->Series["Series1"]->Points->Clear();
					bool f = true;
					int i = 1;
					dataGridView1->Rows->Add(1);
					dataGridView1->Rows[0]->Cells[1]->Value = x0.ToString();
					dataGridView1->Rows[0]->Cells[2]->Value = v01.ToString();
					dataGridView1->Rows[0]->Cells[6]->Value = step.ToString();
					while (f == true)
					{
						double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;
						k1 = FuncDU(x0, v01);
						k2 = FuncDU(x0 + step / 2.0, v01 + step / 2.0 * k1);
						k3 = FuncDU(x0 + step / 2.0, v01 + step / 2.0 * k2);
						k4 = FuncDU(x0 + step, v01 + step * k3);
						chart1->Series["Series1"]->Points->AddXY(x0, v01);
						x0 += step;
						v01 += step / 6.0 * (k1 + 2 * k2 + 2 * k3 + k4);
						//table
						dataGridView1->Rows->Add(1);
						dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
						dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
						dataGridView1->Rows[i]->Cells[2]->Value = v01.ToString();
						dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();

						//half step
						double k1_1 = 0.0, k2_2 = 0.0, k3_3 = 0.0, k4_4 = 0.0;
						k1_1 = FuncDU(x0, v01);
						k2_2 = FuncDU(x0 + step / 4.0, v01 + step / 4.0 * k1_1);
						k3_3 = FuncDU(x0 + step / 4.0, v01 + step / 4.0 * k2_2);
						k4_4 = FuncDU(x0 + step / 2.0, v01 + step / 2.0 * k3_3);
						double v1 = v01;
						v1 = v1 + step / 12.0 * (k1_1 + 2*k2_2 + 2*k3_3 + k4_4);
						dataGridView1->Rows[i]->Cells[3]->Value = v1.ToString();
						dataGridView1->Rows[i]->Cells[4]->Value = (v01 - v1).ToString();

						i++;
						if (x0 >= rightBord - step || i == Numstep)
						{
							f = false;
							chart1->Series["Series1"]->Points->AddXY(x0, v01);
						}
					}
					/*dataGridView1->Rows->Add(1);
					dataGridView1->Rows[0]->Cells[1]->Value = x0.ToString();
					dataGridView1->Rows[0]->Cells[2]->Value = v0.ToString();
					dataGridView1->Rows[0]->Cells[6]->Value = step.ToString();
					for (int i = 1; i < Numstep-1; i++)
					{
						if (x0 < rightBord)
						{
							double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;
							k1 = FuncDU(x0, v0);
							k2 = FuncDU(x0 + step / 2.0, v0 + step / 2.0 * k1);
							k3 = FuncDU(x0 + step / 2.0, v0 + step / 2.0 * k2);
							k4 = FuncDU(x0 + step, v0 + step * k3);
							chart1->Series["Series1"]->Points->AddXY(x0, v0);
							x0 += step;
							v0 += step / 6.0 * (k1 + k2 + k3 + k4);
							dataGridView1->Rows->Add(1);
							dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
							dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
							dataGridView1->Rows[i]->Cells[2]->Value = v0.ToString();
							dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();
							//half step
							double k1_1 = 0.0, k2_2 = 0.0, k3_3 = 0.0, k4_4 = 0.0;
							k1_1 = FuncDU(x0, v0);
							k2_2 = FuncDU(x0 + step / 4.0, v0 + step / 4.0 * k1);
							k3_3 = FuncDU(x0 + step / 4.0, v0 + step / 4.0 * k2);
							k4_4 = FuncDU(x0 + step / 2.0, v0 + step / 2.0 * k3);
							double v1 = v0;
							v1 = v1 + step / 12.0 * (k1_1 + k2_2 + k3_3 + k4_4);
							dataGridView1->Rows[i]->Cells[3]->Value = v1.ToString();
							dataGridView1->Rows[i]->Cells[4]->Value = (v0 - v1).ToString();
						}
					}*/
					break;
				}
				case 1:   //с ЛП
				{
					double eps = System::Convert::ToDouble(textBox4->Text);
					//double epsMin = eps / 16.0;
					chart1->Series["Series1"]->Points->Clear();
					int c1 = 0;
					int c2 = 0;
					int c1O = 0;
					int c2O = 0;
					int i = 1;
					bool f = true;
					double vG = v01;
					double xH = x0;
					double vH = v01;
					double s,v2;
					double v0Ch = v01;
					dataGridView1->Rows->Add(1);
					dataGridView1->Rows[0]->Cells[1]->Value = x0.ToString();
					dataGridView1->Rows[0]->Cells[2]->Value = v01.ToString();
					dataGridView1->Rows[0]->Cells[6]->Value = step.ToString();
					chart1->Series["Series1"]->Points->AddXY(x0, v01);
				
					while (f == true)
					{
						x0 += step;
						x0Pr = x0;
					    double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;
						k1 = FuncDU(x0, v0Ch);
						k2 = FuncDU(x0 + step / 2.0, v0Ch + step / 2.0 * k1);
						k3 = FuncDU(x0 + step / 2.0, v0Ch + step / 2.0 * k2);
						k4 = FuncDU(x0 + step, v0Ch + step * k3);
						v0Ch += step / 6.0 * (k1 + 2 * k2 + 2 * k3 + k4);

						// second
						k2 = FuncDU(x0 + step / 4.0, v0Ch + step / 4.0 * k1);
						k3 = FuncDU(x0 + step / 4.0, v0Ch + step / 4.0 * k2);
						k4 = FuncDU(x0 + step / 2.0, v0Ch + step / 2.0 * k3);

						xH = x0 + step / 2.0;
						vH = v01 + step / 12.0 * (k1 + 2 * k2 + 2 * k3 + k4);

						k1 = FuncDU(xH, vH);
						k2 = FuncDU(xH + step / 4.0, vH + step / 4.0 * k1);
						k3 = FuncDU(xH + step / 4.0, vH + step / 4.0 * k2);
						k4 = FuncDU(x0 + step, vH + step/2.0 * k3);

						v2 = vH + step / 12.0 * (k1 + 2 * k2 + 2 * k3 + k4);
						//rude
						double k1_1 = 0.0, k2_2 = 0.0, k3_3 = 0.0;
						k1_1 = FuncDU(x0, vG);
						k2_2 = FuncDU(x0 + step / 3.0, vG + step / 3.0 * k1_1);
						k3_3 = FuncDU(x0 + 2.0 / 3.0 * step, vG + 2.0 / 3.0 * step * k2_2);
						vG = vG + step * (1.0 / 4.0 * k1_1 + 3.0 / 4.0 * k3_3);

						// check error
						s = (v2 - v0Ch)/15.0;
						double fs = fabs(s);
						if (eps / (32.0) <= fs && eps >= fs)
						{
							chart1->Series["Series1"]->Points->AddXY(x0, v0Ch);
							//x0 += step;
							//v0 = vG;
						}
						else
						if (fs < (eps / (32.0)))
						{
							chart1->Series["Series1"]->Points->AddXY(x0, v0Ch);
							step = 2 * step;
							//x0 += step;
							c2++;
							//v0 = vG;
							c2O++;
						}
						else
						{
							//chart1->Series["Series1"]->Points->AddXY(x0, v0Ch);
							step = step / 2.0;
							c1++;
							x0 = x0Pr;
							v01 = v0Ch;
							c1O++;
						}
						double olp;
						olp = s * 16.0;
						//table
						dataGridView1->Rows->Add(1);
						dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
						dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
						dataGridView1->Rows[i]->Cells[2]->Value = v01.ToString();
						dataGridView1->Rows[i]->Cells[3]->Value = v2.ToString();
						dataGridView1->Rows[i]->Cells[4]->Value = (v01-v2).ToString();
						dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();
						dataGridView1->Rows[i]->Cells[9]->Value = exp(x0).ToString();
						dataGridView1->Rows[i]->Cells[7]->Value = c1.ToString();
						dataGridView1->Rows[i]->Cells[8]->Value = c2.ToString();
						dataGridView1->Rows[i]->Cells[5]->Value = olp.ToString();
						dataGridView1->Rows[i]->Cells[10]->Value = fabs((exp(x0) - v01)).ToString();
						c1 = 0;
						c2 = 0;
						i++;

						if (x0 >= rightBord+eps || i == Numstep)
						{
							f = false;
							chart1->Series["Series1"]->Points->AddXY(x0, v0Ch);
						}
					}
					/*int c1 = 0;
					int c2 = 0;
					chart1->Series["Series1"]->Points->Clear();
					for (int i = 0; i < Numstep; i++)
					{
						if (x0 < rightBord)
						{
							double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;
							k1 = FuncDU(x0, v0);
							k2 = FuncDU(x0 + step / 2.0, v0 + step / 2.0 * k1);
							k3 = FuncDU(x0 + step / 2.0, v0 + step / 2.0 * k2);
							k4 = FuncDU(x0 + step, v0 + step * k3);
							//chart1->Series["Series1"]->Points->AddXY(x0, v0);
							x0 += step;
							v0 += step / 6.0 * (k1 + 2*k2 + 2*k3 + k4);

							//table
							dataGridView1->Rows->Add(1);
							dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
							dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
							dataGridView1->Rows[i]->Cells[2]->Value = v0.ToString();
							dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();
							dataGridView1->Rows[i]->Cells[9]->Value = (x0 * x0 / 2.0).ToString();
							dataGridView1->Rows[i]->Cells[7]->Value = c1.ToString();
							dataGridView1->Rows[i]->Cells[8]->Value = c2.ToString();

							//half step
							double k1_1 = 0.0, k2_2 = 0.0, k3_3 = 0.0, k4_4 = 0.0;
							k1_1 = FuncDU(x0, v0);
							k2_2 = FuncDU(x0 + step / 4.0, v0 + step / 4.0 * k1_1);
							k3_3 = FuncDU(x0 + step / 4.0, v0 + step / 4.0 * k2_2);
							k4_4 = FuncDU(x0 + step / 2.0, v0 + step / 2.0 * k3_3);
							double v1 = v0;
							v1 = v1 + step / 12.0 * (k1_1 + k2_2 + k3_3 + k4_4);
							dataGridView1->Rows[i]->Cells[3]->Value = v1.ToString();
							dataGridView1->Rows[i]->Cells[4]->Value = (v0 - v1).ToString();

							// check error
							double s;
							s = (v1 - v0) / 15.0;
							double eps = System::Convert::ToDouble(textBox4->Text);
							double epsMin = eps / 15.0;
							if (fabs(s) > epsMin && fabs(s) < eps)
							{
								chart1->Series["Series1"]->Points->AddXY(x0, v0);
								//x0 += step;
								//v0 += step / 6.0 * (k1 + k2 + k3 + k4);
							}
							if (fabs(s) < epsMin)
							{
								chart1->Series["Series1"]->Points->AddXY(x0, v0);
								step = 2 * step;
								c1++;
							}
							if (fabs(s) > eps)
							{
								step = step / 2.0;
								x0 = x0Pr;
								v0 = v0Pr;
								c2++;
							}
							double olp;
							olp = s * 16.0;
							//round(olp * 100000000000) / 1000000000000;
							dataGridView1->Rows[i]->Cells[5]->Value = olp.ToString();
							dataGridView1->Rows[i]->Cells[10]->Value = (fabs(x0 * x0 / 2.0 - v0)).ToString();

							x0Pr = x0;
							v0Pr = v0;
						}
					}*/

					textBox6->Text = System::Convert::ToString(c2O);
					textBox7->Text = System::Convert::ToString(c1O);

					break;
				}
				}
			}
			else MessageBox::Show("выберите тип задачи и нужен ли контроль локальной погрешности");
			break;
		}
		case 1:     //main 1
		{
			pictureBox2->Visible = true;
			switch (comboBox1->SelectedIndex)
			{
			case 0:   //без ЛП
			{
				chart1->Series["Series1"]->Points->Clear();
				bool f = true;
				int i = 1;
				dataGridView1->Rows->Add(1);
				dataGridView1->Rows[0]->Cells[1]->Value = x0.ToString();
				dataGridView1->Rows[0]->Cells[2]->Value = v01.ToString();
				dataGridView1->Rows[0]->Cells[6]->Value = step.ToString();
				while (f == true)
				{
					double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;
					k1 = FuncMain_1(x0, v01);
					k2 = FuncMain_1(x0 + step / 2.0, v01 + step / 2.0 * k1);
					k3 = FuncMain_1(x0 + step / 2.0, v01 + step / 2.0 * k2);
					k4 = FuncMain_1(x0 + step, v01 + step * k3);
					chart1->Series["Series1"]->Points->AddXY(x0, v01);
					x0 += step;
					v01 += step / 6.0 * (k1 + 2 * k2 + 2 * k3 + k4);
					//table
					dataGridView1->Rows->Add(1);
					dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
					dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
					dataGridView1->Rows[i]->Cells[2]->Value = v01.ToString();
					dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();

					//half step
					double k1_1 = 0.0, k2_2 = 0.0, k3_3 = 0.0, k4_4 = 0.0;
					k1_1 = FuncMain_1(x0, v01);
					k2_2 = FuncMain_1(x0 + step / 4.0, v01 + step / 4.0 * k1_1);
					k3_3 = FuncMain_1(x0 + step / 4.0, v01 + step / 4.0 * k2_2);
					k4_4 = FuncMain_1(x0 + step / 2.0, v01 + step / 2.0 * k3_3);
					double v1 = v01;
					v1 = v1 + step / 12.0 * (k1_1 + 2 * k2_2 + 2 * k3_3 + k4_4);
					dataGridView1->Rows[i]->Cells[3]->Value = v1.ToString();
					dataGridView1->Rows[i]->Cells[4]->Value = (v01 - v1).ToString();

					i++;
					if (x0 >= rightBord - step || i == Numstep)
					{
						f = false;
						chart1->Series["Series1"]->Points->AddXY(x0, v01);
					}
				}

				break;
			}
			case 1:   //с ЛП
			{
				double eps = System::Convert::ToDouble(textBox4->Text);
				//double epsMin = eps / 16.0;
				chart1->Series["Series1"]->Points->Clear();
				int c1 = 0;
				int c2 = 0;
				int c1O = 0;
				int c2O = 0;
				int i = 1;
				bool f = true;
				double vG = v01;
				double xH = x0;
				double vH = v01;
				double s, v2;
				double v0Ch = v01;
				dataGridView1->Rows->Add(1);
				dataGridView1->Rows[0]->Cells[1]->Value = x0.ToString();
				dataGridView1->Rows[0]->Cells[2]->Value = v01.ToString();
				dataGridView1->Rows[0]->Cells[6]->Value = step.ToString();
				chart1->Series["Series1"]->Points->AddXY(x0, v01);

				while (f == true)
				{
					x0 += step;
					x0Pr = x0;
					double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;
					k1 = FuncMain_1(x0, v0Ch);
					k2 = FuncMain_1(x0 + step / 2.0, v0Ch + step / 2.0 * k1);
					k3 = FuncMain_1(x0 + step / 2.0, v0Ch + step / 2.0 * k2);
					k4 = FuncMain_1(x0 + step, v0Ch + step * k3);
					v0Ch += step / 6.0 * (k1 + 2 * k2 + 2 * k3 + k4);

					// second
					k2 = FuncMain_1(x0 + step / 4.0, v0Ch + step / 4.0 * k1);
					k3 = FuncMain_1(x0 + step / 4.0, v0Ch + step / 4.0 * k2);
					k4 = FuncMain_1(x0 + step / 2.0, v0Ch + step / 2.0 * k3);

					xH = x0 + step / 2.0;
					vH = v01 + step / 12.0 * (k1 + 2 * k2 + 2 * k3 + k4);

					k1 = FuncMain_1(xH, vH);
					k2 = FuncMain_1(xH + step / 4.0, vH + step / 4.0 * k1);
					k3 = FuncMain_1(xH + step / 4.0, vH + step / 4.0 * k2);
					k4 = FuncMain_1(x0 + step, vH + step / 2.0 * k3);

					v2 = vH + step / 12.0 * (k1 + 2 * k2 + 2 * k3 + k4);
					//rude
					double k1_1 = 0.0, k2_2 = 0.0, k3_3 = 0.0;
					k1_1 = FuncMain_1(x0, vG);
					k2_2 = FuncMain_1(x0 + step / 3.0, vG + step / 3.0 * k1_1);
					k3_3 = FuncMain_1(x0 + 2.0 / 3.0 * step, vG + 2.0 / 3.0 * step * k2_2);
					vG = vG + step * (1.0 / 4.0 * k1_1 + 3.0 / 4.0 * k3_3);

					// check error
					s = (v2 - v0Ch);
					double fs = fabs(s);
					if (eps / (32.0) <= fs && eps >= fs)
					{
						chart1->Series["Series1"]->Points->AddXY(x0, v0Ch);
						//x0 += step;
						v01 = vG;
					}
					else
						if (fs < (eps / (32.0)))
						{
							chart1->Series["Series1"]->Points->AddXY(x0, v0Ch);
							step = 2 * step;
							//x0 += step;
							c2++;
							v01 = vG;
							c2O++;
						}
						else
						{
							//chart1->Series["Series1"]->Points->AddXY(x0, v0Ch);
							step = step / 2.0;
							c1++;
							x0 = x0Pr;
							v01 = v0Ch;
							c1O++;
						}
					double olp;
					olp = s * 16.0;
					//table
					dataGridView1->Rows->Add(1);
					dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
					dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
					dataGridView1->Rows[i]->Cells[2]->Value = v01.ToString();
					dataGridView1->Rows[i]->Cells[3]->Value = v2.ToString();
					dataGridView1->Rows[i]->Cells[4]->Value = (v01 - v2).ToString();
					dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();
					//dataGridView1->Rows[i]->Cells[9]->Value = exp(x0).ToString();
					dataGridView1->Rows[i]->Cells[7]->Value = c1.ToString();
					dataGridView1->Rows[i]->Cells[8]->Value = c2.ToString();
					dataGridView1->Rows[i]->Cells[5]->Value = olp.ToString();
					//dataGridView1->Rows[i]->Cells[10]->Value = fabs((exp(x0) - v01)).ToString();
					c1 = 0;
					c2 = 0;
					i++;

					if (x0 >= rightBord + eps || i == Numstep)
					{
						f = false;
						chart1->Series["Series1"]->Points->AddXY(x0, v0Ch);
					}
					textBox6->Text = System::Convert::ToString(c2O);
					textBox7->Text = System::Convert::ToString(c1O);
				}
				break;
			}
			}
			break;
		}
		case 2:    //main2
		{
			pictureBox4->Visible = true;
			this->label9->Visible = true;
			this->label10->Visible = true;
			this->textBox8->Visible = true;
			this->textBox9->Visible = true;
			switch (comboBox1->SelectedIndex)
			{
			case 0:   //без ЛП
			{
				chart1->Series["Series1"]->Points->Clear();
				bool f = true;
				int i = 1;
				dataGridView1->Rows->Add(1);
				dataGridView1->Rows[0]->Cells[1]->Value = x0.ToString();
				dataGridView1->Rows[0]->Cells[2]->Value = v01.ToString();
				dataGridView1->Rows[0]->Cells[6]->Value = step.ToString();
				switch (comboBox3->SelectedIndex)
				{
				case 0:   //v01 (x)
				{
					while (f == true)
					{
						double k11 = 0.0, k21 = 0.0, k31 = 0.0, k41 = 0.0;
						double k12 = 0.0, k22 = 0.0, k32 = 0.0, k42 = 0.0;

						k11 = FuncMain_2_1(x0, v01, v02);
						k12 = FuncMain_2_2(x0, v01, v02, a, b);

						k21 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k11, v02 + step / 2.0 * k12);
						k22 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k11, v02 + step / 2.0 * k12, a, b);

						k31 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k21, v02 + step / 2.0 * k22);
						k32 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k21, v02 + step / 2.0 * k22, a, b);

						k41 = FuncMain_2_1(x0 + step, v01 + step * k31, v02 + step * k32);
						k42 = FuncMain_2_2(x0 + step, v01 + step * k31, v02 + step * k32, a, b);

						chart1->Series["Series1"]->Points->AddXY(x0, v01);
						x0 += step;
						v01 += step / 6.0 * (k11 + 2 * k21 + 2 * k31 + k41);

						//table
						dataGridView1->Rows->Add(1);
						dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
						dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
						dataGridView1->Rows[i]->Cells[2]->Value = v01.ToString();
						dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();
						i++;
						if (x0 >= rightBord - step || i == Numstep)
						{
							f = false;
							chart1->Series["Series1"]->Points->AddXY(x0, v01);
						}
					}
					break;
				}
				case 1:   //v02 (x)
				{
					while (f == true)
					{
						double k11 = 0.0, k21 = 0.0, k31 = 0.0, k41 = 0.0;
						double k12 = 0.0, k22 = 0.0, k32 = 0.0, k42 = 0.0;

						k11 = FuncMain_2_1(x0, v01, v02);
						k12 = FuncMain_2_2(x0, v01, v02, a, b);

						k21 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k11, v02 + step / 2.0 * k12);
						k22 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k11, v02 + step / 2.0 * k12, a, b);

						k31 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k21, v02 + step / 2.0 * k22);
						k32 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k21, v02 + step / 2.0 * k22, a, b);

						k41 = FuncMain_2_1(x0 + step, v01 + step * k31, v02 + step * k32);
						k42 = FuncMain_2_2(x0 + step, v01 + step * k31, v02 + step * k32, a, b);

						chart1->Series["Series1"]->Points->AddXY(x0, v02);
						x0 += step;
						v02 += step / 6.0 * (k12 + 2 * k22 + 2 * k32 + k42);

						//table
						dataGridView1->Rows->Add(1);
						dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
						dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
						dataGridView1->Rows[i]->Cells[2]->Value = v01.ToString();
						dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();
						i++;
						if (x0 >= rightBord - step || i == Numstep)
						{
							f = false;
							chart1->Series["Series1"]->Points->AddXY(x0, v02);
						}
					}
					break;
				}
				case 2:   //v01 (v02)
				{
					while (f == true)
					{
						double k11 = 0.0, k21 = 0.0, k31 = 0.0, k41 = 0.0;
						double k12 = 0.0, k22 = 0.0, k32 = 0.0, k42 = 0.0;

						k11 = FuncMain_2_1(x0, v01, v02);
						k12 = FuncMain_2_2(x0, v01, v02, a, b);

						k21 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k11, v02 + step / 2.0 * k12);
						k22 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k11, v02 + step / 2.0 * k12, a, b);

						k31 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k21, v02 + step / 2.0 * k22);
						k32 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k21, v02 + step / 2.0 * k22, a, b);

						k41 = FuncMain_2_1(x0 + step, v01 + step * k31, v02 + step * k32);
						k42 = FuncMain_2_2(x0 + step, v01 + step * k31, v02 + step * k32, a, b);

						chart1->Series["Series1"]->Points->AddXY(v02, v01);
						x0 += step;
						v01 += step / 6.0 * (k11 + 2 * k21 + 2 * k31 + k41);
						v02 += step / 6.0 * (k12 + 2 * k22 + 2 * k32 + k42);

						//table
						dataGridView1->Rows->Add(1);
						dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
						dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
						dataGridView1->Rows[i]->Cells[2]->Value = v01.ToString();
						dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();
						i++;
						if (x0 >= rightBord - step || i == Numstep)
						{
							f = false;
							chart1->Series["Series1"]->Points->AddXY(v02, v01);
						}
					}
					break;
				}
				}
				break;
			}
			case 1:   //с ЛП
			{
				double eps = System::Convert::ToDouble(textBox4->Text);
				//double epsMin = eps / 16.0;
				chart1->Series["Series1"]->Points->Clear();
				int c1 = 0;
				int c2 = 0;
				int c1O = 0;
				int c2O = 0;
				int i = 1;
				bool f = true;
				double vG = v01;
				double xH = x0;
				double vH = v01;
				double vH2 = v02;
				double s,s1,s2, v2, v22;
				double v0Ch = v01;
				double v0Ch2 = v02;
				dataGridView1->Rows->Add(1);
				dataGridView1->Rows[0]->Cells[1]->Value = x0.ToString();
				dataGridView1->Rows[0]->Cells[2]->Value = v01.ToString();
				dataGridView1->Rows[0]->Cells[6]->Value = step.ToString();
				switch (comboBox3->SelectedIndex)
				{
				case 0:   // v01(x0)
				{
					while (f==true)
					{
						x0 += step;
						x0Pr = x0;
						double k11 = 0.0, k21 = 0.0, k31 = 0.0, k41 = 0.0;
						double k12 = 0.0, k22 = 0.0, k32 = 0.0, k42 = 0.0;

						k11 = FuncMain_2_1(x0, v01, v02);
						k12 = FuncMain_2_2(x0, v01, v02, a, b);

						k21 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k11, v02 + step / 2.0 * k12);
						k22 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k11, v02 + step / 2.0 * k12, a, b);

						k31 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k21, v02 + step / 2.0 * k22);
						k32 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k21, v02 + step / 2.0 * k22, a, b);

						k41 = FuncMain_2_1(x0 + step, v01 + step * k31, v02 + step * k32);
						k42 = FuncMain_2_2(x0 + step, v01 + step * k31, v02 + step * k32, a, b);

						v0Ch += step / 6.0 * (k11 + 2 * k21 + 2 * k31 + k41);
						v0Ch2 += step / 6.0 * (k12 + 2 * k22 + 2 * k32 + k42);

						//second
						k21 = FuncMain_2_1(x0 + step / 4.0, v01 + step / 4.0 * k11, v02 + step / 4.0 * k12);
						k22 = FuncMain_2_2(x0 + step / 4.0, v01 + step / 4.0 * k11, v02 + step / 4.0 * k12, a, b);

						k31 = FuncMain_2_1(x0 + step / 4.0, v01 + step / 4.0 * k21, v02 + step / 4.0 * k22);
						k32 = FuncMain_2_2(x0 + step / 4.0, v01 + step / 4.0 * k21, v02 + step / 4.0 * k22, a, b);

						k41 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k31, v02 + step / 2.0 * k32);
						k42 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k31, v02 + step / 2.0 * k32, a, b);

						xH = x0 + step / 2.0;
						vH = v01 + step / 12.0 * (k11 + 2 * k21 + 2 * k31 + k41);
						vH2 = v02 + step / 12.0 * (k12 + 2 * k22 + 2 * k32 + k42);

						k11 = FuncMain_2_1(xH, vH, vH2);
						k12 = FuncMain_2_2(xH, vH, vH2, a, b);

						k21 = FuncMain_2_1(xH + step / 4.0, vH + step / 4.0 * k11, vH2 + step / 4.0 * k12);
						k22 = FuncMain_2_2(xH + step / 4.0, vH + step / 4.0 * k11, vH2 + step / 4.0 * k12, a, b);

						k31 = FuncMain_2_1(xH + step / 4.0, vH + step / 4.0 * k21, vH2 + step / 4.0 * k22);
						k32 = FuncMain_2_2(xH + step / 4.0, vH + step / 4.0 * k21, vH2 + step / 4.0 * k22, a, b);

						k41 = FuncMain_2_1(xH + step / 2.0, vH + step / 2.0 * k31, vH2 + step / 2.0 * k32);
						k42 = FuncMain_2_2(xH + step / 2.0, vH + step / 2.0 * k31, vH2 + step / 2.0 * k32, a, b);

						v2 = vH + step / 12.0 * (k11 + 2 * k21 + 2 * k31 + k41);
						v22 = vH2 + step / 12.0 * (k12 + 2 * k22 + 2 * k32 + k42);

						//chek error
						s1 = (v2 - v0Ch) / 15.0;
						s2 = (v22 - v0Ch2) / 15.0;
						s = sqrt(s1 * s1 + s2 * s2);
						double fs = fabs(s);
						if (eps / (32.0) <= fs && eps >= fs)
						{
							chart1->Series["Series1"]->Points->AddXY(x0, v0Ch);
						}
						else
						{
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
								c1O++;
								x0 = x0Pr;
								v01 = v0Ch;
								v02 = v0Ch2;
							}
						}
						double olp;
						olp = s * 16.0;
						//table
						dataGridView1->Rows->Add(1);
						dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
						dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
						dataGridView1->Rows[i]->Cells[2]->Value = v01.ToString();
						dataGridView1->Rows[i]->Cells[3]->Value = v2.ToString();
						dataGridView1->Rows[i]->Cells[4]->Value = (v01 - v2).ToString();
						dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();
						dataGridView1->Rows[i]->Cells[9]->Value = exp(x0).ToString();
						dataGridView1->Rows[i]->Cells[7]->Value = c1.ToString();
						dataGridView1->Rows[i]->Cells[8]->Value = c2.ToString();
						dataGridView1->Rows[i]->Cells[5]->Value = olp.ToString();
						dataGridView1->Rows[i]->Cells[10]->Value = fabs((exp(x0) - v01)).ToString();
						c1 = 0;
						c2 = 0;
						i++;

						if (x0 >= rightBord + eps || i == Numstep)
						{
							f = false;
							chart1->Series["Series1"]->Points->AddXY(x0, v0Ch);
						}
						textBox6->Text = System::Convert::ToString(c2O);
						textBox7->Text = System::Convert::ToString(c1O);
						
					}
					break;
				}
				case 1:   //v02(x0)
				{
					while (f == true)
					{
						x0 += step;
						x0Pr = x0;
						double k11 = 0.0, k21 = 0.0, k31 = 0.0, k41 = 0.0;
						double k12 = 0.0, k22 = 0.0, k32 = 0.0, k42 = 0.0;

						k11 = FuncMain_2_1(x0, v01, v02);
						k12 = FuncMain_2_2(x0, v01, v02, a, b);

						k21 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k11, v02 + step / 2.0 * k12);
						k22 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k11, v02 + step / 2.0 * k12, a, b);

						k31 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k21, v02 + step / 2.0 * k22);
						k32 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k21, v02 + step / 2.0 * k22, a, b);

						k41 = FuncMain_2_1(x0 + step, v01 + step * k31, v02 + step * k32);
						k42 = FuncMain_2_2(x0 + step, v01 + step * k31, v02 + step * k32, a, b);

						v0Ch += step / 6.0 * (k11 + 2 * k21 + 2 * k31 + k41);
						v0Ch2 += step / 6.0 * (k12 + 2 * k22 + 2 * k32 + k42);

						//second
						k21 = FuncMain_2_1(x0 + step / 4.0, v01 + step / 4.0 * k11, v02 + step / 4.0 * k12);
						k22 = FuncMain_2_2(x0 + step / 4.0, v01 + step / 4.0 * k11, v02 + step / 4.0 * k12, a, b);

						k31 = FuncMain_2_1(x0 + step / 4.0, v01 + step / 4.0 * k21, v02 + step / 4.0 * k22);
						k32 = FuncMain_2_2(x0 + step / 4.0, v01 + step / 4.0 * k21, v02 + step / 4.0 * k22, a, b);

						k41 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k31, v02 + step / 2.0 * k32);
						k42 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k31, v02 + step / 2.0 * k32, a, b);

						xH = x0 + step / 2.0;
						vH = v01 + step / 12.0 * (k11 + 2 * k21 + 2 * k31 + k41);
						vH2 = v02 + step / 12.0 * (k12 + 2 * k22 + 2 * k32 + k42);

						k11 = FuncMain_2_1(xH, vH, vH2);
						k12 = FuncMain_2_2(xH, vH, vH2, a, b);

						k21 = FuncMain_2_1(xH + step / 4.0, vH + step / 4.0 * k11, vH2 + step / 4.0 * k12);
						k22 = FuncMain_2_2(xH + step / 4.0, vH + step / 4.0 * k11, vH2 + step / 4.0 * k12, a, b);

						k31 = FuncMain_2_1(xH + step / 4.0, vH + step / 4.0 * k21, vH2 + step / 4.0 * k22);
						k32 = FuncMain_2_2(xH + step / 4.0, vH + step / 4.0 * k21, vH2 + step / 4.0 * k22, a, b);

						k41 = FuncMain_2_1(xH + step / 2.0, vH + step / 2.0 * k31, vH2 + step / 2.0 * k32);
						k42 = FuncMain_2_2(xH + step / 2.0, vH + step / 2.0 * k31, vH2 + step / 2.0 * k32, a, b);

						v2 = vH + step / 12.0 * (k11 + 2 * k21 + 2 * k31 + k41);
						v22 = vH2 + step / 12.0 * (k12 + 2 * k22 + 2 * k32 + k42);

						//chek error
						s1 = (v2 - v0Ch) / 15.0;
						s2 = (v22 - v0Ch2) / 15.0;
						s = sqrt(s1 * s1 + s2 * s2);
						double fs = fabs(s);
						if (eps / (32.0) <= fs && eps >= fs)
						{
							chart1->Series["Series1"]->Points->AddXY(x0, v0Ch2);
						}
						else
						{
							if (fs < (eps / (32.0)))
							{
								chart1->Series["Series1"]->Points->AddXY(x0, v0Ch2);
								step = step * 2.0;
								c2++;
								c2O++;
							}
							else
							{
								step = step / 2.0;
								c1++;
								c1O++;
								x0 = x0Pr;
								v01 = v0Ch;
								v02 = v0Ch2;
							}
						}
						double olp;
						olp = s * 16.0;
						//table
						dataGridView1->Rows->Add(1);
						dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
						dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
						dataGridView1->Rows[i]->Cells[2]->Value = v01.ToString();
						dataGridView1->Rows[i]->Cells[3]->Value = v2.ToString();
						dataGridView1->Rows[i]->Cells[4]->Value = (v01 - v2).ToString();
						dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();
						//dataGridView1->Rows[i]->Cells[9]->Value = exp(x0).ToString();
						dataGridView1->Rows[i]->Cells[7]->Value = c1.ToString();
						dataGridView1->Rows[i]->Cells[8]->Value = c2.ToString();
						dataGridView1->Rows[i]->Cells[5]->Value = olp.ToString();
						//dataGridView1->Rows[i]->Cells[10]->Value = fabs((exp(x0) - v01)).ToString();
						c1 = 0;
						c2 = 0;
						i++;

						if (x0 >= rightBord + eps || i == Numstep)
						{
							f = false;
							chart1->Series["Series1"]->Points->AddXY(x0, v0Ch2);
						}
						textBox6->Text = System::Convert::ToString(c2O);
						textBox7->Text = System::Convert::ToString(c1O);

					}
					break;
				}
				case 2:   //v01 (v02)
				{
					while (f == true)
					{
						x0 += step;
						x0Pr = x0;
						double k11 = 0.0, k21 = 0.0, k31 = 0.0, k41 = 0.0;
						double k12 = 0.0, k22 = 0.0, k32 = 0.0, k42 = 0.0;

						k11 = FuncMain_2_1(x0, v01, v02);
						k12 = FuncMain_2_2(x0, v01, v02, a, b);

						k21 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k11, v02 + step / 2.0 * k12);
						k22 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k11, v02 + step / 2.0 * k12, a, b);

						k31 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k21, v02 + step / 2.0 * k22);
						k32 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k21, v02 + step / 2.0 * k22, a, b);

						k41 = FuncMain_2_1(x0 + step, v01 + step * k31, v02 + step * k32);
						k42 = FuncMain_2_2(x0 + step, v01 + step * k31, v02 + step * k32, a, b);

						v0Ch += step / 6.0 * (k11 + 2 * k21 + 2 * k31 + k41);
						v0Ch2 += step / 6.0 * (k12 + 2 * k22 + 2 * k32 + k42);

						//second
						k21 = FuncMain_2_1(x0 + step / 4.0, v01 + step / 4.0 * k11, v02 + step / 4.0 * k12);
						k22 = FuncMain_2_2(x0 + step / 4.0, v01 + step / 4.0 * k11, v02 + step / 4.0 * k12, a, b);

						k31 = FuncMain_2_1(x0 + step / 4.0, v01 + step / 4.0 * k21, v02 + step / 4.0 * k22);
						k32 = FuncMain_2_2(x0 + step / 4.0, v01 + step / 4.0 * k21, v02 + step / 4.0 * k22, a, b);

						k41 = FuncMain_2_1(x0 + step / 2.0, v01 + step / 2.0 * k31, v02 + step / 2.0 * k32);
						k42 = FuncMain_2_2(x0 + step / 2.0, v01 + step / 2.0 * k31, v02 + step / 2.0 * k32, a, b);

						xH = x0 + step / 2.0;
						vH = v01 + step / 12.0 * (k11 + 2 * k21 + 2 * k31 + k41);
						vH2 = v02 + step / 12.0 * (k12 + 2 * k22 + 2 * k32 + k42);

						k11 = FuncMain_2_1(xH, vH, vH2);
						k12 = FuncMain_2_2(xH, vH, vH2, a, b);

						k21 = FuncMain_2_1(xH + step / 4.0, vH + step / 4.0 * k11, vH2 + step / 4.0 * k12);
						k22 = FuncMain_2_2(xH + step / 4.0, vH + step / 4.0 * k11, vH2 + step / 4.0 * k12, a, b);

						k31 = FuncMain_2_1(xH + step / 4.0, vH + step / 4.0 * k21, vH2 + step / 4.0 * k22);
						k32 = FuncMain_2_2(xH + step / 4.0, vH + step / 4.0 * k21, vH2 + step / 4.0 * k22, a, b);

						k41 = FuncMain_2_1(xH + step / 2.0, vH + step / 2.0 * k31, vH2 + step / 2.0 * k32);
						k42 = FuncMain_2_2(xH + step / 2.0, vH + step / 2.0 * k31, vH2 + step / 2.0 * k32, a, b);

						v2 = vH + step / 12.0 * (k11 + 2 * k21 + 2 * k31 + k41);
						v22 = vH2 + step / 12.0 * (k12 + 2 * k22 + 2 * k32 + k42);

						//chek error
						s1 = (v2 - v0Ch) / 15.0;
						s2 = (v22 - v0Ch2) / 15.0;
						s = sqrt(s1 * s1 + s2 * s2);
						double fs = fabs(s);
						if (eps / (32.0) <= fs && eps >= fs)
						{
							chart1->Series["Series1"]->Points->AddXY(v0Ch2, v0Ch);
						}
						else
						{
							if (fs < (eps / (32.0)))
							{
								chart1->Series["Series1"]->Points->AddXY(v0Ch2, v0Ch);
								step = step * 2.0;
								c2++;
								c2O++;
							}
							else
							{
								step = step / 2.0;
								c1++;
								c1O++;
								x0 = x0Pr;
								v01 = v0Ch;
								v02 = v0Ch2;
							}
						}
						double olp;
						olp = s * 16.0;
						//table
						dataGridView1->Rows->Add(1);
						dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
						dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
						dataGridView1->Rows[i]->Cells[2]->Value = v01.ToString();
						dataGridView1->Rows[i]->Cells[3]->Value = v2.ToString();
						dataGridView1->Rows[i]->Cells[4]->Value = (v01 - v2).ToString();
						dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();
						//dataGridView1->Rows[i]->Cells[9]->Value = exp(x0).ToString();
						dataGridView1->Rows[i]->Cells[7]->Value = c1.ToString();
						dataGridView1->Rows[i]->Cells[8]->Value = c2.ToString();
						dataGridView1->Rows[i]->Cells[5]->Value = olp.ToString();
						//dataGridView1->Rows[i]->Cells[10]->Value = fabs((exp(x0) - v01)).ToString();
						c1 = 0;
						c2 = 0;
						i++;

						if (x0 >= rightBord + eps || i == Numstep)
						{
							f = false;
							chart1->Series["Series1"]->Points->AddXY(v0Ch2, v0Ch);
						}
						textBox6->Text = System::Convert::ToString(c2O);
						textBox7->Text = System::Convert::ToString(c1O);

					}
					break;
				}
				}
				break;
			}
			}
			break;
		}
		}
	}


	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series["Series2"]->Points->Clear();
		double step = System::Convert::ToDouble(textBox1->Text);
		double x0 = 0.0;
		double v0 = System::Convert::ToDouble(textBox2->Text);
		int Numstep = System::Convert::ToDouble(textBox3->Text);
		double rightBord = System::Convert::ToDouble(textBox5->Text);
		bool f = true;
		int i = 0;
		while (f == true)
		{
			chart1->Series["Series2"]->Points->AddXY(x0, v0);
			x0 += step;
			v0 = exp(x0);
			i++;
			if (x0 >= rightBord - step || i == Numstep)
			{
				f = false;
				chart1->Series["Series2"]->Points->AddXY(x0, v0);
			}
		}
	}

//testBranch
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series["Series1"]->Points->Clear();
		chart1->Series["Series2"]->Points->Clear();
		dataGridView1->Rows->Clear();
		textBox6->Text = " ";
		textBox7->Text = " ";
		pictureBox1->Visible = false;
		pictureBox2->Visible = false;
		pictureBox4->Visible = false;
		//comboBox1->SelectedIndex = -1;
		//comboBox2->SelectedIndex = -1;
		
		//dataGridView1->Columns->Clear();
	}
};
}
