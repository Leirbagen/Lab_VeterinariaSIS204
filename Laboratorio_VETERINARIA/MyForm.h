#pragma once
using namespace ClassVeterinaria;
using namespace std;

namespace LaboratorioVETERINARIA {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		cola_veterinaria^ cola_clientes = gcnew(cola_veterinaria);
		pila_veterinaria^ pila_clientes = gcnew(pila_veterinaria);
		lista_Atencion_veterinaria^ lista_atencion = gcnew(lista_Atencion_veterinaria);
		void clear_atencion() {
			txtDueno->Text = " ";
			txtContacto->Text = " ";
			txtHorallegada->Text = " ";
			txtCantMascotas->Text = " ";
		}
	private: System::Windows::Forms::Panel^ panelAtencion;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnDehacer;

	private: System::Windows::Forms::Button^ btnAtender;

	public: System::Windows::Forms::TextBox^ textBox4;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnAtencionConsulta;

	private: System::Windows::Forms::Label^ lblTitulo;


















	private: System::Windows::Forms::DateTimePicker^ dateTimeFecha;


	private: System::Windows::Forms::Label^ label6;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dueño;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contacto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hora;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CantMascotas;
	private: System::Windows::Forms::Panel^ panelCola;



	private: System::Windows::Forms::NumericUpDown^ txtCantMascotas;

