#pragma once
#include "StartForm.h"
#include "Films.h"
#include "Довідка.h"
namespace SasProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	ref class StartForm;
	ref class Films;
	ref class Help;
	/// <summary>
	/// Сводка для Довідка
	/// </summary>
	public ref class Довідка : public System::Windows::Forms::Form
	{
	public:
		Довідка(void)
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
		~Довідка()
		{
			if (components)
			{
				delete components;
			}
		}
	public: StartForm^ startForm;
	public: Films^ films;
	public: Довідка^ help;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ фільмиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ забронюватиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ довідкаToolStripMenuItem;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->фільмиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->забронюватиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->довідкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->фільмиToolStripMenuItem,
					this->забронюватиToolStripMenuItem, this->довідкаToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(284, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			this->фільмиToolStripMenuItem->Name = L"фільмиToolStripMenuItem";
			this->фільмиToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->фільмиToolStripMenuItem->Text = L"Фільми";
			this->фільмиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Довідка::фільмиToolStripMenuItem_Click);
			this->забронюватиToolStripMenuItem->Name = L"забронюватиToolStripMenuItem";
			this->забронюватиToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->забронюватиToolStripMenuItem->Text = L"Забронювати";
			this->забронюватиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Довідка::забронюватиToolStripMenuItem_Click);
			this->довідкаToolStripMenuItem->Name = L"довідкаToolStripMenuItem";
			this->довідкаToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->довідкаToolStripMenuItem->Text = L"Довідка";
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Довідка";
			this->Text = L"Довідка";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void фільмиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void забронюватиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
