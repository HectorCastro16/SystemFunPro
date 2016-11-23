#pragma once
#include <msclr\marshal_cppstd.h>
#include "Estructuras.h"

namespace ProyectoT3_AplicacionVentas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Resumen de RegistrarProducto
	/// </summary>
	public ref class RegistrarProducto : public System::Windows::Forms::Form
	{
	public:
		RegistrarProducto(void)
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
		~RegistrarProducto()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::ComboBox^  cboRegistrarProducto;
	private: System::Windows::Forms::TextBox^  txtStock;
	protected: 


	private: System::Windows::Forms::TextBox^  txtPCompra;
	private: System::Windows::Forms::TextBox^  txtPventa;


	private: System::Windows::Forms::TextBox^  txtMarca;

	private: System::Windows::Forms::TextBox^  txtDescripcion;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btnRegistrarProducto;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->cboRegistrarProducto = (gcnew System::Windows::Forms::ComboBox());
			this->txtStock = (gcnew System::Windows::Forms::TextBox());
			this->txtPCompra = (gcnew System::Windows::Forms::TextBox());
			this->txtPventa = (gcnew System::Windows::Forms::TextBox());
			this->txtMarca = (gcnew System::Windows::Forms::TextBox());
			this->txtDescripcion = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnRegistrarProducto = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->cboRegistrarProducto);
			this->groupBox1->Controls->Add(this->txtStock);
			this->groupBox1->Controls->Add(this->txtPCompra);
			this->groupBox1->Controls->Add(this->txtPventa);
			this->groupBox1->Controls->Add(this->txtMarca);
			this->groupBox1->Controls->Add(this->txtDescripcion);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(414, 195);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Datos de Producto";
			// 
			// cboRegistrarProducto
			// 
			this->cboRegistrarProducto->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cboRegistrarProducto->FormattingEnabled = true;
			this->cboRegistrarProducto->Location = System::Drawing::Point(95, 70);
			this->cboRegistrarProducto->Name = L"cboRegistrarProducto";
			this->cboRegistrarProducto->Size = System::Drawing::Size(111, 21);
			this->cboRegistrarProducto->TabIndex = 2;
			// 
			// txtStock
			// 
			this->txtStock->Location = System::Drawing::Point(95, 154);
			this->txtStock->Name = L"txtStock";
			this->txtStock->Size = System::Drawing::Size(57, 20);
			this->txtStock->TabIndex = 6;
			// 
			// txtPCompra
			// 
			this->txtPCompra->Location = System::Drawing::Point(95, 110);
			this->txtPCompra->Name = L"txtPCompra";
			this->txtPCompra->Size = System::Drawing::Size(57, 20);
			this->txtPCompra->TabIndex = 4;
			// 
			// txtPventa
			// 
			this->txtPventa->Location = System::Drawing::Point(286, 110);
			this->txtPventa->Name = L"txtPventa";
			this->txtPventa->Size = System::Drawing::Size(57, 20);
			this->txtPventa->TabIndex = 5;
			// 
			// txtMarca
			// 
			this->txtMarca->Location = System::Drawing::Point(286, 71);
			this->txtMarca->Name = L"txtMarca";
			this->txtMarca->Size = System::Drawing::Size(104, 20);
			this->txtMarca->TabIndex = 3;
			// 
			// txtDescripcion
			// 
			this->txtDescripcion->Location = System::Drawing::Point(95, 34);
			this->txtDescripcion->Name = L"txtDescripcion";
			this->txtDescripcion->Size = System::Drawing::Size(295, 20);
			this->txtDescripcion->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(195, 113);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"PrecioVenta:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 113);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"PrecioCompra:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 157);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(38, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Stock:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(57, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Categoría:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(223, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(40, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Marca:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Descripción:";
			// 
			// btnRegistrarProducto
			// 
			this->btnRegistrarProducto->Location = System::Drawing::Point(122, 213);
			this->btnRegistrarProducto->Name = L"btnRegistrarProducto";
			this->btnRegistrarProducto->Size = System::Drawing::Size(84, 37);
			this->btnRegistrarProducto->TabIndex = 1;
			this->btnRegistrarProducto->Text = L"Registrar";
			this->btnRegistrarProducto->UseVisualStyleBackColor = true;
			this->btnRegistrarProducto->Click += gcnew System::EventHandler(this, &RegistrarProducto::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(225, 213);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(84, 37);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Salir";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &RegistrarProducto::button2_Click);
			// 
			// RegistrarProducto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(438, 255);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->btnRegistrarProducto);
			this->Controls->Add(this->groupBox1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"RegistrarProducto";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Registro de Productos";
			this->Load += gcnew System::EventHandler(this, &RegistrarProducto::RegistrarProducto_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				Close();
			 }
private: System::Void RegistrarProducto_Load(System::Object^  sender, System::EventArgs^  e) {
		cargarCategorias();
		 }
void cargarCategorias(){
	  String^ conexion="Data Source=.;Initial Catalog=BDVentas;Integrated Security=True";
		SqlConnection^ conDataBase=gcnew SqlConnection(conexion);
		 SqlCommand^ cmdDataBase=gcnew SqlCommand("select idcategoria,categoria from categoria",conDataBase);
		SqlDataReader^ myReader;
		try{
			SqlDataAdapter ^ sda=gcnew SqlDataAdapter();
			sda->SelectCommand =cmdDataBase;
			DataTable^ dbdataset=gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource=gcnew BindingSource();

			bSource->DataSource=dbdataset;
			cboRegistrarProducto->DataSource=bSource;
			cboRegistrarProducto->DisplayMember="categoria";
			cboRegistrarProducto->ValueMember="idcategoria";
			sda->Update(dbdataset);
		}catch(Exception^ex){
			MessageBox::Show(ex->Message);
		}
}

	void registrarproducto(){
		msclr::interop::marshal_context context;
		 String^ conexion="Data Source=.;Initial Catalog=BDVentas;Integrated Security=True";
		SqlConnection^ conDataBase=gcnew SqlConnection(conexion);
		Producto prod;
		int categoria;
		categoria=Convert::ToInt32(cboRegistrarProducto->SelectedValue->ToString());
		prod.idcategoria=categoria;
		prod.descripcion=context.marshal_as<std::string>(txtDescripcion -> Text);
		prod.marca=context.marshal_as<std::string>(txtMarca -> Text);
		prod.stockactual=Convert::ToInt32(txtStock->Text);
		prod.preciocompra=Convert::ToDouble(txtPCompra->Text);
		prod.precioventa=Convert::ToDouble(txtPventa->Text);

		SqlCommand^ cmdDataBase=gcnew SqlCommand("insert into Producto(Descripcion,Marca,IdCategoria,StockActual,PrecioCompra,PrecioVenta,Estado) values('" + context.marshal_as<String^>( prod.descripcion ) + "','"+ context.marshal_as<String^>( prod.marca ) + "'," + prod.idcategoria + "," + prod.stockactual + "," + prod.preciocompra + "," + prod.precioventa +",1);",conDataBase);
		SqlDataReader^ myReader;
		try{
			conDataBase->Open();
			myReader=cmdDataBase->ExecuteReader();
			MessageBox::Show("Producto Registrado");
		}catch(Exception^ex){
			MessageBox::Show(ex->Message);
		}
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		registrarproducto();
		 }
};
}
