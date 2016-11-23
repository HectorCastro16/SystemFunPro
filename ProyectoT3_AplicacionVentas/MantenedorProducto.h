#pragma once
#include "RegistrarProducto.h"

namespace ProyectoT3_AplicacionVentas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Resumen de MantenedorProducto
	/// </summary>
	public ref class MantenedorProducto : public System::Windows::Forms::Form
	{
	public:
		MantenedorProducto(void)
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
		~MantenedorProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dgvListaProducto;
	protected: 

	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtBuscarProducto;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btnAgregar;
	private: System::Windows::Forms::Button^  button2;


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
			this->dgvListaProducto = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtBuscarProducto = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvListaProducto))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvListaProducto
			// 
			this->dgvListaProducto->AllowUserToAddRows = false;
			this->dgvListaProducto->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListaProducto->Location = System::Drawing::Point(12, 48);
			this->dgvListaProducto->Name = L"dgvListaProducto";
			this->dgvListaProducto->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvListaProducto->Size = System::Drawing::Size(544, 290);
			this->dgvListaProducto->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"BUSCAR PRODUCTO:";
			// 
			// txtBuscarProducto
			// 
			this->txtBuscarProducto->Location = System::Drawing::Point(136, 15);
			this->txtBuscarProducto->Name = L"txtBuscarProducto";
			this->txtBuscarProducto->Size = System::Drawing::Size(322, 20);
			this->txtBuscarProducto->TabIndex = 2;
			this->txtBuscarProducto->TextChanged += gcnew System::EventHandler(this, &MantenedorProducto::txtBuscarProducto_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(464, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Refrescar Lista";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MantenedorProducto::button1_Click);
			// 
			// btnAgregar
			// 
			this->btnAgregar->Location = System::Drawing::Point(168, 355);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(111, 23);
			this->btnAgregar->TabIndex = 4;
			this->btnAgregar->Text = L"Agregar Producto";
			this->btnAgregar->UseVisualStyleBackColor = true;
			this->btnAgregar->Click += gcnew System::EventHandler(this, &MantenedorProducto::btnAgregar_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(298, 355);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Eliminar Producto";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MantenedorProducto::button2_Click);
			// 
			// MantenedorProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(567, 390);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtBuscarProducto);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dgvListaProducto);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MantenedorProducto";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Lista de Productos";
			this->Load += gcnew System::EventHandler(this, &MantenedorProducto::MantenedorProducto_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgvListaProducto))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MantenedorProducto_Load(System::Object^  sender, System::EventArgs^  e) {
				 cargarproductos();
			 }

	void cargarproductos(){
		 String^ conexion="Data Source=.;Initial Catalog=BDVentas;Integrated Security=True";
		SqlConnection^ conDataBase=gcnew SqlConnection(conexion);
		 SqlCommand^ cmdDataBase=gcnew SqlCommand("select prod.IdProducto,prod.Descripcion,prod.Marca,cat.Categoria,prod.StockActual,prod.PrecioCompra,prod.PrecioVenta from Producto prod inner join Categoria cat on prod.IdCategoria=cat.IdCategoria where prod.estado=1;",conDataBase);
		SqlDataReader^ myReader;
		try{
			SqlDataAdapter ^ sda=gcnew SqlDataAdapter();
			sda->SelectCommand =cmdDataBase;
			DataTable^ dbdataset=gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource=gcnew BindingSource();

			bSource->DataSource=dbdataset;
			dgvListaProducto->DataSource=bSource;
			dgvListaProducto->Columns[0]->Visible=false;

			sda->Update(dbdataset);
		}catch(Exception^ex){
			MessageBox::Show(ex->Message);
		}

	}

	void buscarpoducto(){
			 String^ conexion="Data Source=.;Initial Catalog=BDVentas;Integrated Security=True";
		SqlConnection^ conDataBase=gcnew SqlConnection(conexion);
		 SqlCommand^ cmdDataBase=gcnew SqlCommand("select prod.IdProducto,prod.Descripcion,prod.Marca,cat.Categoria,prod.StockActual,prod.PrecioCompra,prod.PrecioVenta from Producto prod inner join Categoria cat on prod.IdCategoria=cat.IdCategoria where prod.estado=1 and prod.Descripcion like '" + txtBuscarProducto -> Text + "%'",conDataBase);
		SqlDataReader^ myReader;
		try{
			SqlDataAdapter ^ sda=gcnew SqlDataAdapter();
			sda->SelectCommand =cmdDataBase;
			DataTable^ dbdataset=gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource=gcnew BindingSource();

			bSource->DataSource=dbdataset;
			dgvListaProducto->DataSource=bSource;
			dgvListaProducto->Columns[0]->Visible=false;

			sda->Update(dbdataset);
		}catch(Exception^ex){
			MessageBox::Show(ex->Message);
		}
	}

	void eliminarproducto(){
		msclr::interop::marshal_context context;
		 String^ conexion="Data Source=.;Initial Catalog=BDVentas;Integrated Security=True";
		SqlConnection^ conDataBase=gcnew SqlConnection(conexion);
		Producto prod;
		int idprod;
		idprod=Convert::ToInt32(dgvListaProducto->CurrentRow->Cells[0]->Value->ToString());
		prod.idproducto=idprod;
		if (MessageBox::Show("Está seguro de Eliminar el Producto Seleccionado?","Eliminación", MessageBoxButtons::YesNo,MessageBoxIcon::Question)==System::Windows::Forms::DialogResult::Yes){
			SqlCommand^ cmdDataBase=gcnew SqlCommand("update producto set estado=0 where Idproducto=" + prod.idproducto +";",conDataBase);
			SqlDataReader^ myReader;
			try{
			conDataBase->Open();
			myReader=cmdDataBase->ExecuteReader();
			MessageBox::Show("Producto Eliminado");
			cargarproductos();
			}catch(Exception^ex){
			MessageBox::Show(ex->Message);
			}
		}	
	}

	private: System::Void btnAgregar_Click(System::Object^  sender, System::EventArgs^  e) {
				 RegistrarProducto^ form2=gcnew RegistrarProducto();
				 form2->ShowDialog();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 buscarpoducto();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 eliminarproducto();
		 }
private: System::Void txtBuscarProducto_TextChanged(System::Object^  sender, System::EventArgs^  e) {
       	   buscarpoducto();
		 }
};
}
