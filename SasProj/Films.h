#pragma once
#include "StartForm.h"
#include "Films.h"
#include "Äîâ³äêà.h"
namespace SasProj {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Ñâîäêà äëÿ Films
	/// </summary>
    ref class StartForm;
    ref class Films;
    ref class Äîâ³äêà;
	public ref class Films : public System::Windows::Forms::Form
	{
	public:
		Films(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~Films()
		{
			if (components)
			{
				delete components;
			}
		}
    public: StartForm^ startForm;
    public: Films^ films;
    public: Äîâ³äêà^ äîâ³äêà;

    private: System::Windows::Forms::Label^ label12;
    protected:
    private: System::Windows::Forms::Label^ label14;
    private: System::Windows::Forms::Label^ label13;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label11;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label10;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label9;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label8;
    private: System::Windows::Forms::Button^ button32;
    private: System::Windows::Forms::Button^ button31;
    private: System::Windows::Forms::Button^ button27;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Button^ button30;
    private: System::Windows::Forms::Button^ button26;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button29;
    private: System::Windows::Forms::Button^ button25;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::Button^ button28;
    private: System::Windows::Forms::Button^ button24;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::Button^ button23;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button22;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Panel^ panel2;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Windows::Forms::Button^ button33;
    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label20;


    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::ComboBox^ comboBox1;
    private: System::Windows::Forms::CheckBox^ checkBox1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label27;
    private: System::Windows::Forms::Label^ label22;
    private: System::Windows::Forms::Label^ label19;
    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::Label^ label16;
    private: System::Windows::Forms::Label^ label18;
    private: System::Windows::Forms::Label^ label15;
    private: System::Windows::Forms::Label^ label28;
    private: System::Windows::Forms::Label^ label29;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::Button^ button34;
    private: System::Windows::Forms::CheckBox^ checkBox2;
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ ô³ëüìèToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ çàáðîíþâàòèToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ äîâ³äêàToolStripMenuItem;


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Films::typeid));
            this->label12 = (gcnew System::Windows::Forms::Label());
            this->label14 = (gcnew System::Windows::Forms::Label());
            this->label13 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label11 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->button32 = (gcnew System::Windows::Forms::Button());
            this->button31 = (gcnew System::Windows::Forms::Button());
            this->button27 = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->button30 = (gcnew System::Windows::Forms::Button());
            this->button26 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->button29 = (gcnew System::Windows::Forms::Button());
            this->button25 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->button28 = (gcnew System::Windows::Forms::Button());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->button34 = (gcnew System::Windows::Forms::Button());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
            this->button33 = (gcnew System::Windows::Forms::Button());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->label19 = (gcnew System::Windows::Forms::Label());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->label16 = (gcnew System::Windows::Forms::Label());
            this->label18 = (gcnew System::Windows::Forms::Label());
            this->label15 = (gcnew System::Windows::Forms::Label());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label27 = (gcnew System::Windows::Forms::Label());
            this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
            this->label28 = (gcnew System::Windows::Forms::Label());
            this->label29 = (gcnew System::Windows::Forms::Label());
            this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->ô³ëüìèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->çàáðîíþâàòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->äîâ³äêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->panel2->SuspendLayout();
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();
            this->label12->AutoSize = true;
            this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label12->Location = System::Drawing::Point(497, 473);
            this->label12->Name = L"label12";
            this->label12->Size = System::Drawing::Size(204, 24);
            this->label12->TabIndex = 47;
            this->label12->Text = L"-  Çàáðîíüîâàí³ ì³ñöÿ";
            this->label14->AutoSize = true;
            this->label14->BackColor = System::Drawing::Color::Red;
            this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label14->Location = System::Drawing::Point(466, 473);
            this->label14->Name = L"label14";
            this->label14->Size = System::Drawing::Size(25, 24);
            this->label14->TabIndex = 46;
            this->label14->Text = L"   ";
            this->label13->AutoSize = true;
            this->label13->BackColor = System::Drawing::Color::Lime;
            this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label13->Location = System::Drawing::Point(241, 473);
            this->label13->Name = L"label13";
            this->label13->Size = System::Drawing::Size(25, 24);
            this->label13->TabIndex = 45;
            this->label13->Text = L"   ";
            this->label7->AutoSize = true;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label7->Location = System::Drawing::Point(272, 473);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(131, 24);
            this->label7->TabIndex = 44;
            this->label7->Text = L"-  Â³ëüí³ ì³ñöÿ";
            this->label6->AutoSize = true;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label6->Location = System::Drawing::Point(409, 91);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(125, 37);
            this->label6->TabIndex = 43;
            this->label6->Text = L"ÅÊÐÀÍ";
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label5->Location = System::Drawing::Point(845, 390);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(58, 24);
            this->label5->TabIndex = 35;
            this->label5->Text = L"4 ðÿä";
            this->label11->AutoSize = true;
            this->label11->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label11->Location = System::Drawing::Point(44, 390);
            this->label11->Name = L"label11";
            this->label11->Size = System::Drawing::Size(58, 24);
            this->label11->TabIndex = 36;
            this->label11->Text = L"4 ðÿä";
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label4->Location = System::Drawing::Point(838, 323);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(65, 25);
            this->label4->TabIndex = 37;
            this->label4->Text = L"3 ðÿä";
            this->label10->AutoSize = true;
            this->label10->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label10->Location = System::Drawing::Point(43, 323);
            this->label10->Name = L"label10";
            this->label10->Size = System::Drawing::Size(65, 25);
            this->label10->TabIndex = 42;
            this->label10->Text = L"3 ðÿä";
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label3->Location = System::Drawing::Point(838, 257);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(65, 25);
            this->label3->TabIndex = 39;
            this->label3->Text = L"2 ðÿä";
            this->label9->AutoSize = true;
            this->label9->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label9->Location = System::Drawing::Point(43, 257);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(65, 25);
            this->label9->TabIndex = 38;
            this->label9->Text = L"2 ðÿä";
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label2->Location = System::Drawing::Point(838, 191);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(65, 25);
            this->label2->TabIndex = 40;
            this->label2->Text = L"1 ðÿä";
            this->label8->AutoSize = true;
            this->label8->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
            this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label8->Location = System::Drawing::Point(43, 191);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(65, 25);
            this->label8->TabIndex = 41;
            this->label8->Text = L"1 ðÿä";
            this->button32->BackColor = System::Drawing::Color::Lime;
            this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button32->Location = System::Drawing::Point(707, 373);
            this->button32->Name = L"button32";
            this->button32->Size = System::Drawing::Size(60, 60);
            this->button32->TabIndex = 33;
            this->button32->Text = L"32";
            this->button32->UseVisualStyleBackColor = false;
            this->button32->Click += gcnew System::EventHandler(this, &Films::button32_Click);
            this->button31->BackColor = System::Drawing::Color::Lime;
            this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button31->Location = System::Drawing::Point(641, 373);
            this->button31->Name = L"button31";
            this->button31->Size = System::Drawing::Size(60, 60);
            this->button31->TabIndex = 32;
            this->button31->Text = L"31";
            this->button31->UseVisualStyleBackColor = false;
            this->button31->Click += gcnew System::EventHandler(this, &Films::button31_Click);
            this->button27->BackColor = System::Drawing::Color::Lime;
            this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button27->Location = System::Drawing::Point(377, 373);
            this->button27->Name = L"button27";
            this->button27->Size = System::Drawing::Size(60, 60);
            this->button27->TabIndex = 31;
            this->button27->Text = L"27";
            this->button27->UseVisualStyleBackColor = false;
            this->button27->Click += gcnew System::EventHandler(this, &Films::button27_Click);
            this->button20->BackColor = System::Drawing::Color::Lime;
            this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button20->Location = System::Drawing::Point(509, 307);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(60, 60);
            this->button20->TabIndex = 30;
            this->button20->Text = L"20";
            this->button20->UseVisualStyleBackColor = false;
            this->button20->Click += gcnew System::EventHandler(this, &Films::button20_Click);
            this->button30->BackColor = System::Drawing::Color::Lime;
            this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button30->Location = System::Drawing::Point(575, 373);
            this->button30->Name = L"button30";
            this->button30->Size = System::Drawing::Size(60, 60);
            this->button30->TabIndex = 29;
            this->button30->Text = L"30";
            this->button30->UseVisualStyleBackColor = false;
            this->button30->Click += gcnew System::EventHandler(this, &Films::button30_Click);
            this->button26->BackColor = System::Drawing::Color::Lime;
            this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button26->Location = System::Drawing::Point(311, 373);
            this->button26->Name = L"button26";
            this->button26->Size = System::Drawing::Size(60, 60);
            this->button26->TabIndex = 28;
            this->button26->Text = L"26";
            this->button26->UseVisualStyleBackColor = false;
            this->button26->Click += gcnew System::EventHandler(this, &Films::button26_Click);
            this->button13->BackColor = System::Drawing::Color::Lime;
            this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button13->Location = System::Drawing::Point(607, 241);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(60, 60);
            this->button13->TabIndex = 27;
            this->button13->Text = L"13";
            this->button13->UseVisualStyleBackColor = false;
            this->button13->Click += gcnew System::EventHandler(this, &Films::button13_Click);
            this->button19->BackColor = System::Drawing::Color::Lime;
            this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button19->Location = System::Drawing::Point(443, 307);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(60, 60);
            this->button19->TabIndex = 26;
            this->button19->Text = L"19";
            this->button19->UseVisualStyleBackColor = false;
            this->button19->Click += gcnew System::EventHandler(this, &Films::button19_Click);
            this->button29->BackColor = System::Drawing::Color::Lime;
            this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button29->Location = System::Drawing::Point(509, 373);
            this->button29->Name = L"button29";
            this->button29->Size = System::Drawing::Size(60, 60);
            this->button29->TabIndex = 4;
            this->button29->Text = L"29";
            this->button29->UseVisualStyleBackColor = false;
            this->button29->Click += gcnew System::EventHandler(this, &Films::button29_Click);
            this->button25->BackColor = System::Drawing::Color::Lime;
            this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button25->Location = System::Drawing::Point(245, 373);
            this->button25->Name = L"button25";
            this->button25->Size = System::Drawing::Size(60, 60);
            this->button25->TabIndex = 24;
            this->button25->Text = L"25";
            this->button25->UseVisualStyleBackColor = false;
            this->button25->Click += gcnew System::EventHandler(this, &Films::button25_Click);
            this->button18->BackColor = System::Drawing::Color::Lime;
            this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button18->Location = System::Drawing::Point(377, 307);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(60, 60);
            this->button18->TabIndex = 13;
            this->button18->Text = L"18";
            this->button18->UseVisualStyleBackColor = false;
            this->button18->Click += gcnew System::EventHandler(this, &Films::button18_Click);
            this->button28->BackColor = System::Drawing::Color::Lime;
            this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button28->Location = System::Drawing::Point(443, 373);
            this->button28->Name = L"button28";
            this->button28->Size = System::Drawing::Size(60, 60);
            this->button28->TabIndex = 5;
            this->button28->Text = L"28";
            this->button28->UseVisualStyleBackColor = false;
            this->button28->Click += gcnew System::EventHandler(this, &Films::button28_Click);
            this->button24->BackColor = System::Drawing::Color::Lime;
            this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button24->Location = System::Drawing::Point(179, 373);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(60, 60);
            this->button24->TabIndex = 6;
            this->button24->Text = L"24";
            this->button24->UseVisualStyleBackColor = false;
            this->button24->Click += gcnew System::EventHandler(this, &Films::button24_Click);
            this->button11->BackColor = System::Drawing::Color::Lime;
            this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button11->Location = System::Drawing::Point(475, 241);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(60, 60);
            this->button11->TabIndex = 7;
            this->button11->Text = L"11";
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &Films::button11_Click);
            this->button17->BackColor = System::Drawing::Color::Lime;
            this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button17->Location = System::Drawing::Point(311, 307);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(60, 60);
            this->button17->TabIndex = 8;
            this->button17->Text = L"17";
            this->button17->UseVisualStyleBackColor = false;
            this->button17->Click += gcnew System::EventHandler(this, &Films::button17_Click);
            this->button23->BackColor = System::Drawing::Color::Lime;
            this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button23->Location = System::Drawing::Point(707, 307);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(60, 60);
            this->button23->TabIndex = 9;
            this->button23->Text = L"23";
            this->button23->UseVisualStyleBackColor = false;
            this->button23->Click += gcnew System::EventHandler(this, &Films::button23_Click);
            this->button10->BackColor = System::Drawing::Color::Lime;
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button10->Location = System::Drawing::Point(409, 241);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(60, 60);
            this->button10->TabIndex = 10;
            this->button10->Text = L"10";
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &Films::button10_Click);
            this->button16->BackColor = System::Drawing::Color::Lime;
            this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button16->Location = System::Drawing::Point(245, 307);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(60, 60);
            this->button16->TabIndex = 11;
            this->button16->Text = L"16";
            this->button16->UseVisualStyleBackColor = false;
            this->button16->Click += gcnew System::EventHandler(this, &Films::button16_Click);
            this->button22->BackColor = System::Drawing::Color::Lime;
            this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button22->Location = System::Drawing::Point(641, 307);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(60, 60);
            this->button22->TabIndex = 12;
            this->button22->Text = L"22";
            this->button22->UseVisualStyleBackColor = false;
            this->button22->Click += gcnew System::EventHandler(this, &Films::button22_Click);
            this->button9->BackColor = System::Drawing::Color::Lime;
            this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button9->Location = System::Drawing::Point(343, 241);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(60, 60);
            this->button9->TabIndex = 14;
            this->button9->Text = L"9";
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &Films::button9_Click);
            this->button15->BackColor = System::Drawing::Color::Lime;
            this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button15->Location = System::Drawing::Point(179, 307);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(60, 60);
            this->button15->TabIndex = 23;
            this->button15->Text = L"15";
            this->button15->UseVisualStyleBackColor = false;
            this->button15->Click += gcnew System::EventHandler(this, &Films::button15_Click);
            this->button21->BackColor = System::Drawing::Color::Lime;
            this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button21->Location = System::Drawing::Point(575, 307);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(60, 60);
            this->button21->TabIndex = 15;
            this->button21->Text = L"21";
            this->button21->UseVisualStyleBackColor = false;
            this->button21->Click += gcnew System::EventHandler(this, &Films::button21_Click);
            this->button8->BackColor = System::Drawing::Color::Lime;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button8->Location = System::Drawing::Point(277, 241);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(60, 60);
            this->button8->TabIndex = 16;
            this->button8->Text = L"8";
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Click += gcnew System::EventHandler(this, &Films::button8_Click);
            this->button14->BackColor = System::Drawing::Color::Lime;
            this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button14->Location = System::Drawing::Point(673, 241);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(60, 60);
            this->button14->TabIndex = 17;
            this->button14->Text = L"14";
            this->button14->UseVisualStyleBackColor = false;
            this->button14->Click += gcnew System::EventHandler(this, &Films::button14_Click);
            this->button7->BackColor = System::Drawing::Color::Lime;
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button7->Location = System::Drawing::Point(211, 241);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(60, 60);
            this->button7->TabIndex = 18;
            this->button7->Text = L"7";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &Films::button7_Click);
            this->button6->BackColor = System::Drawing::Color::Lime;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button6->Location = System::Drawing::Point(607, 175);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(60, 60);
            this->button6->TabIndex = 19;
            this->button6->Text = L"6";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &Films::button6_Click);
            this->button5->BackColor = System::Drawing::Color::Lime;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button5->Location = System::Drawing::Point(541, 175);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(60, 60);
            this->button5->TabIndex = 20;
            this->button5->Text = L"5";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &Films::button5_Click);
            this->button4->BackColor = System::Drawing::Color::Lime;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button4->Location = System::Drawing::Point(475, 175);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(60, 60);
            this->button4->TabIndex = 21;
            this->button4->Text = L"4";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &Films::button4_Click);
            this->button3->BackColor = System::Drawing::Color::Lime;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button3->Location = System::Drawing::Point(409, 175);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(60, 60);
            this->button3->TabIndex = 22;
            this->button3->Text = L"3";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &Films::button3_Click);
            this->button2->BackColor = System::Drawing::Color::Lime;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button2->Location = System::Drawing::Point(343, 175);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(60, 60);
            this->button2->TabIndex = 34;
            this->button2->Text = L"2";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &Films::button2_Click);
            this->button1->BackColor = System::Drawing::Color::Lime;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button1->Location = System::Drawing::Point(277, 175);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(60, 60);
            this->button1->TabIndex = 25;
            this->button1->Text = L"1";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &Films::button1_Click);
            this->button12->BackColor = System::Drawing::Color::Lime;
            this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->button12->Location = System::Drawing::Point(541, 241);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(60, 60);
            this->button12->TabIndex = 48;
            this->button12->Text = L"12";
            this->button12->UseVisualStyleBackColor = false;
            this->button12->Click += gcnew System::EventHandler(this, &Films::button12_Click);
            this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
                static_cast<System::Int32>(static_cast<System::Byte>(80)));
            this->panel2->Controls->Add(this->button34);
            this->panel2->Controls->Add(this->textBox4);
            this->panel2->Controls->Add(this->textBox3);
            this->panel2->Controls->Add(this->dateTimePicker1);
            this->panel2->Controls->Add(this->button33);
            this->panel2->Controls->Add(this->textBox2);
            this->panel2->Controls->Add(this->textBox1);
            this->panel2->Controls->Add(this->label26);
            this->panel2->Controls->Add(this->label21);
            this->panel2->Controls->Add(this->label20);
            this->panel2->Controls->Add(this->label24);
            this->panel2->Controls->Add(this->label22);
            this->panel2->Controls->Add(this->label19);
            this->panel2->Controls->Add(this->label17);
            this->panel2->Controls->Add(this->label16);
            this->panel2->Controls->Add(this->label18);
            this->panel2->Controls->Add(this->label15);
            this->panel2->Location = System::Drawing::Point(314, 91);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(317, 371);
            this->panel2->TabIndex = 49;
            this->panel2->Visible = false;
            this->button34->Location = System::Drawing::Point(3, 5);
            this->button34->Name = L"button34";
            this->button34->Size = System::Drawing::Size(35, 24);
            this->button34->TabIndex = 6;
            this->button34->Text = L"<--";
            this->button34->UseVisualStyleBackColor = true;
            this->button34->Click += gcnew System::EventHandler(this, &Films::button34_Click);
            this->textBox4->BackColor = System::Drawing::SystemColors::WindowFrame;
            this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox4->ForeColor = System::Drawing::Color::Azure;
            this->textBox4->Location = System::Drawing::Point(85, 249);
            this->textBox4->Name = L"textBox4";
            this->textBox4->ReadOnly = true;
            this->textBox4->Size = System::Drawing::Size(55, 22);
            this->textBox4->TabIndex = 5;
            this->textBox3->BackColor = System::Drawing::SystemColors::WindowFrame;
            this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox3->ForeColor = System::Drawing::Color::Azure;
            this->textBox3->Location = System::Drawing::Point(85, 217);
            this->textBox3->Name = L"textBox3";
            this->textBox3->ReadOnly = true;
            this->textBox3->Size = System::Drawing::Size(55, 22);
            this->textBox3->TabIndex = 4;
            this->dateTimePicker1->CalendarMonthBackground = System::Drawing::SystemColors::WindowFrame;
            this->dateTimePicker1->CustomFormat = L"yyy-MM-dd";
            this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
            this->dateTimePicker1->Location = System::Drawing::Point(85, 181);
            this->dateTimePicker1->Name = L"dateTimePicker1";
            this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
            this->dateTimePicker1->TabIndex = 3;
            this->dateTimePicker1->Value = System::DateTime(2021, 6, 11, 0, 0, 0, 0);
            this->button33->Location = System::Drawing::Point(84, 298);
            this->button33->Name = L"button33";
            this->button33->Size = System::Drawing::Size(160, 37);
            this->button33->TabIndex = 2;
            this->button33->Text = L"Çàáðîþâàòè";
            this->button33->UseVisualStyleBackColor = true;
            this->button33->Click += gcnew System::EventHandler(this, &Films::button33_Click);
            this->textBox2->BackColor = System::Drawing::SystemColors::WindowFrame;
            this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox2->ForeColor = System::Drawing::Color::Azure;
            this->textBox2->Location = System::Drawing::Point(85, 141);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(200, 22);
            this->textBox2->TabIndex = 1;
            this->textBox1->BackColor = System::Drawing::SystemColors::WindowFrame;
            this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->textBox1->ForeColor = System::Drawing::Color::Azure;
            this->textBox1->Location = System::Drawing::Point(85, 101);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(200, 22);
            this->textBox1->TabIndex = 1;
            this->label26->AutoSize = true;
            this->label26->BackColor = System::Drawing::Color::Transparent;
            this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label26->ForeColor = System::Drawing::Color::Azure;
            this->label26->Location = System::Drawing::Point(39, 183);
            this->label26->Name = L"label26";
            this->label26->Size = System::Drawing::Size(40, 16);
            this->label26->TabIndex = 0;
            this->label26->Text = L"Äàòà";
            this->label21->AutoSize = true;
            this->label21->BackColor = System::Drawing::Color::Transparent;
            this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label21->ForeColor = System::Drawing::Color::Azure;
            this->label21->Location = System::Drawing::Point(101, 45);
            this->label21->Name = L"label21";
            this->label21->Size = System::Drawing::Size(54, 25);
            this->label21->TabIndex = 0;
            this->label21->Text = L"ÕÕÕ";
            this->label20->AutoSize = true;
            this->label20->BackColor = System::Drawing::Color::Transparent;
            this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label20->ForeColor = System::Drawing::Color::Azure;
            this->label20->Location = System::Drawing::Point(231, 248);
            this->label20->Name = L"label20";
            this->label20->Size = System::Drawing::Size(56, 20);
            this->label20->TabIndex = 0;
            this->label20->Text = L"70 ãðí";
            this->label24->AutoSize = true;
            this->label24->BackColor = System::Drawing::Color::Transparent;
            this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label24->ForeColor = System::Drawing::Color::Azure;
            this->label24->Location = System::Drawing::Point(191, 248);
            this->label24->Name = L"label24";
            this->label24->Size = System::Drawing::Size(42, 20);
            this->label24->TabIndex = 0;
            this->label24->Text = L"Ö³íà";
            this->label22->AutoSize = true;
            this->label22->BackColor = System::Drawing::Color::Transparent;
            this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label22->ForeColor = System::Drawing::Color::Azure;
            this->label22->Location = System::Drawing::Point(60, 54);
            this->label22->Name = L"label22";
            this->label22->Size = System::Drawing::Size(46, 16);
            this->label22->TabIndex = 0;
            this->label22->Text = L"Ô³ëüì";
            this->label19->AutoSize = true;
            this->label19->BackColor = System::Drawing::Color::Transparent;
            this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label19->ForeColor = System::Drawing::Color::Azure;
            this->label19->Location = System::Drawing::Point(44, 223);
            this->label19->Name = L"label19";
            this->label19->Size = System::Drawing::Size(32, 16);
            this->label19->TabIndex = 0;
            this->label19->Text = L"Ðÿä";
            this->label17->AutoSize = true;
            this->label17->BackColor = System::Drawing::Color::Transparent;
            this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label17->ForeColor = System::Drawing::Color::Azure;
            this->label17->Location = System::Drawing::Point(30, 252);
            this->label17->Name = L"label17";
            this->label17->Size = System::Drawing::Size(45, 16);
            this->label17->TabIndex = 0;
            this->label17->Text = L"Ì³ñöå";
            this->label16->AutoSize = true;
            this->label16->BackColor = System::Drawing::Color::Transparent;
            this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label16->ForeColor = System::Drawing::Color::Azure;
            this->label16->Location = System::Drawing::Point(11, 144);
            this->label16->Name = L"label16";
            this->label16->Size = System::Drawing::Size(68, 16);
            this->label16->TabIndex = 0;
            this->label16->Text = L"Òåëåôîí";
            this->label18->AutoSize = true;
            this->label18->BackColor = System::Drawing::Color::Transparent;
            this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label18->ForeColor = System::Drawing::Color::Azure;
            this->label18->Location = System::Drawing::Point(200, 9);
            this->label18->Name = L"label18";
            this->label18->Size = System::Drawing::Size(109, 15);
            this->label18->TabIndex = 0;
            this->label18->Text = L"Çàïîâí³òü àíêåòó";
            this->label15->AutoSize = true;
            this->label15->BackColor = System::Drawing::Color::Transparent;
            this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label15->ForeColor = System::Drawing::Color::Azure;
            this->label15->Location = System::Drawing::Point(49, 104);
            this->label15->Name = L"label15";
            this->label15->Size = System::Drawing::Size(30, 16);
            this->label15->TabIndex = 0;
            this->label15->Tag = L"";
            this->label15->Text = L"²ì\'ÿ";
            this->comboBox1->FormattingEnabled = true;
            this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
                L"Äîâ³ä", L"Äèÿâîë â äåòàëÿõ", L"Ïîëþâàííÿ íà õîõë³â",
                    L"Äóøà", L"Ìàøà"
            });
            this->comboBox1->Location = System::Drawing::Point(813, 26);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(121, 21);
            this->comboBox1->TabIndex = 50;
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Films::comboBox1_SelectedIndexChanged);
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label1->ForeColor = System::Drawing::Color::Azure;
            this->label1->Location = System::Drawing::Point(704, 27);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(93, 16);
            this->label1->TabIndex = 4;
            this->label1->Text = L"Âèá³ð ô³ëüìó";
            this->label27->AutoSize = true;
            this->label27->BackColor = System::Drawing::SystemColors::MenuText;
            this->label27->Cursor = System::Windows::Forms::Cursors::Cross;
            this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label27->ForeColor = System::Drawing::Color::White;
            this->label27->Location = System::Drawing::Point(178, 64);
            this->label27->Name = L"label27";
            this->label27->Size = System::Drawing::Size(0, 9);
            this->label27->TabIndex = 51;
            this->checkBox1->AutoSize = true;
            this->checkBox1->Location = System::Drawing::Point(778, 473);
            this->checkBox1->Name = L"checkBox1";
            this->checkBox1->Size = System::Drawing::Size(47, 17);
            this->checkBox1->TabIndex = 52;
            this->checkBox1->Text = L"bron";
            this->checkBox1->UseVisualStyleBackColor = true;
            this->label28->AutoSize = true;
            this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label28->Location = System::Drawing::Point(388, 519);
            this->label28->Name = L"label28";
            this->label28->Size = System::Drawing::Size(146, 24);
            this->label28->TabIndex = 54;
            this->label28->Text = L"- Ïðîäàí³ ì³ñöÿ";
            this->label29->AutoSize = true;
            this->label29->BackColor = System::Drawing::Color::LightGray;
            this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(204)));
            this->label29->Location = System::Drawing::Point(357, 519);
            this->label29->Name = L"label29";
            this->label29->Size = System::Drawing::Size(25, 24);
            this->label29->TabIndex = 53;
            this->label29->Text = L"   ";
            this->checkBox2->AutoSize = true;
            this->checkBox2->Location = System::Drawing::Point(778, 519);
            this->checkBox2->Name = L"checkBox2";
            this->checkBox2->Size = System::Drawing::Size(45, 17);
            this->checkBox2->TabIndex = 55;
            this->checkBox2->Text = L"sold";
            this->checkBox2->UseVisualStyleBackColor = true;
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->ô³ëüìèToolStripMenuItem,
                    this->çàáðîíþâàòèToolStripMenuItem, this->äîâ³äêàToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(946, 24);
            this->menuStrip1->TabIndex = 56;
            this->menuStrip1->Text = L"menuStrip1";
            this->ô³ëüìèToolStripMenuItem->Name = L"ô³ëüìèToolStripMenuItem";
            this->ô³ëüìèToolStripMenuItem->Size = System::Drawing::Size(60, 20);
            this->ô³ëüìèToolStripMenuItem->Text = L"Ô³ëüìè";
            this->ô³ëüìèToolStripMenuItem->Click += gcnew System::EventHandler(this, &Films::ô³ëüìèToolStripMenuItem_Click);
            this->çàáðîíþâàòèToolStripMenuItem->BackColor = System::Drawing::SystemColors::ControlDark;
            this->çàáðîíþâàòèToolStripMenuItem->Name = L"çàáðîíþâàòèToolStripMenuItem";
            this->çàáðîíþâàòèToolStripMenuItem->Size = System::Drawing::Size(94, 20);
            this->çàáðîíþâàòèToolStripMenuItem->Text = L"Çàáðîíþâàòè";
            this->äîâ³äêàToolStripMenuItem->Name = L"äîâ³äêàToolStripMenuItem";
            this->äîâ³äêàToolStripMenuItem->Size = System::Drawing::Size(61, 20);
            this->äîâ³äêàToolStripMenuItem->Text = L"Äîâ³äêà";
            this->äîâ³äêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &Films::äîâ³äêàToolStripMenuItem_Click);
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(946, 588);
            this->Controls->Add(this->checkBox2);
            this->Controls->Add(this->label28);
            this->Controls->Add(this->label29);
            this->Controls->Add(this->checkBox1);
            this->Controls->Add(this->label27);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->button12);
            this->Controls->Add(this->label12);
            this->Controls->Add(this->label14);
            this->Controls->Add(this->label13);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->label11);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label10);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->button32);
            this->Controls->Add(this->button31);
            this->Controls->Add(this->button27);
            this->Controls->Add(this->button20);
            this->Controls->Add(this->button30);
            this->Controls->Add(this->button26);
            this->Controls->Add(this->button13);
            this->Controls->Add(this->button19);
            this->Controls->Add(this->button29);
            this->Controls->Add(this->button25);
            this->Controls->Add(this->button18);
            this->Controls->Add(this->button28);
            this->Controls->Add(this->button24);
            this->Controls->Add(this->button11);
            this->Controls->Add(this->button17);
            this->Controls->Add(this->button23);
            this->Controls->Add(this->button10);
            this->Controls->Add(this->button16);
            this->Controls->Add(this->button22);
            this->Controls->Add(this->button9);
            this->Controls->Add(this->button15);
            this->Controls->Add(this->button21);
            this->Controls->Add(this->button8);
            this->Controls->Add(this->button14);
            this->Controls->Add(this->button7);
            this->Controls->Add(this->button6);
            this->Controls->Add(this->button5);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"Films";
            this->Text = L"Films";
            this->Load += gcnew System::EventHandler(this, &Films::Films_Load);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
