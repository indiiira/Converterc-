#pragma once
#include <string>


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;//для создания веб клиента 
	using namespace System::Text::RegularExpressions;


	/// <summary>
	/// Zusammenfassung fьr Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:

		Form1(void)
		{

			InitializeComponent();
			//

			//TODO: Konstruktorcode hier hinzufьgen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode fьr die Designerunterstьtzung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geдndert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(27, 101);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(268, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Введите сумму в рублях:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(238, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Выберите валюту:";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::MediumTurquoise;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBox1->ForeColor = System::Drawing::Color::Black;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"BYN", L"EUR", L"KZT", L"USD" });
			this->comboBox1->Location = System::Drawing::Point(242, 56);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(170, 24);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->Text = L"USD";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(27, 166);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(248, 28);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Информация про курс";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(32, 242);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(210, 62);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Узнать курс";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::MediumTurquoise;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(411, 101);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(192, 26);
			this->textBox1->TabIndex = 5;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(464, 242);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(207, 62);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Конвертировать";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(576, 169);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"...";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(404, 169);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(112, 28);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Результат";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->ClientSize = System::Drawing::Size(705, 327);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Конвертер валют";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		WebClient^ wb = gcnew WebClient();
		String^ line = wb->DownloadString("https://cbr.ru/scripts/XML_daily.asp?");//ссылка на сайт, откуда будет читаться курс
		Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");//Шаблон для поиска курса, регулярное выражение
		Match^ match = regex->Match(line);//ищем совпадение по шаблону и записываем
		label3->Text = match->Groups[1]->Value + " " + comboBox1->Text + " =  " + match->Groups[3]->Value + " Rub";

	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		WebClient^ wb = gcnew WebClient();
		String^ line = wb->DownloadString("https://cbr.ru/scripts/XML_daily.asp?");//ссылка на сайт, откуда будет читаться курс
		Regex^ regex = gcnew Regex("<CharCode>" + comboBox1->Text + "</CharCode><Nominal>(.*?)</Nominal><Name>(.*?)</Name><Value>(.*?)</Value>");//Шаблон для поиска курса, регулярное выражение
		Match^ match = regex->Match(line);//ищем совпадение по шаблону и записываем
		String^ f = match->Groups[3]->Value;
		double kurs = double::Parse(f);

		String^ d = textBox1->Text;
		double sum = double::Parse(d);
		double res = kurs * sum;
		String^ result = res.ToString();
		label4->Text = result;
	}




	
};
}