	private: System::Windows::Forms::Button^ btnLimpiar;
	private: System::Windows::Forms::Button^ btnEliminar;
	private: System::Windows::Forms::Button^ btnInsertar;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ txtHorallegada;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtContacto;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtDueno;
	private: System::Windows::Forms::Label^ label2;















































	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnAtencionConsulta = (gcnew System::Windows::Forms::Button());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->dateTimeFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnDehacer = (gcnew System::Windows::Forms::Button());
			this->btnAtender = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Dueño = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contacto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CantMascotas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panelCola = (gcnew System::Windows::Forms::Panel());
			this->txtCantMascotas = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnLimpiar = (gcnew System::Windows::Forms::Button());
			this->btnEliminar = (gcnew System::Windows::Forms::Button());
			this->btnInsertar = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtHorallegada = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtContacto = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtDueno = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panelAtencion = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panelCola->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtCantMascotas))->BeginInit();
			this->panelAtencion->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->button1->Location = System::Drawing::Point(51, 122);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 82);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cola de Atencion";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// btnAtencionConsulta
			// 
			this->btnAtencionConsulta->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAtencionConsulta->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnAtencionConsulta->Location = System::Drawing::Point(51, 269);
			this->btnAtencionConsulta->Name = L"btnAtencionConsulta";
			this->btnAtencionConsulta->Size = System::Drawing::Size(179, 82);
			this->btnAtencionConsulta->TabIndex = 1;
			this->btnAtencionConsulta->Text = L"Atencion en Consulta";
			this->btnAtencionConsulta->UseVisualStyleBackColor = true;
			this->btnAtencionConsulta->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(54, 41);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(241, 85);
			this->lblTitulo->TabIndex = 2;
			this->lblTitulo->Text = L"COLA";
			this->lblTitulo->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// dateTimeFecha
			// 
			this->dateTimeFecha->CalendarMonthBackground = System::Drawing::SystemColors::HotTrack;
			this->dateTimeFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimeFecha->Location = System::Drawing::Point(1259, 85);
			this->dateTimeFecha->Name = L"dateTimeFecha";
			this->dateTimeFecha->ShowUpDown = true;
			this->dateTimeFecha->Size = System::Drawing::Size(200, 31);
			this->dateTimeFecha->TabIndex = 14;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1314, 212);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(350, 51);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Cola de Atención";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->btnAtencionConsulta);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(281, 905);
			this->panel1->TabIndex = 18;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->lblTitulo);
			this->panel2->Controls->Add(this->dateTimeFecha);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(281, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1694, 161);
			this->panel2->TabIndex = 19;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->btnDehacer);
			this->panel3->Controls->Add(this->btnAtender);
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->panelCola);
			this->panel3->Controls->Add(this->panelAtencion);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1975, 905);
			this->panel3->TabIndex = 20;
			// 
			// btnDehacer
			// 
			this->btnDehacer->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDehacer->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnDehacer->Location = System::Drawing::Point(1540, 659);
			this->btnDehacer->Name = L"btnDehacer";
			this->btnDehacer->Size = System::Drawing::Size(239, 63);
			this->btnDehacer->TabIndex = 31;
			this->btnDehacer->Text = L"Deshacer Atencion";
			this->btnDehacer->UseVisualStyleBackColor = true;
			this->btnDehacer->Visible = false;
			this->btnDehacer->Click += gcnew System::EventHandler(this, &MyForm::btnDehacer_Click);
			// 
			// btnAtender
			// 
			this->btnAtender->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAtender->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnAtender->Location = System::Drawing::Point(1231, 659);
			this->btnAtender->Name = L"btnAtender";
			this->btnAtender->Size = System::Drawing::Size(239, 63);
			this->btnAtender->TabIndex = 30;
			this->btnAtender->Text = L"Atender";
			this->btnAtender->UseVisualStyleBackColor = true;
			this->btnAtender->Visible = false;
			this->btnAtender->Click += gcnew System::EventHandler(this, &MyForm::btnAtender_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Dueño,
					this->Contacto, this->Hora, this->CantMascotas
			});
			this->dataGridView1->Location = System::Drawing::Point(1073, 303);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(851, 310);
			this->dataGridView1->TabIndex = 1;
			// 
			// Dueño
			// 
			this->Dueño->HeaderText = L"Dueño";
			this->Dueño->MinimumWidth = 10;
			this->Dueño->Name = L"Dueño";
			this->Dueño->Width = 200;
			// 
			// Contacto
			// 
			this->Contacto->HeaderText = L"Contacto";
			this->Contacto->MinimumWidth = 10;
			this->Contacto->Name = L"Contacto";
			this->Contacto->Width = 200;
			// 
			// Hora
			// 
			this->Hora->HeaderText = L"Hora";
			this->Hora->MinimumWidth = 10;
			this->Hora->Name = L"Hora";
			this->Hora->Width = 200;
			// 
			// CantMascotas
			// 
			this->CantMascotas->HeaderText = L"CantMascotas";
			this->CantMascotas->MinimumWidth = 10;
			this->CantMascotas->Name = L"CantMascotas";
			this->CantMascotas->Width = 200;
			// 
			// panelCola
			// 
			this->panelCola->Controls->Add(this->txtCantMascotas);
			this->panelCola->Controls->Add(this->btnLimpiar);
			this->panelCola->Controls->Add(this->btnEliminar);
			this->panelCola->Controls->Add(this->btnInsertar);
			this->panelCola->Controls->Add(this->label5);
			this->panelCola->Controls->Add(this->txtHorallegada);
			this->panelCola->Controls->Add(this->label4);
			this->panelCola->Controls->Add(this->txtContacto);
			this->panelCola->Controls->Add(this->label3);
			this->panelCola->Controls->Add(this->txtDueno);
			this->panelCola->Controls->Add(this->label2);
			this->panelCola->Location = System::Drawing::Point(308, 215);
			this->panelCola->Name = L"panelCola";
			this->panelCola->Size = System::Drawing::Size(736, 671);
			this->panelCola->TabIndex = 0;
			// 
			// txtCantMascotas
			// 
			this->txtCantMascotas->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.125F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->txtCantMascotas->Location = System::Drawing::Point(79, 450);
			this->txtCantMascotas->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->txtCantMascotas->Name = L"txtCantMascotas";
			this->txtCantMascotas->Size = System::Drawing::Size(324, 38);
			this->txtCantMascotas->TabIndex = 28;
			this->txtCantMascotas->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnLimpiar
			// 
			this->btnLimpiar->AutoSize = true;
			this->btnLimpiar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnLimpiar->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnLimpiar->Location = System::Drawing::Point(504, 303);
			this->btnLimpiar->Name = L"btnLimpiar";
			this->btnLimpiar->Size = System::Drawing::Size(140, 63);
			this->btnLimpiar->TabIndex = 27;
			this->btnLimpiar->Text = L"Limpiar";
			this->btnLimpiar->UseVisualStyleBackColor = true;
			this->btnLimpiar->Click += gcnew System::EventHandler(this, &MyForm::btnLimpiar_Click);
			// 
			// btnEliminar
			// 
			this->btnEliminar->AutoSize = true;
			this->btnEliminar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnEliminar->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnEliminar->Location = System::Drawing::Point(504, 180);
			this->btnEliminar->Name = L"btnEliminar";
			this->btnEliminar->Size = System::Drawing::Size(140, 63);
			this->btnEliminar->TabIndex = 26;
			this->btnEliminar->Text = L"Eliminar";
			this->btnEliminar->UseVisualStyleBackColor = true;
			this->btnEliminar->Click += gcnew System::EventHandler(this, &MyForm::btnEliminar_Click);
			// 
			// btnInsertar
			// 
			this->btnInsertar->AutoSize = true;
			this->btnInsertar->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnInsertar->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnInsertar->Location = System::Drawing::Point(504, 66);
			this->btnInsertar->Name = L"btnInsertar";
			this->btnInsertar->Size = System::Drawing::Size(140, 63);
			this->btnInsertar->TabIndex = 25;
			this->btnInsertar->Text = L"Insertar";
			this->btnInsertar->UseVisualStyleBackColor = true;
			this->btnInsertar->Click += gcnew System::EventHandler(this, &MyForm::btnInsertar_Click);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(88, 397);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(315, 36);
			this->label5->TabIndex = 24;
			this->label5->Text = L"Cantidad de Mascotas";
			// 
			// txtHorallegada
			// 
			this->txtHorallegada->Location = System::Drawing::Point(79, 316);
			this->txtHorallegada->MaxLength = 100;
			this->txtHorallegada->Multiline = true;
			this->txtHorallegada->Name = L"txtHorallegada";
			this->txtHorallegada->Size = System::Drawing::Size(324, 50);
			this->txtHorallegada->TabIndex = 23;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(88, 277);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(315, 36);
			this->label4->TabIndex = 22;
			this->label4->Text = L"Hora de Llegada";
			// 
			// txtContacto
			// 
			this->txtContacto->Location = System::Drawing::Point(79, 196);
			this->txtContacto->MaxLength = 100;
			this->txtContacto->Multiline = true;
			this->txtContacto->Name = L"txtContacto";
			this->txtContacto->Size = System::Drawing::Size(324, 50);
			this->txtContacto->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(88, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(315, 36);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Informacion de Contacto";
			// 
			// txtDueno
			// 
			this->txtDueno->Location = System::Drawing::Point(79, 79);
			this->txtDueno->MaxLength = 100;
			this->txtDueno->Multiline = true;
			this->txtDueno->Name = L"txtDueno";
			this->txtDueno->Size = System::Drawing::Size(324, 50);
			this->txtDueno->TabIndex = 19;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(88, 40);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(217, 36);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Nombre del dueño";
			// 
			// panelAtencion
			// 
			this->panelAtencion->Controls->Add(this->textBox4);
			this->panelAtencion->Controls->Add(this->label1);
			this->panelAtencion->Controls->Add(this->textBox1);
			this->panelAtencion->Controls->Add(this->label7);
			this->panelAtencion->Controls->Add(this->textBox2);
			this->panelAtencion->Controls->Add(this->label8);
			this->panelAtencion->Controls->Add(this->textBox3);
			this->panelAtencion->Controls->Add(this->label9);
			this->panelAtencion->Location = System::Drawing::Point(308, 212);
			this->panelAtencion->Name = L"panelAtencion";
			this->panelAtencion->Size = System::Drawing::Size(736, 671);
			this->panelAtencion->TabIndex = 29;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(79, 447);
			this->textBox4->MaxLength = 100;
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(324, 50);
			this->textBox4->TabIndex = 25;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(88, 397);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(315, 36);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Cantidad de Mascotas";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(79, 316);
			this->textBox1->MaxLength = 100;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(324, 50);
			this->textBox1->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(88, 277);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(315, 36);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Hora de Llegada";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(79, 196);
			this->textBox2->MaxLength = 100;
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(324, 50);
			this->textBox2->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(88, 157);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(315, 36);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Informacion de Contacto";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(79, 79);
			this->textBox3->MaxLength = 100;
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(324, 50);
			this->textBox3->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(88, 40);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(217, 36);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Nombre del dueño";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1975, 905);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel3);
			this->Name = L"MyForm";
			this->Text = L"Veterinaria";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panelCola->ResumeLayout(false);
			this->panelCola->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtCantMascotas))->EndInit();
			this->panelAtencion->ResumeLayout(false);
			this->panelAtencion->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		panelAtencion->Visible = false;
		btnAtender->Visible = false;
		btnDehacer->Visible = false;
		panelCola->Visible = true;
		lblTitulo->Text = "COLA";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		panelCola->Visible = false;
		panelAtencion->Visible = true;
		btnAtender->Visible = true;
		btnDehacer->Visible = true;
		lblTitulo->Text = "ATENCION A CLIENTE";

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void btnInsertar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ texto = txtCantMascotas->Text;
	int numero = Int32::Parse(texto);
	datos^ nueva = gcnew datos(txtDueno->Text, txtContacto->Text, txtHorallegada->Text, numero);
	cola_clientes->AgregarFinal(nueva); //se adiciona en la cola
	//utilizando grid, se adiciona una fila con los datos
	array<String^>^ fila = gcnew array<String^>{ txtDueno->Text, txtContacto->Text, txtHorallegada->Text, texto };
	dataGridView1->Rows->Add(fila);
	dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
}
private: System::Void btnEliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	datos^ primero;
	primero = cola_clientes->EliminarInicio();
	if (dataGridView1->Rows->Count > 0) {
		//Accede a la primera fila
		DataGridViewRow^ fila = dataGridView1->Rows[0];
		// Guarda los valores en los TextBox
		txtDueno->Text = fila->Cells[0]->Value != nullptr ? fila->Cells[0]->Value->ToString() : "";
		txtContacto->Text = fila->Cells[1]->Value != nullptr ? fila->Cells[1]->Value->ToString() : "";
		txtCantMascotas->Text = fila->Cells[3]->Value != nullptr ? fila->Cells[3]->Value->ToString() : "";
		// Elimina la fila del grid
		dataGridView1->Rows->RemoveAt(0);
		// Opcional: seleccionar la nueva primera fila si existe
		if (dataGridView1->Rows->Count > 0) {
			dataGridView1->ClearSelection();
			dataGridView1->Rows[0]->Selected = true;
		}
	}
}
private: System::Void btnLimpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	txtDueno->Text = "";
    txtContacto->Text = "";
    txtHorallegada->Text = ""; 
    // Reiniciar el NumericUpDown
    txtCantMascotas->Value = 0; // o el mínimo que tengas configurado

    // Opcional: limpiar todas las filas del DataGridView
    dataGridView1->Rows->Clear();

    // Opcional: limpiar la cola lógica también
    cola_clientes = gcnew cola_veterinaria(); // reinicia la cola
}

