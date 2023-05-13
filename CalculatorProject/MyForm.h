#pragma once

namespace CalculatorProject {

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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button40;
	private: System::Windows::Forms::Button^ button41;
	private: System::Windows::Forms::Button^ button42;
	private: System::Windows::Forms::Button^ button43;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button45;
	private: System::Windows::Forms::Button^ button46;
	private: System::Windows::Forms::Button^ button47;
	private: System::Windows::Forms::Button^ A;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button48;
	private: System::Windows::Forms::Button^ button49;
	private: System::Windows::Forms::Button^ button50;
	private: System::Windows::Forms::Button^ button51;

	private: System::Windows::Forms::Button^ button53;
	private: System::Windows::Forms::Button^ button54;
	private: System::Windows::Forms::Button^ button55;
	private: System::Windows::Forms::Button^ button56;
	private: System::Windows::Forms::Button^ button57;
	private: System::Windows::Forms::Button^ button58;
	private: System::Windows::Forms::Button^ button59;
	private: System::Windows::Forms::Button^ button60;
	private: System::Windows::Forms::Button^ button61;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->A = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(7, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(414, 97);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlText;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(12, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(49, 42);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Dec";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 141);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 2;
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 223);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(152, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(104, 141);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(369, 278);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 16);
			this->label5->TabIndex = 6;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlText;
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(67, 115);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 42);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Hex";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlText;
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(129, 115);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(52, 42);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Bin";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ControlText;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(187, 115);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(54, 42);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Oct";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ControlText;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(247, 115);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(51, 42);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Rad";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ControlText;
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(304, 115);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(59, 42);
			this->button7->TabIndex = 11;
			this->button7->Text = L"Deg";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ControlText;
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(369, 115);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(52, 42);
			this->button8->TabIndex = 12;
			this->button8->Text = L"Grad";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::OrangeRed;
			this->button9->ForeColor = System::Drawing::Color::FloralWhite;
			this->button9->Location = System::Drawing::Point(12, 169);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(64, 41);
			this->button9->TabIndex = 13;
			this->button9->Text = L"";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::OrangeRed;
			this->button10->ForeColor = System::Drawing::Color::FloralWhite;
			this->button10->Location = System::Drawing::Point(82, 169);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(56, 41);
			this->button10->TabIndex = 14;
			this->button10->Text = L"";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::OrangeRed;
			this->button11->ForeColor = System::Drawing::Color::FloralWhite;
			this->button11->Location = System::Drawing::Point(144, 169);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(64, 41);
			this->button11->TabIndex = 15;
			this->button11->Text = L"Last X";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::OrangeRed;
			this->button12->ForeColor = System::Drawing::Color::FloralWhite;
			this->button12->Location = System::Drawing::Point(214, 169);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(65, 41);
			this->button12->TabIndex = 16;
			this->button12->Text = L"Swap";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::OrangeRed;
			this->button13->ForeColor = System::Drawing::Color::FloralWhite;
			this->button13->Location = System::Drawing::Point(288, 169);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(64, 41);
			this->button13->TabIndex = 17;
			this->button13->Text = L"CLR";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::OrangeRed;
			this->button14->ForeColor = System::Drawing::Color::FloralWhite;
			this->button14->Location = System::Drawing::Point(358, 169);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(63, 41);
			this->button14->TabIndex = 18;
			this->button14->Text = L"CLA";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::OrangeRed;
			this->button15->ForeColor = System::Drawing::Color::FloralWhite;
			this->button15->Location = System::Drawing::Point(372, 396);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(49, 78);
			this->button15->TabIndex = 19;
			this->button15->Text = L"Enter";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::Color::FloralWhite;
			this->button16->Location = System::Drawing::Point(372, 224);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(49, 39);
			this->button16->TabIndex = 20;
			this->button16->Text = L"x^2";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::Color::FloralWhite;
			this->button17->Location = System::Drawing::Point(266, 268);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(49, 39);
			this->button17->TabIndex = 21;
			this->button17->Text = L"+-";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::Color::FloralWhite;
			this->button18->Location = System::Drawing::Point(317, 268);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(49, 39);
			this->button18->TabIndex = 22;
			this->button18->Text = L"/";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::Color::FloralWhite;
			this->button19->Location = System::Drawing::Point(317, 224);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(49, 39);
			this->button19->TabIndex = 23;
			this->button19->Text = L"√x";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::Color::FloralWhite;
			this->button20->Location = System::Drawing::Point(266, 224);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(49, 39);
			this->button20->TabIndex = 24;
			this->button20->Text = L"y^x";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::Color::FloralWhite;
			this->button21->Location = System::Drawing::Point(214, 224);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(49, 39);
			this->button21->TabIndex = 25;
			this->button21->Text = L"x√(y)";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::Color::FloralWhite;
			this->button22->Location = System::Drawing::Point(372, 353);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(49, 35);
			this->button22->TabIndex = 26;
			this->button22->Text = L"+";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::Color::FloralWhite;
			this->button23->Location = System::Drawing::Point(372, 268);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(49, 39);
			this->button23->TabIndex = 27;
			this->button23->Text = L"x";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::Color::FloralWhite;
			this->button24->Location = System::Drawing::Point(214, 268);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(46, 39);
			this->button24->TabIndex = 28;
			this->button24->Text = L"1/x";
			this->button24->UseVisualStyleBackColor = false;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::Color::FloralWhite;
			this->button25->Location = System::Drawing::Point(372, 311);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(49, 39);
			this->button25->TabIndex = 29;
			this->button25->Text = L"-";
			this->button25->UseVisualStyleBackColor = false;
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::Color::FloralWhite;
			this->button26->Location = System::Drawing::Point(12, 224);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(49, 39);
			this->button26->TabIndex = 30;
			this->button26->Text = L"Hyp";
			this->button26->UseVisualStyleBackColor = false;
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::Color::FloralWhite;
			this->button27->Location = System::Drawing::Point(122, 224);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(49, 39);
			this->button27->TabIndex = 31;
			this->button27->Text = L"x!";
			this->button27->UseVisualStyleBackColor = false;
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::Color::FloralWhite;
			this->button28->Location = System::Drawing::Point(67, 224);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(49, 39);
			this->button28->TabIndex = 32;
			this->button28->Text = L"Exp";
			this->button28->UseVisualStyleBackColor = false;
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button29->ForeColor = System::Drawing::Color::FloralWhite;
			this->button29->Location = System::Drawing::Point(12, 269);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(49, 37);
			this->button29->TabIndex = 33;
			this->button29->Text = L"sin";
			this->button29->UseVisualStyleBackColor = false;
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::Black;
			this->button33->ForeColor = System::Drawing::Color::FloralWhite;
			this->button33->Location = System::Drawing::Point(317, 437);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(52, 37);
			this->button33->TabIndex = 37;
			this->button33->Text = L".";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button34->ForeColor = System::Drawing::Color::FloralWhite;
			this->button34->Location = System::Drawing::Point(122, 439);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(49, 37);
			this->button34->TabIndex = 38;
			this->button34->Text = L"π";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button35->ForeColor = System::Drawing::Color::FloralWhite;
			this->button35->Location = System::Drawing::Point(67, 439);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(49, 37);
			this->button35->TabIndex = 39;
			this->button35->Text = L"e";
			this->button35->UseVisualStyleBackColor = false;
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button36->ForeColor = System::Drawing::Color::FloralWhite;
			this->button36->Location = System::Drawing::Point(12, 439);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(49, 37);
			this->button36->TabIndex = 40;
			this->button36->Text = L"Rand";
			this->button36->UseVisualStyleBackColor = false;
			// 
			// button37
			// 
			this->button37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button37->ForeColor = System::Drawing::Color::FloralWhite;
			this->button37->Location = System::Drawing::Point(122, 396);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(49, 37);
			this->button37->TabIndex = 41;
			this->button37->Text = L"e^x";
			this->button37->UseVisualStyleBackColor = false;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button38->ForeColor = System::Drawing::Color::FloralWhite;
			this->button38->Location = System::Drawing::Point(67, 396);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(49, 37);
			this->button38->TabIndex = 42;
			this->button38->Text = L"2^x";
			this->button38->UseVisualStyleBackColor = false;
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button39->ForeColor = System::Drawing::Color::FloralWhite;
			this->button39->Location = System::Drawing::Point(12, 396);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(49, 37);
			this->button39->TabIndex = 43;
			this->button39->Text = L"10^x";
			this->button39->UseVisualStyleBackColor = false;
			// 
			// button40
			// 
			this->button40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button40->ForeColor = System::Drawing::Color::FloralWhite;
			this->button40->Location = System::Drawing::Point(122, 353);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(49, 37);
			this->button40->TabIndex = 44;
			this->button40->Text = L"ln";
			this->button40->UseVisualStyleBackColor = false;
			// 
			// button41
			// 
			this->button41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button41->ForeColor = System::Drawing::Color::FloralWhite;
			this->button41->Location = System::Drawing::Point(67, 353);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(49, 37);
			this->button41->TabIndex = 45;
			this->button41->Text = L"log_2";
			this->button41->UseVisualStyleBackColor = false;
			// 
			// button42
			// 
			this->button42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button42->ForeColor = System::Drawing::Color::FloralWhite;
			this->button42->Location = System::Drawing::Point(12, 353);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(49, 37);
			this->button42->TabIndex = 46;
			this->button42->Text = L"log";
			this->button42->UseVisualStyleBackColor = false;
			// 
			// button43
			// 
			this->button43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button43->ForeColor = System::Drawing::Color::FloralWhite;
			this->button43->Location = System::Drawing::Point(122, 312);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(49, 37);
			this->button43->TabIndex = 47;
			this->button43->Text = L"atan";
			this->button43->UseVisualStyleBackColor = false;
			// 
			// button44
			// 
			this->button44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button44->ForeColor = System::Drawing::Color::FloralWhite;
			this->button44->Location = System::Drawing::Point(67, 312);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(49, 37);
			this->button44->TabIndex = 48;
			this->button44->Text = L"acos";
			this->button44->UseVisualStyleBackColor = false;
			// 
			// button45
			// 
			this->button45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button45->ForeColor = System::Drawing::Color::FloralWhite;
			this->button45->Location = System::Drawing::Point(12, 312);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(49, 37);
			this->button45->TabIndex = 49;
			this->button45->Text = L"asin";
			this->button45->UseVisualStyleBackColor = false;
			// 
			// button46
			// 
			this->button46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button46->ForeColor = System::Drawing::Color::FloralWhite;
			this->button46->Location = System::Drawing::Point(122, 269);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(49, 37);
			this->button46->TabIndex = 50;
			this->button46->Text = L"tan";
			this->button46->UseVisualStyleBackColor = false;
			// 
			// button47
			// 
			this->button47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button47->ForeColor = System::Drawing::Color::FloralWhite;
			this->button47->Location = System::Drawing::Point(67, 269);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(49, 37);
			this->button47->TabIndex = 51;
			this->button47->Text = L"cos";
			this->button47->UseVisualStyleBackColor = false;
			// 
			// A
			// 
			this->A->BackColor = System::Drawing::Color::Black;
			this->A->ForeColor = System::Drawing::Color::FloralWhite;
			this->A->Location = System::Drawing::Point(174, 224);
			this->A->Name = L"A";
			this->A->Size = System::Drawing::Size(34, 40);
			this->A->TabIndex = 52;
			this->A->Text = L"A";
			this->A->UseVisualStyleBackColor = false;
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::Black;
			this->button31->ForeColor = System::Drawing::Color::FloralWhite;
			this->button31->Location = System::Drawing::Point(174, 271);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(34, 37);
			this->button31->TabIndex = 53;
			this->button31->Text = L"B";
			this->button31->UseVisualStyleBackColor = false;
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::Black;
			this->button32->ForeColor = System::Drawing::Color::FloralWhite;
			this->button32->Location = System::Drawing::Point(174, 312);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(34, 37);
			this->button32->TabIndex = 54;
			this->button32->Text = L"C";
			this->button32->UseVisualStyleBackColor = false;
			// 
			// button48
			// 
			this->button48->BackColor = System::Drawing::Color::Black;
			this->button48->ForeColor = System::Drawing::Color::FloralWhite;
			this->button48->Location = System::Drawing::Point(174, 353);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(34, 36);
			this->button48->TabIndex = 55;
			this->button48->Text = L"D";
			this->button48->UseVisualStyleBackColor = false;
			// 
			// button49
			// 
			this->button49->BackColor = System::Drawing::Color::Black;
			this->button49->ForeColor = System::Drawing::Color::FloralWhite;
			this->button49->Location = System::Drawing::Point(174, 396);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(34, 37);
			this->button49->TabIndex = 56;
			this->button49->Text = L"E";
			this->button49->UseVisualStyleBackColor = false;
			// 
			// button50
			// 
			this->button50->BackColor = System::Drawing::Color::Black;
			this->button50->ForeColor = System::Drawing::Color::FloralWhite;
			this->button50->Location = System::Drawing::Point(174, 439);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(34, 35);
			this->button50->TabIndex = 57;
			this->button50->Text = L"F";
			this->button50->UseVisualStyleBackColor = false;
			// 
			// button51
			// 
			this->button51->BackColor = System::Drawing::Color::Black;
			this->button51->ForeColor = System::Drawing::Color::FloralWhite;
			this->button51->Location = System::Drawing::Point(211, 438);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(104, 36);
			this->button51->TabIndex = 58;
			this->button51->Text = L"0";
			this->button51->UseVisualStyleBackColor = false;
			this->button51->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button53
			// 
			this->button53->BackColor = System::Drawing::Color::Black;
			this->button53->ForeColor = System::Drawing::Color::FloralWhite;
			this->button53->Location = System::Drawing::Point(317, 353);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(49, 37);
			this->button53->TabIndex = 60;
			this->button53->Text = L"6";
			this->button53->UseVisualStyleBackColor = false;
			this->button53->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button54
			// 
			this->button54->BackColor = System::Drawing::Color::Black;
			this->button54->ForeColor = System::Drawing::Color::FloralWhite;
			this->button54->Location = System::Drawing::Point(211, 313);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(49, 37);
			this->button54->TabIndex = 61;
			this->button54->Text = L"7";
			this->button54->UseVisualStyleBackColor = false;
			this->button54->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button55
			// 
			this->button55->BackColor = System::Drawing::Color::Black;
			this->button55->ForeColor = System::Drawing::Color::FloralWhite;
			this->button55->Location = System::Drawing::Point(317, 313);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(49, 37);
			this->button55->TabIndex = 62;
			this->button55->Text = L"9";
			this->button55->UseVisualStyleBackColor = false;
			this->button55->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button56
			// 
			this->button56->BackColor = System::Drawing::Color::Black;
			this->button56->ForeColor = System::Drawing::Color::FloralWhite;
			this->button56->Location = System::Drawing::Point(266, 312);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(49, 37);
			this->button56->TabIndex = 63;
			this->button56->Text = L"8";
			this->button56->UseVisualStyleBackColor = false;
			this->button56->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button57
			// 
			this->button57->BackColor = System::Drawing::Color::Black;
			this->button57->ForeColor = System::Drawing::Color::FloralWhite;
			this->button57->Location = System::Drawing::Point(211, 353);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(49, 37);
			this->button57->TabIndex = 64;
			this->button57->Text = L"4";
			this->button57->UseVisualStyleBackColor = false;
			this->button57->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button58
			// 
			this->button58->BackColor = System::Drawing::Color::Black;
			this->button58->ForeColor = System::Drawing::Color::FloralWhite;
			this->button58->Location = System::Drawing::Point(266, 353);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(49, 37);
			this->button58->TabIndex = 65;
			this->button58->Text = L"5";
			this->button58->UseVisualStyleBackColor = false;
			this->button58->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button59
			// 
			this->button59->BackColor = System::Drawing::Color::Black;
			this->button59->ForeColor = System::Drawing::Color::FloralWhite;
			this->button59->Location = System::Drawing::Point(211, 396);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(49, 37);
			this->button59->TabIndex = 66;
			this->button59->Text = L"1";
			this->button59->UseVisualStyleBackColor = false;
			this->button59->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button60
			// 
			this->button60->BackColor = System::Drawing::Color::Black;
			this->button60->ForeColor = System::Drawing::Color::FloralWhite;
			this->button60->Location = System::Drawing::Point(266, 396);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(49, 37);
			this->button60->TabIndex = 67;
			this->button60->Text = L"2";
			this->button60->UseVisualStyleBackColor = false;
			this->button60->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button61
			// 
			this->button61->BackColor = System::Drawing::Color::Black;
			this->button61->ForeColor = System::Drawing::Color::FloralWhite;
			this->button61->Location = System::Drawing::Point(317, 396);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(52, 37);
			this->button61->TabIndex = 68;
			this->button61->Text = L"3";
			this->button61->UseVisualStyleBackColor = false;
			this->button61->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(433, 492);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->A);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Zyaslo Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstdigit, seconddigit, answer;
		string^ operators;
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {C
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {9
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button60_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {

	Button^ numbers = safe_cast<Button^>(sender);
	if (txtDisplay->Text == 0) {
		txtDisplay->Text = Numbers->Text;
	}
	else {
		txtdisplay->Text = txtDisplay->Text + numbers->Text;
	}
}
};
}
