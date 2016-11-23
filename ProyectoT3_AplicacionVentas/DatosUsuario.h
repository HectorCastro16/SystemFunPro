#pragma once
#include "Estructuras.h"
#include <msclr\marshal_cppstd.h>

namespace ProyectoT3_AplicacionVentas {
	/*/
	probando cambio
	wwwer
	f*/
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de DatosUsuario
	/// </summary>
	public ref class DatosUsuario : public System::Windows::Forms::Form
	{
	private:
             String^ gdni;
			 String^ gnombres;

			 String^ gapellidos;
	public:
		DatosUsuario(string dni,string nombres,string apellidos)
		{
			msclr::interop::marshal_context context;
			gdni=context.marshal_as<String^>(dni);
			gnombres=context.marshal_as<String^>(apellidos);
			gapellidos=context.marshal_as<String^>(nombres);
			InitializeComponent();
			
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~DatosUsuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  txtApellidos;
	private: System::Windows::Forms::TextBox^  txtNombres;
	private: System::Windows::Forms::TextBox^  txtDni;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private:
		/// <summary>
		/// Variable del diseñador requerida.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido del método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtApellidos = (gcnew System::Windows::Forms::TextBox());
			this->txtNombres = (gcnew System::Windows::Forms::TextBox());
			this->txtDni = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtApellidos);
			this->groupBox1->Controls->Add(this->txtNombres);
			this->groupBox1->Controls->Add(this->txtDni);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(10, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(267, 124);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos Generales";
			// 
			// txtApellidos
			// 
			this->txtApellidos->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtApellidos->Location = System::Drawing::Point(82, 82);
			this->txtApellidos->Name = L"txtApellidos";
			this->txtApellidos->ReadOnly = true;
			this->txtApellidos->Size = System::Drawing::Size(153, 20);
			this->txtApellidos->TabIndex = 3;
			// 
			// txtNombres
			// 
			this->txtNombres->CharacterCasing = System::Windows::Forms::CharacterCasing::Upper;
			this->txtNombres->Location = System::Drawing::Point(82, 56);
			this->txtNombres->Name = L"txtNombres";
			this->txtNombres->ReadOnly = true;
			this->txtNombres->Size = System::Drawing::Size(153, 20);
			this->txtNombres->TabIndex = 2;
			// 
			// txtDni
			// 
			this->txtDni->Location = System::Drawing::Point(83, 30);
			this->txtDni->Name = L"txtDni";
			this->txtDni->ReadOnly = true;
			this->txtDni->Size = System::Drawing::Size(100, 20);
			this->txtDni->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(24, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Apellidos:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Nombres:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Dni:";
			// 
			// DatosUsuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(289, 148);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"DatosUsuario";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Datos de Usuario";
			this->Load += gcnew System::EventHandler(this, &DatosUsuario::DatosUsuario_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void DatosUsuario_Load(System::Object^  sender, System::EventArgs^  e) {				
				 txtDni->Text=gdni;
				 txtApellidos->Text=gapellidos;
				 txtNombres->Text=gnombres;
			 }

	/*void leerUsuario(Empleado emp){
		msclr::interop::marshal_context context;
		txtDni->Text= context.marshal_as<String^>( emp.dni );
		txtApellidos->Text= context.marshal_as<String^>( emp.dni );
		'txtNombres->Text= context.marshal_as<String^>( emp.dni );
	}*/
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
