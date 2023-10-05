#pragma once
#include <cctype>
#include <iostream>
namespace LexicalAnalizator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Threading;
	using namespace System::Collections::Generic;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// Ñâîäêà äëÿ Analizator
	/// </summary>
	/// 
	public ref class Analizator : public System::Windows::Forms::Form
	{
	public:
		Analizator(void)
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
		~Analizator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàãðóçèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ àíàëèçèðîâàòüToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;


	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòüÊîäToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ àíàëèçèðîâàòüToolStripMenuItem1;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::DataGridView^ dataGridView4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridView6;
	private: System::Windows::Forms::DataGridView^ dataGridView5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column18;




	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàãðóçèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àíàëèçèðîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüÊîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->àíàëèçèðîâàòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView6 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ôàéëToolStripMenuItem,
					this->àíàëèçèðîâàòüToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1776, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->çàãðóçèòüToolStripMenuItem });
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// çàãðóçèòüToolStripMenuItem
			// 
			this->çàãðóçèòüToolStripMenuItem->Name = L"çàãðóçèòüToolStripMenuItem";
			this->çàãðóçèòüToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->çàãðóçèòüToolStripMenuItem->Text = L"Çàãðóçèòü";
			this->çàãðóçèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analizator::çàãðóçèòüToolStripMenuItem_Click);
			// 
			// àíàëèçèðîâàòüToolStripMenuItem
			// 
			this->àíàëèçèðîâàòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->î÷èñòèòüÊîäToolStripMenuItem,
					this->àíàëèçèðîâàòüToolStripMenuItem1
			});
			this->àíàëèçèðîâàòüToolStripMenuItem->Name = L"àíàëèçèðîâàòüToolStripMenuItem";
			this->àíàëèçèðîâàòüToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->àíàëèçèðîâàòüToolStripMenuItem->Text = L"Àíàëèç";
			// 
			// î÷èñòèòüÊîäToolStripMenuItem
			// 
			this->î÷èñòèòüÊîäToolStripMenuItem->Name = L"î÷èñòèòüÊîäToolStripMenuItem";
			this->î÷èñòèòüÊîäToolStripMenuItem->Size = System::Drawing::Size(200, 26);
			this->î÷èñòèòüÊîäToolStripMenuItem->Text = L"Î÷èñòèòü êîä";
			this->î÷èñòèòüÊîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analizator::î÷èñòèòüÊîäToolStripMenuItem_Click);
			// 
			// àíàëèçèðîâàòüToolStripMenuItem1
			// 
			this->àíàëèçèðîâàòüToolStripMenuItem1->Name = L"àíàëèçèðîâàòüToolStripMenuItem1";
			this->àíàëèçèðîâàòüToolStripMenuItem1->Size = System::Drawing::Size(200, 26);
			this->àíàëèçèðîâàòüToolStripMenuItem1->Text = L"Àíàëèçèðîâàòü";
			this->àíàëèçèðîâàòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Analizator::àíàëèçèðîâàòüToolStripMenuItem1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(555, 269);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox2->Location = System::Drawing::Point(0, 269);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(555, 284);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->richTextBox2);
			this->panel4->Controls->Add(this->richTextBox1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(0, 28);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(555, 553);
			this->panel4->TabIndex = 7;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->dataGridView2);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(555, 28);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(405, 553);
			this->panel1->TabIndex = 8;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column10,
					this->Column11, this->Column12
			});
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView2->Location = System::Drawing::Point(0, 270);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(405, 283);
			this->dataGridView2->TabIndex = 1;
			this->dataGridView2->RowPostPaint += gcnew System::Windows::Forms::DataGridViewRowPostPaintEventHandler(this, &Analizator::dataGridView2_RowPostPaint);
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"¹";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->ReadOnly = true;
			this->Column10->Width = 125;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Îïåðàòîðû";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->ReadOnly = true;
			this->Column11->Width = 125;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Êîä";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->ReadOnly = true;
			this->Column12->Width = 125;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(405, 270);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->RowPostPaint += gcnew System::Windows::Forms::DataGridViewRowPostPaintEventHandler(this, &Analizator::dataGridView1_RowPostPaint);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"¹";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Êëþ÷åâûå ñëîâà";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Êîä";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dataGridView4);
			this->panel2->Controls->Add(this->dataGridView3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(960, 28);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(440, 553);
			this->panel2->TabIndex = 9;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column13,
					this->Column14, this->Column15
			});
			this->dataGridView4->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView4->Location = System::Drawing::Point(0, 270);
			this->dataGridView4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(440, 283);
			this->dataGridView4->TabIndex = 1;
			this->dataGridView4->RowPostPaint += gcnew System::Windows::Forms::DataGridViewRowPostPaintEventHandler(this, &Analizator::dataGridView4_RowPostPaint);
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"¹";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->ReadOnly = true;
			this->Column13->Width = 125;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Ðàçäåëèòåëè";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->ReadOnly = true;
			this->Column14->Width = 125;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Êîä";
			this->Column15->MinimumWidth = 6;
			this->Column15->Name = L"Column15";
			this->Column15->ReadOnly = true;
			this->Column15->Width = 125;
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column4,
					this->Column5, this->Column6
			});
			this->dataGridView3->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView3->Location = System::Drawing::Point(0, 0);
			this->dataGridView3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->ReadOnly = true;
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(440, 270);
			this->dataGridView3->TabIndex = 0;
			this->dataGridView3->RowPostPaint += gcnew System::Windows::Forms::DataGridViewRowPostPaintEventHandler(this, &Analizator::dataGridView3_RowPostPaint);
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"¹";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Èäåíòèôèêàòîðû";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Êîä";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 125;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dataGridView6);
			this->panel3->Controls->Add(this->dataGridView5);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(1400, 28);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(401, 553);
			this->panel3->TabIndex = 10;
			// 
			// dataGridView6
			// 
			this->dataGridView6->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView6->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column16,
					this->Column17, this->Column18
			});
			this->dataGridView6->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView6->Location = System::Drawing::Point(0, 270);
			this->dataGridView6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView6->Name = L"dataGridView6";
			this->dataGridView6->ReadOnly = true;
			this->dataGridView6->RowHeadersVisible = false;
			this->dataGridView6->RowHeadersWidth = 51;
			this->dataGridView6->RowTemplate->Height = 24;
			this->dataGridView6->Size = System::Drawing::Size(401, 283);
			this->dataGridView6->TabIndex = 1;
			//this->dataGridView6->RowPostPaint += gcnew System::Windows::Forms::DataGridViewRowPostPaintEventHandler(this, &Analizator::dataGridView6_RowPostPaint);
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column7,
					this->Column8, this->Column9
			});
			this->dataGridView5->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView5->Location = System::Drawing::Point(0, 0);
			this->dataGridView5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->ReadOnly = true;
			this->dataGridView5->RowHeadersVisible = false;
			this->dataGridView5->RowHeadersWidth = 51;
			this->dataGridView5->RowTemplate->Height = 24;
			this->dataGridView5->Size = System::Drawing::Size(401, 270);
			this->dataGridView5->TabIndex = 0;
			this->dataGridView5->RowPostPaint += gcnew System::Windows::Forms::DataGridViewRowPostPaintEventHandler(this, &Analizator::dataGridView5_RowPostPaint);
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"¹";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Êîíñòàíòû";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->ReadOnly = true;
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Êîä";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->ReadOnly = true;
			this->Column9->Width = 125;
			// 
			// Column16
			// 
			this->Column16->HeaderText = L"¹ ñòðîêè";
			this->Column16->MinimumWidth = 6;
			this->Column16->Name = L"Column16";
			this->Column16->ReadOnly = true;
			this->Column16->Width = 125;
			// 
			// Column17
			// 
			this->Column17->HeaderText = L"Êîä îøèáêè";
			this->Column17->MinimumWidth = 6;
			this->Column17->Name = L"Column17";
			this->Column17->ReadOnly = true;
			this->Column17->Width = 125;
			// 
			// Column18
			// 
			this->Column18->HeaderText = L"Îøèáêà";
			this->Column18->MinimumWidth = 6;
			this->Column18->Name = L"Column18";
			this->Column18->ReadOnly = true;
			this->Column18->Width = 125;
			// 
			// Analizator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1776, 581);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Analizator";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Analizator";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int countLins = -1;
		void RemoveCommentsAndFormat(System::Windows::Forms::RichTextBox^ richTextBox)
		{
			String^ text = richTextBox->Text;
			String^ result = "";
			bool insideComment = false;
			array<String^>^ lines = text->Split('\n');
			for (int i = 0; i < lines->Length; ++i)
			{
				String^ line = lines[i];
				
				if (line->Contains("/*") && line->Contains("*/"))
					line = line->Substring(0, line->IndexOf("/*")) + line->Substring(line->IndexOf("*/") + 2);
				else if (line->Contains("/*"))
				{
					insideComment = true;
					line = line->Substring(0, line->IndexOf("/*"));
				}
				else if (line->Contains("*/"))
				{
					insideComment = false;
					line = line->Substring(line->IndexOf("*/") + 2);
				}
				else if (line->Contains("//"))
					line = line->Substring(0, line->IndexOf("//"));

				if (!insideComment)
				{
					line = line->Trim();
					if (!String::IsNullOrWhiteSpace(line))
						result += (i + 1).ToString() + ". " + line + "\n";
				}
			}
			richTextBox->Text = result;
		}
		bool isInteger(String^ word)
		{
			for each (char ch in word) 
			{
				if (!Char::IsDigit(ch) && ch) 
					return false;
			}
			return true;
		}
		bool isFloatingPoint(String^ word)
		{
			if (String::IsNullOrEmpty(word)) return false;

			int dotCount = 0;
			for each (char ch in word)
			{
				if (ch == '.') dotCount++;
				else if (!Char::IsDigit(ch)) return false;
			}

			return dotCount == 1;
		}
		System::String^ ExtractTextWithoutLineNumbers(System::String^ input)
		{
			System::Text::StringBuilder^ result = gcnew System::Text::StringBuilder();
			array<System::String^>^ lines = input->Split('\n'); // ðàçäåëåíèå íà ñòðîêè

			for each (System::String ^ line in lines)
			{
				// Óäàëèòü âñå, ÷òî ïåðåä ïåðâûì ïðîáåëîì (ïðåäïîëàãàåòñÿ, ÷òî ýòî íîìåð)
				int index = line->IndexOf(' ');
				if (index != -1)
				{
					result->Append(line->Substring(index + 1));
					result->Append("\n");
				}
			}

			return result->ToString();
		}
		void AddData(String^ word, String^ klass)
		{
			bool afterType = false;
			bool errorFlag = false;
			String^ error = "";
			int states = 0;
			String^ code = "";
			int countError = 0;
			DataGridViewRow^ row = gcnew DataGridViewRow();
			if (klass == "Keyword")
			{
				code = "(10, " + dataGridView1->RowCount + ")";
				row->CreateCells(this->dataGridView1);
				row->Cells[1]->Value = word;
				row->Cells[2]->Value = code;
				this->dataGridView1->Rows->Add(row);
				return;
			}
			if (klass == "Identifier")
			{
				if (afterType)
				{
					for (int i = 0; i < dataGridView3->RowCount; i++)
					{
						if (dataGridView3->Rows[i]->Cells[1]->Value != nullptr &&
							dataGridView3->Rows[i]->Cells[1]->Value->ToString() == word)
						{
							error = "Ïîâòîðíîå îáúÿâëåíèå èäåíòèôèêàòîðà ";
							errorFlag = true;
							states = 83;
							return;
						}
					}
				}
				code = "(20, " + dataGridView3->RowCount + ")";
				row->CreateCells(this->dataGridView3);
				row->Cells[1]->Value = word;
				row->Cells[2]->Value = code;
				this->dataGridView3->Rows->Add(row);
				return;	
			}
			if (klass == "Constant")
			{
				code = "(30, " + dataGridView5->RowCount + ")";
				row->CreateCells(this->dataGridView5);
				row->Cells[1]->Value = word;
				row->Cells[2]->Value = code;
				this->dataGridView5->Rows->Add(row);
				return;
			}
			if (klass == "Operator")
			{
				code = "(40, " + dataGridView2->RowCount + ")";
				row->CreateCells(this->dataGridView2);
				row->Cells[1]->Value = word;
				row->Cells[2]->Value = code;
				this->dataGridView2->Rows->Add(row);
				return;
			}
			if (klass == "Separator")
			{
				code = "(50, " + dataGridView4->RowCount + ")";
				row->CreateCells(this->dataGridView4);
				row->Cells[1]->Value = word;
				row->Cells[2]->Value = code;
				this->dataGridView4->Rows->Add(row);
				return;
			}
			if (klass == "Error")
			{
				code = "s"+ countError++;
				row->CreateCells(this->dataGridView6);
				row->Cells[0]->Value = countLins;
				row->Cells[1]->Value = word;
				row->Cells[2]->Value = code;
				this->dataGridView6->Rows->Add(row);
				return;
			}
		}
		

