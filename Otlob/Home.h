#pragma once
#include "SignIn.h"
#include "SignUp.h"
//#include "stdAfx.h"
namespace Otlob {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
//	using namespace SignIn;
	/// <summary>
	/// Summary for Home
	/// </summary>
	public ref class Home : public System::Windows::Forms::Form
	{
	public:
		Home(void)
		{
			InitializeComponent();
			this->dragging = false;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Home()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	private: bool dragging;
	private: Point offset;













	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  Panel_Header;
	private: System::Windows::Forms::Button^  button_Minimize;
	private: System::Windows::Forms::Button^  button_Close;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;
	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_ShowRs;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label_UsernameN;



	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: Bunifu::Framework::UI::BunifuFlatButton^  button_SignIn;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton1;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton4;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton3;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton2;
	private: Bunifu::Framework::UI::BunifuFlatButton^  Button_SignUp;
	private: System::Windows::Forms::Label^  label_Username;

	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox1;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox8;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox7;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox6;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox5;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox4;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox3;
	private: Bunifu::Framework::UI::BunifuCheckbox^  bunifuCheckbox2;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: Bunifu::Framework::UI::BunifuFlatButton^  bunifuFlatButton5;












	protected: 


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Home::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bunifuFlatButton5 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton1 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton4 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton3 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->bunifuFlatButton2 = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Button_SignUp = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->button_SignIn = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->Panel_Header = (gcnew System::Windows::Forms::Panel());
			this->button_Close = (gcnew System::Windows::Forms::Button());
			this->button_Minimize = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label_Username = (gcnew System::Windows::Forms::Label());
			this->label_UsernameN = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bunifuCheckbox8 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox7 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox6 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox5 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox4 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox3 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox2 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->bunifuCheckbox1 = (gcnew Bunifu::Framework::UI::BunifuCheckbox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Button_ShowRs = (gcnew Bunifu::Framework::UI::BunifuFlatButton());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->Panel_Header->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Maroon;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->bunifuFlatButton5);
			this->panel2->Controls->Add(this->bunifuFlatButton1);
			this->panel2->Controls->Add(this->bunifuFlatButton4);
			this->panel2->Controls->Add(this->bunifuFlatButton3);
			this->panel2->Controls->Add(this->bunifuFlatButton2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(247, 671);
			this->panel2->TabIndex = 7;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(57, 116);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(135, 65);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 12;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseUp);
			// 
			// bunifuFlatButton5
			// 
			this->bunifuFlatButton5->Activecolor = System::Drawing::Color::Maroon;
			this->bunifuFlatButton5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton5->BorderRadius = 0;
			this->bunifuFlatButton5->ButtonText = L"Admin Room";
			this->bunifuFlatButton5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton5->DisabledColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->bunifuFlatButton5->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton5->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton5.Iconimage")));
			this->bunifuFlatButton5->Iconimage_right = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton5.Iconimage_right")));
			this->bunifuFlatButton5->Iconimage_right_Selected = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton5.Iconimage_right_Selected")));
			this->bunifuFlatButton5->Iconimage_Selected = nullptr;
			this->bunifuFlatButton5->IconMarginLeft = 0;
			this->bunifuFlatButton5->IconMarginRight = 0;
			this->bunifuFlatButton5->IconRightVisible = true;
			this->bunifuFlatButton5->IconRightZoom = 0;
			this->bunifuFlatButton5->IconVisible = true;
			this->bunifuFlatButton5->IconZoom = 80;
			this->bunifuFlatButton5->IsTab = false;
			this->bunifuFlatButton5->Location = System::Drawing::Point(0, 576);
			this->bunifuFlatButton5->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->bunifuFlatButton5->Name = L"bunifuFlatButton5";
			this->bunifuFlatButton5->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton5->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->bunifuFlatButton5->OnHoverTextColor = System::Drawing::Color::Maroon;
			this->bunifuFlatButton5->selected = false;
			this->bunifuFlatButton5->Size = System::Drawing::Size(248, 70);
			this->bunifuFlatButton5->TabIndex = 11;
			this->bunifuFlatButton5->Text = L"Admin Room";
			this->bunifuFlatButton5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton5->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuFlatButton5->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			// 
			// bunifuFlatButton1
			// 
			this->bunifuFlatButton1->Activecolor = System::Drawing::Color::Maroon;
			this->bunifuFlatButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton1->BorderRadius = 0;
			this->bunifuFlatButton1->ButtonText = L"My Bills";
			this->bunifuFlatButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton1->DisabledColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->bunifuFlatButton1->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton1->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton1.Iconimage")));
			this->bunifuFlatButton1->Iconimage_right = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton1.Iconimage_right")));
			this->bunifuFlatButton1->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton1->Iconimage_Selected = nullptr;
			this->bunifuFlatButton1->IconMarginLeft = 0;
			this->bunifuFlatButton1->IconMarginRight = 0;
			this->bunifuFlatButton1->IconRightVisible = true;
			this->bunifuFlatButton1->IconRightZoom = 0;
			this->bunifuFlatButton1->IconVisible = true;
			this->bunifuFlatButton1->IconZoom = 80;
			this->bunifuFlatButton1->IsTab = false;
			this->bunifuFlatButton1->Location = System::Drawing::Point(0, 439);
			this->bunifuFlatButton1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->bunifuFlatButton1->Name = L"bunifuFlatButton1";
			this->bunifuFlatButton1->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton1->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->bunifuFlatButton1->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->bunifuFlatButton1->selected = false;
			this->bunifuFlatButton1->Size = System::Drawing::Size(248, 70);
			this->bunifuFlatButton1->TabIndex = 11;
			this->bunifuFlatButton1->Text = L"My Bills";
			this->bunifuFlatButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton1->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuFlatButton1->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			// 
			// bunifuFlatButton4
			// 
			this->bunifuFlatButton4->Activecolor = System::Drawing::Color::Maroon;
			this->bunifuFlatButton4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton4->BorderRadius = 0;
			this->bunifuFlatButton4->ButtonText = L"All Offers";
			this->bunifuFlatButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton4->DisabledColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton4->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->bunifuFlatButton4->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton4->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton4.Iconimage")));
			this->bunifuFlatButton4->Iconimage_right = nullptr;
			this->bunifuFlatButton4->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton4->Iconimage_Selected = nullptr;
			this->bunifuFlatButton4->IconMarginLeft = 0;
			this->bunifuFlatButton4->IconMarginRight = 0;
			this->bunifuFlatButton4->IconRightVisible = true;
			this->bunifuFlatButton4->IconRightZoom = 0;
			this->bunifuFlatButton4->IconVisible = true;
			this->bunifuFlatButton4->IconZoom = 80;
			this->bunifuFlatButton4->IsTab = false;
			this->bunifuFlatButton4->Location = System::Drawing::Point(0, 366);
			this->bunifuFlatButton4->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->bunifuFlatButton4->Name = L"bunifuFlatButton4";
			this->bunifuFlatButton4->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton4->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->bunifuFlatButton4->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->bunifuFlatButton4->selected = false;
			this->bunifuFlatButton4->Size = System::Drawing::Size(248, 70);
			this->bunifuFlatButton4->TabIndex = 11;
			this->bunifuFlatButton4->Text = L"All Offers";
			this->bunifuFlatButton4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton4->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuFlatButton4->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			// 
			// bunifuFlatButton3
			// 
			this->bunifuFlatButton3->Activecolor = System::Drawing::Color::Maroon;
			this->bunifuFlatButton3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton3->BorderRadius = 0;
			this->bunifuFlatButton3->ButtonText = L"Foods";
			this->bunifuFlatButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton3->DisabledColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton3->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->bunifuFlatButton3->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton3->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton3.Iconimage")));
			this->bunifuFlatButton3->Iconimage_right = nullptr;
			this->bunifuFlatButton3->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton3->Iconimage_Selected = nullptr;
			this->bunifuFlatButton3->IconMarginLeft = 0;
			this->bunifuFlatButton3->IconMarginRight = 0;
			this->bunifuFlatButton3->IconRightVisible = true;
			this->bunifuFlatButton3->IconRightZoom = 0;
			this->bunifuFlatButton3->IconVisible = true;
			this->bunifuFlatButton3->IconZoom = 80;
			this->bunifuFlatButton3->IsTab = false;
			this->bunifuFlatButton3->Location = System::Drawing::Point(0, 291);
			this->bunifuFlatButton3->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->bunifuFlatButton3->Name = L"bunifuFlatButton3";
			this->bunifuFlatButton3->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton3->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->bunifuFlatButton3->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->bunifuFlatButton3->selected = false;
			this->bunifuFlatButton3->Size = System::Drawing::Size(248, 70);
			this->bunifuFlatButton3->TabIndex = 11;
			this->bunifuFlatButton3->Text = L"Foods";
			this->bunifuFlatButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton3->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuFlatButton3->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			// 
			// bunifuFlatButton2
			// 
			this->bunifuFlatButton2->Activecolor = System::Drawing::Color::Maroon;
			this->bunifuFlatButton2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->bunifuFlatButton2->BorderRadius = 0;
			this->bunifuFlatButton2->ButtonText = L"All Restaurants";
			this->bunifuFlatButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuFlatButton2->DisabledColor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->bunifuFlatButton2->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->bunifuFlatButton2->Iconcolor = System::Drawing::Color::Transparent;
			this->bunifuFlatButton2->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"bunifuFlatButton2.Iconimage")));
			this->bunifuFlatButton2->Iconimage_right = nullptr;
			this->bunifuFlatButton2->Iconimage_right_Selected = nullptr;
			this->bunifuFlatButton2->Iconimage_Selected = nullptr;
			this->bunifuFlatButton2->IconMarginLeft = 0;
			this->bunifuFlatButton2->IconMarginRight = 0;
			this->bunifuFlatButton2->IconRightVisible = true;
			this->bunifuFlatButton2->IconRightZoom = 0;
			this->bunifuFlatButton2->IconVisible = true;
			this->bunifuFlatButton2->IconZoom = 80;
			this->bunifuFlatButton2->IsTab = false;
			this->bunifuFlatButton2->Location = System::Drawing::Point(0, 216);
			this->bunifuFlatButton2->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->bunifuFlatButton2->Name = L"bunifuFlatButton2";
			this->bunifuFlatButton2->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuFlatButton2->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->bunifuFlatButton2->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->bunifuFlatButton2->selected = false;
			this->bunifuFlatButton2->Size = System::Drawing::Size(248, 70);
			this->bunifuFlatButton2->TabIndex = 11;
			this->bunifuFlatButton2->Text = L"All Restaurants";
			this->bunifuFlatButton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->bunifuFlatButton2->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(163)), static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->bunifuFlatButton2->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mistral", 52.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label2->Location = System::Drawing::Point(26, 23);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(197, 105);
			this->label2->TabIndex = 10;
			this->label2->Text = L"OTlob";
			this->label2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseDown);
			this->label2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseMove);
			this->label2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseUp);
			// 
			// Button_SignUp
			// 
			this->Button_SignUp->Activecolor = System::Drawing::Color::Maroon;
			this->Button_SignUp->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_SignUp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Button_SignUp->BorderRadius = 0;
			this->Button_SignUp->ButtonText = L"Sign Up";
			this->Button_SignUp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Button_SignUp->DisabledColor = System::Drawing::Color::Transparent;
			this->Button_SignUp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button_SignUp->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->Button_SignUp->Iconcolor = System::Drawing::Color::Transparent;
			this->Button_SignUp->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Button_SignUp.Iconimage")));
			this->Button_SignUp->Iconimage_right = nullptr;
			this->Button_SignUp->Iconimage_right_Selected = nullptr;
			this->Button_SignUp->Iconimage_Selected = nullptr;
			this->Button_SignUp->IconMarginLeft = 0;
			this->Button_SignUp->IconMarginRight = 0;
			this->Button_SignUp->IconRightVisible = true;
			this->Button_SignUp->IconRightZoom = 0;
			this->Button_SignUp->IconVisible = true;
			this->Button_SignUp->IconZoom = 50;
			this->Button_SignUp->IsTab = false;
			this->Button_SignUp->Location = System::Drawing::Point(550, -1);
			this->Button_SignUp->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Button_SignUp->Name = L"Button_SignUp";
			this->Button_SignUp->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_SignUp->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->Button_SignUp->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->Button_SignUp->selected = false;
			this->Button_SignUp->Size = System::Drawing::Size(156, 58);
			this->Button_SignUp->TabIndex = 11;
			this->Button_SignUp->Text = L"Sign Up";
			this->Button_SignUp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Button_SignUp->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Button_SignUp->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			this->Button_SignUp->Click += gcnew System::EventHandler(this, &Home::Button_SignUp_Click);
			// 
			// button_SignIn
			// 
			this->button_SignIn->Activecolor = System::Drawing::Color::Maroon;
			this->button_SignIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SignIn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button_SignIn->BorderRadius = 0;
			this->button_SignIn->ButtonText = L"Sign In";
			this->button_SignIn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button_SignIn->DisabledColor = System::Drawing::Color::Transparent;
			this->button_SignIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_SignIn->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->button_SignIn->Iconcolor = System::Drawing::Color::Transparent;
			this->button_SignIn->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button_SignIn.Iconimage")));
			this->button_SignIn->Iconimage_right = nullptr;
			this->button_SignIn->Iconimage_right_Selected = nullptr;
			this->button_SignIn->Iconimage_Selected = nullptr;
			this->button_SignIn->IconMarginLeft = 0;
			this->button_SignIn->IconMarginRight = 0;
			this->button_SignIn->IconRightVisible = true;
			this->button_SignIn->IconRightZoom = 0;
			this->button_SignIn->IconVisible = true;
			this->button_SignIn->IconZoom = 50;
			this->button_SignIn->IsTab = false;
			this->button_SignIn->Location = System::Drawing::Point(718, -1);
			this->button_SignIn->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->button_SignIn->Name = L"button_SignIn";
			this->button_SignIn->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_SignIn->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->button_SignIn->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->button_SignIn->selected = false;
			this->button_SignIn->Size = System::Drawing::Size(156, 58);
			this->button_SignIn->TabIndex = 11;
			this->button_SignIn->Text = L"Sign In";
			this->button_SignIn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->button_SignIn->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_SignIn->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			// 
			// Panel_Header
			// 
			this->Panel_Header->BackColor = System::Drawing::Color::Maroon;
			this->Panel_Header->Controls->Add(this->button_Close);
			this->Panel_Header->Controls->Add(this->button_Minimize);
			this->Panel_Header->Dock = System::Windows::Forms::DockStyle::Top;
			this->Panel_Header->Location = System::Drawing::Point(247, 0);
			this->Panel_Header->Name = L"Panel_Header";
			this->Panel_Header->Size = System::Drawing::Size(960, 45);
			this->Panel_Header->TabIndex = 8;
			this->Panel_Header->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseDown);
			this->Panel_Header->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseMove);
			this->Panel_Header->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Home::panel1_MouseUp);
			// 
			// button_Close
			// 
			this->button_Close->BackColor = System::Drawing::Color::Maroon;
			this->button_Close->FlatAppearance->BorderSize = 0;
			this->button_Close->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_Close->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_Close->Location = System::Drawing::Point(914, 5);
			this->button_Close->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_Close->Name = L"button_Close";
			this->button_Close->Size = System::Drawing::Size(42, 35);
			this->button_Close->TabIndex = 2;
			this->button_Close->Text = L"X";
			this->button_Close->UseVisualStyleBackColor = false;
			this->button_Close->Click += gcnew System::EventHandler(this, &Home::button_Close_Click);
			// 
			// button_Minimize
			// 
			this->button_Minimize->BackColor = System::Drawing::Color::Maroon;
			this->button_Minimize->FlatAppearance->BorderSize = 0;
			this->button_Minimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_Minimize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button_Minimize->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->button_Minimize->Location = System::Drawing::Point(864, 5);
			this->button_Minimize->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button_Minimize->Name = L"button_Minimize";
			this->button_Minimize->Size = System::Drawing::Size(42, 35);
			this->button_Minimize->TabIndex = 2;
			this->button_Minimize->Text = L"_";
			this->button_Minimize->UseVisualStyleBackColor = false;
			this->button_Minimize->Click += gcnew System::EventHandler(this, &Home::button_Minimize_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Controls->Add(this->label_Username);
			this->panel1->Controls->Add(this->label_UsernameN);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->button_SignIn);
			this->panel1->Controls->Add(this->Button_SignUp);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel1->Location = System::Drawing::Point(247, 45);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(960, 56);
			this->panel1->TabIndex = 9;
			// 
			// label_Username
			// 
			this->label_Username->AutoSize = true;
			this->label_Username->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label_Username->Location = System::Drawing::Point(812, 18);
			this->label_Username->Name = L"label_Username";
			this->label_Username->Size = System::Drawing::Size(0, 25);
			this->label_Username->TabIndex = 0;
			// 
			// label_UsernameN
			// 
			this->label_UsernameN->AutoSize = true;
			this->label_UsernameN->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label_UsernameN->Location = System::Drawing::Point(709, 18);
			this->label_UsernameN->Name = L"label_UsernameN";
			this->label_UsernameN->Size = System::Drawing::Size(110, 25);
			this->label_UsernameN->TabIndex = 0;
			this->label_UsernameN->Text = L"username :";
			this->label_UsernameN->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label5->Location = System::Drawing::Point(203, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 25);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Main";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label4->Location = System::Drawing::Point(141, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Main";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->label3->Location = System::Drawing::Point(70, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 25);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Main";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel3->Controls->Add(this->label13);
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->label11);
			this->panel3->Controls->Add(this->label10);
			this->panel3->Controls->Add(this->label9);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->bunifuCheckbox8);
			this->panel3->Controls->Add(this->bunifuCheckbox7);
			this->panel3->Controls->Add(this->bunifuCheckbox6);
			this->panel3->Controls->Add(this->bunifuCheckbox5);
			this->panel3->Controls->Add(this->bunifuCheckbox4);
			this->panel3->Controls->Add(this->bunifuCheckbox3);
			this->panel3->Controls->Add(this->bunifuCheckbox2);
			this->panel3->Controls->Add(this->bunifuCheckbox1);
			this->panel3->Controls->Add(this->pictureBox18);
			this->panel3->Controls->Add(this->pictureBox14);
			this->panel3->Controls->Add(this->pictureBox17);
			this->panel3->Controls->Add(this->pictureBox16);
			this->panel3->Controls->Add(this->pictureBox13);
			this->panel3->Controls->Add(this->pictureBox15);
			this->panel3->Controls->Add(this->pictureBox12);
			this->panel3->Controls->Add(this->pictureBox11);
			this->panel3->Controls->Add(this->pictureBox10);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->pictureBox9);
			this->panel3->Controls->Add(this->pictureBox6);
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Controls->Add(this->pictureBox4);
			this->panel3->Controls->Add(this->pictureBox8);
			this->panel3->Controls->Add(this->pictureBox3);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->Button_ShowRs);
			this->panel3->Controls->Add(this->comboBox2);
			this->panel3->Controls->Add(this->comboBox1);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->panel3->Location = System::Drawing::Point(247, 101);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(960, 570);
			this->panel3->TabIndex = 10;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(473, 515);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(119, 25);
			this->label13->TabIndex = 15;
			this->label13->Text = L"Sandwiches";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(473, 485);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(100, 25);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Fast Food";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(473, 455);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(116, 25);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Shawermas";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(473, 425);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 25);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Japan Food";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(255, 515);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 25);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Oriental";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(255, 485);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(60, 25);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Pizza";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(255, 455);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(91, 25);
			this->label7->TabIndex = 15;
			this->label7->Text = L"Sea food";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(255, 425);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(45, 25);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Grill";
			// 
			// bunifuCheckbox8
			// 
			this->bunifuCheckbox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox8->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox8->Checked = false;
			this->bunifuCheckbox8->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox8->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox8->Location = System::Drawing::Point(439, 428);
			this->bunifuCheckbox8->Margin = System::Windows::Forms::Padding(72, 83, 72, 83);
			this->bunifuCheckbox8->Name = L"bunifuCheckbox8";
			this->bunifuCheckbox8->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox8->TabIndex = 14;
			// 
			// bunifuCheckbox7
			// 
			this->bunifuCheckbox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox7->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox7->Checked = false;
			this->bunifuCheckbox7->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox7->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox7->Location = System::Drawing::Point(439, 458);
			this->bunifuCheckbox7->Margin = System::Windows::Forms::Padding(48, 53, 48, 53);
			this->bunifuCheckbox7->Name = L"bunifuCheckbox7";
			this->bunifuCheckbox7->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox7->TabIndex = 14;
			// 
			// bunifuCheckbox6
			// 
			this->bunifuCheckbox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox6->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox6->Checked = false;
			this->bunifuCheckbox6->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox6->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox6->Location = System::Drawing::Point(439, 488);
			this->bunifuCheckbox6->Margin = System::Windows::Forms::Padding(32, 34, 32, 34);
			this->bunifuCheckbox6->Name = L"bunifuCheckbox6";
			this->bunifuCheckbox6->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox6->TabIndex = 14;
			// 
			// bunifuCheckbox5
			// 
			this->bunifuCheckbox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox5->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox5->Checked = false;
			this->bunifuCheckbox5->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox5->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox5->Location = System::Drawing::Point(439, 518);
			this->bunifuCheckbox5->Margin = System::Windows::Forms::Padding(21, 22, 21, 22);
			this->bunifuCheckbox5->Name = L"bunifuCheckbox5";
			this->bunifuCheckbox5->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox5->TabIndex = 14;
			// 
			// bunifuCheckbox4
			// 
			this->bunifuCheckbox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox4->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox4->Checked = false;
			this->bunifuCheckbox4->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox4->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox4->Location = System::Drawing::Point(225, 518);
			this->bunifuCheckbox4->Margin = System::Windows::Forms::Padding(14);
			this->bunifuCheckbox4->Name = L"bunifuCheckbox4";
			this->bunifuCheckbox4->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox4->TabIndex = 14;
			// 
			// bunifuCheckbox3
			// 
			this->bunifuCheckbox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox3->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox3->Checked = false;
			this->bunifuCheckbox3->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox3->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox3->Location = System::Drawing::Point(225, 488);
			this->bunifuCheckbox3->Margin = System::Windows::Forms::Padding(9);
			this->bunifuCheckbox3->Name = L"bunifuCheckbox3";
			this->bunifuCheckbox3->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox3->TabIndex = 14;
			// 
			// bunifuCheckbox2
			// 
			this->bunifuCheckbox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox2->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox2->Checked = false;
			this->bunifuCheckbox2->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox2->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox2->Location = System::Drawing::Point(225, 458);
			this->bunifuCheckbox2->Margin = System::Windows::Forms::Padding(6);
			this->bunifuCheckbox2->Name = L"bunifuCheckbox2";
			this->bunifuCheckbox2->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox2->TabIndex = 14;
			// 
			// bunifuCheckbox1
			// 
			this->bunifuCheckbox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox1->ChechedOffColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->bunifuCheckbox1->Checked = false;
			this->bunifuCheckbox1->CheckedOnColor = System::Drawing::Color::Maroon;
			this->bunifuCheckbox1->ForeColor = System::Drawing::Color::White;
			this->bunifuCheckbox1->Location = System::Drawing::Point(225, 428);
			this->bunifuCheckbox1->Margin = System::Windows::Forms::Padding(6);
			this->bunifuCheckbox1->Name = L"bunifuCheckbox1";
			this->bunifuCheckbox1->Size = System::Drawing::Size(20, 20);
			this->bunifuCheckbox1->TabIndex = 13;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(591, 486);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(35, 26);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox18->TabIndex = 12;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(342, 487);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(35, 26);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox14->TabIndex = 12;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(591, 518);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(35, 26);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox17->TabIndex = 12;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(591, 422);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(35, 26);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox16->TabIndex = 12;
			this->pictureBox16->TabStop = false;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(342, 519);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(35, 26);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 12;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(591, 454);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(35, 26);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox15->TabIndex = 12;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(342, 423);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(35, 26);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 12;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(342, 455);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(35, 26);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 12;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(677, 221);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(67, 50);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox10->TabIndex = 10;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(677, 165);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(67, 50);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 10;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(750, 221);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(67, 50);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox9->TabIndex = 10;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(750, 165);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(67, 50);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(750, 109);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(67, 50);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 10;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(677, 109);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(67, 50);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(603, 221);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(67, 50);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox8->TabIndex = 10;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(603, 165);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(67, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(603, 109);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(67, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// Button_ShowRs
			// 
			this->Button_ShowRs->Activecolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_ShowRs->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_ShowRs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Button_ShowRs->BorderRadius = 0;
			this->Button_ShowRs->ButtonText = L"Show Restaurants";
			this->Button_ShowRs->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Button_ShowRs->DisabledColor = System::Drawing::Color::Gray;
			this->Button_ShowRs->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Button_ShowRs->ForeColor = System::Drawing::Color::Tan;
			this->Button_ShowRs->Iconcolor = System::Drawing::Color::Transparent;
			this->Button_ShowRs->Iconimage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Button_ShowRs.Iconimage")));
			this->Button_ShowRs->Iconimage_right = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Button_ShowRs.Iconimage_right")));
			this->Button_ShowRs->Iconimage_right_Selected = nullptr;
			this->Button_ShowRs->Iconimage_Selected = nullptr;
			this->Button_ShowRs->IconMarginLeft = 0;
			this->Button_ShowRs->IconMarginRight = 0;
			this->Button_ShowRs->IconRightVisible = true;
			this->Button_ShowRs->IconRightZoom = 0;
			this->Button_ShowRs->IconVisible = true;
			this->Button_ShowRs->IconZoom = 50;
			this->Button_ShowRs->IsTab = false;
			this->Button_ShowRs->Location = System::Drawing::Point(583, 352);
			this->Button_ShowRs->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->Button_ShowRs->Name = L"Button_ShowRs";
			this->Button_ShowRs->Normalcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->Button_ShowRs->OnHovercolor = System::Drawing::Color::AntiqueWhite;
			this->Button_ShowRs->OnHoverTextColor = System::Drawing::SystemColors::ActiveCaption;
			this->Button_ShowRs->selected = false;
			this->Button_ShowRs->Size = System::Drawing::Size(288, 34);
			this->Button_ShowRs->TabIndex = 9;
			this->Button_ShowRs->Text = L"Show Restaurants";
			this->Button_ShowRs->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->Button_ShowRs->Textcolor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->Button_ShowRs->TextFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic));
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(327, 352);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(227, 34);
			this->comboBox2->TabIndex = 7;
			this->comboBox2->Text = L"Address/ Area";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(204)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(163)), 
				static_cast<System::Int32>(static_cast<System::Byte>(102)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(75, 352);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(227, 34);
			this->comboBox1->TabIndex = 8;
			this->comboBox1->Text = L"Governorate";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mistral", 109.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Maroon;
			this->label1->Location = System::Drawing::Point(161, 78);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(411, 219);
			this->label1->TabIndex = 6;
			this->label1->Text = L"OTlob";
			// 
			// Home
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::BurlyWood;
			this->ClientSize = System::Drawing::Size(1207, 671);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->Panel_Header);
			this->Controls->Add(this->panel2);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"Home";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Home";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->Panel_Header->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void button_Close_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
			 }
	private: System::Void button_Minimize_Click(System::Object^  sender, System::EventArgs^  e) {
				 WindowState = FormWindowState::Minimized;
			 }

	private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 this->dragging = true;
				 this->offset = Point(e->X, e->Y);
			 }
	private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if(this->dragging){
					Point currentScreenPos = PointToScreen(e->Location);
					Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
				 }
			 }
	private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 this->dragging = false;
			 }
	private: System::Void Button_SignUp_Click(System::Object^  sender, System::EventArgs^  e) {
				 SignUp^ su = gcnew SignUp();
				 su->Show();
				 this->Hide();
		 }
};
}
