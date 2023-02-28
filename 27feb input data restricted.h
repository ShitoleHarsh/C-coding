#pragma once

namespace simpleintrestc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for My27febinputdatarestricted
	/// </summary>
	public ref class My27febinputdatarestricted : public System::Windows::Forms::Form
	{
	public:
		My27febinputdatarestricted(void)
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
		~My27febinputdatarestricted()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// My27febinputdatarestricted
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"My27febinputdatarestricted";
			this->Text = L"My27febinputdatarestricted";
			this->Load += gcnew System::EventHandler(this, &My27febinputdatarestricted::My27febinputdatarestricted_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void My27febinputdatarestricted_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	};
}
