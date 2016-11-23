#pragma once
#include "MantenedorProducto.h"
#include "MantenedorEmpleado.h"
#include "DatosUsuario.h"
#include <string>
#include <msclr\marshal_cppstd.h>

namespace ProyectoT3_AplicacionVentas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Sistema
	/// </summary>
	public ref class Sistema : public System::Windows::Forms::Form
	{
	private:
		String^ vdni;
		String^ vnombres;
	private: System::Windows::Forms::ToolStripMenuItem^  empleadosToolStripMenuItem;
			 String^ vapellidos;
		
	public:
		Sistema(string dni,string nombres,string apellidos)
		{
			
			InitializeComponent();
			msclr::interop::marshal_context context;
			vdni=context.marshal_as<String^>(dni);
			vapellidos=context.marshal_as<String^>(apellidos);
			vnombres=context.marshal_as<String^>(nombres);
			//
			//TODO: agregar código de constructor aquí
			//
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén utilizando.
		/// </summary>
		~Sistema()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  inicioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  datosUsuarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  productosToolStripMenuItem;
	private: System::Windows::Forms::Label^  lblDni;
	private: System::Windows::Forms::Label^  lblNombres;
	private: System::Windows::Forms::Label^  lblApellidos;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->inicioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->datosUsuarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->productosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->lblDni = (gcnew System::Windows::Forms::Label());
			this->lblNombres = (gcnew System::Windows::Forms::Label());
			this->lblApellidos = (gcnew System::Windows::Forms::Label());
			this->empleadosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->inicioToolStripMenuItem, 
				this->mantenimientoToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(749, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// inicioToolStripMenuItem
			// 
			this->inicioToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->datosUsuarioToolStripMenuItem, 
				this->salirToolStripMenuItem});
			this->inicioToolStripMenuItem->Name = L"inicioToolStripMenuItem";
			this->inicioToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->inicioToolStripMenuItem->Text = L"Inicio";
			// 
			// datosUsuarioToolStripMenuItem
			// 
			this->datosUsuarioToolStripMenuItem->Name = L"datosUsuarioToolStripMenuItem";
			this->datosUsuarioToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->datosUsuarioToolStripMenuItem->Text = L"Datos Usuario";
			this->datosUsuarioToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sistema::datosUsuarioToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(147, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sistema::salirToolStripMenuItem_Click);
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->productosToolStripMenuItem, 
				this->empleadosToolStripMenuItem});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// productosToolStripMenuItem
			// 
			this->productosToolStripMenuItem->Name = L"productosToolStripMenuItem";
			this->productosToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->productosToolStripMenuItem->Text = L"Productos";
			this->productosToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sistema::productosToolStripMenuItem_Click);
			// 
			// lblDni
			// 
			this->lblDni->AutoSize = true;
			this->lblDni->Location = System::Drawing::Point(396, 95);
			this->lblDni->Name = L"lblDni";
			this->lblDni->Size = System::Drawing::Size(35, 13);
			this->lblDni->TabIndex = 1;
			this->lblDni->Text = L"label1";
			this->lblDni->Visible = false;
			// 
			// lblNombres
			// 
			this->lblNombres->AutoSize = true;
			this->lblNombres->Location = System::Drawing::Point(396, 123);
			this->lblNombres->Name = L"lblNombres";
			this->lblNombres->Size = System::Drawing::Size(35, 13);
			this->lblNombres->TabIndex = 2;
			this->lblNombres->Text = L"label2";
			this->lblNombres->Visible = false;
			// 
			// lblApellidos
			// 
			this->lblApellidos->AutoSize = true;
			this->lblApellidos->Location = System::Drawing::Point(396, 150);
			this->lblApellidos->Name = L"lblApellidos";
			this->lblApellidos->Size = System::Drawing::Size(35, 13);
			this->lblApellidos->TabIndex = 3;
			this->lblApellidos->Text = L"label3";
			this->lblApellidos->Visible = false;
			// 
			// empleadosToolStripMenuItem
			// 
			this->empleadosToolStripMenuItem->Name = L"empleadosToolStripMenuItem";
			this->empleadosToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->empleadosToolStripMenuItem->Text = L"Empleados";
			this->empleadosToolStripMenuItem->Click += gcnew System::EventHandler(this, &Sistema::empleadosToolStripMenuItem_Click);
			// 
			// Sistema
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(749, 534);
			this->Controls->Add(this->lblApellidos);
			this->Controls->Add(this->lblNombres);
			this->Controls->Add(this->lblDni);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Sistema";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sistema";
			this->Load += gcnew System::EventHandler(this, &Sistema::Sistema_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }
	private: System::Void productosToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			MantenedorProducto^ form2=gcnew MantenedorProducto();
			form2->ShowDialog();
			 }
private: System::Void datosUsuarioToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 msclr::interop::marshal_context context;
			 Empleado emp;
			 emp.dni=context.marshal_as<std::string>(vdni);
			 emp.nombres=context.marshal_as<std::string>(vnombres);
			 emp.apellidos=context.marshal_as<std::string>(vapellidos);		 
			 DatosUsuario^ form3=gcnew DatosUsuario(emp.dni,emp.nombres,emp.apellidos);
			 form3->ShowDialog();
		 }
private: System::Void Sistema_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void empleadosToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MantenedorEmpleado^ form2=gcnew MantenedorEmpleado();
			form2->ShowDialog();
		 }
};
}