private: System::Void btnAtender_Click(System::Object^ sender, System::EventArgs^ e) {
	clear_atencion();
	datos^ primero;
	// Sacando de la cola, para atender
	primero = cola_clientes->EliminarInicio();
	//Elimina de la tabla visual
	if (dataGridView1->Rows->Count > 0) {
		pila_clientes->Agregar(primero); // agrega a la pila, el elemento eliminado de la cola
		// Accede a la primera fila del DataGgrid
		DataGridViewRow^ fila = dataGridView1->Rows[0];
		// Guarda los valores en los TextBox
		txtDueno->Text = fila->Cells[0]->Value != nullptr ? fila->Cells[0]->Value->ToString() : "";
		txtContacto->Text = fila->Cells[1]->Value != nullptr ? fila->Cells[1]->Value->ToString() : "";
		txtHorallegada->Text = fila->Cells[2]->Value != nullptr ? fila->Cells[2]->Value->ToString() : "";
		txtCantMascotas->Text = fila->Cells[3]->Value != nullptr ? fila->Cells[3]->Value->ToString() : "";
		// Elimina la fila del grid
		dataGridView1->Rows->RemoveAt(0);
		// Opcional: seleccionar la nueva primera fila si existe
		if (dataGridView1->Rows->Count > 0) {
			dataGridView1->ClearSelection();
			dataGridView1->Rows[0]->Selected = true;
		}
	}
}
private: System::Void btnDehacer_Click(System::Object^ sender, System::EventArgs^ e) {
	datos^ primero;
	primero = pila_clientes->Eliminar(); //se Saca de la pila
	if (primero != nullptr) {
		cola_clientes->AgregarInicio(primero);//Se vuelve a poner a la cola
		//Ahora hay que adicionarlo al Grid
		dataGridView1->Rows->Insert(0, primero->getDueno(), primero->getContacto(), primero -> getHora_llegada(), primero->getcantmascotas());dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;dataGridView1->CurrentCell = dataGridView1->Rows[0]->Cells[0];
		clear_atencion();
	}
}
};
}
