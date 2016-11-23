#pragma once
#include "Sistema.h"
#include "Estructuras.h"
#include <msclr\marshal_cppstd.h>
#include <stdlib.h>
#include <string>
namespace ProyectoT3_AplicacionVentas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data::SqlClient;
	using namespace System::Drawing;
	/// <summary>
	/// Resumen de Principal1
	/// </summary>

	public ref class Principal1 : public System::Windows::Forms::Form
	{
	public:
		Principal1(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Principal1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnIngresar;
	protected: 
	private: System::Windows::Forms::Button^  btnSalir;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtUsuario;
	private: System::Windows::Forms::TextBox^  txtClave;
	private: System::Windows::Forms::GroupBox^  groupBox1;



	protected: 


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
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->txtClave = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnIngresar
			// 
			this->btnIngresar->Location = System::Drawing::Point(55, 112);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(69, 29);
			this->btnIngresar->TabIndex = 3;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = true;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &Principal1::btnIngresar_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->Location = System::Drawing::Point(143, 112);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(69, 29);
			this->btnSalir->TabIndex = 4;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &Principal1::btnSalir_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Usuario:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 62);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Clave:";
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(118, 27);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(100, 20);
			this->txtUsuario->TabIndex = 1;
			// 
			// txtClave
			// 
			this->txtClave->Location = System::Drawing::Point(118, 59);
			this->txtClave->Name = L"txtClave";
			this->txtClave->PasswordChar = '*';
			this->txtClave->Size = System::Drawing::Size(100, 20);
			this->txtClave->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->txtClave);
			this->groupBox1->Controls->Add(this->txtUsuario);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(257, 94);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Ingrese los Datos:";
			// 
			// Principal1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(279, 153);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnIngresar);
			this->Controls->Add(this->btnSalir);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Principal1";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Acceso al Sistema";
			this->Load += gcnew System::EventHandler(this, &Principal1::Principal1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			    
			 }

	private: System::Void btnIngresar_Click(System::Object^  sender, System::EventArgs^  e) {
			/*    String^ aaa=txtUsuario -> Text; */
				msclr::interop::marshal_context context;
			/*	std::string standardString = context.marshal_as<std::string>(aaa);
				aaa = context.marshal_as<String^>( standardString );
				MessageBox::Show(aaa); */
				 String^ empleado;		
			    /*	 int n;
				 n= Convert::ToInt32(txtUsuario -> Text);*/
				 String^ conexion="Data Source=.;Initial Catalog=BDVentas;Integrated Security=True";
				 SqlConnection^ conDataBase=gcnew SqlConnection(conexion);
				 Usuario usu;
				 Empleado emp;
				 usu.usu=context.marshal_as<std::string>(txtUsuario -> Text);
				 usu.cla=context.marshal_as<std::string>(txtClave -> Text);
				/* usu.idusuario=n;*/
				 SqlCommand^ cmdDataBase=gcnew SqlCommand("select usu.idusuario, usu.usuario, usu.clave, usu.estado, CONCAT(emp.apellidos,' ',emp.nombres) as Empleado, emp.Nombres, emp.Apellidos,emp.Dni from Usuario usu inner join Empleado emp on usu.IdEmpleado=emp.IdEmpleado where usu.usuario='" + context.marshal_as<String^>( usu.usu ) + "' and usu.clave='" + context.marshal_as<String^>( usu.cla ) + "';",conDataBase);
				 SqlDataReader^ myReader;
				 

				 try{
					 conDataBase->Open();
					 myReader=cmdDataBase->ExecuteReader();
					 int contador=0;
					 while (myReader->Read())
					 {
						emp.dni=context.marshal_as<std::string>(myReader->GetString(7));
						emp.nombres=context.marshal_as<std::string>(myReader->GetString(5));
						emp.apellidos=context.marshal_as<std::string>(myReader->GetString(6));
					    empleado=myReader->GetString(4);
						contador++;
					 }
					 if(contador==1){
						
						 MessageBox::Show("Bienvenido al Sistema Sr. "+empleado);
						 this -> Hide();
						 Sistema^ form2=gcnew Sistema(emp.dni,emp.nombres,emp.apellidos);
						 form2->ShowDialog();

					 }else{
						 MessageBox::Show("Datos Incorrectos");
					 }
				 }catch(Exception^ex){
					 MessageBox::Show(ex->Message);
			 }
			 }

private: System::Void btnSalir_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close();
		 }
private: System::Void Principal1_Load(System::Object^  sender, System::EventArgs^  e) {
			 txtUsuario->Focus();
		 }
};
}
