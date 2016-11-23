#pragma once

namespace ProyectoT3_AplicacionVentas {
	// Raul - Probando ando... funciona 
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Resumen de MantenedorEmpleado
	/// </summary>
	public ref class MantenedorEmpleado : public System::Windows::Forms::Form
	{
	public:
		MantenedorEmpleado(void)
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
		~MantenedorEmpleado()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnRecargar;
	protected: 

	private: System::Windows::Forms::TextBox^  txtBuscarEmpleado;
	protected: 

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::DataGridView^  dgvListaEmpleado;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  btnAgregar;

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
			this->btnRecargar = (gcnew System::Windows::Forms::Button());
			this->txtBuscarEmpleado = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dgvListaEmpleado = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListaEmpleado))->BeginInit();
			this->SuspendLayout();
			// 
			// btnRecargar
			// 
			this->btnRecargar->Location = System::Drawing::Point(463, 14);
			this->btnRecargar->Name = L"btnRecargar";
			this->btnRecargar->Size = System::Drawing::Size(92, 23);
			this->btnRecargar->TabIndex = 7;
			this->btnRecargar->Text = L"Refrescar Lista";
			this->btnRecargar->UseVisualStyleBackColor = true;
			// 
			// txtBuscarEmpleado
			// 
			this->txtBuscarEmpleado->Location = System::Drawing::Point(135, 16);
			this->txtBuscarEmpleado->Name = L"txtBuscarEmpleado";
			this->txtBuscarEmpleado->Size = System::Drawing::Size(322, 20);
			this->txtBuscarEmpleado->TabIndex = 6;
			this->txtBuscarEmpleado->TextChanged += gcnew System::EventHandler(this, &MantenedorEmpleado::txtBuscarEmpleado_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(11, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"BUSCAR PRODUCTO:";
			// 
			// dgvListaEmpleado
			// 
			this->dgvListaEmpleado->AllowUserToAddRows = false;
			this->dgvListaEmpleado->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListaEmpleado->Location = System::Drawing::Point(11, 49);
			this->dgvListaEmpleado->Name = L"dgvListaEmpleado";
			this->dgvListaEmpleado->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvListaEmpleado->Size = System::Drawing::Size(544, 290);
			this->dgvListaEmpleado->TabIndex = 4;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(280, 345);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Eliminar Empleado";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(150, 345);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(111, 23);
			this->btnAgregar->TabIndex = 8;
			this->btnAgregar->Text = L"Agregar Empleado";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &MantenedorEmpleado::btnAgregar_Click);
			// 
			// MantenedorEmpleado
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(567, 373);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->btnRecargar);
			this->Controls->Add(this->txtBuscarEmpleado);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvListaEmpleado);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MantenedorEmpleado";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lista de Empleados";
			this->Load += gcnew System::EventHandler(this, &MantenedorEmpleado::MantenedorEmpleado_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListaEmpleado))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MantenedorEmpleado_Load(System::Object^  sender, System::EventArgs^  e) {
				 cargaempleados();
			 }

	void cargaempleados(){
		 String^ conexion="Data Source=.;Initial Catalog=BDVentas;Integrated Security=True";
		SqlConnection^ conDataBase=gcnew SqlConnection(conexion);
		 SqlCommand^ cmdDataBase=gcnew SqlCommand("select * from Empleado",conDataBase);
		SqlDataReader^ myReader;
		try{
			SqlDataAdapter ^ sda=gcnew SqlDataAdapter();
			sda->SelectCommand =cmdDataBase;
			DataTable^ dbdataset=gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource=gcnew BindingSource();

			bSource->DataSource=dbdataset;
			dgvListaEmpleado->DataSource=bSource;
			dgvListaEmpleado->Columns[0]->Visible=false;

			sda->Update(dbdataset);
		}catch(Exception^ex){
			MessageBox::Show(ex->Message);
		}

	}

	void buscaempleado(){
			String^ conexion="Data Source=.;Initial Catalog=BDVentas;Integrated Security=True";
		SqlConnection^ conDataBase=gcnew SqlConnection(conexion);
		 SqlCommand^ cmdDataBase=gcnew SqlCommand("select * from empleado where prod.estado=1 and Dni like '" + txtBuscarEmpleado -> Text + "%'",conDataBase);
		SqlDataReader^ myReader;
		try{
			SqlDataAdapter ^ sda=gcnew SqlDataAdapter();
			sda->SelectCommand =cmdDataBase;
			DataTable^ dbdataset=gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource=gcnew BindingSource();

			bSource->DataSource=dbdataset;
			dgvListaEmpleado->DataSource=bSource;
			dgvListaEmpleado->Columns[0]->Visible=false;

			sda->Update(dbdataset);
		}catch(Exception^ex){
			MessageBox::Show(ex->Message);
		}
	}
private: System::Void txtBuscarEmpleado_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 buscaempleado();
		 }
private: System::Void btnAgregar_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
