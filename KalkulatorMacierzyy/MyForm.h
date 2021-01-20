#pragma once

namespace KalkulatorMacierzyy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ LWA;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ LKA;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ A11;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ A12;
	private: System::Windows::Forms::TextBox^ A13;
	private: System::Windows::Forms::TextBox^ A14;
	private: System::Windows::Forms::TextBox^ A15;
	private: System::Windows::Forms::TextBox^ A21;
	private: System::Windows::Forms::TextBox^ A22;
	private: System::Windows::Forms::TextBox^ A23;
	private: System::Windows::Forms::TextBox^ A24;
	private: System::Windows::Forms::TextBox^ A25;
	private: System::Windows::Forms::TextBox^ A31;










	private: System::Windows::Forms::TextBox^ A32;

	private: System::Windows::Forms::TextBox^ A33;

	private: System::Windows::Forms::TextBox^ A34;

	private: System::Windows::Forms::TextBox^ A35;
	private: System::Windows::Forms::TextBox^ A41;
	private: System::Windows::Forms::TextBox^ A42;
	private: System::Windows::Forms::TextBox^ A43;
	private: System::Windows::Forms::TextBox^ A44;
	private: System::Windows::Forms::TextBox^ A45;
	private: System::Windows::Forms::TextBox^ A51;







	private: System::Windows::Forms::TextBox^ A52;

	private: System::Windows::Forms::TextBox^ A53;

	private: System::Windows::Forms::TextBox^ A54;

	private: System::Windows::Forms::TextBox^ A55;
	private: System::Windows::Forms::TextBox^ B11;
	private: System::Windows::Forms::TextBox^ B12;
	private: System::Windows::Forms::TextBox^ B21;




	private: System::Windows::Forms::TextBox^ B13;
	private: System::Windows::Forms::TextBox^ B31;


	private: System::Windows::Forms::TextBox^ B22;
	private: System::Windows::Forms::TextBox^ B41;


	private: System::Windows::Forms::TextBox^ B14;
	private: System::Windows::Forms::TextBox^ B51;


	private: System::Windows::Forms::TextBox^ B32;

	private: System::Windows::Forms::TextBox^ B23;
	private: System::Windows::Forms::TextBox^ B42;


	private: System::Windows::Forms::TextBox^ B15;
private: System::Windows::Forms::TextBox^ B52;


private: System::Windows::Forms::TextBox^ B33;

private: System::Windows::Forms::TextBox^ B24;
private: System::Windows::Forms::TextBox^ B43;


private: System::Windows::Forms::TextBox^ B25;
private: System::Windows::Forms::TextBox^ B53;


private: System::Windows::Forms::TextBox^ B34;
private: System::Windows::Forms::TextBox^ B35;
private: System::Windows::Forms::TextBox^ B44;



private: System::Windows::Forms::TextBox^ B45;
private: System::Windows::Forms::TextBox^ B54;
private: System::Windows::Forms::TextBox^ B55;



	private: System::Windows::Forms::ComboBox^ LWB;
	private: System::Windows::Forms::ComboBox^ LKB;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ C11;
private: System::Windows::Forms::TextBox^ C12;
private: System::Windows::Forms::TextBox^ C21;



private: System::Windows::Forms::TextBox^ C13;
private: System::Windows::Forms::TextBox^ C31;


private: System::Windows::Forms::TextBox^ C22;
private: System::Windows::Forms::TextBox^ C41;


private: System::Windows::Forms::TextBox^ C14;
private: System::Windows::Forms::TextBox^ C51;


private: System::Windows::Forms::TextBox^ C32;

private: System::Windows::Forms::TextBox^ C23;
private: System::Windows::Forms::TextBox^ C42;


private: System::Windows::Forms::TextBox^ C15;
private: System::Windows::Forms::TextBox^ C52;


private: System::Windows::Forms::TextBox^ C33;

private: System::Windows::Forms::TextBox^ C24;
private: System::Windows::Forms::TextBox^ C43;


private: System::Windows::Forms::TextBox^ C25;
private: System::Windows::Forms::TextBox^ C53;


private: System::Windows::Forms::TextBox^ C34;

private: System::Windows::Forms::TextBox^ C35;
private: System::Windows::Forms::TextBox^ C44;
private: System::Windows::Forms::TextBox^ C45;
private: System::Windows::Forms::TextBox^ C54;




private: System::Windows::Forms::TextBox^ C55;


private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;

