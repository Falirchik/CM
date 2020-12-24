#pragma once
#include <cmath>


using namespace std;

const double PI = acos(-1);
bool F = false; //если un положительное 
bool F2 = true; // для "парковки"

namespace zadanie {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;
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
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;


	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label6;




	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Шаг;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ u_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ OLP_table;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ h_table;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label10;











	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Шаг = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->OLP_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h_table = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(12, 12);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(472, 290);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(152, 333);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(75, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0.01";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(497, 410);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(75, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->Text = L"3";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(497, 332);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(75, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->Text = L"1";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(497, 371);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(75, 20);
			this->textBox4->TabIndex = 4;
			this->textBox4->Text = L"1";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(152, 372);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(75, 20);
			this->textBox5->TabIndex = 7;
			this->textBox5->Text = L"1e-5";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 409);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(578, 310);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(487, 98);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(15, 448);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(389, 188);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm::pictureBox2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Шаг, this->x_table,
					this->u_table, this->OLP_table, this->h_table
			});
			this->dataGridView1->Location = System::Drawing::Point(490, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(668, 290);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Шаг
			// 
			this->Шаг->HeaderText = L"№ шага";
			this->Шаг->Name = L"Шаг";
			this->Шаг->Width = 70;
			// 
			// x_table
			// 
			this->x_table->HeaderText = L"x (время) - текущая точка";
			this->x_table->Name = L"x_table";
			this->x_table->Width = 120;
			// 
			// u_table
			// 
			this->u_table->HeaderText = L"u (уровень жидкости) - численное решение";
			this->u_table->Name = L"u_table";
			this->u_table->Width = 130;
			// 
			// OLP_table
			// 
			this->OLP_table->HeaderText = L"Оценка локальной погрешности";
			this->OLP_table->Name = L"OLP_table";
			this->OLP_table->Width = 150;
			// 
			// h_table
			// 
			this->h_table->HeaderText = L"h (шаг)";
			this->h_table->Name = L"h_table";
			this->h_table->Width = 150;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(451, 375);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 13);
			this->label1->TabIndex = 12;
			this->label1->Text = L"alfa";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(441, 336);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"sigma";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(11, 368);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(135, 30);
			this->label3->TabIndex = 14;
			this->label3->Text = L"eps - параметр контроля локальной погрешности";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(456, 414);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(19, 13);
			this->label4->TabIndex = 15;
			this->label4->Text = L"u0";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 339);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 13);
			this->label6->TabIndex = 17;
			this->label6->Text = L"Начальный шаг";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 310);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(122, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Параметры метода";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(441, 310);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(131, 13);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Параметры системы";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(152, 411);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(75, 20);
			this->textBox6->TabIndex = 22;
			this->textBox6->Text = L"100";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(112, 417);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(34, 13);
			this->label5->TabIndex = 23;
			this->label5->Text = L"Nmax";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(233, 417);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(171, 13);
			this->label9->TabIndex = 24;
			this->label9->Text = L"- максимальное число итераций";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(329, 372);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(75, 20);
			this->textBox7->TabIndex = 25;
			this->textBox7->Text = L"0.1";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged_2);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(252, 368);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(71, 26);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Допуск для\r\nуровня воды";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 683);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->zedGraphControl1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"MyForm";
			this->Text = L"Задача 9, Разживина Анастасия";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: 
		double f(double un, double sigma, double alfa) { 
			double g = 9.8;
			double C = -0.6 * sigma * (sqrt(2 * g) /(tan(0.5 * alfa) * tan(0.5 * alfa) * PI));
			if (un < 0) F = true; //un стал отрицательным, корень из отрицательного превращается в NaN
			return (C / sqrt(un * un * un));
			
		}

		double RungeKutta(double h, double un, double sigma, double alfa) {
			double coef[3];
			double res;
			coef[0] = f(un, sigma, alfa);
			coef[1] = f(un + (0.5 * h * coef[0]), sigma, alfa);
			coef[2] = f(un + h * (-coef[0] + 2 * coef[1]), sigma, alfa);
			res = un + h / 6 * (coef[0] + 4 * coef[1] + coef[2]);
			return res;
	}

		double errorControl(double& u0, double h, double eps, double& locErr, double sigma, double alfa)
		{
			double  u, u_, S;
			double rk1, rk2;
			rk1 = RungeKutta(h,u0,sigma,alfa);
			u = rk1;
			u_ = u0;
			for (int i = 0; i < 2; i++)
			{
				rk2 = RungeKutta(h*0.5, u_,sigma,alfa);
				u_ = rk2;
			}
			/*if (F) return (-1);*/
			S = abs(u_ - u);

			locErr = S * 16;
			if (S > eps)
			{
				return h / 2;
			} 
			else
			{
				u0 = u;
				if (S < (eps / 16))    //порядок метода 3
				{
					return 2 * h;
				}
				return h;
			}
		}

		
	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	GraphPane^ panel = zedGraphControl1->GraphPane;
	panel->CurveList->Clear();

	// Создадим список точек
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();

	// Интервал, где есть данные
	double xmin = 0;
	double diap = Convert::ToDouble(textBox7->Text);
	double h = Convert::ToDouble(textBox1->Text);
	double eps = Convert::ToDouble(textBox5->Text);
	double sigma = Convert::ToDouble(textBox3->Text);
	double alfa = Convert::ToDouble(textBox4->Text);
	double xmin_limit = xmin;
	int N = Convert::ToDouble(textBox6->Text);
	panel->Title->Text = "График зависимости уровня воды от времени"; //название графика


	panel->XAxis->Title->Text = "х - время";
	panel->YAxis->Title->Text = "u - уровень воды в сосуде";

	// Список точек
	int i = 1;
	double errorLoc;
	double u0, hControl; 
	dataGridView1->Rows->Clear();
	u0 = Convert::ToDouble(textBox2->Text);
	
	double x = xmin;
	f1_list->Add(x, u0);
	dataGridView1->Rows->Add();
	dataGridView1->Rows[0]->Cells[0]->Value = i-1;
	dataGridView1->Rows[0]->Cells[1]->Value = x;
	dataGridView1->Rows[0]->Cells[2]->Value = u0;
	for (;  !F && i<=N; )	{
		// Рунге-Кутта
		hControl = errorControl(u0, h, eps, errorLoc, sigma,alfa);

		if ((h <= hControl) && (!F))
		{//Добавление на график
			x = x + h;
			f1_list->Add(x, u0);
			//Печать в таблицу
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = i;
			dataGridView1->Rows[i]->Cells[1]->Value = x;
			dataGridView1->Rows[i]->Cells[2]->Value = u0;
			dataGridView1->Rows[i]->Cells[3]->Value = errorLoc;
			dataGridView1->Rows[i]->Cells[4]->Value = h;
			i++;
		}
		h = hControl;

	}
	
	F = false; // обновление флага для перезапуска программыЫ
	F2 = true;
	LineItem Curve1 = panel->AddCurve("u(x)", f1_list, Color::Blue, SymbolType::None); // имя линии графика
	// Устанавливаем интересующий нас интервал по оси X
	panel->XAxis->Scale->Min = xmin_limit;

	/*
		// Устанавливаем интересующий нас интервал по оси Y
		panel->YAxis->Scale->Min = ymin_limit;
		panel->YAxis->Scale->Max = ymax_limit;
	*/
	// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
	// В противном случае на рисунке будет показана только часть графика, 
	// которая умещается в интервалы по осям, установленные по умолчанию
	zedGraphControl1->AxisChange();
	// Обновляем график
	zedGraphControl1->Invalidate();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox7_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
}
};
}
