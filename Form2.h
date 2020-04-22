#pragma once
#include <stdio.h>
#include <stddef.h>
#include <malloc.h>
#include <string.h>
#include <locale.h>
#include <stdint.h>
#include <stdlib.h>
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
		{
			InitializeComponent();

		}

	protected:
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^ calculate;
	private: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::TextBox^ A_number;




	private: System::Windows::Forms::RadioButton^ radioButton1;
	public: System::Windows::Forms::TextBox^ textBox1;
	private:

	public: System::Windows::Forms::TextBox^ B_number;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;

	public: System::Windows::Forms::TextBox^ k_text;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	public:
	private:

	private:

	public:
	private:
	private:
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->A_number = (gcnew System::Windows::Forms::TextBox());
			this->calculate = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->B_number = (gcnew System::Windows::Forms::TextBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->k_text = (gcnew System::Windows::Forms::TextBox());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::SystemColors::Menu;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->textBox1->Location = System::Drawing::Point(12, 550);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(1301, 30);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form2::textBox1_TextChanged_1);
			// 
			// A_number
			// 
			this->A_number->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->A_number->BackColor = System::Drawing::SystemColors::Menu;
			this->A_number->CausesValidation = false;
			this->A_number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->A_number->Location = System::Drawing::Point(12, 8);
			this->A_number->Name = L"A_number";
			this->A_number->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->A_number->Size = System::Drawing::Size(1301, 30);
			this->A_number->TabIndex = 1;
			this->A_number->Text = L"Введите число A";
			this->A_number->TextChanged += gcnew System::EventHandler(this, &Form2::textBox1_TextChanged);
			// 
			// calculate
			// 
			this->calculate->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->calculate->BackColor = System::Drawing::Color::PaleTurquoise;
			this->calculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20));
			this->calculate->Location = System::Drawing::Point(12, 493);
			this->calculate->Name = L"calculate";
			this->calculate->Size = System::Drawing::Size(1301, 50);
			this->calculate->TabIndex = 6;
			this->calculate->Text = L"Вычислить";
			this->calculate->UseVisualStyleBackColor = false;
			this->calculate->Click += gcnew System::EventHandler(this, &Form2::calculate_Click_1);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->Location = System::Drawing::Point(1211, 592);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 40);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(12, 115);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(306, 28);
			this->radioButton1->TabIndex = 9;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Сравнение натуральных чисел";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// B_number
			// 
			this->B_number->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->B_number->BackColor = System::Drawing::SystemColors::Menu;
			this->B_number->CausesValidation = false;
			this->B_number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->B_number->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->B_number->Location = System::Drawing::Point(12, 47);
			this->B_number->Name = L"B_number";
			this->B_number->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->B_number->Size = System::Drawing::Size(1301, 30);
			this->B_number->TabIndex = 2;
			this->B_number->Text = L"Введите число B";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(12, 142);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(214, 28);
			this->radioButton2->TabIndex = 10;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Проверка на ноль(A)";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form2::radioButton2_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(12, 169);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(324, 28);
			this->radioButton3->TabIndex = 11;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Добавление 1 к натуральному(A)";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(12, 195);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(298, 28);
			this->radioButton4->TabIndex = 12;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Сложение натуральных чисел";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(12, 221);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(802, 28);
			this->radioButton5->TabIndex = 13;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Вычитание из первого большего натурального числа второго меньшего или равного";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton6->Location = System::Drawing::Point(12, 247);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(405, 28);
			this->radioButton6->TabIndex = 14;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Умножение натурального числа на цифру";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton7->Location = System::Drawing::Point(12, 275);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(387, 28);
			this->radioButton7->TabIndex = 15;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Умножение натурального числа на 10^k";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// k_text
			// 
			this->k_text->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->k_text->BackColor = System::Drawing::SystemColors::Menu;
			this->k_text->CausesValidation = false;
			this->k_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->k_text->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->k_text->Location = System::Drawing::Point(12, 82);
			this->k_text->Name = L"k_text";
			this->k_text->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->k_text->Size = System::Drawing::Size(1301, 30);
			this->k_text->TabIndex = 4;
			this->k_text->Text = L"Введите k(для 10^k и вычитания умноженного на цифру)";
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton8->Location = System::Drawing::Point(12, 298);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(401, 28);
			this->radioButton8->TabIndex = 16;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Умножение натурального числа на число";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton9->Location = System::Drawing::Point(12, 322);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(707, 28);
			this->radioButton9->TabIndex = 17;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Вычитание из натурального другого натурального, умноженного на цифру";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton10->Location = System::Drawing::Point(12, 348);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(896, 28);
			this->radioButton10->TabIndex = 18;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Вычисление первой цифры деления большего натурального на меньшее, домноженное на "
				L"10^k";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton11->Location = System::Drawing::Point(12, 374);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(600, 28);
			this->radioButton11->TabIndex = 19;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"Частное от деления большего натурального числа на меньшее";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton12->Location = System::Drawing::Point(12, 401);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(601, 28);
			this->radioButton12->TabIndex = 20;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"Остаток от деления большего натурального числа на меньшее";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton13->Location = System::Drawing::Point(12, 426);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(248, 28);
			this->radioButton13->TabIndex = 21;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"НОД натуральных чисел";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton14->Location = System::Drawing::Point(12, 451);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(246, 28);
			this->radioButton14->TabIndex = 22;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"НОK натуральных чисел";
			this->radioButton14->UseVisualStyleBackColor = true;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1325, 644);
			this->Controls->Add(this->radioButton14);
			this->Controls->Add(this->radioButton13);
			this->Controls->Add(this->radioButton12);
			this->Controls->Add(this->radioButton11);
			this->Controls->Add(this->radioButton10);
			this->Controls->Add(this->radioButton9);
			this->Controls->Add(this->radioButton8);
			this->Controls->Add(this->k_text);
			this->Controls->Add(this->radioButton7);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->B_number);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->calculate);
			this->Controls->Add(this->A_number);
			this->Name = L"Form2";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Работа с натуралными числами";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int Result;
		STARTUPINFO StartProcess;
		GetStartupInfoW(&StartProcess);
		PROCESS_INFORMATION ProcessInfo;
		TCHAR Path[MAX_PATH] = TEXT("DM.exe");
		CreateProcess(NULL, Path, NULL, NULL, FALSE, 0, NULL, NULL, &StartProcess, &ProcessInfo);
		//CloseHandle(ProcessInfo.hProcess);
		//CloseHandle(ProcessInfo.hThread);
		this->Close();
	}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void calculate_Click_1(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Text = " ";
		int n = A_number->TextLength, m = B_number->TextLength;
		char c; int intRES, p, j = 0, MAXSIZE = n + 1, MAXSIZE_B = m + 1;
		uint8_t* res, * A = new uint8_t[MAXSIZE], * B = new uint8_t[MAXSIZE_B];
		for (int i = n - 1; i >= 0; i--) {
			c = A_number->Text[j];
			j++;
			A[i] = c - '0';
		}
		j = 0;
		for (int i = m - 1; i >= 0; i--) {
			c = B_number->Text[j];
			j++;
			B[i] = c - '0';
		}
		if (radioButton1->Checked == true)
		{
			intRES = COM_NN_D(A, B, n, m);
			textBox1->Text = Convert::ToString(intRES) + " ";
			delete[] A; delete[] B;
		}
		if (radioButton2->Checked == true)
		{
			intRES = NZER_N_B(A, n);
			textBox1->Text = Convert::ToString(intRES) + " ";
			delete[] A; delete[] B;
		}
		if (radioButton3->Checked == true)
		{
			A = ADD_1N_N(A, &n);
			for (int i = n - 1; i >= 0; i--) {
				char c = A[i]; 
				textBox1->Text += c;
			}
			delete[] A; delete[] B;
		}
		if (radioButton4->Checked == true)
		{
			res = ADD_NN_N(A, B, n, m, &p);
			for (int i = p - 1; i >= 0; i--) {
				char c = res[i];
				textBox1->Text += c;
			}
			delete[] A; delete[] B; delete[] res;
		}
		if (radioButton5->Checked == true)
		{
			res = SUB_NN_N(A, B, n, m, &p);
			for (int i = p - 1; i >= 0; i--) {
				char c = res[i];
				textBox1->Text += c;
			}
			delete[] A; delete[] B; 
		}
		if (radioButton6->Checked == true)
		{
			res = MUL_NN_N(A, B, n, m, &p);
			for (int i = p - 1; i >= 0; i--) {
				char c = res[i];
				textBox1->Text += c;
			}
			delete[] A; delete[] B; delete[] res;
		}
		if (radioButton7->Checked == true)
		{
			int k = 0, temp = k_text->TextLength; j = 0;
			for (int i = temp - 1; i >= 0; i--) {
				c = k_text->Text[j] - '0';
				j++;
				k = k * 10 + c;
			}
			res = MUL_Nk_N(A, n, k, &p);
			for (int i = p - 1; i >= 0; i--) {
				char c = res[i];
				textBox1->Text += c;
			}
			delete[] A; delete[] B; delete[] res;
		}
		if (radioButton8->Checked == true)
		{
			res = MUL_NN_N(A, B, n, m, &p);
			for (int i = p - 1; i >= 0; i--) {
				char c = res[i];
				textBox1->Text += c;
			}
			delete[] A; delete[] B; delete[] res;
		}
		if (radioButton9->Checked == true)
		{
			int k = 0, temp = k_text->TextLength; j = 0;
			for (int i = temp - 1; i >= 0; i--) {
				c = k_text->Text[j] - '0';
				j++;
				k = k * 10 + c;
			}
			res = SUB_NDN_N(A, B, n, m, k, &p);
			for (int i = p - 1; i >= 0; i--) {
				char c = res[i];
				textBox1->Text += c;
			}
			delete[] A; delete[] B;
		}
		if (radioButton10->Checked == true)
		{
			int k;
			intRES = DIV_NN_Dk(A, B, n, m, &k);
			textBox1->Text += "цифра = " + intRES + " k = " + k;
			delete[] A; delete[] B; delete[] res;
		}
		if (radioButton11->Checked == true)
		{
			res = DIV_NN_N(A, B, n, m, &p);
			for (int i = p - 1; i >= 0; i--) {
				char c = res[i];
				textBox1->Text += c;
			}
			delete[] A; delete[] B; delete[] res;
		}
		if (radioButton12->Checked == true)
		{
			res = MOD_NN_N(&A, &B, n, m, &p);
			for (int i = p - 1; i >= 0; i--) {
				char c = res[i];
				textBox1->Text += c;
			}
			delete[] A; delete[] B; 
		}
		if (radioButton13->Checked == true)
		{
			res = GCF_NN_N(&A, &B, &n, &m, &p);
			for (int i = p - 1; i >= 0; i--) {
				char c = res[i];
				textBox1->Text += c;
			}
			delete[] A; delete[] B;
		}
		if (radioButton14->Checked == true)
		{
			res = LCM_NN_N(&A, &B, n, m, &p);
			for (int i = p - 1; i >= 0; i--) {
				char c = res[i];
				textBox1->Text += c;
			}
			delete[] A; delete[] B; delete[] res;
		}
	}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