public: String^ film;
public: Void Bron(Button^ i, int numplce, String^ films) {
    String^ constr = "Server=127.0.0.1;Uid=root;Pwd=Konokrad15951;Database=cinema";
    MySqlConnection^ con = gcnew MySqlConnection(constr);
    con->Open();
    MySqlCommand^ cmds = gcnew MySqlCommand("select * from reservation where Film = '" + films + "' AND Place = '" + numplce + "' AND Reserv='1';", con);
    MySqlDataReader^ drs;
    drs = cmds->ExecuteReader();
    int count = 0;
    while (drs->Read())
    {
        count += 1;
    }
    if (count == 1)
    {
        i->BackColor = Color::Red;
    }
    con->Close();
    drs->Close();
};
public: Void Sold(Button^ i, int numplce, String^ films) {
    String^ constr = "Server=127.0.0.1;Uid=root;Pwd=Konokrad15951;Database=cinema";
    MySqlConnection^ con = gcnew MySqlConnection(constr);
    con->Open();
    MySqlCommand^ cmds = gcnew MySqlCommand("select * from reservation where Film = '" + films + "' AND Place = '" + numplce + "' AND Sold='1';", con);
    MySqlDataReader^ drs;
    drs = cmds->ExecuteReader();
    int count = 0;
    while (drs->Read())
    {
        count += 1;
    }
    if (count == 1)
    {
        i->BackColor = Color::LightGray;
    }
    con->Close();
    drs->Close();
};
    private: System::Void Films_Load(System::Object^ sender, System::EventArgs^ e) {

    }
    private:void ClearBut(){
        button1->BackColor = Color::Lime;
        button2->BackColor = Color::Lime;
        button3->BackColor = Color::Lime;
        button4->BackColor = Color::Lime;
        button5->BackColor = Color::Lime;
        button6->BackColor = Color::Lime;
        button7->BackColor = Color::Lime;
        button8->BackColor = Color::Lime;
        button9->BackColor = Color::Lime;
        button10->BackColor = Color::Lime;
        button11->BackColor = Color::Lime;
        button12->BackColor = Color::Lime;
        button13->BackColor = Color::Lime;
        button14->BackColor = Color::Lime;
        button15->BackColor = Color::Lime;
        button16->BackColor = Color::Lime;
        button17->BackColor = Color::Lime;
        button18->BackColor = Color::Lime;
        button19->BackColor = Color::Lime;
        button20->BackColor = Color::Lime;
        button21->BackColor = Color::Lime;
        button22->BackColor = Color::Lime;
        button23->BackColor = Color::Lime;
        button24->BackColor = Color::Lime;
        button25->BackColor = Color::Lime;
        button26->BackColor = Color::Lime;
        button27->BackColor = Color::Lime;
        button28->BackColor = Color::Lime;
        button29->BackColor = Color::Lime;
        button30->BackColor = Color::Lime;
        button31->BackColor = Color::Lime;
        button32->BackColor = Color::Lime;
    }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
    switch (comboBox1->SelectedIndex)
    {
    case 0: {
        film = "Äîâ³ä";
        label21->Text = film;
        ClearBut();
        Bron(button1, 1, film); Bron(button2, 2, film); Bron(button3, 3, film); Bron(button4, 4, film); Bron(button5, 4, film); Bron(button6, 6, film); Bron(button7, 7, film); Bron(button8, 8, film);
        Bron(button9, 9, film); Bron(button10, 10, film); Bron(button11, 11, film); Bron(button12, 12, film); Bron(button13, 13, film); Bron(button14, 14, film); Bron(button15, 15, film); Bron(button16, 16, film);
        Bron(button17, 17, film); Bron(button18, 18, film); Bron(button19, 19, film); Bron(button20, 20, film); Bron(button21, 21, film); Bron(button22, 22, film); Bron(button23, 23, film); Bron(button24, 24, film);
        Bron(button25, 25, film); Bron(button26, 26, film); Bron(button27, 27, film); Bron(button28, 28, film); Bron(button29, 29, film); Bron(button30, 30, film); Bron(button31, 31, film); Bron(button32, 32, film);
        Sold(button1, 1, film); Sold(button2, 2, film); Sold(button3, 3, film); Sold(button4, 4, film); Sold(button5, 4, film); Sold(button6, 6, film); Sold(button7, 7, film); Sold(button8, 8, film);
        Sold(button9, 9, film); Sold(button10, 10, film); Sold(button11, 11, film); Sold(button12, 12, film); Sold(button13, 13, film); Sold(button14, 14, film); Sold(button15, 15, film); Sold(button16, 16, film);
        Sold(button17, 17, film); Sold(button18, 18, film); Sold(button19, 19, film); Sold(button20, 20, film); Sold(button21, 21, film); Sold(button22, 22, film); Sold(button23, 23, film); Sold(button24, 24, film);
        Sold(button25, 25, film); Bron(button26, 26, film); Sold(button27, 27, film); Sold(button28, 28, film); Sold(button29, 29, film); Sold(button30, 30, film); Sold(button31, 31, film); Sold(button32, 32, film);
        break;
    }
    case 1: {
        film = "Äèÿâîë â äåòàëÿõ";
        label21->Text = film;
        ClearBut();
        Bron(button1, 1, film); Bron(button2, 2, film); Bron(button3, 3, film); Bron(button4, 4, film); Bron(button5, 4, film); Bron(button6, 6, film); Bron(button7, 7, film); Bron(button8, 8, film);
        Bron(button9, 9, film); Bron(button10, 10, film); Bron(button11, 11, film); Bron(button12, 12, film); Bron(button13, 13, film); Bron(button14, 14, film); Bron(button15, 15, film); Bron(button16, 16, film);
        Bron(button17, 17, film); Bron(button18, 18, film); Bron(button19, 19, film); Bron(button20, 20, film); Bron(button21, 21, film); Bron(button22, 22, film); Bron(button23, 23, film); Bron(button24, 24, film);
        Bron(button25, 25, film); Bron(button26, 26, film); Bron(button27, 27, film); Bron(button28, 28, film); Bron(button29, 29, film); Bron(button30, 30, film); Bron(button31, 31, film); Bron(button32, 32, film);
        Sold(button1, 1, film); Sold(button2, 2, film); Sold(button3, 3, film); Sold(button4, 4, film); Sold(button5, 4, film); Sold(button6, 6, film); Sold(button7, 7, film); Sold(button8, 8, film);
        Sold(button9, 9, film); Sold(button10, 10, film); Sold(button11, 11, film); Sold(button12, 12, film); Sold(button13, 13, film); Sold(button14, 14, film); Sold(button15, 15, film); Sold(button16, 16, film);
        Sold(button17, 17, film); Sold(button18, 18, film); Sold(button19, 19, film); Sold(button20, 20, film); Sold(button21, 21, film); Sold(button22, 22, film); Sold(button23, 23, film); Sold(button24, 24, film);
        Sold(button25, 25, film); Bron(button26, 26, film); Sold(button27, 27, film); Sold(button28, 28, film); Sold(button29, 29, film); Sold(button30, 30, film); Sold(button31, 31, film); Sold(button32, 32, film);
        break;
    }
    case 2: {
        film = "Ïîëþâàííÿ íà õîõë³â";
        label21->Text = film;
        ClearBut();
        Bron(button1, 1, film); Bron(button2, 2, film); Bron(button3, 3, film); Bron(button4, 4, film); Bron(button5, 4, film); Bron(button6, 6, film); Bron(button7, 7, film); Bron(button8, 8, film);
        Bron(button9, 9, film); Bron(button10, 10, film); Bron(button11, 11, film); Bron(button12, 12, film); Bron(button13, 13, film); Bron(button14, 14, film); Bron(button15, 15, film); Bron(button16, 16, film);
        Bron(button17, 17, film); Bron(button18, 18, film); Bron(button19, 19, film); Bron(button20, 20, film); Bron(button21, 21, film); Bron(button22, 22, film); Bron(button23, 23, film); Bron(button24, 24, film);
        Bron(button25, 25, film); Bron(button26, 26, film); Bron(button27, 27, film); Bron(button28, 28, film); Bron(button29, 29, film); Bron(button30, 30, film); Bron(button31, 31, film); Bron(button32, 32, film);
        Sold(button1, 1, film); Sold(button2, 2, film); Sold(button3, 3, film); Sold(button4, 4, film); Sold(button5, 4, film); Sold(button6, 6, film); Sold(button7, 7, film); Sold(button8, 8, film);
        Sold(button9, 9, film); Sold(button10, 10, film); Sold(button11, 11, film); Sold(button12, 12, film); Sold(button13, 13, film); Sold(button14, 14, film); Sold(button15, 15, film); Sold(button16, 16, film);
        Sold(button17, 17, film); Sold(button18, 18, film); Sold(button19, 19, film); Sold(button20, 20, film); Sold(button21, 21, film); Sold(button22, 22, film); Sold(button23, 23, film); Sold(button24, 24, film);
        Sold(button25, 25, film); Bron(button26, 26, film); Sold(button27, 27, film); Sold(button28, 28, film); Sold(button29, 29, film); Sold(button30, 30, film); Sold(button31, 31, film); Sold(button32, 32, film);
        break;
    }
    case 3: {
        film = "Äóøà";
        label21->Text = film;
        ClearBut();
        Bron(button1, 1, film); Bron(button2, 2, film); Bron(button3, 3, film); Bron(button4, 4, film); Bron(button5, 4, film); Bron(button6, 6, film); Bron(button7, 7, film); Bron(button8, 8, film);
        Bron(button9, 9, film); Bron(button10, 10, film); Bron(button11, 11, film); Bron(button12, 12, film); Bron(button13, 13, film); Bron(button14, 14, film); Bron(button15, 15, film); Bron(button16, 16, film);
        Bron(button17, 17, film); Bron(button18, 18, film); Bron(button19, 19, film); Bron(button20, 20, film); Bron(button21, 21, film); Bron(button22, 22, film); Bron(button23, 23, film); Bron(button24, 24, film);
        Bron(button25, 25, film); Bron(button26, 26, film); Bron(button27, 27, film); Bron(button28, 28, film); Bron(button29, 29, film); Bron(button30, 30, film); Bron(button31, 31, film); Bron(button32, 32, film);
        Sold(button1, 1, film); Sold(button2, 2, film); Sold(button3, 3, film); Sold(button4, 4, film); Sold(button5, 4, film); Sold(button6, 6, film); Sold(button7, 7, film); Sold(button8, 8, film);
        Sold(button9, 9, film); Sold(button10, 10, film); Sold(button11, 11, film); Sold(button12, 12, film); Sold(button13, 13, film); Sold(button14, 14, film); Sold(button15, 15, film); Sold(button16, 16, film);
        Sold(button17, 17, film); Sold(button18, 18, film); Sold(button19, 19, film); Sold(button20, 20, film); Sold(button21, 21, film); Sold(button22, 22, film); Sold(button23, 23, film); Sold(button24, 24, film);
        Sold(button25, 25, film); Bron(button26, 26, film); Sold(button27, 27, film); Sold(button28, 28, film); Sold(button29, 29, film); Sold(button30, 30, film); Sold(button31, 31, film); Sold(button32, 32, film);
        break;
    }
    case 4: {
        film = "Ìàøà";
        label21->Text = film;
        ClearBut();
        Bron(button1, 1, film); Bron(button2, 2, film); Bron(button3, 3, film); Bron(button4, 4, film); Bron(button5, 4, film); Bron(button6, 6, film); Bron(button7, 7, film); Bron(button8, 8, film);
        Bron(button9, 9, film); Bron(button10, 10, film); Bron(button11, 11, film); Bron(button12, 12, film); Bron(button13, 13, film); Bron(button14, 14, film); Bron(button15, 15, film); Bron(button16, 16, film);
        Bron(button17, 17, film); Bron(button18, 18, film); Bron(button19, 19, film); Bron(button20, 20, film); Bron(button21, 21, film); Bron(button22, 22, film); Bron(button23, 23, film); Bron(button24, 24, film);
        Bron(button25, 25, film); Bron(button26, 26, film); Bron(button27, 27, film); Bron(button28, 28, film); Bron(button29, 29, film); Bron(button30, 30, film); Bron(button31, 31, film); Bron(button32, 32, film);
        Sold(button1, 1, film); Sold(button2, 2, film); Sold(button3, 3, film); Sold(button4, 4, film); Sold(button5, 4, film); Sold(button6, 6, film); Sold(button7, 7, film); Sold(button8, 8, film);
        Sold(button9, 9, film); Sold(button10, 10, film); Sold(button11, 11, film); Sold(button12, 12, film); Sold(button13, 13, film); Sold(button14, 14, film); Sold(button15, 15, film); Sold(button16, 16, film);
        Sold(button17, 17, film); Sold(button18, 18, film); Sold(button19, 19, film); Sold(button20, 20, film); Sold(button21, 21, film); Sold(button22, 22, film); Sold(button23, 23, film); Sold(button24, 24, film);
        Sold(button25, 25, film); Bron(button26, 26, film); Sold(button27, 27, film); Sold(button28, 28, film); Sold(button29, 29, film); Sold(button30, 30, film); Sold(button31, 31, film); Sold(button32, 32, film);
        break;
    }
    }

}
public: int^ place, row;
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 1;
    place = 1;
    textBox3->Text = "1";
    textBox4->Text = "1";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 1;
    place = 2;
    textBox3->Text = "1";
    textBox4->Text = "2";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 1;
    place = 3;
    textBox3->Text = "1";
    textBox4->Text = "3";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 1;
    place = 4;
    textBox3->Text = "1";
    textBox4->Text = "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 1;
    place = 5;
    textBox3->Text = "1";
    textBox4->Text = "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 1;
    place = 6;
    textBox3->Text = "1";
    textBox4->Text = "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 1;
    place = 7;
    textBox3->Text = "1";
    textBox4->Text = "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 2;
    place = 8;
    textBox3->Text = "2";
    textBox4->Text = "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 2;
    place = 9;
    textBox3->Text = "2";
    textBox4->Text = "9";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 2;
    place = 10;
    textBox3->Text = "2";
    textBox4->Text = "10";
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 2;
    place = 11;
    textBox3->Text = "2";
    textBox4->Text = "11";
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 2;
    place = 12;
    textBox3->Text = "2";
    textBox4->Text = "12";
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 2;
    place = 13;
    textBox3->Text = "2";
    textBox4->Text = "13";
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 2;
    place = 14;
    textBox3->Text = "2";
    textBox4->Text = "14";
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 3;
    place = 15;
    textBox3->Text = "3";
    textBox4->Text = "15";
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 3;
    place = 16;
    textBox3->Text = "3";
    textBox4->Text = "16";
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 3;
    place = 17;
    textBox3->Text = "3";
    textBox4->Text = "17";
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 3;
    place = 18;
    textBox3->Text = "3";
    textBox4->Text = "18";
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 3;
    place = 19;
    textBox3->Text = "3";
    textBox4->Text = "19";
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 3;
    place = 20;
    textBox3->Text = "3";
    textBox4->Text = "20";
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 3;
    place = 21;
    textBox3->Text = "3";
    textBox4->Text = "21";
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 3;
    place = 22;
    textBox3->Text = "4";
    textBox4->Text = "22";
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 3;
    place = 23;
    textBox3->Text = "3";
    textBox4->Text = "23";
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 4;
    place = 24;
    textBox3->Text = "4";
    textBox4->Text = "24";
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 4;
    place = 25;
    textBox3->Text = "4";
    textBox4->Text = "25";
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 4;
    place = 26;
    textBox3->Text = "4";
    textBox4->Text = "26";
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 4;
    place = 27;
    textBox3->Text = "4";
    textBox4->Text = "27";
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 4;
    place = 28;
    textBox3->Text = "4";
    textBox4->Text = "28";
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 4;
    place = 29;
    textBox3->Text = "4";
    textBox4->Text = "29";
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 4;
    place = 30;
    textBox3->Text = "4";
    textBox4->Text = "30";
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 4;
    place = 31;
    textBox3->Text = "4";
    textBox4->Text = "31";
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = true;
    row = 4;
    place = 32;
    textBox3->Text = "4";
    textBox4->Text = "32";
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ constr = "Server=127.0.0.1;Uid=root;Pwd=Konokrad15951;Database=cinema";
    MySqlConnection^ con = gcnew MySqlConnection(constr);
    con->Open();
    MySqlDataReader^ dr;
    String^ name = textBox1->Text;
    String^ phone = textBox2->Text;
    dateTimePicker1->Format = DateTimePickerFormat::Custom;
    dateTimePicker1->CustomFormat = "yyyy-MM-dd";
    String^ reserv = "0";
    String^ sold = "0";
    if (checkBox1->Checked)
    {
        reserv = "1";
    }
    if (checkBox2->Checked)
    {
        sold = "1";
    }
    MySqlCommand^ cmds = gcnew MySqlCommand("INSERT INTO reservation VALUES ('" + name + "','" + phone + "','" + film + "','" + dateTimePicker1->Text + "','" + row + "','" + place + "','" + reserv + "','" + sold + "')", con);
    try
    {
        dr = cmds->ExecuteReader();
        textBox1->Text = "";
        textBox2->Text = "";
        textBox3->Text = "";
        textBox4->Text = "";
        MessageBox::Show("Âè óñï³øíî çàáðîíþâàëè êâèòîê!");
        panel2->Visible = false;
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
    con->Close();
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
    panel2->Visible = false;
}
private: System::Void äîâ³äêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ô³ëüìèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
