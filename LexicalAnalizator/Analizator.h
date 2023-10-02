#pragma once

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
	/// Сводка для Analizator
	/// </summary>
	public ref class Analizator : public System::Windows::Forms::Form
	{
	public:
		Analizator(void)
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
		~Analizator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ файлToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ загрузитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ анализироватьToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::RichTextBox^ richTextBox2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ToolStripMenuItem^ очиститьКодToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ToolStripMenuItem^ анализироватьToolStripMenuItem1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Lexem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Class;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->файлToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->загрузитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->анализироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->очиститьКодToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->анализироватьToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Lexem = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Class = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->файлToolStripMenuItem,
					this->анализироватьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1496, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// файлToolStripMenuItem
			// 
			this->файлToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->загрузитьToolStripMenuItem });
			this->файлToolStripMenuItem->Name = L"файлToolStripMenuItem";
			this->файлToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->файлToolStripMenuItem->Text = L"Файл";
			// 
			// загрузитьToolStripMenuItem
			// 
			this->загрузитьToolStripMenuItem->Name = L"загрузитьToolStripMenuItem";
			this->загрузитьToolStripMenuItem->Size = System::Drawing::Size(160, 26);
			this->загрузитьToolStripMenuItem->Text = L"Загрузить";
			this->загрузитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analizator::загрузитьToolStripMenuItem_Click);
			// 
			// анализироватьToolStripMenuItem
			// 
			this->анализироватьToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->очиститьКодToolStripMenuItem,
					this->анализироватьToolStripMenuItem1
			});
			this->анализироватьToolStripMenuItem->Name = L"анализироватьToolStripMenuItem";
			this->анализироватьToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->анализироватьToolStripMenuItem->Text = L"Анализ";
			// 
			// очиститьКодToolStripMenuItem
			// 
			this->очиститьКодToolStripMenuItem->Name = L"очиститьКодToolStripMenuItem";
			this->очиститьКодToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->очиститьКодToolStripMenuItem->Text = L"Очистить код";
			this->очиститьКодToolStripMenuItem->Click += gcnew System::EventHandler(this, &Analizator::очиститьКодToolStripMenuItem_Click);
			// 
			// анализироватьToolStripMenuItem1
			// 
			this->анализироватьToolStripMenuItem1->Name = L"анализироватьToolStripMenuItem1";
			this->анализироватьToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->анализироватьToolStripMenuItem1->Text = L"Анализировать";
			this->анализироватьToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Analizator::анализироватьToolStripMenuItem1_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->richTextBox1->Location = System::Drawing::Point(0, 28);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(581, 553);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// richTextBox2
			// 
			this->richTextBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->richTextBox2->Location = System::Drawing::Point(581, 28);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(565, 553);
			this->richTextBox2->TabIndex = 2;
			this->richTextBox2->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(152, 518);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Analizator::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Lexem,
					this->Class
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(349, 257);
			this->dataGridView1->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(1146, 28);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(349, 553);
			this->panel1->TabIndex = 6;
			// 
			// Lexem
			// 
			this->Lexem->HeaderText = L"Лексема";
			this->Lexem->MinimumWidth = 6;
			this->Lexem->Name = L"Lexem";
			this->Lexem->ReadOnly = true;
			this->Lexem->Width = 125;
			// 
			// Class
			// 
			this->Class->HeaderText = L"Класс";
			this->Class->MinimumWidth = 6;
			this->Class->Name = L"Class";
			this->Class->ReadOnly = true;
			this->Class->Width = 125;
			// 
			// Analizator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1496, 581);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->richTextBox2);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Analizator";
			this->Text = L"Analizator";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void RemoveCommentsAndFormat(System::Windows::Forms::RichTextBox^ richTextBox)
		{
			String^ text = richTextBox->Text;
			String^ result = "";
			bool insideComment = false;
			array<String^>^ lines = text->Split('\n');
			for (int i = 0; i < lines->Length; ++i)
			{
				String^ line = lines[i];
				// Удаляем комментарии
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
		bool isKeyword(const String^ word) 
		{
			List<String^>^ keywords = gcnew List<String^>();
			bool result = false;
			keywords->Add("alignas"); 
			keywords->Add("alignof");
			keywords->Add("and");
			keywords->Add("and_eq"); 
			keywords->Add("asm");
			keywords->Add("auto");
			keywords->Add("bitand"); 
			keywords->Add("bitor");
			keywords->Add("bool");
			keywords->Add("break"); 
			keywords->Add("case"); 
			keywords->Add("catch");
			keywords->Add("char");
			keywords->Add("char8_t"); 
			keywords->Add("char16_t"); 
			keywords->Add("char32_t");
			keywords->Add("class");
			keywords->Add("compl"); 
			keywords->Add("concept");
			keywords->Add("const");
			keywords->Add("consteval");
			keywords->Add("constexpr");
			keywords->Add("const_cast");
			keywords->Add("continue");
			keywords->Add("decltype"); 
			keywords->Add("default");
			keywords->Add("delete");
			keywords->Add("do");
			keywords->Add("double");
			keywords->Add("dynamic_cast");
			keywords->Add("else"); 
			keywords->Add("enum");
			keywords->Add("explicit"); 
			keywords->Add("export"); 
			keywords->Add("extern"); 
			keywords->Add("false"); 
			keywords->Add("float"); 
			keywords->Add("for");
			keywords->Add("friend");
			keywords->Add("goto");
			keywords->Add("if"); 
			keywords->Add("inline"); 
			keywords->Add("int");
			keywords->Add("long"); 
			keywords->Add("mutable"); 
			keywords->Add("namespace");
			keywords->Add("new");
			keywords->Add("noexcept"); 
			keywords->Add("not"); 
			keywords->Add("not_eq"); 
			keywords->Add("nullptr"); 
			keywords->Add("operator"); 
			keywords->Add("or"); 
			keywords->Add("or_eq");
			keywords->Add("private"); 
			keywords->Add("protected"); 
			keywords->Add("public");
			keywords->Add("register"); 
			keywords->Add("reinterpret_cast"); 
			keywords->Add("requires");
			keywords->Add("return"); 
			keywords->Add("short"); 
			keywords->Add("signed"); 
			keywords->Add("sizeof"); 
			keywords->Add("static"); 
			keywords->Add("static_assert"); 
			keywords->Add("static_cast");
			keywords->Add("struct"); 
			keywords->Add("switch"); 
			keywords->Add("template"); 
			keywords->Add("this"); 
			keywords->Add("thread_local"); 
			keywords->Add("throw");
			keywords->Add("true");
			keywords->Add("try");
			keywords->Add("typedef");
			keywords->Add("typeid");
			keywords->Add("typename");
			keywords->Add("union");
			keywords->Add("unsigned");
			keywords->Add("using");
			keywords->Add("virtual");
			keywords->Add("void");
			keywords->Add("volatile");
			keywords->Add("wchar_t");
			keywords->Add("while");
			keywords->Add("xor");
			keywords->Add("xor_eq");
			for each (String ^ keyword in keywords)
			{
				if(word == keyword)
				 result = true;
			}
			return result;
		}
		bool isIdentifier(String^ word) 
		{
			if (String::IsNullOrEmpty(word) ||
				(!Char::IsLetter(word[0]) && word[0] != '_')) 
				return false;
			for each (char ch in word) 
				if (!Char::IsLetterOrDigit(ch) && ch != '_') 
					return false;

			return true;
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
		bool isOperator(const String^ word) 
		{
			List<String^>^ operators = gcnew List<String^>();
			bool result = false;
			operators->Add("+");
			operators->Add("-");
			operators->Add("*");
			operators->Add("/");
			operators->Add("%");
			operators->Add("++"); 
			operators->Add("--");
			operators->Add("==");
			operators->Add("!=");
			operators->Add("<");
			operators->Add(">");
			operators->Add("<=");
			operators->Add(">=");
			operators->Add("&&");
			operators->Add("||"); 
			operators->Add("&");
			operators->Add("|");
			operators->Add("^");
			operators->Add("!");
			operators->Add("~");
			operators->Add("<<");
			operators->Add(">>");
			operators->Add("=");
			operators->Add("+="); 
			operators->Add("-=");
			operators->Add("*=");
			operators->Add("/=");
			operators->Add("%=");
			operators->Add("&=");
			operators->Add("|=");
			operators->Add("^=");
			operators->Add("<<=");
			operators->Add(">>=");
			operators->Add("->"); 
			operators->Add("->*");
			operators->Add("."); 
			operators->Add(".*");
			operators->Add("::");
			for each (String ^ sign in operators)
			{
				if (word == sign)
					result = true;
			}
			return result;
		}
		bool isPunctuation(const String^ word)
		{
			List<String^>^ punctuation = gcnew List<String^>();
			bool result = false;
			punctuation->Add("(");
			punctuation->Add(")");
			punctuation->Add("[");
			punctuation->Add("]");
			punctuation->Add("{");
			punctuation->Add("}");
			punctuation->Add(";");
			punctuation->Add(",");
			punctuation->Add(":");
			punctuation->Add("?");
			for each (String ^ punc in punctuation)
			{
				if (word == punc)
					result = true;
			}
			return result;
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
		bool isStringLiteral(String^ word) 
		{
			return (word->Length >= 2) && word[0] == '"' && word[word->Length - 1] == '"';
		}
		bool isCharacterLiteral(String^ word) 
		{
			return (word->Length >= 2) && word[0] == '\'' && word[word->Length - 1] == '\'';
		}
#pragma endregion
	private: System::Void загрузитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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
	private: System::Void очиститьКодToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		richTextBox2->Text = richTextBox1->Text;
		richTextBox2->Text = richTextBox2->Text->Replace("\n\n", "\n");
		String^ text = richTextBox2->Text;
		RemoveCommentsAndFormat(richTextBox2);
	}
private: System::Void анализироватьToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text =  richTextBox2->Text;
	String^ word = "";
	DataGridViewRow^ row = gcnew DataGridViewRow();
	int states = 0;
	//for each(char ch in text)
	int count_r = 0;
	for (int i = 0; i < text->Length; i++)
		switch (states)
		{
		case 0:

			if (text[i] == '#')
			{
				states = 1;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'a')
			{
				states = 2;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'b')
			{
				states = 3;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'c')
			{
				states = 4;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'd')
			{
				states = 5;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'e')
			{
				states = 6;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'f')
			{
				states = 7;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'g')
			{
				states = 8;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'h')
			{
				states = 9;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'i')
			{
				states = 10;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'j')
			{
				states = 11;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'k')
			{
				states = 12;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'l')
			{
				states = 13;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'm')
			{
				states = 14;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'n')
			{
				states = 15;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'o')
			{
				states = 16;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'p')
			{
				states = 17;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'q')
			{
				states = 19;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'r')
			{
				states = 20;
				word += text[i];
				//continue;
			}
			else if (text[i] == 's')
			{
				states = 21;
				word += text[i];
				//continue;
			}
			else if (text[i] == 't')
			{
				states = 22;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'u')
			{
				states = 23;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'v')
			{
				states = 24;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'w')
			{
				states = 25;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'x')
			{
				states = 26;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'y')
			{
				states = 27;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'z')
			{
				states = 28;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'A')
			{
				states = 29;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'B')
			{
				states = 30;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'C')
			{
				states = 31;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'D')
			{
				states = 32;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'E')
			{
				states = 33;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'F')
			{
				states = 34;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'G')
			{
				states = 35;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'H')
			{
				states = 36;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'I')
			{
				states = 37;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'J')
			{
				states = 38;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'K')
			{
				states = 39;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'L')
			{
				states = 40;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'M')
			{
				states = 41;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'N')
			{
				states = 42;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'O')
			{
				states = 43;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'P')
			{
				states = 44;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'Q')
			{
				states = 45;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'R')
			{
				states = 46;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'S')
			{
				states = 47;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'T')
			{
				states = 48;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'U')
			{
				states = 49;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'V')
			{
				states = 50;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'W')
			{
				states = 51;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'X')
			{
				states = 52;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'Y')
			{
				states = 53;
				word += text[i];
				//continue;
			}
			else if (text[i] == 'Z')
			{
				states = 54;
				word += text[i];
				//continue;
			}
			else if (text[i] == '+')
			{
				states = 55;
				word += text[i];
				//continue;
			}
			else if (text[i] == '-')
			{
				states = 56;
				word += text[i];
				//continue;
			}
			else if (text[i] == '*')
			{
				states = 57;
				word += text[i];
				//continue;
			}
			else if (text[i] == '/')
			{
				states = 58;
				word += text[i];
				//continue;
			}
			else if (text[i] == '%')
			{
				states = 59;
				word += text[i];
				//continue;
			}
			else if (text[i] == '=')
			{
				states = 60;
				word += text[i];
				//continue;
			}
			else if (text[i] == '!')
			{
				states = 61;
				word += text[i];
				//continue;
			}
			else if (text[i] == '<')
			{
				states = 62;
				word += text[i];
				//continue;
			}
			else if (text[i] == '>')
			{
				states = 63;
				word += text[i];
				//continue;
			}
			else if (text[i] == '&')
			{
				states = 64;
				word += text[i];
				//continue;
			}
			else if (text[i] == '|')
			{
				states = 65;
				word += text[i];
				//continue;
			}
			else if (text[i] == '^')
			{
				states = 66;
				word += text[i];
				//continue;
			}
			else if (text[i] == '~')
			{
				states = 67;
				word += text[i];
				//continue;
			}
			else if (text[i] == '.')
			{
				states = 68;
				word += text[i];
				//continue;
			}
			else if (text[i] == ':')
			{
				states = 69;
				word += text[i];
				//continue;
			}
			else if (text[i] == '(')
			{
				states = 70;
				word += text[i];
				//continue;
			}
			else if (text[i] == ')')
			{
				states = 71;
				word += text[i];
				//continue;
			}
			else if (text[i] == '[')
			{
				states = 72;
				word += text[i];
				//continue;
			}
			else if (text[i] == ']')
			{
				states = 73;
				word += text[i];
				//continue;
			}
			else if (text[i] == '{')
			{
				states = 74;
				word += text[i];
				//continue;
			}
			else if (text[i] == '}')
			{
				states = 75;
				word += text[i];
				//continue;
			}
			else if (text[i] == ';')
			{
				states = 76;
				word += text[i];
				//continue;
			}
			else if (text[i] == ',')
			{
				states = 77;
				word += text[i];
				//continue;
			}
			else if (text[i] == '?')
			{
				states = 78;
				word += text[i];
				//continue;
			}
			else if (text[i] == '_')
			{
				states = 79;
				word += text[i];
				//continue;
			}
			else if (text[i] == '\'')
			{
				states = 80;
				word += text[i];
				//continue;
			}
			else if (text[i] == '"')
			{
				states = 81;
				word += text[i];
				//continue;
			}
			/*else if (isdigit(text[i]))
			{
				states = 82;
				word += text[i];
				//continue;
			}*/
			else
			{
				states = 83;
				word = "";
				//continue;
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
			}
			break;
		case 94:
			if (text[i] == ' ')
			{
				states = 0;
				row->CreateCells(this->dataGridView1);  
				row->Cells[0]->Value = word;
				row->Cells[1]->Value = "Directive";
				this->dataGridView1->Rows->Add(row);
				word = "";
			}
			else
			{
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
				count_r++;
				states = 97;
				word += text[i];
			}
			else
			{
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
			}
			break;
		case 100:
			if (text[i] == ' ')
			{
				states = 0;
				row->CreateCells(this->dataGridView1);  // создание ячеек для строки на основе структуры DataGridView
				row->Cells[0]->Value = word;
				row->Cells[1]->Value = "Directive";
				this->dataGridView1->Rows->Add(row);
				word = "";
			}
			else
			{
				states = 83;
				word = "";
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
				states = 83;
				word = "";
			}
			break;
		case 101:
			if (text[i] == '\n')
			{
				states = 0;
				row->CreateCells(this->dataGridView1);  // создание ячеек для строки на основе структуры DataGridView
				row->Cells[0]->Value = word;
				row->Cells[1]->Value = "Directive";
				this->dataGridView1->Rows->Add(row);
				word = "";
			}
			else
			{
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
			}
			break;
		case 104:
			if (text[i] == '\n')
			{
				states = 0;
				row->CreateCells(this->dataGridView1);  // создание ячеек для строки на основе структуры DataGridView
				row->Cells[0]->Value = word;
				row->Cells[1]->Value = "Directive";
				this->dataGridView1->Rows->Add(row);
				word = "";
			}
			else
			{
				states = 83;
				word = "";
			}
			break;
		case 97:
			if (text[i] == 'r' && count_r == 1)
			{
				count_r++;
				word += text[i];
			}
			if (text[i] == 'o')
			{
				states = 105;
				word += text[i];
			}
			else
			{
				states = 83;
				word = "";
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
				states = 83;
				word = "";
			}
			break;
		case 106:
			if (text[i] == ' ')
			{

				states = 0;
				row->CreateCells(this->dataGridView1);  // создание ячеек для строки на основе структуры DataGridView
				row->Cells[0]->Value = word;
				row->Cells[1]->Value = "Directive";
				this->dataGridView1->Rows->Add(row);
				word = "";
			}
			else
			{
				states = 83;
				word = "";
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
				states = 83;
				word = "";
			}
			break;
		case 107:
			if (text[i] == ' ')
			{
				states = 0;
				row->CreateCells(this->dataGridView1);  // создание ячеек для строки на основе структуры DataGridView
				row->Cells[0]->Value = word;
				row->Cells[1]->Value = "Directive";
				this->dataGridView1->Rows->Add(row);
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
			}
			break;
		case 113:
			if (text[i] == ' ')
			{
				states = 0;
				row->CreateCells(this->dataGridView1);  // создание ячеек для строки на основе структуры DataGridView
				row->Cells[0]->Value = word;
				row->Cells[1]->Value = "Directive";
				this->dataGridView1->Rows->Add(row);
				word = "";
			}
			else
			{
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
			}
			break;
		case 117:
			if (text[i] == ' ')
			{
				states = 0;
				row->CreateCells(this->dataGridView1);  // создание ячеек для строки на основе структуры DataGridView
				row->Cells[0]->Value = word;
				row->Cells[1]->Value = "Directive";
				this->dataGridView1->Rows->Add(row);
				word = "";
			}
			else
			{
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
			}
			break;
		case 122:
			if (text[i] == ' ')
			{
				states = 0;
				row->CreateCells(this->dataGridView1);  // создание ячеек для строки на основе структуры DataGridView
				row->Cells[0]->Value = word;
				row->Cells[1]->Value = "Directive";
				this->dataGridView1->Rows->Add(row);
				word = "";
			}
			else
			{
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
			}
			break;
		case 125:
			if (text[i] == ' ')
			{
				states = 0;
				row->CreateCells(this->dataGridView1);  // создание ячеек для строки на основе структуры DataGridView
				row->Cells[0]->Value = word;
				row->Cells[1]->Value = "Directive";
				this->dataGridView1->Rows->Add(row);
				word = "";
			}
			else
			{
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
			}
			break;
		case 130:
			if (text[i] == ' ')
			{
				states = 0;
				row->CreateCells(this->dataGridView1);  // создание ячеек для строки на основе структуры DataGridView
				row->Cells[0]->Value = word;
				row->Cells[1]->Value = "Directive";
				this->dataGridView1->Rows->Add(row);
				word = "";
			}
			else
			{
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
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
				states = 83;
				word = "";
			}
		break; case 135:
			if (text[i] == ' ')
			{
				states = 0;
				row->CreateCells(this->dataGridView1);  // создание ячеек для строки на основе структуры DataGridView
				row->Cells[0]->Value = word;
				row->Cells[1]->Value = "Directive";
				this->dataGridView1->Rows->Add(row);
				word = "";
			}
			else
			{
				states = 83;
				word = "";
			}
			break;
		}
}
};
}
