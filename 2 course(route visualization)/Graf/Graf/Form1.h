#pragma once


namespace Graf {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Collections::Generic::List<polygon^> polygons;
		bool drawNames;
		bool drawVes;
		int bim, bis, nach, kon;
		bool go;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog;
	private: System::Windows::Forms::Button^  btnOpen;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  ri1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::RadioButton^  radioButton3;

	protected: 

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ri1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// openFileDialog
			// 
			this->openFileDialog->FileName = L"openFileDialog";
			// 
			// btnOpen
			// 
			this->btnOpen->BackColor = System::Drawing::Color::Black;
			this->btnOpen->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOpen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->btnOpen->ForeColor = System::Drawing::Color::Black;
			this->btnOpen->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnOpen.Image")));
			this->btnOpen->Location = System::Drawing::Point(1072, 31);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(50, 50);
			this->btnOpen->TabIndex = 0;
			this->btnOpen->UseVisualStyleBackColor = false;
			this->btnOpen->Click += gcnew System::EventHandler(this, &Form1::btnOpen_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(1072, 95);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 73);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(50, 171);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(60, 17);
			this->radioButton1->TabIndex = 11;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Турист";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(141, 171);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(82, 17);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Бизнесмен";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Blue;
			this->textBox1->HideSelection = false;
			this->textBox1->Location = System::Drawing::Point(428, 74);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 35);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->textBox2->Location = System::Drawing::Point(630, 74);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 35);
			this->textBox2->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(425, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 13);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Начало маршрута";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(627, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 13);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Конец маршрута";
			// 
			// ri1
			// 
			this->ri1->Location = System::Drawing::Point(754, 34);
			this->ri1->Name = L"ri1";
			this->ri1->Size = System::Drawing::Size(223, 154);
			this->ri1->TabIndex = 18;
			this->ri1->Text = L"";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Black;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(548, 72);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 37);
			this->button3->TabIndex = 19;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(425, 131);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Пройдено метров";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(633, 131);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 21;
			this->label4->Text = L"Минут";
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::White;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::Blue;
			this->textBox3->Location = System::Drawing::Point(428, 157);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 22;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::White;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::Blue;
			this->textBox4->Location = System::Drawing::Point(630, 157);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 22);
			this->textBox4->TabIndex = 23;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(252, 171);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(65, 17);
			this->radioButton3->TabIndex = 13;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Житель";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1189, 734);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->ri1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnOpen);
			this->DoubleBuffered = true;
			this->KeyPreview = true;
			this->MaximumSize = System::Drawing::Size(1205, 772);
			this->MinimumSize = System::Drawing::Size(1205, 762);
			this->Name = L"Form1";
			this->Text = L"Визуальное представление графа";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void dksrt(vector<vector<int>> g, vector<int> &v, int start, int end)
			 {
				 start--;
				 int distance[112], index, u;
				 bool visited[112];
				 vector<int> p(112, -1);
				 int n = g.size();
				 for (int i = 0; i < n; i++)
				 {
					 distance[i] = INT_MAX;
					 visited[i] = false;
				 }
				 distance[start] = 0;
				 for (int j = 0; j < n; j++)
				 {
					 int min = 1000;
					 for (int i = 0; i < n; i++)
						 if (!visited[i] && distance[i] <= min)
						 {
							 min = distance[i];
							 index = i;
						 }
						 u = index;
						 visited[u] = true;
						 for (int i = 0; i < n; i++)
							 if (!visited[i] && g[u][i] && distance[u] != INT_MAX && distance[u] + g[u][i] < distance[i])
							 {
								 distance[i] = distance[u] + g[u][i];
								 p[i] = u;
							 }
				 }
				 ri1->Text += " Min путь: \n";
				 for (int i = 0; i < n; i++)
					 if (distance[i] != INT_MAX)
					 {
						 if ( i+1 == end )
						 {
							 int j = i;
							 ri1->Text += Convert::ToString(i+1);
							 v.resize(v.size()+1);
							 v[v.size()-1] = i + 1;
							 while (p[j] != -1)
							 {
								 ri1->Text += "  <- " + Convert::ToString(p[j]+1);
								 v.resize(v.size()+1);
								 v[v.size()-1] = p[j] + 1;
								 j = p[j];
							 }
							 ri1->Text += "\n";
						 }
					 }
			 }

	private: void sm(vector<vector<int>> &R)
			 {
				 // ищем вес между вершинами
				 R.clear();
				 R.resize(112);
				 for ( int i = 0; i < R.size(); i++)
					 R[i].resize(112);
				 for ( int i = 0; i < R.size(); i++)
					 for ( int j = 0; j < R[i].size(); j++)
					 {
						 if ( i == j )
							 R[i][j] = 0;
						 else
							 R[i][j] = INT_MAX;
					 }
					 polygon^ P = gcnew polygon(0);

					 if ( polygons.Count > 0 )
					 {
						 for (int i = 0; i < polygons.Count; i++) 
						 {
							 polygon^ p = polygons[i];
							 for (int j = 0; j < p->Count; j++) 
							 {	
								 P->Add(p[j]);
							 }
						 }
					 }
					 point a, b;
					 bool used[500];
					 for ( int i = 0; i < V.size(); i++)
					 {
						 for (int j = 1; j < V[i].size(); j++)
						 {
							 int x, y;
							 x = V[i][0]-1;
							 y = V[i][j]-1;
							 a = P[x];
							 b = P[y];
							 R[x][y] = System::Math::Round(sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y) * (a.y - b.y)));
						 }
					 }
					 // переводим из пикселей в метры
					 for ( int i = 0; i < R.size(); i++)
						 for ( int j = 0; j < R[i].size(); j++)
							 R[i][j] = System::Math::Round((R[i][j] / 37.8) * 25);
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 polygons.Clear();
				 drawNames = false;
				 drawVes = false;
				 go = false;
			 }
	private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 Graphics^ g = e->Graphics;
				 Pen^ pen = gcnew Pen(Color::Black);

				 //турист
				 if ( radioButton1->Checked && go )
				 {
					 bim = 0;
					 bis = 0;
					 pen->Color = Color::Lime;
					 pen->Width = 4;
					 polygon^ P1 = gcnew polygon(0);

					 if ( polygons.Count > 0 && T.size() > 0)
					 {
						 for (int i = 0; i < polygons.Count; i++) 
						 {
							 polygon^ p = polygons[i];
							 for (int j = 0; j < p->Count; j++) 
							 {	
								 P1->Add(p[j]);
							 }
						 }

						 point a, b;
						 for ( int i = 0; i < T.size()-1; i++)
						 {
							 if ( T[i] != nach && T[i+1] != kon || T.size() <= 2)
							 {
								 a = P1[T[i]-1];
								 b = P1[T[i+1]-1];
								 int ci = Convert::ToInt32(a.name);
								 int cj = Convert::ToInt32(b.name);
								 bim += R[ci-1][cj-1];
								 g->DrawLine(pen, a.x, a.y, b.x, b.y);

								 float xName = a.x-2, 
									 yName = a.y-2;
								 if (drawNames) 
								 {
									 System::Drawing::Font^ drawFont = gcnew System::Drawing::Font( "Arial", 12);
									 SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
									 g->DrawString(a.name, drawFont, drawBrush, xName, yName);
								 }
								 if (drawVes) 
								 {
									 System::Drawing::Font^ drawF = gcnew System::Drawing::Font( "Arial", 8);
									 SolidBrush^ drawB = gcnew SolidBrush(Color::Black);
									 float xn = a.x, yn = a.y, xn1 = b.x, yn1 = b.y;
									 g->DrawString(Convert::ToString(R[ci-1][cj-1]), drawF, drawB, ((xn1-xn)/2) + xn, ((yn1 - yn) / 2) + yn);
								 }
							 }
						 }
					 }
					 textBox3->Text = Convert::ToString(bim);
					 bis = System::Math::Round(bim / 83.3);
					 textBox4->Text = Convert::ToString(bis);
					 go = false;
				 }

				 // бизнесмен 
				 if ( radioButton2->Checked && go )
				 {
					 bim = 0;
					 bis = 0;
					 pen->Color = Color::Red;
					 pen->Width = 4;
					 polygon^ P1 = gcnew polygon(0);

					 if ( polygons.Count > 0 && B.size() > 0)
					 {
						 for (int i = 0; i < polygons.Count; i++) 
						 {
							 polygon^ p = polygons[i];
							 for (int j = 0; j < p->Count; j++) 
							 {	
								 P1->Add(p[j]);
							 }
						 }

						 point a, b;
						 for ( int i = 0; i < B.size()-1; i++)
						 {
							 a = P1[B[i]-1];
							 b = P1[B[i+1]-1];
							 int ci = Convert::ToInt32(a.name);
							 int cj = Convert::ToInt32(b.name);
							 bim += R[ci-1][cj-1];
							 g->DrawLine(pen, a.x, a.y, b.x, b.y);

							 float xName = a.x-2, 
								 yName = a.y-2;
							 if (drawNames) 
							 {
								 System::Drawing::Font^ drawFont = gcnew System::Drawing::Font( "Arial", 11);
								 SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
								 g->DrawString(a.name, drawFont, drawBrush, xName, yName);
							 }
							 if (drawVes) 
							 {
								 System::Drawing::Font^ drawF = gcnew System::Drawing::Font( "Arial", 8);
								 SolidBrush^ drawB = gcnew SolidBrush(Color::Blue);
								 float xn = a.x, yn = a.y, xn1 = b.x, yn1 = b.y;
								 g->DrawString(Convert::ToString(R[ci-1][cj-1]), drawF, drawB, ((xn1-xn)/2) + xn, ((yn1 - yn) / 2) + yn);
							 }
						 }
					 }
					 textBox3->Text = Convert::ToString(bim);
					 bis = System::Math::Round(bim / 83.3);
					 textBox4->Text = Convert::ToString(bis);
					 go = false;
				 }

				 //житель
				 if ( radioButton3->Checked && go )
				 {
					 bim = 0;
					 bis = 0;
					 pen->Color = Color::Blue;
					 pen->Width = 4;
					 polygon^ P1 = gcnew polygon(0);

					 if ( polygons.Count > 0 && V.size() > 0)
					 {
						 for (int i = 0; i < polygons.Count; i++) 
						 {
							 polygon^ p = polygons[i];
							 for (int j = 0; j < p->Count; j++) 
							 {	
								 P1->Add(p[j]);
							 }
						 }
						 point a, b;
						 for ( int i = 0; i < V.size(); i++)
						 {
							 for (int j = 0; j < V[i].size()-1; j++)
							 {
								 a = P1[V[i][0]-1];
								 b = P1[V[i][j+1]-1];
								 int ci = Convert::ToInt32(a.name);
								 int cj = Convert::ToInt32(b.name);
								 bim += R[ci-1][cj-1];
								 g->DrawLine(pen, a.x, a.y, b.x, b.y);

								 float xName = a.x-2, 
									 yName = a.y-2;
								 if (drawNames) 
								 {
									 System::Drawing::Font^ drawFont = gcnew System::Drawing::Font( "Arial", 11);
									 SolidBrush^ drawBrush = gcnew SolidBrush(Color::Black);
									 g->DrawString(a.name, drawFont, drawBrush, xName, yName);
								 }
								 if (drawVes) 
								 {
									 System::Drawing::Font^ drawF = gcnew System::Drawing::Font( "Arial", 8);
									 SolidBrush^ drawB = gcnew SolidBrush(Color::Blue);
									 float xn = a.x, yn = a.y, xn1 = b.x, yn1 = b.y;
									 g->DrawString(Convert::ToString(R[ci-1][cj-1]), drawF, drawB, ((xn1-xn)/2) + xn, ((yn1 - yn) / 2) + yn);
								 }
							 }
						 }
					 }
					 textBox3->Text = Convert::ToString(bim);
					 bis = System::Math::Round(bim / 83.3);
					 textBox4->Text = Convert::ToString(bis);
					 go = false;
				 }
			 }
	private: System::Void btnOpen_Click(System::Object^  sender, System::EventArgs^  e) {
				 if ( this->openFileDialog->ShowDialog() ==  // показываем диалог открытия файла
					 System::Windows::Forms::DialogResult::OK){ 
						 wchar_t fileName[1024]; // Если да, то организуем чтение из выбранного файла
						 for (int i = 0; i < openFileDialog->FileName->Length; i++)
							 fileName[i] = openFileDialog->FileName[i];
						 fileName[openFileDialog->FileName->Length] = '\0';
						 ifstream in;
						 in.open(fileName);
						 if ( in.is_open() ) { 
							 int numpoint = 0;
							 string str;	
							 getline (in, str);
							 while (in) {
								 if ((str.find_first_not_of(" \t\r\n") != std::string::npos)
									 && (str[0] != '#')) {
										 stringstream s(str);
										 string cmd;
										 s >> cmd; 
										 if ( cmd == "map" ) {
											 polygons.Clear();
											 s >> numpoint;
											 polygon^ P = gcnew polygon(0);
											 getline (in, str);
											 for (int i = 0; i < numpoint; i++) {
												 stringstream s(str);
												 point p;
												 s >> p.x >> p.y;
												 std::string linename;
												 s >> linename;
												 p.name = gcnew String(linename.c_str()); 
												 P->Add(p);
												 getline (in, str);
											 }
											 polygons.Add(P);
										 } 
										 stringstream s1(str);
										 s1 >> cmd;
										 if ( cmd == "spisok" ) 
										 {
											 getline (in, str);
											 V.clear();
											 V.resize(numpoint);
											 for (int i = 0; i < V.size(); i++)
											 {
												 stringstream s1(str);
												 int k;
												 s1 >> k;
												 V[i].resize(k + 1);
												 s1 >> V[i][0];
												 for (int j = 1; j < k + 1; j++)
												 {
													 s1 >> V[i][j];
												 }
												 getline (in, str);
											 }
										 } 
								 }
								 getline (in, str); // по окончании считывания файла закроем поток
							 }
						 }
				 }
			 }
	private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 switch(e->KeyCode){			
					 case Keys::N :
						 {		 
							 drawNames = !drawNames;
							 go = true;
						 }
					 case Keys::V :
						 {		 
							 drawVes = !drawVes;
							 go = true;
						 }
					 default:
						 go = true;
				 }
				 this->Refresh();
			 }

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 drawNames = true;
				 if (radioButton3->Checked)
				 {
					 sm(R);
					 go = true;
					 this -> Refresh();
				 }
				 if ( textBox1->Text->IsNullOrEmpty(textBox1->Text) )
				 {
					 textBox1->Text = "Введите";
					 nach = 0;
				 }
				 else
					 if ( textBox1->Text != "Введите" )
						 nach = Convert::ToInt32(textBox1->Text);
				 if ( textBox2->Text->IsNullOrEmpty(textBox2->Text))
				 {
					 textBox2->Text = "Введите";
					 kon = 0;
				 }
				 else
					 if ( textBox2->Text != "Введите" )
						 kon = Convert::ToInt32(textBox2->Text);
				 if ( kon > 0 && nach > 0 )
				 {
					 go = true;
					 sm(R);
					 if (radioButton2->Checked)
					 {
						 B.clear();
						 dksrt(R, B, nach, kon);
						 this -> Refresh();
					 }
					 if (radioButton1->Checked)
					 {
						 T.clear();
						 if ( nach > kon )
						 {
							 int temp = nach;
							 nach = kon;
							 kon = temp;
						 }
						 bool smej = false;
						 for ( int j = 0; j < V[nach-1].size(); j++)
							 if (V[nach-1][j] == kon)
								 smej = true;
						 if ( nach != kon &&  !smej )
						 {
							 srand(time(0));
							 int r = 1 + rand() % 112;
							 dksrt(R, T, nach, r);
							 dksrt(R, T,r, kon);
						 }
						 else
						 {
							 T.resize(2);
							 T[0] = nach;
							 T[1] = kon;
						 }
						 this -> Refresh();
					 }
				 }
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 int temp;
				 temp = Convert::ToInt32(textBox1->Text);
				 textBox1->Text = textBox2->Text;
				 textBox2->Text = Convert::ToString(temp);
			 }
	};
}