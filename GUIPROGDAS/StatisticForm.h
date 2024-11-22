#pragma once
#include "Pertandingan.h"

namespace GUIPROGDAS {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for StatisticForm
	/// </summary>
	public ref class StatisticForm : public System::Windows::Forms::Form
	{
	private:
		List<Pertandingan^>^ listPertandingan;  // Menggunakan kelas Pertandingan dari header Pertandingan.h
	public:
		StatisticForm(List<Pertandingan^>^ pertandinganList) {
			InitializeComponent();
			listPertandingan = pertandinganList;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StatisticForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ListBox^ listBox1;

			



	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StatisticForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Statistik tim";
			this->label1->Click += gcnew System::EventHandler(this, &StatisticForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(15, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(143, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Total Menang";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(15, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Total Kalah";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Location = System::Drawing::Point(21, 209);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 33);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Total Seri";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(24, 278);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(99, 33);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Total Gol";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(24, 334);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(167, 33);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Total Kebobolan";
			this->label6->Click += gcnew System::EventHandler(this, &StatisticForm::label6_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(399, 12);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(270, 436);
			this->listBox1->TabIndex = 6;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &StatisticForm::listBox1_SelectedIndexChanged);
			// 
			// StatisticForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(681, 477);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"StatisticForm";
			this->Text = L"StatisticForm";
			this->Load += gcnew System::EventHandler(this, &StatisticForm::StatisticForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void StatisticForm_Load(System::Object^ sender, System	::EventArgs^ e) {
	// Mengisi listBox1 dengan nama tim
	List<String^>^ teamNames = gcnew List<String^>();

	for each (Pertandingan ^ pertandingan in listPertandingan) {
		if (!teamNames->Contains(pertandingan->Tim1)) {
			teamNames->Add(pertandingan->Tim1);
		}
		if (!teamNames->Contains(pertandingan->Tim2)) {
			teamNames->Add(pertandingan->Tim2);
		}
	}

	for each (String ^ team in teamNames) {
		listBox1->Items->Add(team);
	}
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (listBox1->SelectedItem == nullptr) {
		return; // Jika tidak ada tim yang dipilih, keluar dari fungsi
	}

	String^ selectedTeam = listBox1->SelectedItem->ToString();

	int totalMenang = 0;
	int totalKalah = 0;
	int totalSeri = 0;
	int golDiciptakan = 0;
	int golKebobolan = 0;

	// Menghitung statistik tim yang dipilih pengguna
	for each (Pertandingan ^ pertandingan in listPertandingan) {
		if (pertandingan->Tim1 == selectedTeam) {
			if (pertandingan->SkorTim1 > pertandingan->SkorTim2) {
				totalMenang++;
			}
			else if (pertandingan->SkorTim1 < pertandingan->SkorTim2) {
				totalKalah++;
			}
			else {
				totalSeri++;
			}
			golDiciptakan += pertandingan->SkorTim1;
			golKebobolan += pertandingan->SkorTim2;
		}
		else if (pertandingan->Tim2 == selectedTeam) {
			if (pertandingan->SkorTim2 > pertandingan->SkorTim1) {
				totalMenang++;
			}
			else if (pertandingan->SkorTim2 < pertandingan->SkorTim1) {
				totalKalah++;
			}
			else {
				totalSeri++;
			}
			golDiciptakan += pertandingan->SkorTim2;
			golKebobolan += pertandingan->SkorTim1;
		}
	}

	// Menampilkan hasil statistik
	label2->Text = "Total Menang: " + totalMenang.ToString();
	label3->Text = "Total Kalah: " + totalKalah.ToString();
	label4->Text = "Total Seri: " + totalSeri.ToString();
	label5->Text = "Total Gol yang Diciptakan: " + golDiciptakan.ToString();
	label6->Text = "Total Gol Kebobolan: " + golKebobolan.ToString();
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