private: System::Windows::Forms::Button^ button4;
private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->LWA = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LKA = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->A11 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->A12 = (gcnew System::Windows::Forms::TextBox());
			this->A13 = (gcnew System::Windows::Forms::TextBox());
			this->A14 = (gcnew System::Windows::Forms::TextBox());
			this->A15 = (gcnew System::Windows::Forms::TextBox());
			this->A21 = (gcnew System::Windows::Forms::TextBox());
			this->A22 = (gcnew System::Windows::Forms::TextBox());
			this->A23 = (gcnew System::Windows::Forms::TextBox());
			this->A24 = (gcnew System::Windows::Forms::TextBox());
			this->A25 = (gcnew System::Windows::Forms::TextBox());
			this->A31 = (gcnew System::Windows::Forms::TextBox());
			this->A32 = (gcnew System::Windows::Forms::TextBox());
			this->A33 = (gcnew System::Windows::Forms::TextBox());
			this->A34 = (gcnew System::Windows::Forms::TextBox());
			this->A35 = (gcnew System::Windows::Forms::TextBox());
			this->A41 = (gcnew System::Windows::Forms::TextBox());
			this->A42 = (gcnew System::Windows::Forms::TextBox());
			this->A43 = (gcnew System::Windows::Forms::TextBox());
			this->A44 = (gcnew System::Windows::Forms::TextBox());
			this->A45 = (gcnew System::Windows::Forms::TextBox());
			this->A51 = (gcnew System::Windows::Forms::TextBox());
			this->A52 = (gcnew System::Windows::Forms::TextBox());
			this->A53 = (gcnew System::Windows::Forms::TextBox());
			this->A54 = (gcnew System::Windows::Forms::TextBox());
			this->A55 = (gcnew System::Windows::Forms::TextBox());
			this->B11 = (gcnew System::Windows::Forms::TextBox());
			this->B12 = (gcnew System::Windows::Forms::TextBox());
			this->B21 = (gcnew System::Windows::Forms::TextBox());
			this->B13 = (gcnew System::Windows::Forms::TextBox());
			this->B31 = (gcnew System::Windows::Forms::TextBox());
			this->B22 = (gcnew System::Windows::Forms::TextBox());
			this->B41 = (gcnew System::Windows::Forms::TextBox());
			this->B14 = (gcnew System::Windows::Forms::TextBox());
			this->B51 = (gcnew System::Windows::Forms::TextBox());
			this->B32 = (gcnew System::Windows::Forms::TextBox());
			this->B23 = (gcnew System::Windows::Forms::TextBox());
			this->B42 = (gcnew System::Windows::Forms::TextBox());
			this->B15 = (gcnew System::Windows::Forms::TextBox());
			this->B52 = (gcnew System::Windows::Forms::TextBox());
			this->B33 = (gcnew System::Windows::Forms::TextBox());
			this->B24 = (gcnew System::Windows::Forms::TextBox());
			this->B43 = (gcnew System::Windows::Forms::TextBox());
			this->B25 = (gcnew System::Windows::Forms::TextBox());
			this->B53 = (gcnew System::Windows::Forms::TextBox());
			this->B34 = (gcnew System::Windows::Forms::TextBox());
			this->B35 = (gcnew System::Windows::Forms::TextBox());
			this->B44 = (gcnew System::Windows::Forms::TextBox());
			this->B45 = (gcnew System::Windows::Forms::TextBox());
			this->B54 = (gcnew System::Windows::Forms::TextBox());
			this->B55 = (gcnew System::Windows::Forms::TextBox());
			this->LWB = (gcnew System::Windows::Forms::ComboBox());
			this->LKB = (gcnew System::Windows::Forms::ComboBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->C11 = (gcnew System::Windows::Forms::TextBox());
			this->C12 = (gcnew System::Windows::Forms::TextBox());
			this->C21 = (gcnew System::Windows::Forms::TextBox());
			this->C13 = (gcnew System::Windows::Forms::TextBox());
			this->C31 = (gcnew System::Windows::Forms::TextBox());
			this->C22 = (gcnew System::Windows::Forms::TextBox());
			this->C41 = (gcnew System::Windows::Forms::TextBox());
			this->C14 = (gcnew System::Windows::Forms::TextBox());
			this->C51 = (gcnew System::Windows::Forms::TextBox());
			this->C32 = (gcnew System::Windows::Forms::TextBox());
			this->C23 = (gcnew System::Windows::Forms::TextBox());
			this->C42 = (gcnew System::Windows::Forms::TextBox());
			this->C15 = (gcnew System::Windows::Forms::TextBox());
			this->C52 = (gcnew System::Windows::Forms::TextBox());
			this->C33 = (gcnew System::Windows::Forms::TextBox());
			this->C24 = (gcnew System::Windows::Forms::TextBox());
			this->C43 = (gcnew System::Windows::Forms::TextBox());
			this->C25 = (gcnew System::Windows::Forms::TextBox());
			this->C53 = (gcnew System::Windows::Forms::TextBox());
			this->C34 = (gcnew System::Windows::Forms::TextBox());
			this->C35 = (gcnew System::Windows::Forms::TextBox());
			this->C44 = (gcnew System::Windows::Forms::TextBox());
			this->C45 = (gcnew System::Windows::Forms::TextBox());
			this->C54 = (gcnew System::Windows::Forms::TextBox());
			this->C55 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LWA
			// 
			this->LWA->FormattingEnabled = true;
			this->LWA->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->LWA->Location = System::Drawing::Point(12, 25);
			this->LWA->Name = L"LWA";
			this->LWA->Size = System::Drawing::Size(78, 21);
			this->LWA->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Liczba Wierszy";
			// 
			// LKA
			// 
			this->LKA->FormattingEnabled = true;
			this->LKA->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->LKA->Location = System::Drawing::Point(96, 25);
			this->LKA->Name = L"LKA";
			this->LKA->Size = System::Drawing::Size(76, 21);
			this->LKA->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(96, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Liczba Kolumn";
			// 
			// A11
			// 
			this->A11->Location = System::Drawing::Point(12, 67);
			this->A11->Name = L"A11";
			this->A11->Size = System::Drawing::Size(54, 20);
			this->A11->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(132, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(54, 13);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Macierz A";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(447, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(54, 13);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Macierz B";
			// 
			// A12
			// 
			this->A12->Location = System::Drawing::Point(72, 67);
			this->A12->Name = L"A12";
			this->A12->Size = System::Drawing::Size(54, 20);
			this->A12->TabIndex = 2;
			// 
			// A13
			// 
			this->A13->Location = System::Drawing::Point(132, 67);
			this->A13->Name = L"A13";
			this->A13->Size = System::Drawing::Size(54, 20);
			this->A13->TabIndex = 2;
			// 
			// A14
			// 
			this->A14->Location = System::Drawing::Point(192, 67);
			this->A14->Name = L"A14";
			this->A14->Size = System::Drawing::Size(54, 20);
			this->A14->TabIndex = 2;
			// 
			// A15
			// 
			this->A15->Location = System::Drawing::Point(252, 67);
			this->A15->Name = L"A15";
			this->A15->Size = System::Drawing::Size(54, 20);
			this->A15->TabIndex = 2;
			// 
			// A21
			// 
			this->A21->Location = System::Drawing::Point(12, 93);
			this->A21->Name = L"A21";
			this->A21->Size = System::Drawing::Size(54, 20);
			this->A21->TabIndex = 2;
			// 
			// A22
			// 
			this->A22->Location = System::Drawing::Point(72, 93);
			this->A22->Name = L"A22";
			this->A22->Size = System::Drawing::Size(54, 20);
			this->A22->TabIndex = 2;
			// 
			// A23
			// 
			this->A23->Location = System::Drawing::Point(132, 93);
			this->A23->Name = L"A23";
			this->A23->Size = System::Drawing::Size(54, 20);
			this->A23->TabIndex = 2;
			// 
			// A24
			// 
			this->A24->Location = System::Drawing::Point(192, 93);
			this->A24->Name = L"A24";
			this->A24->Size = System::Drawing::Size(54, 20);
			this->A24->TabIndex = 2;
			// 
			// A25
			// 
			this->A25->Location = System::Drawing::Point(252, 93);
			this->A25->Name = L"A25";
			this->A25->Size = System::Drawing::Size(54, 20);
			this->A25->TabIndex = 2;
			// 
			// A31
			// 
			this->A31->Location = System::Drawing::Point(12, 119);
			this->A31->Name = L"A31";
			this->A31->Size = System::Drawing::Size(54, 20);
			this->A31->TabIndex = 2;
			// 
			// A32
			// 
			this->A32->Location = System::Drawing::Point(72, 119);
			this->A32->Name = L"A32";
			this->A32->Size = System::Drawing::Size(54, 20);
			this->A32->TabIndex = 2;
			// 
			// A33
			// 
			this->A33->Location = System::Drawing::Point(132, 119);
			this->A33->Name = L"A33";
			this->A33->Size = System::Drawing::Size(54, 20);
			this->A33->TabIndex = 2;
			// 
			// A34
			// 
			this->A34->Location = System::Drawing::Point(192, 119);
			this->A34->Name = L"A34";
			this->A34->Size = System::Drawing::Size(54, 20);
			this->A34->TabIndex = 2;
			// 
			// A35
			// 
			this->A35->Location = System::Drawing::Point(252, 119);
			this->A35->Name = L"A35";
			this->A35->Size = System::Drawing::Size(54, 20);
			this->A35->TabIndex = 2;
			// 
			// A41
			// 
			this->A41->Location = System::Drawing::Point(12, 145);
			this->A41->Name = L"A41";
			this->A41->Size = System::Drawing::Size(54, 20);
			this->A41->TabIndex = 2;
			// 
			// A42
			// 
			this->A42->Location = System::Drawing::Point(72, 145);
			this->A42->Name = L"A42";
			this->A42->Size = System::Drawing::Size(54, 20);
			this->A42->TabIndex = 2;
			// 
			// A43
			// 
			this->A43->Location = System::Drawing::Point(132, 145);
			this->A43->Name = L"A43";
			this->A43->Size = System::Drawing::Size(54, 20);
			this->A43->TabIndex = 2;
			// 
			// A44
			// 
			this->A44->Location = System::Drawing::Point(192, 145);
			this->A44->Name = L"A44";
			this->A44->Size = System::Drawing::Size(54, 20);
			this->A44->TabIndex = 2;
			// 
			// A45
			// 
			this->A45->Location = System::Drawing::Point(252, 145);
			this->A45->Name = L"A45";
			this->A45->Size = System::Drawing::Size(54, 20);
			this->A45->TabIndex = 2;
			// 
			// A51
			// 
			this->A51->Location = System::Drawing::Point(12, 171);
			this->A51->Name = L"A51";
			this->A51->Size = System::Drawing::Size(54, 20);
			this->A51->TabIndex = 2;
			// 
			// A52
			// 
			this->A52->Location = System::Drawing::Point(72, 171);
			this->A52->Name = L"A52";
			this->A52->Size = System::Drawing::Size(54, 20);
			this->A52->TabIndex = 2;
			// 
			// A53
			// 
			this->A53->Location = System::Drawing::Point(132, 171);
			this->A53->Name = L"A53";
			this->A53->Size = System::Drawing::Size(54, 20);
			this->A53->TabIndex = 2;
			// 
			// A54
			// 
			this->A54->Location = System::Drawing::Point(192, 171);
			this->A54->Name = L"A54";
			this->A54->Size = System::Drawing::Size(54, 20);
			this->A54->TabIndex = 2;
			// 
			// A55
			// 
			this->A55->Location = System::Drawing::Point(252, 171);
			this->A55->Name = L"A55";
			this->A55->Size = System::Drawing::Size(54, 20);
			this->A55->TabIndex = 2;
			// 
			// B11
			// 
			this->B11->Location = System::Drawing::Point(327, 67);
			this->B11->Name = L"B11";
			this->B11->Size = System::Drawing::Size(54, 20);
			this->B11->TabIndex = 2;
			// 
			// B12
			// 
			this->B12->Location = System::Drawing::Point(387, 67);
			this->B12->Name = L"B12";
			this->B12->Size = System::Drawing::Size(54, 20);
			this->B12->TabIndex = 2;
			// 
			// B21
			// 
			this->B21->Location = System::Drawing::Point(327, 93);
			this->B21->Name = L"B21";
			this->B21->Size = System::Drawing::Size(54, 20);
			this->B21->TabIndex = 2;
			// 
			// B13
			// 
			this->B13->Location = System::Drawing::Point(447, 67);
			this->B13->Name = L"B13";
			this->B13->Size = System::Drawing::Size(54, 20);
			this->B13->TabIndex = 2;
			// 
			// B31
			// 
			this->B31->Location = System::Drawing::Point(327, 119);
			this->B31->Name = L"B31";
			this->B31->Size = System::Drawing::Size(54, 20);
			this->B31->TabIndex = 2;
			// 
			// B22
			// 
			this->B22->Location = System::Drawing::Point(387, 93);
			this->B22->Name = L"B22";
			this->B22->Size = System::Drawing::Size(54, 20);
			this->B22->TabIndex = 2;
			// 
			// B41
			// 
			this->B41->Location = System::Drawing::Point(327, 145);
			this->B41->Name = L"B41";
			this->B41->Size = System::Drawing::Size(54, 20);
			this->B41->TabIndex = 2;
			// 
			// B14
			// 
			this->B14->Location = System::Drawing::Point(507, 67);
			this->B14->Name = L"B14";
			this->B14->Size = System::Drawing::Size(54, 20);
			this->B14->TabIndex = 2;
			// 
			// B51
			// 
			this->B51->Location = System::Drawing::Point(327, 171);
			this->B51->Name = L"B51";
			this->B51->Size = System::Drawing::Size(54, 20);
			this->B51->TabIndex = 2;
			// 
			// B32
			// 
			this->B32->Location = System::Drawing::Point(387, 119);
			this->B32->Name = L"B32";
			this->B32->Size = System::Drawing::Size(54, 20);
			this->B32->TabIndex = 2;
			// 
			// B23
			// 
			this->B23->Location = System::Drawing::Point(447, 93);
			this->B23->Name = L"B23";
			this->B23->Size = System::Drawing::Size(54, 20);
			this->B23->TabIndex = 2;
			// 
			// B42
			// 
			this->B42->Location = System::Drawing::Point(387, 145);
			this->B42->Name = L"B42";
			this->B42->Size = System::Drawing::Size(54, 20);
			this->B42->TabIndex = 2;
			// 
			// B15
			// 
			this->B15->Location = System::Drawing::Point(567, 67);
			this->B15->Name = L"B15";
			this->B15->Size = System::Drawing::Size(54, 20);
			this->B15->TabIndex = 2;
			// 
			// B52
			// 
			this->B52->Location = System::Drawing::Point(387, 171);
			this->B52->Name = L"B52";
			this->B52->Size = System::Drawing::Size(54, 20);
			this->B52->TabIndex = 2;
			// 
			// B33
			// 
			this->B33->Location = System::Drawing::Point(447, 119);
			this->B33->Name = L"B33";
			this->B33->Size = System::Drawing::Size(54, 20);
			this->B33->TabIndex = 2;
			// 
			// B24
			// 
			this->B24->Location = System::Drawing::Point(507, 93);
			this->B24->Name = L"B24";
			this->B24->Size = System::Drawing::Size(54, 20);
			this->B24->TabIndex = 2;
			// 
			// B43
			// 
			this->B43->Location = System::Drawing::Point(447, 145);
			this->B43->Name = L"B43";
			this->B43->Size = System::Drawing::Size(54, 20);
			this->B43->TabIndex = 2;
			// 
			// B25
			// 
			this->B25->Location = System::Drawing::Point(567, 93);
			this->B25->Name = L"B25";
			this->B25->Size = System::Drawing::Size(54, 20);
			this->B25->TabIndex = 2;
			// 
			// B53
			// 
			this->B53->Location = System::Drawing::Point(447, 171);
			this->B53->Name = L"B53";
			this->B53->Size = System::Drawing::Size(54, 20);
			this->B53->TabIndex = 2;
			// 
			// B34
			// 
			this->B34->Location = System::Drawing::Point(507, 119);
			this->B34->Name = L"B34";
			this->B34->Size = System::Drawing::Size(54, 20);
			this->B34->TabIndex = 2;
			// 
			// B35
			// 
			this->B35->Location = System::Drawing::Point(567, 119);
			this->B35->Name = L"B35";
			this->B35->Size = System::Drawing::Size(54, 20);
			this->B35->TabIndex = 2;
			// 
			// B44
			// 
			this->B44->Location = System::Drawing::Point(507, 145);
			this->B44->Name = L"B44";
			this->B44->Size = System::Drawing::Size(54, 20);
			this->B44->TabIndex = 2;
			// 
			// B45
			// 
			this->B45->Location = System::Drawing::Point(567, 145);
			this->B45->Name = L"B45";
			this->B45->Size = System::Drawing::Size(54, 20);
			this->B45->TabIndex = 2;
			this->B45->TextChanged += gcnew System::EventHandler(this, &MyForm::B45_TextChanged);
			// 
			// B54
			// 
			this->B54->Location = System::Drawing::Point(507, 171);
			this->B54->Name = L"B54";
			this->B54->Size = System::Drawing::Size(54, 20);
			this->B54->TabIndex = 2;
			// 
			// B55
			// 
			this->B55->Location = System::Drawing::Point(567, 171);
			this->B55->Name = L"B55";
			this->B55->Size = System::Drawing::Size(54, 20);
			this->B55->TabIndex = 2;
			// 
			// LWB
			// 
			this->LWB->FormattingEnabled = true;
			this->LWB->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->LWB->Location = System::Drawing::Point(327, 25);
			this->LWB->Name = L"LWB";
			this->LWB->Size = System::Drawing::Size(78, 21);
			this->LWB->TabIndex = 0;
			// 
			// LKB
			// 
			this->LKB->FormattingEnabled = true;
			this->LKB->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->LKB->Location = System::Drawing::Point(411, 25);
			this->LKB->Name = L"LKB";
			this->LKB->Size = System::Drawing::Size(76, 21);
			this->LKB->TabIndex = 0;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(327, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 13);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Liczba Wierszy";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(411, 9);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 13);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Liczba Kolumn";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(252, 219);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(54, 13);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Macierz C";
			// 
			// C11
			// 
			this->C11->Location = System::Drawing::Point(132, 235);
			this->C11->Name = L"C11";
			this->C11->Size = System::Drawing::Size(54, 20);
			this->C11->TabIndex = 2;
			// 
			// C12
			// 
			this->C12->Location = System::Drawing::Point(192, 235);
			this->C12->Name = L"C12";
			this->C12->Size = System::Drawing::Size(54, 20);
			this->C12->TabIndex = 2;
			// 
			// C21
			// 
			this->C21->Location = System::Drawing::Point(132, 261);
			this->C21->Name = L"C21";
			this->C21->Size = System::Drawing::Size(54, 20);
			this->C21->TabIndex = 2;
			// 
			// C13
			// 
			this->C13->Location = System::Drawing::Point(252, 235);
			this->C13->Name = L"C13";
			this->C13->Size = System::Drawing::Size(54, 20);
			this->C13->TabIndex = 2;
			// 
			// C31
			// 
			this->C31->Location = System::Drawing::Point(132, 287);
			this->C31->Name = L"C31";
			this->C31->Size = System::Drawing::Size(54, 20);
			this->C31->TabIndex = 2;
			// 
			// C22
			// 
			this->C22->Location = System::Drawing::Point(192, 261);
			this->C22->Name = L"C22";
			this->C22->Size = System::Drawing::Size(54, 20);
			this->C22->TabIndex = 2;
			// 
			// C41
			// 
			this->C41->Location = System::Drawing::Point(132, 313);
			this->C41->Name = L"C41";
			this->C41->Size = System::Drawing::Size(54, 20);
			this->C41->TabIndex = 2;
			// 
			// C14
			// 
			this->C14->Location = System::Drawing::Point(312, 235);
			this->C14->Name = L"C14";
			this->C14->Size = System::Drawing::Size(54, 20);
			this->C14->TabIndex = 2;
			// 
			// C51
			// 
			this->C51->Location = System::Drawing::Point(132, 339);
			this->C51->Name = L"C51";
			this->C51->Size = System::Drawing::Size(54, 20);
			this->C51->TabIndex = 2;
			// 
			// C32
			// 
			this->C32->Location = System::Drawing::Point(192, 287);
			this->C32->Name = L"C32";
			this->C32->Size = System::Drawing::Size(54, 20);
			this->C32->TabIndex = 2;
			// 
			// C23
			// 
			this->C23->Location = System::Drawing::Point(252, 261);
			this->C23->Name = L"C23";
			this->C23->Size = System::Drawing::Size(54, 20);
			this->C23->TabIndex = 2;
			// 
			// C42
			// 
			this->C42->Location = System::Drawing::Point(192, 313);
			this->C42->Name = L"C42";
			this->C42->Size = System::Drawing::Size(54, 20);
			this->C42->TabIndex = 2;
			// 
			// C15
			// 
			this->C15->Location = System::Drawing::Point(372, 235);
			this->C15->Name = L"C15";
			this->C15->Size = System::Drawing::Size(54, 20);
			this->C15->TabIndex = 2;
			// 
			// C52
			// 
			this->C52->Location = System::Drawing::Point(192, 339);
			this->C52->Name = L"C52";
			this->C52->Size = System::Drawing::Size(54, 20);
			this->C52->TabIndex = 2;
			// 
			// C33
			// 
			this->C33->Location = System::Drawing::Point(252, 287);
			this->C33->Name = L"C33";
			this->C33->Size = System::Drawing::Size(54, 20);
			this->C33->TabIndex = 2;
			// 
			// C24
			// 
			this->C24->Location = System::Drawing::Point(312, 261);
			this->C24->Name = L"C24";
			this->C24->Size = System::Drawing::Size(54, 20);
			this->C24->TabIndex = 2;
			// 
			// C43
			// 
			this->C43->Location = System::Drawing::Point(252, 313);
			this->C43->Name = L"C43";
			this->C43->Size = System::Drawing::Size(54, 20);
			this->C43->TabIndex = 2;
			// 
			// C25
			// 
			this->C25->Location = System::Drawing::Point(372, 261);
			this->C25->Name = L"C25";
			this->C25->Size = System::Drawing::Size(54, 20);
			this->C25->TabIndex = 2;
			// 
			// C53
			// 
			this->C53->Location = System::Drawing::Point(252, 339);
			this->C53->Name = L"C53";
			this->C53->Size = System::Drawing::Size(54, 20);
			this->C53->TabIndex = 2;
			// 
			// C34
			// 
			this->C34->Location = System::Drawing::Point(312, 287);
			this->C34->Name = L"C34";
			this->C34->Size = System::Drawing::Size(54, 20);
			this->C34->TabIndex = 2;
			// 
			// C35
			// 
			this->C35->Location = System::Drawing::Point(372, 287);
			this->C35->Name = L"C35";
			this->C35->Size = System::Drawing::Size(54, 20);
			this->C35->TabIndex = 2;
			// 
			// C44
			// 
			this->C44->Location = System::Drawing::Point(312, 313);
			this->C44->Name = L"C44";
			this->C44->Size = System::Drawing::Size(54, 20);
			this->C44->TabIndex = 2;
			// 
			// C45
			// 
			this->C45->Location = System::Drawing::Point(372, 313);
			this->C45->Name = L"C45";
			this->C45->Size = System::Drawing::Size(54, 20);
			this->C45->TabIndex = 2;
			// 
			// C54
			// 
			this->C54->Location = System::Drawing::Point(312, 339);
			this->C54->Name = L"C54";
			this->C54->Size = System::Drawing::Size(54, 20);
			this->C54->TabIndex = 2;
			// 
			// C55
			// 
			this->C55->Location = System::Drawing::Point(372, 339);
			this->C55->Name = L"C55";
			this->C55->Size = System::Drawing::Size(54, 20);
			this->C55->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(567, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"A-B";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(567, 293);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"A*B";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(567, 235);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"A+B";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Dodaj);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(15, 208);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Reset";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(668, 384);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->C55);
			this->Controls->Add(this->B55);
			this->Controls->Add(this->A55);
			this->Controls->Add(this->C54);
			this->Controls->Add(this->B54);
			this->Controls->Add(this->A54);
			this->Controls->Add(this->C45);
			this->Controls->Add(this->B45);
			this->Controls->Add(this->A45);
			this->Controls->Add(this->C44);
			this->Controls->Add(this->B44);
			this->Controls->Add(this->A44);
			this->Controls->Add(this->C35);
			this->Controls->Add(this->B35);
			this->Controls->Add(this->A35);
			this->Controls->Add(this->C34);
			this->Controls->Add(this->B34);
			this->Controls->Add(this->A34);
			this->Controls->Add(this->C53);
			this->Controls->Add(this->B53);
			this->Controls->Add(this->A53);
			this->Controls->Add(this->C25);
			this->Controls->Add(this->B25);
			this->Controls->Add(this->A25);
			this->Controls->Add(this->C43);
			this->Controls->Add(this->B43);
			this->Controls->Add(this->A43);
			this->Controls->Add(this->C24);
			this->Controls->Add(this->B24);
			this->Controls->Add(this->A24);
			this->Controls->Add(this->C33);
			this->Controls->Add(this->B33);
			this->Controls->Add(this->A33);
			this->Controls->Add(this->C52);
			this->Controls->Add(this->B52);
			this->Controls->Add(this->A52);
			this->Controls->Add(this->C15);
			this->Controls->Add(this->B15);
			this->Controls->Add(this->A15);
			this->Controls->Add(this->C42);
			this->Controls->Add(this->B42);
			this->Controls->Add(this->A42);
			this->Controls->Add(this->C23);
			this->Controls->Add(this->B23);
			this->Controls->Add(this->A23);
			this->Controls->Add(this->C32);
			this->Controls->Add(this->B32);
			this->Controls->Add(this->A32);
			this->Controls->Add(this->C51);
			this->Controls->Add(this->B51);
			this->Controls->Add(this->A51);
			this->Controls->Add(this->C14);
			this->Controls->Add(this->B14);
			this->Controls->Add(this->A14);
			this->Controls->Add(this->C41);
			this->Controls->Add(this->B41);
			this->Controls->Add(this->A41);
			this->Controls->Add(this->C22);
			this->Controls->Add(this->B22);
			this->Controls->Add(this->A22);
			this->Controls->Add(this->C31);
			this->Controls->Add(this->B31);
			this->Controls->Add(this->A31);
			this->Controls->Add(this->C13);
			this->Controls->Add(this->B13);
			this->Controls->Add(this->A13);
			this->Controls->Add(this->C21);
			this->Controls->Add(this->B21);
			this->Controls->Add(this->A21);
			this->Controls->Add(this->C12);
			this->Controls->Add(this->B12);
			this->Controls->Add(this->A12);
			this->Controls->Add(this->C11);
			this->Controls->Add(this->B11);
			this->Controls->Add(this->A11);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LKB);
			this->Controls->Add(this->LKA);
			this->Controls->Add(this->LWB);
			this->Controls->Add(this->LWA);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::PopupConfirm);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int LiczbaWieA;
		int LiczbaKolA;
		array<int, 2>^ MA = gcnew array <int, 2>(5, 5);
		array<int, 2>^ MacierzA = gcnew array <int, 2>(5, 5);

		int LiczbaWieB;
		int LiczbaKolB;
		array<int, 2>^ MB = gcnew array <int, 2>(5, 5);
		array<int, 2>^ MacierzB = gcnew array <int, 2>(5, 5);


		int LiczbaWieC;
		int LiczbaKolC;
		array<int, 2>^ MC = gcnew array <int, 2>(5, 5);
		array<int, 2>^ MacierzC = gcnew array <int, 2>(5, 5);

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void UstawA_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void UstawB_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void Dodaj(System::Object^ sender, System::EventArgs^ e) {
	LiczbaWieA = Convert::ToInt32(LKA->Text);
	LiczbaKolA = Convert::ToInt32(LWA->Text);
	LiczbaWieB = Convert::ToInt32(LKB->Text);
	LiczbaKolB = Convert::ToInt32(LWB->Text);
	if (A11->Text->Length != 0) {
		MA[0, 0] = Convert::ToInt32(A11->Text);
	}
	else {
		A11->BackColor.Black;
	}
	if (A12->Text->Length != 0) {
		MA[0, 1] = Convert::ToInt32(A12->Text);
	}
	else {
		A12->BackColor.Black;
	}
	if (A13->Text->Length != 0) {
		MA[0, 2] = Convert::ToInt32(A13->Text);
	}
	else {
		A13->BackColor.Black;
	}
	if (A14->Text->Length != 0) {
		MA[0, 3] = Convert::ToInt32(A14->Text);
	}
	else {
		A14->BackColor.Black;
	}
	if (A15->Text->Length != 0) {
		MA[0, 4] = Convert::ToInt32(A15->Text);
	}
	else {
		A15->BackColor.Black;
	}
	if (A21->Text->Length != 0) {
		MA[1, 0] = Convert::ToInt32(A21->Text);
	}
	else {
		A21->BackColor.Black;
	}
	if (A22->Text->Length != 0) {
		MA[1, 1] = Convert::ToInt32(A22->Text);
	}
	else {
		A22->BackColor.Black;
	}
	if (A23->Text->Length != 0) {
		MA[1, 2] = Convert::ToInt32(A23->Text);
	}
	else {
		A23->BackColor.Black;
	}
	if (A24->Text->Length != 0) {
		MA[1, 3] = Convert::ToInt32(A24->Text);
	}
	else {
		A24->BackColor.Black;
	}
	if (A25->Text->Length != 0) {
		MA[1, 4] = Convert::ToInt32(A25->Text);
	}
	else {
		A25->BackColor.Black;
	}
	if (A31->Text->Length != 0) {
		MA[2, 0] = Convert::ToInt32(A31->Text);
	}
	else {
		A31->BackColor.Black;
	}
	if (A32->Text->Length != 0) {
		MA[2, 1] = Convert::ToInt32(A32->Text);
	}
	else {
		A32->BackColor.Black;
	}
	if (A33->Text->Length != 0) {
		MA[2, 2] = Convert::ToInt32(A33->Text);
	}
	else {
		A33->BackColor.Black;
	}
	if (A34->Text->Length != 0) {
		MA[2, 3] = Convert::ToInt32(A34->Text);
	}
	else {
		A34->BackColor.Black;
	}
	if (A35->Text->Length != 0) {
		MA[2, 4] = Convert::ToInt32(A35->Text);
	}
	else {
		A35->BackColor.Black;
	}
	if (A41->Text->Length != 0) {
		MA[3, 0] = Convert::ToInt32(A41->Text);
	}
	else {
		A41->BackColor.Black;
	}
	if (A42->Text->Length != 0) {
		MA[3, 1] = Convert::ToInt32(A42->Text);
	}
	else {
		A42->BackColor.Black;
	}
	if (A43->Text->Length != 0) {
		MA[3, 2] = Convert::ToInt32(A43->Text);
	}
	else {
		A43->BackColor.Black;
	}
	if (A44->Text->Length != 0) {
		MA[3, 3] = Convert::ToInt32(A44->Text);
	}
	else {
		A44->BackColor.Black;
	}
	if (A45->Text->Length != 0) {
		MA[3, 4] = Convert::ToInt32(A45->Text);
	}
	else {
		A45->BackColor.Black;
	}
	if (A51->Text->Length != 0) {
		MA[4, 0] = Convert::ToInt32(A51->Text);
	}
	else {
		A51->BackColor.Black;
	}
	if (A52->Text->Length != 0) {
		MA[4, 1] = Convert::ToInt32(A52->Text);
	}
	else {
		A52->BackColor.Black;
	}
	if (A53->Text->Length != 0) {
		MA[4, 2] = Convert::ToInt32(A53->Text);
	}
	else {
		A53->BackColor.Black;
	}
	if (A54->Text->Length != 0) {
		MA[4, 3] = Convert::ToInt32(A54->Text);
	}
	else {
		A54->BackColor.Black;
	}
	if (A55->Text->Length != 0) {
		MA[4, 4] = Convert::ToInt32(A55->Text);
	}
	else {
		A55->BackColor.Black;
	}
	if (B11->Text->Length != 0) {
		MB[0, 0] = Convert::ToInt32(B11->Text);
	}
	else {
		B11->BackColor.Black;
	}
	if (B12->Text->Length != 0) {
		MB[0, 1] = Convert::ToInt32(B12->Text);
	}
	else {
		B12->BackColor.Black;
	}
	if (B13->Text->Length != 0) {
		MB[0, 2] = Convert::ToInt32(B13->Text);
	}
	else {
		B13->BackColor.Black;
	}
	if (B14->Text->Length != 0) {
		MB[0, 3] = Convert::ToInt32(B14->Text);
	}
	else {
		B14->BackColor.Black;
	}
	if (B15->Text->Length != 0) {
		MB[0, 4] = Convert::ToInt32(B15->Text);
	}
	else {
		B15->BackColor.Black;
	}
	if (B21->Text->Length != 0) {
		MB[1, 0] = Convert::ToInt32(B21->Text);
	}
	else {
		B21->BackColor.Black;
	}
	if (B22->Text->Length != 0) {
		MB[1, 1] = Convert::ToInt32(B22->Text);
	}
	else {
		B22->BackColor.Black;
	}
	if (B23->Text->Length != 0) {
		MB[1, 2] = Convert::ToInt32(B23->Text);
	}
	else {
		B23->BackColor.Black;
	}
	if (B24->Text->Length != 0) {
		MB[1, 3] = Convert::ToInt32(B24->Text);
	}
	else {
		B24->BackColor.Black;
	}
	if (B25->Text->Length != 0) {
		MB[1, 4] = Convert::ToInt32(B25->Text);
	}
	else {
		B25->BackColor.Black;
	}
	if (B31->Text->Length != 0) {
		MB[2, 0] = Convert::ToInt32(B31->Text);
	}
	else {
		B31->BackColor.Black;
	}
	if (B32->Text->Length != 0) {
		MB[2, 1] = Convert::ToInt32(B32->Text);
	}
	else {
		B32->BackColor.Black;
	}
	if (B33->Text->Length != 0) {
		MB[2, 2] = Convert::ToInt32(B33->Text);
	}
	else {
		B33->BackColor.Black;
	}
	if (B34->Text->Length != 0) {
		MB[2, 3] = Convert::ToInt32(B34->Text);
	}
	else {
		B34->BackColor.Black;
	}
	if (B35->Text->Length != 0) {
		MB[2, 4] = Convert::ToInt32(B35->Text);
	}
	else {
		B35->BackColor.Black;
	}
	if (B41->Text->Length != 0) {
		MB[3, 0] = Convert::ToInt32(B41->Text);
	}
	else {
		B41->BackColor.Black;
	}
	if (B42->Text->Length != 0) {
		MB[3, 1] = Convert::ToInt32(B42->Text);
	}
	else {
		B42->BackColor.Black;
	}
	if (B43->Text->Length != 0) {
		MB[3, 2] = Convert::ToInt32(B43->Text);
	}
	else {
		B43->BackColor.Black;
	}
	if (B44->Text->Length != 0) {
		MB[3, 3] = Convert::ToInt32(B44->Text);
	}
	else {
		B44->BackColor.Black;
	}
	if (B45->Text->Length != 0) {
		MB[3, 4] = Convert::ToInt32(B45->Text);
	}
	else {
		B45->BackColor.Black;
	}
	if (B51->Text->Length != 0) {
		MB[4, 0] = Convert::ToInt32(B51->Text);
	}
	else {
		B51->BackColor.Black;
	}
	if (B52->Text->Length != 0) {
		MB[4, 1] = Convert::ToInt32(B52->Text);
	}
	else {
		B52->BackColor.Black;
	}
	if (B53->Text->Length != 0) {
		MB[4, 2] = Convert::ToInt32(B53->Text);
	}
	else {
		B53->BackColor.Black;
	}
	if (B54->Text->Length != 0) {
		MB[4, 3] = Convert::ToInt32(B54->Text);
	}
	else {
		B54->BackColor.Black;
	}
	if (B55->Text->Length != 0) {
		MB[4, 4] = Convert::ToInt32(B55->Text);
	}
	else {
		B55->BackColor.Black;
	}	if (LiczbaKolA == LiczbaKolB && LiczbaWieA == LiczbaWieB) //Rozmiary macierzy musza byc te same
	{
		LiczbaKolC = LiczbaKolA;
		LiczbaWieC = LiczbaWieB;
		for (int i = 0; i < LiczbaKolA; i++)
		{
			for (int j = 0; j < LiczbaWieB; j++)
			{
				MC[i, j] = MA[i, j] + MB[i, j];

			}
		}
		C11->Text = System::Convert::ToString(MC[0, 0]);
		C12->Text = System::Convert::ToString(MC[0, 1]);
		C13->Text = System::Convert::ToString(MC[0, 2]);
		C14->Text = System::Convert::ToString(MC[0, 3]);
		C15->Text = System::Convert::ToString(MC[0, 4]);
		C21->Text = System::Convert::ToString(MC[1, 0]);
		C22->Text = System::Convert::ToString(MC[1, 1]);
		C23->Text = System::Convert::ToString(MC[1, 2]);
		C24->Text = System::Convert::ToString(MC[1, 3]);
		C25->Text = System::Convert::ToString(MC[1, 4]);
		C31->Text = System::Convert::ToString(MC[2, 0]);
		C32->Text = System::Convert::ToString(MC[2, 1]);
		C33->Text = System::Convert::ToString(MC[2, 2]);
		C34->Text = System::Convert::ToString(MC[2, 3]);
		C35->Text = System::Convert::ToString(MC[2, 4]);
		C41->Text = System::Convert::ToString(MC[3, 0]);
		C42->Text = System::Convert::ToString(MC[3, 1]);
		C43->Text = System::Convert::ToString(MC[3, 2]);
		C44->Text = System::Convert::ToString(MC[3, 3]);
		C45->Text = System::Convert::ToString(MC[3, 4]);
		C51->Text = System::Convert::ToString(MC[4, 0]);
		C52->Text = System::Convert::ToString(MC[4, 1]);
		C53->Text = System::Convert::ToString(MC[4, 2]);
		C54->Text = System::Convert::ToString(MC[4, 3]);
		C55->Text = System::Convert::ToString(MC[4, 4]);
	}
	if (LiczbaKolA != LiczbaKolB || LiczbaWieA != LiczbaWieB) //Jesli nie sa takie same
	{
		MessageBox::Show("Zly rozmiar macierzy");
		void button4_Click();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	A11->Text = "";
	A12->Text = "";
	A13->Text = "";
	A14->Text = "";
	A15->Text = "";
	A21->Text = "";
	A22->Text = "";
	A23->Text = "";
	A24->Text = "";
	A25->Text = "";
	A31->Text = "";
	A32->Text = "";
	A33->Text = "";
	A34->Text = "";
	A35->Text = "";
	A41->Text = "";
	A42->Text = "";
	A43->Text = "";
	A44->Text = "";
	A45->Text = "";
	A51->Text = "";
	A52->Text = "";
	A53->Text = "";
	A54->Text = "";
	A55->Text = "";
	B11->Text = "";
	B12->Text = "";
	B13->Text = "";
	B14->Text = "";
	B15->Text = "";
	B21->Text = "";
	B22->Text = "";
	B23->Text = "";
	B24->Text = "";
	B25->Text = "";
	B31->Text = "";
	B32->Text = "";
	B33->Text = "";
	B34->Text = "";
	B35->Text = "";
	B41->Text = "";
	B42->Text = "";
	B43->Text = "";
	B44->Text = "";
	B45->Text = "";
	B51->Text = "";
	B52->Text = "";
	B53->Text = "";
	B54->Text = "";
	B55->Text = "";


	C11->Text = "";
	C12->Text = "";
	C13->Text = "";
	C14->Text = "";
	C15->Text = "";
	C21->Text = "";
	C22->Text = "";
	C23->Text = "";
	C24->Text = "";
	C25->Text = "";
	C31->Text = "";
	C32->Text = "";
	C33->Text = "";
	C34->Text = "";
	C35->Text = "";
	C41->Text = "";
	C42->Text = "";
	C43->Text = "";
	C44->Text = "";
	C45->Text = "";
	C51->Text = "";
	C52->Text = "";
	C53->Text = "";
	C54->Text = "";
	C55->Text = "";


	LKA->Text = "";
	LKB->Text = "";
	LWA->Text = "";
	LWB->Text = "";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	LiczbaWieA = Convert::ToInt32(LKA->Text);
	LiczbaKolA = Convert::ToInt32(LWA->Text);
	LiczbaWieB = Convert::ToInt32(LKB->Text);
	LiczbaKolB = Convert::ToInt32(LWB->Text);
	if (A11->Text->Length != 0) {
		MA[0, 0] = Convert::ToInt32(A11->Text);
	}
	else {
		A11->BackColor.Black;
	}
	if (A12->Text->Length != 0) {
		MA[0, 1] = Convert::ToInt32(A12->Text);
	}
	else {
		A12->BackColor.Black;
	}
	if (A13->Text->Length != 0) {
		MA[0, 2] = Convert::ToInt32(A13->Text);
	}
	else {
		A13->BackColor.Black;
	}
	if (A14->Text->Length != 0) {
		MA[0, 3] = Convert::ToInt32(A14->Text);
	}
	else {
		A14->BackColor.Black;
	}
	if (A15->Text->Length != 0) {
		MA[0, 4] = Convert::ToInt32(A15->Text);
	}
	else {
		A15->BackColor.Black;
	}
	if (A21->Text->Length != 0) {
		MA[1, 0] = Convert::ToInt32(A21->Text);
	}
	else {
		A21->BackColor.Black;
	}
	if (A22->Text->Length != 0) {
		MA[1, 1] = Convert::ToInt32(A22->Text);
	}
	else {
		A22->BackColor.Black;
	}
	if (A23->Text->Length != 0) {
		MA[1, 2] = Convert::ToInt32(A23->Text);
	}
	else {
		A23->BackColor.Black;
	}
	if (A24->Text->Length != 0) {
		MA[1, 3] = Convert::ToInt32(A24->Text);
	}
	else {
		A24->BackColor.Black;
	}
	if (A25->Text->Length != 0) {
		MA[1, 4] = Convert::ToInt32(A25->Text);
	}
	else {
		A25->BackColor.Black;
	}
	if (A31->Text->Length != 0) {
		MA[2, 0] = Convert::ToInt32(A31->Text);
	}
	else {
		A31->BackColor.Black;
	}
	if (A32->Text->Length != 0) {
		MA[2, 1] = Convert::ToInt32(A32->Text);
	}
	else {
		A32->BackColor.Black;
	}
	if (A33->Text->Length != 0) {
		MA[2, 2] = Convert::ToInt32(A33->Text);
	}
	else {
		A33->BackColor.Black;
	}
	if (A34->Text->Length != 0) {
		MA[2, 3] = Convert::ToInt32(A34->Text);
	}
	else {
		A34->BackColor.Black;
	}
	if (A35->Text->Length != 0) {
		MA[2, 4] = Convert::ToInt32(A35->Text);
	}
	else {
		A35->BackColor.Black;
	}
	if (A41->Text->Length != 0) {
		MA[3, 0] = Convert::ToInt32(A41->Text);
	}
	else {
		A41->BackColor.Black;
	}
	if (A42->Text->Length != 0) {
		MA[3, 1] = Convert::ToInt32(A42->Text);
	}
	else {
		A42->BackColor.Black;
	}
	if (A43->Text->Length != 0) {
		MA[3, 2] = Convert::ToInt32(A43->Text);
	}
	else {
		A43->BackColor.Black;
	}
	if (A44->Text->Length != 0) {
		MA[3, 3] = Convert::ToInt32(A44->Text);
	}
	else {
		A44->BackColor.Black;
	}
	if (A45->Text->Length != 0) {
		MA[3, 4] = Convert::ToInt32(A45->Text);
	}
	else {
		A45->BackColor.Black;
	}
	if (A51->Text->Length != 0) {
		MA[4, 0] = Convert::ToInt32(A51->Text);
	}
	else {
		A51->BackColor.Black;
	}
	if (A52->Text->Length != 0) {
		MA[4, 1] = Convert::ToInt32(A52->Text);
	}
	else {
		A52->BackColor.Black;
	}
	if (A53->Text->Length != 0) {
		MA[4, 2] = Convert::ToInt32(A53->Text);
	}
	else {
		A53->BackColor.Black;
	}
	if (A54->Text->Length != 0) {
		MA[4, 3] = Convert::ToInt32(A54->Text);
	}
	else {
		A54->BackColor.Black;
	}
	if (A55->Text->Length != 0) {
		MA[4, 4] = Convert::ToInt32(A55->Text);
	}
	else {
		A55->BackColor.Black;
	}
	if (B11->Text->Length != 0) {
		MB[0, 0] = Convert::ToInt32(B11->Text);
	}
	else {
		B11->BackColor.Black;
	}
	if (B12->Text->Length != 0) {
		MB[0, 1] = Convert::ToInt32(B12->Text);
	}
	else {
		B12->BackColor.Black;
	}
	if (B13->Text->Length != 0) {
		MB[0, 2] = Convert::ToInt32(B13->Text);
	}
	else {
		B13->BackColor.Black;
	}
	if (B14->Text->Length != 0) {
		MB[0, 3] = Convert::ToInt32(B14->Text);
	}
	else {
		B14->BackColor.Black;
	}
	if (B15->Text->Length != 0) {
		MB[0, 4] = Convert::ToInt32(B15->Text);
	}
	else {
		B15->BackColor.Black;
	}
	if (B21->Text->Length != 0) {
		MB[1, 0] = Convert::ToInt32(B21->Text);
	}
	else {
		B21->BackColor.Black;
	}
	if (B22->Text->Length != 0) {
		MB[1, 1] = Convert::ToInt32(B22->Text);
	}
	else {
		B22->BackColor.Black;
	}
	if (B23->Text->Length != 0) {
		MB[1, 2] = Convert::ToInt32(B23->Text);
	}
	else {
		B23->BackColor.Black;
	}
	if (B24->Text->Length != 0) {
		MB[1, 3] = Convert::ToInt32(B24->Text);
	}
	else {
		B24->BackColor.Black;
	}
	if (B25->Text->Length != 0) {
		MB[1, 4] = Convert::ToInt32(B25->Text);
	}
	else {
		B25->BackColor.Black;
	}
	if (B31->Text->Length != 0) {
		MB[2, 0] = Convert::ToInt32(B31->Text);
	}
	else {
		B31->BackColor.Black;
	}
	if (B32->Text->Length != 0) {
		MB[2, 1] = Convert::ToInt32(B32->Text);
	}
	else {
		B32->BackColor.Black;
	}
	if (B33->Text->Length != 0) {
		MB[2, 2] = Convert::ToInt32(B33->Text);
	}
	else {
		B33->BackColor.Black;
	}
	if (B34->Text->Length != 0) {
		MB[2, 3] = Convert::ToInt32(B34->Text);
	}
	else {
		B34->BackColor.Black;
	}
	if (B35->Text->Length != 0) {
		MB[2, 4] = Convert::ToInt32(B35->Text);
	}
	else {
		B35->BackColor.Black;
	}
	if (B41->Text->Length != 0) {
		MB[3, 0] = Convert::ToInt32(B41->Text);
	}
	else {
		B41->BackColor.Black;
	}
	if (B42->Text->Length != 0) {
		MB[3, 1] = Convert::ToInt32(B42->Text);
	}
	else {
		B42->BackColor.Black;
	}
	if (B43->Text->Length != 0) {
		MB[3, 2] = Convert::ToInt32(B43->Text);
	}
	else {
		B43->BackColor.Black;
	}
	if (B44->Text->Length != 0) {
		MB[3, 3] = Convert::ToInt32(B44->Text);
	}
	else {
		B44->BackColor.Black;
	}
	if (B45->Text->Length != 0) {
		MB[3, 4] = Convert::ToInt32(B45->Text);
	}
	else {
		B45->BackColor.Black;
	}
	if (B51->Text->Length != 0) {
		MB[4, 0] = Convert::ToInt32(B51->Text);
	}
	else {
		B51->BackColor.Black;
	}
	if (B52->Text->Length != 0) {
		MB[4, 1] = Convert::ToInt32(B52->Text);
	}
	else {
		B52->BackColor.Black;
	}
	if (B53->Text->Length != 0) {
		MB[4, 2] = Convert::ToInt32(B53->Text);
	}
	else {
		B53->BackColor.Black;
	}
	if (B54->Text->Length != 0) {
		MB[4, 3] = Convert::ToInt32(B54->Text);
	}
	else {
		B54->BackColor.Black;
	}
	if (B55->Text->Length != 0) {
		MB[4, 4] = Convert::ToInt32(B55->Text);
	}
	else {
		B55->BackColor.Black;
	}
	if (LiczbaKolA == LiczbaKolB && LiczbaWieA == LiczbaWieB) //Rozmiary macierzy musza byc te same
	{
		LiczbaKolC = LiczbaKolA;
		LiczbaWieC = LiczbaWieB;
		for (int i = 0; i < LiczbaKolA; i++)
		{
			for (int j = 0; j < LiczbaWieB; j++)
			{
				MC[i, j] = MA[i, j] - MB[i, j];

			}
		}
		C11->Text = System::Convert::ToString(MC[0, 0]);
		C12->Text = System::Convert::ToString(MC[0, 1]);
		C13->Text = System::Convert::ToString(MC[0, 2]);
		C14->Text = System::Convert::ToString(MC[0, 3]);
		C15->Text = System::Convert::ToString(MC[0, 4]);
		C21->Text = System::Convert::ToString(MC[1, 0]);
		C22->Text = System::Convert::ToString(MC[1, 1]);
		C23->Text = System::Convert::ToString(MC[1, 2]);
		C24->Text = System::Convert::ToString(MC[1, 3]);
		C25->Text = System::Convert::ToString(MC[1, 4]);
		C31->Text = System::Convert::ToString(MC[2, 0]);
		C32->Text = System::Convert::ToString(MC[2, 1]);
		C33->Text = System::Convert::ToString(MC[2, 2]);
		C34->Text = System::Convert::ToString(MC[2, 3]);
		C35->Text = System::Convert::ToString(MC[2, 4]);
		C41->Text = System::Convert::ToString(MC[3, 0]);
		C42->Text = System::Convert::ToString(MC[3, 1]);
		C43->Text = System::Convert::ToString(MC[3, 2]);
		C44->Text = System::Convert::ToString(MC[3, 3]);
		C45->Text = System::Convert::ToString(MC[3, 4]);
		C51->Text = System::Convert::ToString(MC[4, 0]);
		C52->Text = System::Convert::ToString(MC[4, 1]);
		C53->Text = System::Convert::ToString(MC[4, 2]);
		C54->Text = System::Convert::ToString(MC[4, 3]);
		C55->Text = System::Convert::ToString(MC[4, 4]);
	}


	if (LiczbaKolA != LiczbaKolB || LiczbaWieA != LiczbaWieB) //Jesli nie sa takie same
	{
		MessageBox::Show("Zly rozmiar macierzy");
		void button4_Click();
	}

}
private: System::Void B45_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	LiczbaWieA = Convert::ToInt32(LKA->Text);
	LiczbaKolA = Convert::ToInt32(LWA->Text);
	LiczbaWieB = Convert::ToInt32(LKB->Text);
	LiczbaKolB = Convert::ToInt32(LWB->Text);
	if (A11->Text->Length != 0) {
		MA[0, 0] = Convert::ToInt32(A11->Text);
	}
	else {
		A11->BackColor.Black;
	}
	if (A12->Text->Length != 0) {
		MA[0, 1] = Convert::ToInt32(A12->Text);
	}
	else {
		A12->BackColor.Black;
	}
	if (A13->Text->Length != 0) {
		MA[0, 2] = Convert::ToInt32(A13->Text);
	}
	else {
		A13->BackColor.Black;
	}
	if (A14->Text->Length != 0) {
		MA[0, 3] = Convert::ToInt32(A14->Text);
	}
	else {
		A14->BackColor.Black;
	}
	if (A15->Text->Length != 0) {
		MA[0, 4] = Convert::ToInt32(A15->Text);
	}
	else {
		A15->BackColor.Black;
	}
	if (A21->Text->Length != 0) {
		MA[1, 0] = Convert::ToInt32(A21->Text);
	}
	else {
		A21->BackColor.Black;
	}
	if (A22->Text->Length != 0) {
		MA[1, 1] = Convert::ToInt32(A22->Text);
	}
	else {
		A22->BackColor.Black;
	}
	if (A23->Text->Length != 0) {
		MA[1, 2] = Convert::ToInt32(A23->Text);
	}
	else {
		A23->BackColor.Black;
	}
	if (A24->Text->Length != 0) {
		MA[1, 3] = Convert::ToInt32(A24->Text);
	}
	else {
		A24->BackColor.Black;
	}
	if (A25->Text->Length != 0) {
		MA[1, 4] = Convert::ToInt32(A25->Text);
	}
	else {
		A25->BackColor.Black;
	}
	if (A31->Text->Length != 0) {
		MA[2, 0] = Convert::ToInt32(A31->Text);
	}
	else {
		A31->BackColor.Black;
	}
	if (A32->Text->Length != 0) {
		MA[2, 1] = Convert::ToInt32(A32->Text);
	}
	else {
		A32->BackColor.Black;
	}
	if (A33->Text->Length != 0) {
		MA[2, 2] = Convert::ToInt32(A33->Text);
	}
	else {
		A33->BackColor.Black;
	}
	if (A34->Text->Length != 0) {
		MA[2, 3] = Convert::ToInt32(A34->Text);
	}
	else {
		A34->BackColor.Black;
	}
	if (A35->Text->Length != 0) {
		MA[2, 4] = Convert::ToInt32(A35->Text);
	}
	else {
		A35->BackColor.Black;
	}
	if (A41->Text->Length != 0) {
		MA[3, 0] = Convert::ToInt32(A41->Text);
	}
	else {
		A41->BackColor.Black;
	}
	if (A42->Text->Length != 0) {
		MA[3, 1] = Convert::ToInt32(A42->Text);
	}
	else {
		A42->BackColor.Black;
	}
	if (A43->Text->Length != 0) {
		MA[3, 2] = Convert::ToInt32(A43->Text);
	}
	else {
		A43->BackColor.Black;
	}
	if (A44->Text->Length != 0) {
		MA[3, 3] = Convert::ToInt32(A44->Text);
	}
	else {
		A44->BackColor.Black;
	}
	if (A45->Text->Length != 0) {
		MA[3, 4] = Convert::ToInt32(A45->Text);
	}
	else {
		A45->BackColor.Black;
	}
	if (A51->Text->Length != 0) {
		MA[4, 0] = Convert::ToInt32(A51->Text);
	}
	else {
		A51->BackColor.Black;
	}
	if (A52->Text->Length != 0) {
		MA[4, 1] = Convert::ToInt32(A52->Text);
	}
	else {
		A52->BackColor.Black;
	}
	if (A53->Text->Length != 0) {
		MA[4, 2] = Convert::ToInt32(A53->Text);
	}
	else {
		A53->BackColor.Black;
	}
	if (A54->Text->Length != 0) {
		MA[4, 3] = Convert::ToInt32(A54->Text);
	}
	else {
		A54->BackColor.Black;
	}
	if (A55->Text->Length != 0) {
		MA[4, 4] = Convert::ToInt32(A55->Text);
	}
	else {
		A55->BackColor.Black;
	}
	if (B11->Text->Length != 0) {
		MB[0, 0] = Convert::ToInt32(B11->Text);
	}
	else {
		B11->BackColor.Black;
	}
	if (B12->Text->Length != 0) {
		MB[0, 1] = Convert::ToInt32(B12->Text);
	}
	else {
		B12->BackColor.Black;
	}
	if (B13->Text->Length != 0) {
		MB[0, 2] = Convert::ToInt32(B13->Text);
	}
	else {
		B13->BackColor.Black;
	}
	if (B14->Text->Length != 0) {
		MB[0, 3] = Convert::ToInt32(B14->Text);
	}
	else {
		B14->BackColor.Black;
	}
	if (B15->Text->Length != 0) {
		MB[0, 4] = Convert::ToInt32(B15->Text);
	}
	else {
		B15->BackColor.Black;
	}
	if (B21->Text->Length != 0) {
		MB[1, 0] = Convert::ToInt32(B21->Text);
	}
	else {
		B21->BackColor.Black;
	}
	if (B22->Text->Length != 0) {
		MB[1, 1] = Convert::ToInt32(B22->Text);
	}
	else {
		B22->BackColor.Black;
	}
	if (B23->Text->Length != 0) {
		MB[1, 2] = Convert::ToInt32(B23->Text);
	}
	else {
		B23->BackColor.Black;
	}
	if (B24->Text->Length != 0) {
		MB[1, 3] = Convert::ToInt32(B24->Text);
	}
	else {
		B24->BackColor.Black;
	}
	if (B25->Text->Length != 0) {
		MB[1, 4] = Convert::ToInt32(B25->Text);
	}
	else {
		B25->BackColor.Black;
	}
	if (B31->Text->Length != 0) {
		MB[2, 0] = Convert::ToInt32(B31->Text);
	}
	else {
		B31->BackColor.Black;
	}
	if (B32->Text->Length != 0) {
		MB[2, 1] = Convert::ToInt32(B32->Text);
	}
	else {
		B32->BackColor.Black;
	}
	if (B33->Text->Length != 0) {
		MB[2, 2] = Convert::ToInt32(B33->Text);
	}
	else {
		B33->BackColor.Black;
	}
	if (B34->Text->Length != 0) {
		MB[2, 3] = Convert::ToInt32(B34->Text);
	}
	else {
		B34->BackColor.Black;
	}
	if (B35->Text->Length != 0) {
		MB[2, 4] = Convert::ToInt32(B35->Text);
	}
	else {
		B35->BackColor.Black;
	}
	if (B41->Text->Length != 0) {
		MB[3, 0] = Convert::ToInt32(B41->Text);
	}
	else {
		B41->BackColor.Black;
	}
	if (B42->Text->Length != 0) {
		MB[3, 1] = Convert::ToInt32(B42->Text);
	}
	else {
		B42->BackColor.Black;
	}
	if (B43->Text->Length != 0) {
		MB[3, 2] = Convert::ToInt32(B43->Text);
	}
	else {
		B43->BackColor.Black;
	}
	if (B44->Text->Length != 0) {
		MB[3, 3] = Convert::ToInt32(B44->Text);
	}
	else {
		B44->BackColor.Black;
	}
	if (B45->Text->Length != 0) {
		MB[3, 4] = Convert::ToInt32(B45->Text);
	}
	else {
		B45->BackColor.Black;
	}
	if (B51->Text->Length != 0) {
		MB[4, 0] = Convert::ToInt32(B51->Text);
	}
	else {
		B51->BackColor.Black;
	}
	if (B52->Text->Length != 0) {
		MB[4, 1] = Convert::ToInt32(B52->Text);
	}
	else {
		B52->BackColor.Black;
	}
	if (B53->Text->Length != 0) {
		MB[4, 2] = Convert::ToInt32(B53->Text);
	}
	else {
		B53->BackColor.Black;
	}
	if (B54->Text->Length != 0) {
		MB[4, 3] = Convert::ToInt32(B54->Text);
	}
	else {
		B54->BackColor.Black;
	}
	if (B55->Text->Length != 0) {
		MB[4, 4] = Convert::ToInt32(B55->Text);
	}
	else {
		B55->BackColor.Black;
	}
	if (LiczbaKolA == LiczbaWieB || LiczbaKolB == LiczbaWieA)
		LiczbaKolC = LiczbaKolB;
		LiczbaWieC = LiczbaWieA;
		int Zak = LiczbaWieA;
		for (int i = 0; i < LiczbaWieA; i++)
		{
			for (int j = 0; j < LiczbaKolB; j++)
			{
				for (int k = 0; k < LiczbaKolA; k++)
				{
					MC[i, j] += MA[i,k]*MB[k,j];
				}
			}
		}
		C11->Text = System::Convert::ToString(MC[0, 0]);
		C12->Text = System::Convert::ToString(MC[0, 1]);
		C13->Text = System::Convert::ToString(MC[0, 2]);
		C14->Text = System::Convert::ToString(MC[0, 3]);
		C15->Text = System::Convert::ToString(MC[0, 4]);
		C21->Text = System::Convert::ToString(MC[1, 0]);
		C22->Text = System::Convert::ToString(MC[1, 1]);
		C23->Text = System::Convert::ToString(MC[1, 2]);
		C24->Text = System::Convert::ToString(MC[1, 3]);
		C25->Text = System::Convert::ToString(MC[1, 4]);
		C31->Text = System::Convert::ToString(MC[2, 0]);
		C32->Text = System::Convert::ToString(MC[2, 1]);
		C33->Text = System::Convert::ToString(MC[2, 2]);
		C34->Text = System::Convert::ToString(MC[2, 3]);
		C35->Text = System::Convert::ToString(MC[2, 4]);
		C41->Text = System::Convert::ToString(MC[3, 0]);
		C42->Text = System::Convert::ToString(MC[3, 1]);
		C43->Text = System::Convert::ToString(MC[3, 2]);
		C44->Text = System::Convert::ToString(MC[3, 3]);
		C45->Text = System::Convert::ToString(MC[3, 4]);
		C51->Text = System::Convert::ToString(MC[4, 0]);
		C52->Text = System::Convert::ToString(MC[4, 1]);
		C53->Text = System::Convert::ToString(MC[4, 2]);
		C54->Text = System::Convert::ToString(MC[4, 3]);
		C55->Text = System::Convert::ToString(MC[4, 4]);

		if (LiczbaKolA != LiczbaWieB || LiczbaKolB != LiczbaWieA) //Jesli niepoprawny rozmiar
		{
			MessageBox::Show("Zly rozmiar macierzy");
			void button4_Click();
		}
}
private: System::Void PopupConfirm(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (MessageBox::Show("Napewno wyjdz?", "Kalkulator Macierzy",
		MessageBoxButtons::YesNo,
		MessageBoxIcon::Exclamation) == System::Windows::Forms::DialogResult::Yes)
	{
		Application::Exit();
	}
	else
	{
		e->Cancel = true; 
	}
		
		}
};
}
