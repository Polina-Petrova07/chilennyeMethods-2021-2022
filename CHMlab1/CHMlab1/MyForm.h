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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
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
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Location = System::Drawing::Point(885, 62);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"drow";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button3);
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
			this->groupBox1->Size = System::Drawing::Size(1038, 185);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"data";
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button4->Location = System::Drawing::Point(884, 21);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(148, 35);
			this->button4->TabIndex = 12;
			this->button4->Text = L"clear";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
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
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Location = System::Drawing::Point(884, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(148, 35);
			this->button2->TabIndex = 4;
			this->button2->Text = L"exect solution";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Location = System::Drawing::Point(884, 141);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(148, 35);
			this->button3->TabIndex = 5;
			this->button3->Text = L"exit";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(775, 160);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(91, 20);
			this->textBox5->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(670, 163);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"правая граница";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(775, 51);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(91, 20);
			this->textBox4->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(670, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"eps";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(775, 77);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(91, 20);
			this->textBox3->TabIndex = 6;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(670, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Numsteps";
			// 
			// comboBox1
			// 
			this->comboBox1->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"не учитывать (постоянный шаг)", L"учитывать (задайте eps)" });
			this->comboBox1->Location = System::Drawing::Point(668, 23);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(198, 21);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->Text = L"контроль локальной погрешности";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(775, 129);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(91, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(670, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(19, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"v0";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(775, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(91, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(670, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"step";
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11
			});
			this->dataGridView1->Location = System::Drawing::Point(5, 189);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(405, 363);
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
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(417, 189);
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
			this->chart1->Size = System::Drawing::Size(626, 363);
			this->chart1->TabIndex = 4;
			this->chart1->Text = L"chart1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1044, 557);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"Команда 2. ЛР 1. Вариант 2";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		double FuncDU(double x0, double v0)
		{
			return (v0);
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series["Series1"]->Points->Clear();
		double x0Pr, v0Pr;
		double step = System::Convert::ToDouble(textBox1->Text);
		double v0 = System::Convert::ToDouble(textBox2->Text);
		int Numstep = System::Convert::ToDouble(textBox3->Text);
		double rightBord = System::Convert::ToDouble(textBox5->Text);
		double x0 = 0.0;
		x0Pr = x0;
		v0Pr = v0;
		switch (comboBox2->SelectedIndex)//what task
		{
		case 0:   //test task
		{
			if (comboBox1->SelectedIndex != -1  && comboBox2->SelectedIndex != -1)
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
					dataGridView1->Rows[0]->Cells[2]->Value = v0.ToString();
					dataGridView1->Rows[0]->Cells[6]->Value = step.ToString();
					while (f == true)
					{
						double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;
						k1 = FuncDU(x0, v0);
						k2 = FuncDU(x0 + step / 2.0, v0 + step / 2.0 * k1);
						k3 = FuncDU(x0 + step / 2.0, v0 + step / 2.0 * k2);
						k4 = FuncDU(x0 + step, v0 + step * k3);
						chart1->Series["Series1"]->Points->AddXY(x0, v0);
						x0 += step;
						double k = step / 6.0;
						v0 += k * (k1 + 2 * k2 + 2 * k3 + k4);
						//table
						dataGridView1->Rows->Add(1);
						dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
						dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
						dataGridView1->Rows[i]->Cells[2]->Value = v0.ToString();
						dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();

						//half step
						double k1_1 = 0.0, k2_2 = 0.0, k3_3 = 0.0, k4_4 = 0.0;
						k1_1 = FuncDU(x0, v0);
						k2_2 = FuncDU(x0 + step / 4.0, v0 + step / 4.0 * k1_1);
						k3_3 = FuncDU(x0 + step / 4.0, v0 + step / 4.0 * k2_2);
						k4_4 = FuncDU(x0 + step / 2.0, v0 + step / 2.0 * k3_3);
						double v1 = v0;
						v1 = v1 + step / 12.0 * (k1_1 + 2*k2_2 + 2*k3_3 + k4_4);
						dataGridView1->Rows[i]->Cells[3]->Value = v1.ToString();
						dataGridView1->Rows[i]->Cells[4]->Value = (v0 - v1).ToString();

						i++;
						if (x0 >= rightBord - step || i == Numstep)
						{
							f = false;
							chart1->Series["Series1"]->Points->AddXY(x0, v0);
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
					chart1->Series["Series1"]->Points->Clear();
					int c1 = 0;
					int c2 = 0;
					int i = 1;
					bool f = true;
					double vH = v0;
					double xH = x0;
					double s;
					dataGridView1->Rows->Add(1);
					dataGridView1->Rows[0]->Cells[1]->Value = x0.ToString();
					dataGridView1->Rows[0]->Cells[2]->Value = v0.ToString();
					dataGridView1->Rows[0]->Cells[6]->Value = step.ToString();
					chart1->Series["Series1"]->Points->AddXY(x0, v0);
					while (f == true)
					{
						double k1 = 0.0, k2 = 0.0, k3 = 0.0, k4 = 0.0;
						k1 = FuncDU(x0, v0);
						k2 = FuncDU(x0 + step / 2.0, v0 + step / 2.0 * k1);
						k3 = FuncDU(x0 + step / 2.0, v0 + step / 2.0 * k2);
						k4 = FuncDU(x0 + step, v0 + step * k3);
						v0 += step / 6.0 * (k1 + 2 * k2 + 2 * k3 + k4);

						//half step
						for (int j = 0; j < 2; j++) 
						{
							double k1_1 = 0.0, k2_2 = 0.0, k3_3 = 0.0, k4_4 = 0.0;
							k1_1 = FuncDU(xH, vH);
							k2_2 = FuncDU(xH + step / 4.0, vH + step / 4.0 * k1_1);
							k3_3 = FuncDU(xH + step / 4.0, vH + step / 4.0 * k2_2);
							k4_4 = FuncDU(xH + step / 2.0, vH + step / 2.0 * k3_3);
							xH = xH + step / 2.0;
							vH = vH + step / 12.0 * (k1_1 + 2 * k2_2 + 2 * k3_3 + k4_4);
						}
						// check error
						s = (vH - v0) / 15.0;
						double eps = System::Convert::ToDouble(textBox4->Text);
						double epsMin = eps / 17.0;
						if (fabs(s) > epsMin && fabs(s) < eps)
						{
							chart1->Series["Series1"]->Points->AddXY(x0, v0);
							x0 += step;
							//v0 += step / 6.0 * (k1 + 2 * k2 + 2 * k3 + k4);
						}
						if (fabs(s) < epsMin)
						{
							chart1->Series["Series1"]->Points->AddXY(x0, v0);
							step = 2 * step;
							x0 += step;
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

						//table
						dataGridView1->Rows->Add(1);
						dataGridView1->Rows[i]->Cells[0]->Value = i.ToString();
						dataGridView1->Rows[i]->Cells[1]->Value = x0.ToString();
						dataGridView1->Rows[i]->Cells[2]->Value = v0.ToString();
						dataGridView1->Rows[i]->Cells[6]->Value = step.ToString();
						dataGridView1->Rows[i]->Cells[9]->Value = (x0 * x0 / 2.0).ToString();
						dataGridView1->Rows[i]->Cells[7]->Value = c1.ToString();
						dataGridView1->Rows[i]->Cells[8]->Value = c2.ToString();
						dataGridView1->Rows[i]->Cells[5]->Value = olp.ToString();
						dataGridView1->Rows[i]->Cells[10]->Value = (fabs(x0 * x0 / 2.0 - v0)).ToString();
						x0Pr = x0;
						v0Pr = v0;
						i++;
						if (x0 >= rightBord - eps || i == Numstep)
						{
							f = false;
							chart1->Series["Series1"]->Points->AddXY(x0, v0);
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
					break;
				}
				}
			}
			else MessageBox::Show("выберите тип задачи и нужен ли контроль локальной погрешности");
		}
		case 1:     //main 1
		{

		}
		case 2:    //main2
		{

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
		/*for (int i = 0; i < Numstep; i++)
		{
			if (x0 < rightBord)
				chart1->Series["Series2"]->Points->AddXY(x0, v0);
			x0 += step;
			v0 += x0 * x0 / 2.0;
		}*/
	}


	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		chart1->Series["Series1"]->Points->Clear();
		chart1->Series["Series2"]->Points->Clear();
		dataGridView1->Rows->Clear();
		//dataGridView1->Columns->Clear();
	}
};
}