#pragma endregion
	private: System::Void çàãðóçèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			auto file = System::IO::File::OpenText(openFileDialog1->FileName);
			richTextBox1->Text = file->ReadToEnd();
			file->Close();
		}
	}
					
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
	}
	private: System::Void î÷èñòèòüÊîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		richTextBox2->Text = richTextBox1->Text;
		richTextBox2->Text = richTextBox2->Text->Replace("\n\n", "\n");
		String^ text = richTextBox2->Text;
		RemoveCommentsAndFormat(richTextBox2);
	}
private: System::Void àíàëèçèðîâàòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	String^ text = ExtractTextWithoutLineNumbers(this->richTextBox2->Text);
	String^ word = "";
	String^ keyword = "";
	String^ code = "";
	bool afterType = false;
	bool errorFlag = false;
	String^ error = "";
	int states = 0;
	int count = 0;
	bool buffer;
	bool isFloatingPoint = false;

	afterType = false;
	for (int i = 0; i < text->Length; i++)
	{
 		switch (states)
		{
		case 0:
			if (text[i] == '\n')
				countLins++;
			else if (text[i] == ' ')
				continue;
			else if (text[i] == '#')
			{
				states = 1;
				word += text[i];
				
			}
			else if (text[i] == 'a')
			{
				states = 2;
				word += text[i];
				
			}
			else if (text[i] == 'b')
			{
				states = 3;
				word += text[i];
				count = 0;
			}
			else if (text[i] == 'c')
			{
				states = 4;
				word += text[i];
				count = 0;
			}
			else if (text[i] == 'd')
			{
				states = 5;
				word += text[i];
			
			}
			else if (text[i] == 'e')
			{
				states = 6;
				word += text[i];
				
			}
			else if (text[i] == 'f')
			{
				states = 7;
				word += text[i];
			}
			else if (text[i] == 'g')
			{
				states = 8;
				word += text[i];
			
			}
			else if (text[i] == 'h')
			{
				states = 9;
				word += text[i];
				
			}
			else if (text[i] == 'i')
			{
				states = 10;
				word += text[i];
			
			}
			else if (text[i] == 'j')
			{
				states = 11;
				word += text[i];
			
			}
			else if (text[i] == 'k')
			{
				states = 12;
				word += text[i];
		
			}
			else if (text[i] == 'l')
			{
				states = 13;
				word += text[i];
			
			}
			else if (text[i] == 'm')
			{
				states = 14;
				word += text[i];
			}
			else if (text[i] == 'n')
			{
				states = 15;
				word += text[i];
				count = 0;
			
			}
			else if (text[i] == 'o')
			{
				states = 16;
				word += text[i];
			
			}
			else if (text[i] == 'p')
			{
				states = 17;
				word += text[i];
			
			}
			else if (text[i] == 'q')
			{
				states = 19;
				word += text[i];
			
			}
			else if (text[i] == 'r')
			{
				states = 20;
				word += text[i];
			
			}
			else if (text[i] == 's')
			{
				states = 21;
				word += text[i];
				count = 0;
			
			}
			else if (text[i] == 't')
			{
				states = 22;
				word += text[i];
			}
			else if (text[i] == 'u')
			{
				states = 23;
				word += text[i];
			
			}
			else if (text[i] == 'v')
			{
				states = 24;
				word += text[i];
			}
			else if (text[i] == 'w')
			{
				states = 25;
				word += text[i];
			
			}
			else if (text[i] == 'x')
			{
				states = 26;
				word += text[i];
			
			}
			else if (text[i] == 'y')
			{
				states = 27;
				word += text[i];
			
			}
			else if (text[i] == 'z')
			{
				states = 28;
				word += text[i];
			
			}
			else if (text[i] == 'A')
			{
				states = 29;
				word += text[i];
			
			}
			else if (text[i] == 'B')
			{
				states = 30;
				word += text[i];
			
			}
			else if (text[i] == 'C')
			{
				states = 31;
				word += text[i];
			
			}
			else if (text[i] == 'D')
			{
				states = 32;
				word += text[i];
			
			}
			else if (text[i] == 'E')
			{
				states = 33;
				word += text[i];
			
			}
			else if (text[i] == 'F')
			{
				states = 34;
				word += text[i];
			
			}
			else if (text[i] == 'G')
			{
				states = 35;
				word += text[i];
			
			}
			else if (text[i] == 'H')
			{
				states = 36;
				word += text[i];
			
			}
			else if (text[i] == 'I')
			{
				states = 37;
				word += text[i];
			
			}
			else if (text[i] == 'J')
			{
				states = 38;
				word += text[i];
			
			}
			else if (text[i] == 'K')
			{
				states = 39;
				word += text[i];
			
			}
			else if (text[i] == 'L')
			{
				states = 40;
				word += text[i];
			
			}
			else if (text[i] == 'M')
			{
				states = 41;
				word += text[i];
			
			}
			else if (text[i] == 'N')
			{
				states = 42;
				word += text[i];
			
			}
			else if (text[i] == 'O')
			{
				states = 43;
				word += text[i];
			
			}
			else if (text[i] == 'P')
			{
				states = 44;
				word += text[i];
			
			}
			else if (text[i] == 'Q')
			{
				states = 45;
				word += text[i];
			
			}
			else if (text[i] == 'R')
			{
				states = 46;
				word += text[i];
			
			}
			else if (text[i] == 'S')
			{
				states = 47;
				word += text[i];
			
			}
			else if (text[i] == 'T')
			{
				states = 48;
				word += text[i];
			
			}
			else if (text[i] == 'U')
			{
				states = 49;
				word += text[i];
			
			}
			else if (text[i] == 'V')
			{
				states = 50;
				word += text[i];
			
			}
			else if (text[i] == 'W')
			{
				states = 51;
				word += text[i];
			
			}
			else if (text[i] == 'X')
			{
				states = 52;
				word += text[i];
			
			}
			else if (text[i] == 'Y')
			{
				states = 53;
				word += text[i];
			
			}
			else if (text[i] == 'Z')
			{
				states = 54;
				word += text[i];
			
			}
			else if (text[i] == '+')
			{
				if (text[i + 1].IsLetter(text[i + 1]) || text[i + 1].IsDigit(text[i + 1]) || text[i + 1] == '_')
					AddData(text[i].ToString(), "Operator");
				else
				{
					states = 55;
					word += text[i];
				}
			}
			else if (text[i] == '-')
			{
				if (text[i + 1].IsLetter(text[i + 1]) || text[i + 1].IsDigit(text[i + 1]) || text[i + 1] == '_')
					AddData(text[i].ToString(), "Operator");
				else
				{
					states = 56;
					word += text[i];
				}
			}
			else if (text[i] == '*')
			{
				if (text[i + 1].IsLetter(text[i + 1]) || text[i + 1].IsDigit(text[i + 1]) || text[i + 1] == '_')
					AddData(text[i].ToString(), "Operator");
				else
				{
					states = 57;
					word += text[i];
				}
			}
			else if (text[i] == '/')
			{
				if (text[i + 1].IsLetter(text[i + 1]) || text[i + 1].IsDigit(text[i + 1]) || text[i + 1] == '_')
					AddData(text[i].ToString(), "Operator");
				else
				{
					states = 58;
					word += text[i];
				}
			}
			else if (text[i] == '%')
			{
				if (text[i + 1].IsLetter(text[i + 1]) || text[i + 1].IsDigit(text[i + 1]) || text[i + 1] == '_')
					AddData(text[i].ToString(), "Operator");
				else
				{
					states = 59;
					word += text[i];
				}
			}
			else if (text[i] == '=')
			{
				if (text[i + 1].IsLetter(text[i + 1]) || text[i + 1].IsDigit(text[i + 1]) || text[i + 1] == '_')
					AddData(text[i].ToString(), "Operator");
				else
				{
					states = 60;
					word += text[i];
				}
			}
			else if (text[i] == '!')
			{
				if (text[i + 1].IsLetter(text[i + 1]) || text[i + 1].IsDigit(text[i + 1]) || text[i + 1] == '_')
					AddData(text[i].ToString(), "Operator");
				else
				{
					states = 61;
					word += text[i];
				}
			}
			else if (text[i] == '<')
			{
				states = 62;
				word = text[i].ToString();
			}
			else if (text[i] == '>')
			{
				states = 63;
				word = text[i].ToString();
			}
			else if (text[i] == '&')
			{
				//states = 64;
				//word += text[i];
			}
			else if (text[i] == '|')
			{
				//states = 65;
				//word += text[i];
			}
			else if (text[i] == '^')
			{
				//states = 66;
				//word += text[i];
			}
			else if (text[i] == '~')
			{
				//states = 67;
				//word += text[i];
			}
			else if (text[i] == '.')
			{
				AddData(text[i].ToString(), "Operator");
			}
			else if (text[i] == ':')
			{
				if (text[i + 1].IsLetter(text[i + 1]) || text[i + 1].IsDigit(text[i + 1]) || text[i + 1] == '_')
				{
					AddData(text[i].ToString(), "Operator");
					word += "";
				}
				else
				{
					states = 69;
					word += text[i];
				}
			}
			else if (text[i] == '(')
			{
				AddData(text[i].ToString(), "Separator");
			}
			else if (text[i] == ')')
			{
				AddData(text[i].ToString(), "Separator");
			}
			else if (text[i] == '[')
			{
				AddData(text[i].ToString(), "Separator");
			}
			else if (text[i] == ']')
			{
				AddData(text[i].ToString(), "Separator");
			}
			else if (text[i] == '{')
			{
				AddData(text[i].ToString(), "Separator");
			}
			else if (text[i] == '}')
			{
				AddData(text[i].ToString(), "Separator");
			}
			else if (text[i] == ';')
			{
				AddData(text[i].ToString(), "Separator");
			}
			else if (text[i] == ',')
			{
				AddData(text[i].ToString(), "Separator");
			}
			else if (text[i] == '?')
			{
				AddData(text[i].ToString(), "Operator");
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else if (text[i] == '\'')
			{
				AddData(text[i].ToString(), "Separator");
				states = 80;
			}
			else if (text[i] == '"')
			{
				AddData(text[i].ToString(), "Separator");
				states = 81;
			}
			else if (text[i].IsDigit(text[i]))
			{
				states = 82;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 1:
			if (text[i] == 'd')
			{
				states = 84;
				word += text[i];
			}
			else if (text[i] == 'e')
			{
				states = 85;
				word += text[i];
				count = 0;
			}
			else if (text[i] == 'i')
			{
				states = 86;
				word += text[i];
			}
			else if (text[i] == 'l')
			{
				states = 87;
				word += text[i];
			}
			else if (text[i] == 'p')
			{
				states = 88;
				word += text[i];
			}
			else if (text[i] == 'u')
			{
				states = 89;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 2:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 152;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 147;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 160;
			}
			else if (text[i] == 'u')
			{
				word += text[i];
				states = 162;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			break;
		case 3:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 165;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				count++;
				states = 172;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 174;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			break;
		case 4:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 178;
			}
			else if (text[i] == 'h')
			{
				word += text[i];
				states = 184;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 192;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 194;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 534;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			break;
		case 5:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 212;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 228;
			}
			else if (text[i] == 'y')
			{
				word += text[i];
				states = 233;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			break;
		case 6:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 244;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 247;
			}
			else if (text[i] == 'x')
			{
				word += text[i];
				states = 250;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			break;
		case 7:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 261;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 265;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 269;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 271;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			break;
		case 8:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 276;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			break;
		case 10:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				states = 136;
				word += text[i];
			}
			else if (text[i] == 'f')
			{
				states = 279;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;

		case 13:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'o')
			{
				states = 318;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 14:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				states = 138;
				word += text[i];
			}
			else if (text[i] == 'u')
			{
				states = 321;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 15:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				states = 327;
				word += text[i];
			}
			else if (text[i] == 'e')
			{
				states = 335;
				word += text[i];
			}
			else if (text[i] == 'o')
			{
				states = 337;
				word += text[i];
			}
			else if (text[i] == 'u')
			{
				states = 348;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 16:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'p')
			{
				states = 352;
				word += text[i];
			}
			else if (text[i] == 'r')
			{
				states = 359;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 17:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				states = 363;
				word += text[i];
			}
			else if (text[i] == 'u')
			{
				states = 376;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 20:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				states = 382;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 21:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'h')
			{
				states = 413;
				word += text[i];
			}
			else if (text[i] == 'i')
			{
				states = 417;
				word += text[i];
			}
			else if (text[i] == 't')
			{
				states = 426;
				word += text[i];
			}
			else if (text[i] == 'w')
			{
				states = 444;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 22:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				states = 449;
				word += text[i];
			}
			else if (text[i] == 'h')
			{
				states = 456;
				word += text[i];
			}
			else if (text[i] == 'r')
			{
				states = 471;
				word += text[i];
			}
			else if (text[i] == 'y')
			{
				states = 475;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 23:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				states = 487;
				word += text[i];
			}
			else if (text[i] == 's')
			{
				states = 498;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 24:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'o')
			{
				states = 141;
				word += text[i];
			}
			else if (text[i] == 'i')
			{
				states = 508;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 25:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			if (text[i] == 'c')
			{
				states = 514;
				word += text[i];
			}
			if (text[i] == 'h')
			{
				states = 520;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 26:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			if (text[i] == 'o')
			{
				states = 524;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 9:
		case 11:
		case 12:
		case 19:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 76:
			if (text[i] == ' ' || text[i] == '\n')
			{
				AddData(word, "Identifier");
				word = "";
				states = 0;
			}
			if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			if (text[i] == '+')
			{
				word += text[i];
				states = 55;
			}
			if (text[i] == '-')
			{
				word += text[i];
				states = 56;
			}	
		break;
		case 84:
			if (text[i] == 'e')
			{
				states = 90;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 90:
			if (text[i] == 'f')
			{
				states = 91;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 91:
			if (text[i] == 'i')
			{
				states = 92;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 92:
			if (text[i] == 'n')
			{
				states = 93;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 93:
			if (text[i] == 'e')
			{
				states = 94;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 94:
			if (text[i] == ' ')
			{
				states = 0;
				AddData(word, "Keyword");
				afterType = true;
				keyword = word;
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 85:
			if (text[i] == 'l')
			{
				states = 95;
				word += text[i];
			}
			else if (text[i] == 'n')
			{
				states = 96;
				word += text[i];
			}
			else if (text[i] == 'r')
			{
				count++;
				states = 97;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 95:
			if (text[i] == 'i')
			{
				states = 98;
				word += text[i];
			}
			else if (text[i] == 's')
			{
				states = 99;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 98:
			if (text[i] == 'f')
			{
				states = 100;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 100:
			if (text[i] == ' ')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 99:
			if (text[i] == 'e')
			{
				states = 101;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 101:
			if (text[i] == '\n')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 96:
			if (text[i] == 'd')
			{
				states = 102;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 102:
			if (text[i] == 'i')
			{
				states = 103;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 103:
			if (text[i] == 'f')
			{
				states = 104;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 104:
			if (text[i] == '\n')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 97:
			if (text[i] == 'r' && count == 1)
				word += text[i];
			else if (text[i] == 'o')
			{
				states = 105;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 105:
			if (text[i] == 'r')
			{
				states = 106;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 106:
			if (text[i] == ' ')
			{

				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 86:
			if (text[i] == 'f')
			{
				states = 107;
				word += text[i];
			}
			else if (text[i] == 'm')
			{
				states = 108;
				word += text[i];
			}
			else if (text[i] == 'n')
			{
				states = 109;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 107:
			if (text[i] == ' ')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
			}
			else if (text[i] == 'd')
			{
				states = 110;
				word += text[i];
			}
			else if (text[i] == 'n')
			{
				states = 111;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 110:
			if (text[i] == 'e')
			{
				states = 112;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 112:
			if (text[i] == 'f')
			{
				states = 113;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 113:
			if (text[i] == ' ')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 111:
			if (text[i] == 'd')
			{
				states = 110;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 108:
			if (text[i] == 'p')
			{
				states = 114;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 114:
			if (text[i] == 'o')
			{
				states = 115;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 115:
			if (text[i] == 'r')
			{
				states = 116;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 116:
			if (text[i] == 't')
			{
				states = 117;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 117:
			if (text[i] == ' ')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 109:
			if (text[i] == 'c')
			{
				states = 118;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 118:
			if (text[i] == 'l')
			{
				states = 119;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 119:
			if (text[i] == 'u')
			{
				states = 120;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 120:
			if (text[i] == 'd')
			{
				states = 121;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 121:
			if (text[i] == 'e')
			{
				states = 122;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 122:
			if (text[i] == ' ' || text[i] == '<')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				if (text[i] == '<')
					AddData(text[i].ToString(), "Separator");
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 87:
			if (text[i] == 'i')
			{
				states = 123;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 123:
			if (text[i] == 'n')
			{
				states = 124;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 124:
			if (text[i] == 'e')
			{
				states = 125;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 125:
			if (text[i] == ' ')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 88:
			if (text[i] == 'r')
			{
				states = 126;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 126:
			if (text[i] == 'a')
			{
				states = 127;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 127:
			if (text[i] == 'g')
			{
				states = 128;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 128:
			if (text[i] == 'm')
			{
				states = 129;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 129:
			if (text[i] == 'a')
			{
				states = 130;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 130:
			if (text[i] == ' ')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 89:
			if (text[i] == 'n')
			{
				states = 131;
				word += text[i];
			}
			else if (text[i] == 's')
			{
				states = 132;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 131:
			if (text[i] == 'd')
			{
				states = 110;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 132:
			if (text[i] == 'i')
			{
				states = 133;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 133:
			if (text[i] == 'n')
			{
				states = 134;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 134:
			if (text[i] == 'g')
			{
				states = 135;
				word += text[i];
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 135:
			if (text[i] == ' ')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 55:
			if (text[i] == ' ' || text[i].IsLetterOrDigit(text[i]) || text[i] == '(' || text[i] == '\'' || text[i] == '"')
			{
				states = 0;
				AddData(word, "Operator");
				word = "";
				if (text[i] == '(')
					AddData(text[i].ToString(), "Searator");
				else if (text[i] == '\'')
				{
					AddData(text[i].ToString(), "Separator");
					states = 80;
				}
				else if (text[i] == '"')
				{
					AddData(text[i].ToString(), "Separator");
					states = 81;
				}
				else if (text[i].IsLetter(text[i]))
				{
					word += text[i];
					states = 144;
				}
				else if (text[i].IsDigit(text[i]))
				{
					word += text[i];
					states = 145;
				}
			}
			else if (text[i] == '+' && (text[i + 1].IsLetterOrDigit(text[i + 1]) || text[i + 1] == ';' || text[i + 1] == ')' 
				|| text[i + 1] == ']'|| text[i + 1] == '}' || text[i + 1] == ' '))
			{
				states = 0;
				word += text[i];
				AddData(word, "Operator");
				word = "";
			}
			else if (text[i] == '=' && (text[i+1].IsLetterOrDigit(text[i+1]) || text[i + 1] == ' ' || text[i + 1] == '(' 
				|| text[i + 1] == '-' || text[i + 1] == '\'' || text[i + 1] == '"'))
			{
				states = 0;
				word += text[i];
				AddData(word, "Operator");
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 56:
			if (text[i] == ' ' || text[i].IsLetterOrDigit(text[i]) || text[i] == '(')
			{
				states = 0;
				AddData(word, "Operator");
				word = "";
				if (text[i] == '(')
					AddData(text[i].ToString(), "Operator");
				else if (text[i].IsLetter(text[i]))
				{
					word += text[i];
					states = 144;
				}
				else if (text[i].IsDigit(text[i]))
				{
					word += text[i];
					states = 145;
				}
			}
			else if (text[i] == '-' && (text[i+1].IsLetter(text[i+1]) || text[i + 1] == ';' || text[i + 1] == ')' || text[i + 1] == ']' || 
				text[i + 1] == '}' || text[i + 1] == ' ' || text[i + 1] == '<'))
			{
				states = 0;
				word += text[i];
				AddData(word, "Operator");
				word = "";
			}
			else if (text[i] == '=' && (text[i+1].IsLetterOrDigit(text[i + 1]) || text[i + 1] == ' ' || text[i + 1] == '(' 
				|| text[i + 1] == '-'))
			{

				states = 0;
				word += text[i];
				AddData(word, "Operator");
				word = "";
			}
			else if(text[i] == '>')
			{ 
				if (text[i+1].IsLetter(text[i+1]))
				{

					states = 0;
					word += text[i];
					AddData(word, "Operator");
					word = "";
				}
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 57:
			if (text[i] == ' ' || text[i].IsLetterOrDigit(text[i]))
			{
				states = 0;
				AddData(word, "Operator");
				word = "";
				if (text[i].IsLetter(text[i]))
				{
					word += text[i];
					states = 144;
				}
				else if (text[i].IsDigit(text[i]))
				{
					word += text[i];
					states = 145;
				}
			}
			else if (text[i] == '(')
			{
				states = 0;
				AddData(text[i].ToString(), "Operator");
				word = "";
			} 
			else if (text[i] == '-')
			{
				states = 0;
				AddData(text[i].ToString(), "Operator");
				word = "";
			}
			else if (text[i] == '=' && (text[i+1] == ' ' || isalpha(text[i+1]) || text[i].IsDigit(text[i]) || text[i + 1] == '(' || text[i + 1] == '-'))
			{
				states = 0;
				word += text[i];
				AddData(word, "Operator");
				word = "";
			}
			else if (text[i] == '*' && (text[i+1] == ' ' || text[i+1].IsLetter(text[i + 1])))
			{
				states = 0;
				word += text[i];
				AddData(word, "Operator");
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 58:
			if (text[i] == ' ' || text[i].IsLetterOrDigit(text[i]) || text[i] == '(' || text[i] == '-')
			{
				states = 0;
				AddData(word, "Operator");
				word = "";
				if (text[i].IsLetter(text[i]))
				{
					word += text[i];
					states = 144;
				}
				else if (text[i].IsDigit(text[i]))
				{
					word += text[i];
					states = 145;
				}
				else if (text[i] == '(' || text[i] == '-')
					AddData(text[i].ToString(), "Operator");
			}
			else if (text[i] == '=' && (text[i + 1] == ' ' || text[i+1].IsLetterOrDigit(text[i+1]) || 
				text[i + 1] == '(' || text[i + 1] == '-'))
			{
				states = 0;
				word += text[i];
				AddData(word, "Operator");
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 59:
			if (text[i] == ' ' || text[i].IsLetterOrDigit(text[i]) || text[i] == '(' || text[i] == '-')
			{
				states = 0;
				AddData(word, "Operator");
				word = "";
				if (text[i].IsLetter(text[i]))
				{
					word += text[i];
					states = 144;
				}
				else if (text[i].IsDigit(text[i]))
				{
					word += text[i];
					states = 145;
				}
				else if (text[i] == '(' || text[i] == '-')
					AddData(text[i].ToString(), "Operator");
			}
			else if (text[i] == '=' && (text[i + 1] == ' ' || text[i+1].IsLetter(text[i+1]) || text[i+1].IsDigit(text[i+1]) || text[i + 1] == '(' 
				|| text[i + 1] == '-'))
			{
				states = 0;
				word += text[i];
				AddData(word, "Operator");
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 60:
			if (text[i] == ' ' || text[i].IsLetterOrDigit(text[i]))
			{
				states = 0;
				AddData(word, "Operator");
				word = "";
				if (text[i].IsLetter(text[i]))
				{
					word += text[i];
					states = 144;
				}
				else if (text[i].IsDigit(text[i]))
				{
					word += text[i];
					states = 145;
				}
			}
			else if (text[i] == '\'')
			{
				states = 80;
				AddData(text[i].ToString(), "Operator");
			}
			else if (text[i] == '"')
			{
				states = 81;
				AddData(text[i].ToString(), "Operator");
			}
			else if (text[i] == '(' || text[i] == '[' || text[i] == '{' || text[i] == '-' || text[i] == '&')
			{
				AddData(text[i].ToString(), "Operator");
				states = 0;
			}
			else if (text[i] == '=' || text[i+1] == ' ' || isalpha(text[i+1]) || text[i].IsDigit(text[i]) || text[i+1] == '\'' || text[i+1] == '"' 
				|| text[i + 1] == '*' || text[i + 1] == '['|| text[i + 1] == '(')
			{
				states = 0;
				word += text[i];
				AddData(word, "Operator");
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 61:
			if (text[i] == ' ' || text[i].IsLetter(text[i]))
			{
				states = 0;
				AddData(word, "Operator");
				word = "";
				if (text[i].IsLetter(text[i]))
				{
					word += text[i];
					states = 144;
				}
			}
			else if (text[i] == '=' && (text[i + 1] == ' ' || text[i+1].IsLetterOrDigit(text[i+1]) || text[i + 1] == '\'' 
				|| text[i + 1] == '"' || text[i+1] == '(' ||  text[i + 1] == '-'))
			{
				states = 0;
				word += text[i];
				AddData(word, "Operator");
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 62:
			if (keyword == "#include" || keyword == "template"
				|| keyword == "vector" || keyword == "pair")
			{
				if (word == "<")
				{
					AddData(word, "Separator");
					word = "";
				}
				else if(text[i] != '>')
					word += text[i].ToString();
				else
				{
					AddData(">", "Separator");
					AddData(word, "Identifier");
					states = 0;
				}
			}
			else if (text[i] == ' ' || text[i].IsLetterOrDigit(text[i]))
			{
				states = 0;
				AddData("<", "Operator");
				word = "";
				if (text[i].IsLetter(text[i]))
				{
					word += text[i];
					states = 144;
				}
				else if (text[i].IsDigit(text[i]))
				{
					word += text[i];
					states = 145;
				}
			}
			else if (text[i] == '(')
			{
				states = 0;
				AddData(text[i].ToString(), "Operator");
				word = "";
			}
			else if (text[i] == '\'')
			{
				states = 80;
				AddData(text[i].ToString(), "Operator");
				word = "";
			}
			else if (text[i] == '"')
			{
				states = 81;
				AddData(text[i].ToString(), "Operator");
				word = "";
			}
			else if (text[i] == '=' && (text[i + 1] == ' ' || text[i+1].IsLetter(text[i+1]) || text[i+1].IsDigit(text[i+1]) || 
				text[i + 1] == '\'' || text[i + 1] == '"' || text[i+1] == '(' || text[i + 1] == '-'))
			{
				states = 0;
				word += text[i];
				AddData("<=" , "Operator");
				word = "";
			}
			else if (text[i] == '<' && (text[i+1] == ' ' || text[i+1].IsLetter(text[i+1]) || text[i+1].IsDigit(text[i+1]) 
				|| text[i + 1] == '\'' || text[i + 1] == '"' || text[i + 1] == '('))
			{
				states = 0;
				word += text[i];
				AddData("<<", "Operator");
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 63:
			if (text[i] == ' ' || text[i].IsLetterOrDigit(text[i]) || text[i] == '\n')
			{
				states = 0;
				AddData(word, "Operator");
				word = "";
				if (text[i].IsLetter(text[i]))
				{
					word += text[i];
					states = 144;
				}
				else if (text[i].IsDigit(text[i]))
				{
					word += text[i];
					states = 145;
				}
			}
			else if (text[i] == '(')
			{
				states = 0;
				AddData(text[i].ToString(), "Operator");
				word = "";
			}
			else if (text[i] == '\'')
			{
				states = 80;
				AddData(text[i].ToString(), "Operator");
				word = "";
			}
			else if (text[i] == '"')
			{
				states = 81;
				AddData(text[i].ToString(), "Operator");
				word = "";
			}
			else if (text[i] == '=' || text[i + 1] == ' ' || text[i+1].IsLetter(text[i+1]) || text[i+1].IsDigit(text[i+1]) || text[i + 1] == '\''
				|| text[i + 1] == '"' || text[i + 1] == '(' || text[i + 1] == '-')
			{
				states = 0;
				word += text[i];
				AddData(word, "Operator");
				word = "";
			}
			else if (text[i] == '>' && (text[i + 1] == ' ' || text[i+1].IsLetterOrDigit(text[i+1]) || text[i + 1] == '\''
				|| text[i + 1] == '"' || text[i + 1] == '('))
			{
				states = 0;
				word += text[i];
				AddData(word, "Operator");
				word = "";
			}
			//else if (text[i] == '>')
				//states == 63;
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 68:
			if (text[i].IsDigit(text[i]))
			{
				isFloatingPoint = true;
				states = 82;
				word += text[i];
			}
			else if (isspace(text[i]) || ispunct(text[i])) 
				states = 83;
			else 
			{
				word += text[i];
				states = 83;
			}
			break;
		case 80:
			if (text[i] == '\'')
			{
				AddData(word, "Comstant");
				AddData(text[i].ToString(), "Separator");
			}
			else
				word += text[i];
		case 81:
			if (text[i] == '"')
			{
				AddData(word, "Comstant");
				AddData(text[i].ToString(), "Separator");
			}
			else
				word += text[i];

		case 82:
			if (text[i].IsDigit(text[i]))
				word += text[i];
			if (text[i] == '.') 
			{
				word += text[i];
				states = 68;
			}
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';')
			{
				AddData(word, "Constant");
			if (text[i] == ',' || text[i] == ';')
				AddData(text[i].ToString(), "Separator");
			word = "";
			states = 0;
			}
			else 
			{
				word += text[i];
				states = 83;
			}
			break;
		case 136:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				states = 137;
				word += text[i];
			}
			else if (text[i] == 'l')
			{
				states = 280;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 137:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&' || text[i] == '>' || text[i] == ')')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				afterType = true;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
				else if (text[i] == '>' || text[i] == ')')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 138:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				states = 139;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 139:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				states = 140;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 140:
			if (text[i] == ' ' || text[i] == '(')
			{
				states = 0;
				AddData(word, "Identifier");
				if(text[i] == '(')
					AddData(text[i].ToString(), "Separator");
				word = "";
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 141:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				states = 142;
				word += text[i];
			}
			else if (text[i] == 'l')
			{
				states = 502;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 142:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			if (text[i] == 'd')
			{
				states = 143;
				word += text[i];
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 143:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&' || text[i] == '>' || text[i] == ')')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				afterType = true;
				if (text[i] == '*' || text[i] == '&')
				{
					states = 0;
					AddData(text[1].ToString(), "Operator");
					word = "";
				}
				else if (text[i] == '>' || text[i] == ')')
				{
					states = 0;
					AddData(text[1].ToString(), "Separator");
					word = "";
				}
			}
			
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 144:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i].IsLetter(text[i]))
				word += text[i];
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 145:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
				word += text[i];
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 146:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
				word += text[i];
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 147:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'd')
			{
				word += text[i];
				states = 148;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 148:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			
			else if (text[i] == '_')
			{
				word += text[i];
				states = 149;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 149:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 150;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 150:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'q')
			{
				word += text[i];
				states = 151;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 151:
			if (text[i] == ' ' || text[i].IsLetter(text[i])|| text[i] == '(' || text[i] == '_')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
				else if (text[i].IsLetter(text[i]))
				{
					word += text[i];
					states = 144;
				}
				else if (text[i] == '_')
				{
					word += text[i];
					states = 146;
				}
			}
			/*if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}*/
			if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			/*if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}*/
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 152:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 153;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 153:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'g')
			{
				word += text[i];
				states = 154;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 154:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 155;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 155:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 156;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 157;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 156:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 158;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 157:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'f')
			{
				word += text[i];
				states = 159;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 158:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 159:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 160:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'm')
			{
				word += text[i];
				states = 161;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
			//
		case 161:
			if (text[i] == ' ' || text[i] == '{' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(' || text[i] == '{')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 162:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 163;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 163:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 164;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 164:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
			}
			
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 165:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 166;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 166:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 167;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 170;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 167:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 168;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 168:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'd')
			{
				word += text[i];
				states = 169;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 169:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 170:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 171;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 171:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 172:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'o' && count == 1)
			{
				word += text[i];
				count++;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 173;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		
		case 173:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&' || text[i] == '>' || text[i] == ')')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				afterType = true;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
				else if (text[i] == '>' || text[i] == ')')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 174:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 175;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 175:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 176;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 176:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'k')
			{
				word += text[i];
				states = 177;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 177:
			if (text[i] == ' ' || text[i] == ';')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				if (text[i] == ';')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 178:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 179;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 181;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 179:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 180;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 180:
			if (text[i] == ' ' || text[i] == '\'' || text[i] == '"')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '\'')
				{
					AddData(text[i].ToString(), "Separator");
					states = 80;
				}
				if (text[i] == '"')
				{
					AddData(text[i].ToString(), "Separator");
					states = 81;
				}
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 181:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 182;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 182:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'h')
			{
				word += text[i];
				states = 183;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 183:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 184:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 185;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 185:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 186;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 186:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&' || text[i] == '>' || text[i] == ')')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
				else if (text[i] == '>' || text[i] == ')')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i] == '8')
			{
				word += text[i];
				states = 187;
			}
			else if (text[i] == '1')
			{
				word += text[i];
				states = 190;
			}
			else if (text[i] == '3')
			{
				word += text[i];
				states = 191;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 187:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 188;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 188:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 189;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 189:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&' || text[i] == '>' || text[i] == ')')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
				if (text[i] == '>' || text[i] == ')')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 190:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == '6')
			{
				word += text[i];
				states = 187;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 191:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == '2')
			{
				word += text[i];
				states = 187;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 192:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 193;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 193:
			if (text[i] == 's' && count < 2)
			{
				word += text[i];
				count++;
			}
			else if (count == 2 && text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
			}
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 194:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 195;
			}
			else if (text[i] == 'm')
			{
				word += text[i];
				states = 295;
			}
			else if (text[i] == 'u')
			{
				word += text[i];
				states = 532;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 298;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 195:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 284;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 196;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 207;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 196:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 197;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 197:
			if (text[i] == ' ' || text[i] == '\n')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 198;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 203;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 291;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 198:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 199;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 199:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 200;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 200:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 201;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 201:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 202;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 202:
			if (text[i] == ' ' || text[i] == '<')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '<')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 203:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'v')
			{
				word += text[i];
				states = 288;
			}
			else if (text[i] == 'x')
			{
				word += text[i];
				states = 204;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 204:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'p')
			{
				word += text[i];
				states = 205;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 205:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 206;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 206:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 207:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 208;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 208:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 209;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 209:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'u')
			{
				word += text[i];
				states = 210;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 210:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 211;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 211:
			if (text[i] == ' ' ||  text[i] == ';')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == ';')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 212:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 213;
			}
			else if (text[i] == 'f')
			{
				word += text[i];
				states = 219;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 224;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 213:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 214;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 214:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 215;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 215:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'y')
			{
				word += text[i];
				states = 216;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 216:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'p')
			{
				word += text[i];
				states = 217;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 217:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 218;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 218:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 219:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 220;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 220:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'u')
			{
				word += text[i];
				states = 221;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 221:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 222;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 222:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 223;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 223:
			if (text[i] == ' ' || text[i] == ':' || text[i] == ';' || text[i] == ')')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == ':')
					AddData(text[i].ToString(), "Operator");
				if (text[i] == ';' || text[i] == ')')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 224:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 225;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 225:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 226;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 226:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 227;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 227:
			if (text[i] == ' ' || text[i] == ';' || text[i] == '[')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == ';' || text[i] == '[')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 228:
			if (text[i] == ' ' || text[i] == '\n' || text[i] == '{')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '{')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i] == 'u')
			{
				word += text[i];
				states = 229;
			}

			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 229:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'b')
			{
				word += text[i];
				states = 230;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 230:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 231;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 231:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 232;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 232:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&' || text[i] == '>' || text[i] == ')')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
				if (text[i] == '>' || text[i] == ')')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 233:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 234;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 234:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 235;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 235:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'm')
			{
				word += text[i];
				states = 236;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 236:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 237;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 237:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 238;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 238:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 239;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 239:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 240;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 240:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 241;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 241:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 242;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 242:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 243;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 243:
			if (text[i] == ' ' || text[i] == '<')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '<')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 244:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 245;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 245:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 246;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 246:
			if (text[i] == ' ' || text[i] == '{')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '{')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 247:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'u')
			{
				word += text[i];
				states = 248;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 248:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'm')
			{
				word += text[i];
				states = 249;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 249:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 250:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'p')
			{
				word += text[i];
				states = 251;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 257;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 251:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 315;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 252;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 252:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 253;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 253:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 254;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 254:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 255;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 255:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 256;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 256:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 257:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 258;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 258:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 259;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 259:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 260;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 260:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 261:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 262;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 262:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 263;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 263:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 264;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 264:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 265:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 266;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 266:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 267;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 267:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 268;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 268:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&' || text[i] == '>' || text[i] == ')')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				afterType = true;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
				else if (text[i] == '>' || text[i] == ')')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 269:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 268;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 270:
			if (text[i] == ' ' || text[i] == '(')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 271:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 272;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 272:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 273;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 273:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 274;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 274:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'd')
			{
				word += text[i];
				states = 275;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 275:
			if (text[i] == ' ')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 276:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 277;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 277:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 278;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 278:
			if (text[i] == ' ')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 279:
			if (text[i] == ' ' || text[i] == '(')
			{
				states = 0;
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 280:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 281;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 281:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 282;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 282:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 283;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 283:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 284:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 285;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 285:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'p')
			{
				word += text[i];
				states = 286;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 286:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 287;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 287:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 288:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 289;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 289:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 290;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 290:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 291:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 292;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 292:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 293;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 293:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 294;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 294:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 295:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'p')
			{
				word += text[i];
				states = 296;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 296:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 297;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 297:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 298:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 299;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 304;
			}
			else if (text[i] == 'y')
			{
				word += text[i];
				states = 310;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 299:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'w')
			{
				word += text[i];
				states = 300;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 300:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 301;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 301:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 302;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 302:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 303;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 303:
			if (text[i] == ' ' )
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 304:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 305;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 305:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 306;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 306:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'u')
			{
				word += text[i];
				states = 307;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 307:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 308;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 308:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 309;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 309:
			if (text[i] == ' ' || text[i] == ';')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == ';')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 310:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 311;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 311:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 312;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 312:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 313;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 313:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'd')
			{
				word += text[i];
				states = 314;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 314:
			if (text[i] == ' ' )
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 315:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 316;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 316:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 317;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 317:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 318:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 319;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 319:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'g')
			{
				word += text[i];
				states = 320;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 320:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&' || text[i] == '>' || text[i] == ')')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
				else if (text[i] == '>' || text[i] == ')')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 321:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 322;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 322:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 323;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 323:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'b')
			{
				word += text[i];
				states = 324;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 324:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 325;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 325:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 326;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 326:
			if (text[i] == ' ' || text[i] == '{')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '{')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 327:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'm')
			{
				word += text[i];
				states = 328;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 328:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 329;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 329:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 330;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 330:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'p')
			{
				word += text[i];
				states = 331;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 331:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 332;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 332:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 333;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 333:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 334;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 334:
			if (text[i] == ' ' || text[i] == '{')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
				if (text[i] == '{')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 335:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'w')
			{
				word += text[i];
				states = 336;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 336:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 337:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 338;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 344;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 338:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'x')
			{
				word += text[i];
				states = 339;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 339:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 340;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 340:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 341;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 341:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'p')
			{
				word += text[i];
				states = 342;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 342:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 343;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 343:
			if (text[i] == ' ' || text[i] == '(' || text[i] == '{' || text[i] == ';')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(' || text[i] == '{' || text[i] == ';')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 344:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 345;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 345:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 346;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 346:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'q')
			{
				word += text[i];
				states = 347;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 347:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 345;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 348:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l' && count < 2)
			{
				word += text[i];
				count++;
			}
			else if (text[i] == 'p')
			{
				word += text[i];
				states = 349;
				count++;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 349:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 350;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 350:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 351;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 351:
			if (text[i] == ' ' || text[i] == ';' || text[i] == ')' || text[i] == '}' || text[i] == '=' || text[i] == '!'
				|| text[i] == '&' || text[i] == '|' || text[i] == ',')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == ';' || text[i] == ')' || text[i] == '}' || text[i] == ',')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '=' || text[i] == '!')
					AddData(text[i].ToString(), "Operator");
				else if ((text[i] == '&' && text[i + 1] == '&') || (text[i] == '|' && text[i + 1] == '&'))
					AddData(text[i].ToString() + text[i + 1].ToString(), "Operator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 345;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 352:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 353;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 353:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 354;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 354:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 355;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 355:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 356;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 356:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 357;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 357:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 358;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 358:
			if (text[i] == ' ' || text[i] == '=' || text[i] == '+' || text[i] == '-' 
				|| text[i] == '*' || text[i] == '/'|| text[i] == '%' || 
				text[i] == '!' || text[i] == '<' || text[i] == '>' || text[i] == '&'
				|| text[i] == '~' || text[i] == '^' || text[i] == '|'
				|| text[i] == '(' || text[i] == '[' || text[i] == ','
				|| text[i] == 'n' || text[i] == 'd')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '&')
				{
					word == text[i].ToString();
					states = 64;
				}
				else if (text[i] == '|')
				{
					word == text[i].ToString();
					states = 65;
				}
				else if (text[i] == '~')
				{
					word == text[i].ToString();
					states = 67;
				}
				else if (text[i] == '^')
				{
					word == text[i].ToString();
					states = 66;
				}
				else if (text[i] == '(' || text[i] == '[' || text[i] == ',')
					AddData(text[i].ToString(), "Separator");
			}
			if (text[i] == 'n')
				states = 15;
			if (text[i] == 'd')
				states = 5;
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 345;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 359:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 360;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 360:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 361;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 361:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'q')
			{
				word += text[i];
				states = 362;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 362:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Sepator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 360;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 363:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 364;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 369;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 364:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'v')
			{
				word += text[i];
				states = 365;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 365:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 366;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 366:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 367;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 367:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 368;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 368:
			if (text[i] == ' ' || text[i] == ':')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == ':')
					AddData(text[i].ToString(), "Operator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 360;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 369:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 370;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 370:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 371;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 371:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 372;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 372:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 373;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 373:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 374;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 374:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'd')
			{
				word += text[i];
				states = 375;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 375:
			if (text[i] == ' ' || text[i] == ':')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == ':')
					AddData(text[i].ToString(), "Operator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 360;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 376:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'b')
			{
				word += text[i];
				states = 377;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 377:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 378;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 378:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 379;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 380:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 381;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 381:
			if (text[i] == ' ' || text[i] == ':')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == ':')
					AddData(text[i].ToString(), "Operator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 360;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 382:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'g')
			{
				word += text[i];
				states = 383;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 389;
			}
			else if (text[i] == 'q')
			{
				word += text[i];
				states = 403;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 409;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 383:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 384;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 384:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 385;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 385:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 386;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 386:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 387;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 387:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 388;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 388:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 360;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 389:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 390;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 390:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 391;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 391:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 392;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 392:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 393;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 393:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'p')
			{
				word += text[i];
				states = 394;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 394:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 395;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 395:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 396;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 396:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 397;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 397:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 398;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 398:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 399;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 399:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 400;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 400:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 401;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 401:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 402;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 402:
			if (text[i] == ' ' || text[i] == '<')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '<')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 360;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
			///
		case 403:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'u')
			{
				word += text[i];
				states = 404;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 404:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 405;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 405:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 406;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 406:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 407;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 407:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 408;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 408:
			if (text[i] == ' ' || text[i] == '{')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '{')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 360;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 409:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'u')
			{
				word += text[i];
				states = 410;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 410:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 411;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 411:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 412;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 412:
			if (text[i] == ' ' || text[i] == '(' || text[i] == '\'' || text[i] == '"' || text[i] == '{' || text[i] == '-' || text[i] == '+' || text[i] == ';')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '\'')
				{
					AddData(text[i].ToString(), "Separator");
					states = 80;
				}
				if (text[i] == '"')
				{
					AddData(text[i].ToString(), "Separator");
					states = 81;
				}
				if (text[i] == '(' || text[i] == '{' || text[i] == ';')
				{
					AddData(text[i].ToString(), "Separator");
					states = 0;
				}
				if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 413:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 414;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 414:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 415;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 415:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 416;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 416:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&' || text[i] == '>' || text[i] == ')')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
				else if (text[i] == '>' || text[i] == ')')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 417:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'g')
			{
				word += text[i];
				states = 418;
			}
			else if (text[i] == 'z')
			{
				word += text[i];
				states = 422;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 418:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 419;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 419:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 420;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 420:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'd')
			{
				word += text[i];
				states = 421;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 421:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&' )
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 422:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 423;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 423:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 424;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 424:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'f')
			{
				word += text[i];
				states = 425;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 425:
			if (text[i] == ' ' || text[i] == '(' || text[i] == '*' || text[i] == '&')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 426:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 427;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 440;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 427:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 428;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 428:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 429;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 429:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 428;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 430:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 331;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 431:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 432;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 436;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 432:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 's' && count < 2)
			{
				word += text[i];
				count++;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 433;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 433:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 434;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 434:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 435;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 435:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 331;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 436:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 437;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 437:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 438;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 438:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 439;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 439:
			if (text[i] == ' ' ||  text[i] == '<' )
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '<')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 440:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'u')
			{
				word += text[i];
				states = 441;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 441:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 442;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 442:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 443;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 443:
			if (text[i] == ' ' )
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
		case 444:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 445;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 445:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 446;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 446:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 447;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 447:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'h')
			{
				word += text[i];
				states = 448;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 448:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
		case 449:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'm')
			{
				word += text[i];
				states = 450;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 450:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'p')
			{
				word += text[i];
				states = 451;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 451:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 452;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 452:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 453;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 453:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 454;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 454:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 455;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 455:
			if (text[i] == ' ' || text[i] == '<' )
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '<')
					AddData(text[i].ToString(), "Separator");
			}
			
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 456:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 457;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 459;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 457:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 458;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 458:
			if (text[i] == ' ' || text[i] == '-')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 459:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 460;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 469;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 460:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 461;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 461:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'd')
			{
				word += text[i];
				states = 462;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 462:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 463;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 463:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 464;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 464:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 465;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 465:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'c')
			{
				word += text[i];
				states = 466;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 466:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 467;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 467:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 468;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 468:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 469:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'w')
			{
				word += text[i];
				states = 470;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 470:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&' 
				|| text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 471:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'u')
			{
				word += text[i];
				states = 472;
			}
			else if (text[i] == 'y')
			{
				word += text[i];
				states = 474;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 472:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 473;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 473:
			if (text[i] == ' ' || text[i] == '=' || text[i] == '!'
				|| text[i] == '&' || text[i] == '|' || text[i] == '?'
				|| text[i] == ':')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '&')
				{
					word = text[i].ToString();
					states = 64;
				}
				else if (text[i] == '|')
				{
					word = text[i].ToString();
					states = 65;
				}
				else if (text[i] == '?')
					AddData(text[i].ToString(), "Operator");
				else if (text[i] == ':')
				{
					word = text[i].ToString();
					states = 69;
				}
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 474:
			if (text[i] == ' ' || text[i] == '{')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '{')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 475:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'p')
			{
				word += text[i];
				states = 476;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 476:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 477;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 477:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'd')
			{
				word += text[i];
				states = 478;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 481;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 483;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 478:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 479;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 479:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'f')
			{
				word += text[i];
				states = 480;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 480:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 481:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'd')
			{
				word += text[i];
				states = 482;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 482:
			if (text[i] == ' ' || text[i] =='(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 483:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 484;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 484:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'm')
			{
				word += text[i];
				states = 485;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 485:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 486;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 486:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 487:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 488;
			}
			else if (text[i] == 's')
			{
				word += text[i];
				states = 491;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 488:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'o')
			{
				word += text[i];
				states = 489;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 489:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 490;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 490:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 491:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 492;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 492:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'g')
			{
				word += text[i];
				states = 493;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 493:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 494;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 494:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 495;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 496:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'd')
			{
				word += text[i];
				states = 497;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 497:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 498:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 499;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 499:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 500;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 500:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'g')
			{
				word += text[i];
				states = 501;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 501:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 502:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 503;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 503:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 504;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 504:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 505;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 505:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 506;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 506:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 507;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 507:
			if (text[i] == ' ')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 508:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 509;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 509:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 510;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 510:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'u')
			{
				word += text[i];
				states = 511;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 511:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 512;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 512:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 513;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 513:
			if (text[i] == ' ' || text[i] == '~')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
			}
			else if (text[i] == '~')
				word += text[i];
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 514:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'h')
			{
				word += text[i];
				states = 515;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 515:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'a')
			{
				word += text[i];
				states = 516;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 516:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 517;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 517:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 518;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 518:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 519;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 519:
			if (text[i] == ' ' || text[i] == '*' || text[i] == '&')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				afterType = true;
				if (text[i] == '*' || text[i] == '&')
					AddData(text[i].ToString(), "Operator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 520:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 521;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 521:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'l')
			{
				word += text[i];
				states = 522;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 522:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 523;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 523:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 524:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 525;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 525:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 526;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 526:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'e')
			{
				word += text[i];
				states = 527;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 527:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'q')
			{
				word += text[i];
				states = 528;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 528:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 529:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'i')
			{
				word += text[i];
				states = 528;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 530:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'r')
			{
				word += text[i];
				states = 528;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 531:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 532:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 't')
			{
				word += text[i];
				states = 533;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 533:
			if (text[i] == ' ' || text[i] == '(')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '(')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 534:
			if (text[i] == ' ' || text[i] == ',' || text[i] == ';' || text[i] == '+' || text[i] == '-' || text[i] == '*' || text[i] == '/'
				|| text[i] == '%' || text[i] == '=' || text[i] == '<' || text[i] == '>' || text[i] == '!' || text[i] == '?' || text[i] == ':'
				|| text[i] == ')' || text[i] == ']' || text[i] == '}')
			{
				AddData(word, "Identifier");
				word = "";
				if (text[i] == ',' || text[i] == ';' || text[i] == ')' || text[i] == ']' || text[i] == '}')
					AddData(text[i].ToString(), "Separator");
				else if (text[i] == '+')
				{
					word = text[i].ToString();
					states = 55;
				}
				else if (text[i] == '-')
				{
					word = text[i].ToString();
					states = 56;
				}
				else if (text[i] == '*')
				{
					word = text[i].ToString();
					states = 57;
				}
				else if (text[i] == '/')
				{
					word = text[i].ToString();
					states = 58;
				}
				else if (text[i] == '%')
				{
					word = text[i].ToString();
					states = 59;
				}
				else if (text[i] == '=')
				{
					word = text[i].ToString();
					states = 60;
				}
				else if (text[i] == '!')
				{
					word = text[i].ToString();
					states = 61;
				}
				else if (text[i] == '>')
				{
					word == text[i].ToString();
					states = 63;
				}
				else if (text[i] == '<')
				{
					word == text[i].ToString();
					states = 62;
				}
				else if (text[i] == '?')
				{
					AddData(text[i].ToString(), "Operator");
					states = 62;
				}
				else if (text[i] == ':')
				{
					word == text[i].ToString();
					states = 69;
				}
				else
					states = 0;
			}
			else if (text[i] == 'n')
			{
				word += text[i];
				states = 533;
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
		case 535:
			if (text[i] == ' ' || text[i] == '>')
			{
				AddData(word, "Keyword");
				keyword = word;
				word = "";
				states = 0;
				if (text[i] == '>')
					AddData(text[i].ToString(), "Separator");
			}
			else if (text[i].IsLetter(text[i]))
			{
				word += text[i];
				states = 144;
			}
			else if (text[i].IsDigit(text[i]))
			{
				word += text[i];
				states = 145;
			}
			else if (text[i] == '_')
			{
				word += text[i];
				states = 146;
			}
			else
			{
				errorFlag = true;
				states = 83;
				word += text[i];
			}
			break;
			
		case 83:
			if (!errorFlag)
				MessageBox::Show("Àíàëèç âûïîëíåí óñïåøíî!");
			else
			{
				if (error)
					AddData(error, "Error");
				else
				{
					while (text[i] != ' ' && text[i] != '\n' && text[i] != ';')
					{
						word += text[i];
						i++;
					}
					AddData("Ñèíòàêñè÷åñêàÿ îøèáêà â ñëîâå " + word, "Error");
				}
				states = 0;
			}
			errorFlag = true;
		}
 	}
}
private: System::Void dataGridView3_RowPostPaint(System::Object^ sender, System::Windows::Forms::DataGridViewRowPostPaintEventArgs^ e) 
{
	System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(dataGridView1->RowHeadersDefaultCellStyle->ForeColor);
	e->Graphics->DrawString((e->RowIndex + 1).ToString(), e->InheritedRowStyle->Font, brush, System::Drawing::PointF((float)e->RowBounds.Location.X + 10, (float)e->RowBounds.Location.Y + 4));
	delete brush;
}
private: System::Void dataGridView5_RowPostPaint(System::Object^ sender, System::Windows::Forms::DataGridViewRowPostPaintEventArgs^ e) 
{
	System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(dataGridView1->RowHeadersDefaultCellStyle->ForeColor);
	e->Graphics->DrawString((e->RowIndex + 1).ToString(), e->InheritedRowStyle->Font, brush, System::Drawing::PointF((float)e->RowBounds.Location.X + 10, (float)e->RowBounds.Location.Y + 4));
	delete brush;
}
private: System::Void dataGridView2_RowPostPaint(System::Object^ sender, System::Windows::Forms::DataGridViewRowPostPaintEventArgs^ e) 
{
	System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(dataGridView1->RowHeadersDefaultCellStyle->ForeColor);
	e->Graphics->DrawString((e->RowIndex + 1).ToString(), e->InheritedRowStyle->Font, brush, System::Drawing::PointF((float)e->RowBounds.Location.X + 10, (float)e->RowBounds.Location.Y + 4));
	delete brush;
}
private: System::Void dataGridView4_RowPostPaint(System::Object^ sender, System::Windows::Forms::DataGridViewRowPostPaintEventArgs^ e) 
{
	System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(dataGridView1->RowHeadersDefaultCellStyle->ForeColor);
	e->Graphics->DrawString((e->RowIndex + 1).ToString(), e->InheritedRowStyle->Font, brush, System::Drawing::PointF((float)e->RowBounds.Location.X + 10, (float)e->RowBounds.Location.Y + 4));
	delete brush;
}
/*private: System::Void dataGridView6_RowPostPaint(System::Object^ sender, System::Windows::Forms::DataGridViewRowPostPaintEventArgs^ e)
{
	System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(dataGridView1->RowHeadersDefaultCellStyle->ForeColor);
	e->Graphics->DrawString((e->RowIndex + 1).ToString(), e->InheritedRowStyle->Font, brush, System::Drawing::PointF((float)e->RowBounds.Location.X + 10, (float)e->RowBounds.Location.Y + 4));
	delete brush;
}*/
private: System::Void dataGridView1_RowPostPaint(System::Object^ sender, System::Windows::Forms::DataGridViewRowPostPaintEventArgs^ e) 
{
	System::Drawing::SolidBrush^ brush = gcnew System::Drawing::SolidBrush(dataGridView1->RowHeadersDefaultCellStyle->ForeColor);
	e->Graphics->DrawString((e->RowIndex + 1).ToString(), e->InheritedRowStyle->Font, brush, System::Drawing::PointF((float)e->RowBounds.Location.X + 10, (float)e->RowBounds.Location.Y + 4));
	delete brush;
}
};
}
