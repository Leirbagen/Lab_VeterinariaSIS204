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
	private: System::Windows::Forms::Button^ btnCerrarLista;
	public:
	private: System::Windows::Forms::Button^ btnVerLista;
	private: System::Windows::Forms::DataGridView^ dgvLista;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ NombreLis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ContactoLis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HoraLlegadaLis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CantMascotasLis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CostoTotal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Pagado;
	public:

		void clear_atencion() {
			txtDueno->Clear();
			txtContacto->Clear();
			txtHorallegada->Clear();
			txtCantMascotas->Value = 0;
		}
		void clear_ventana() {
			txtANombre->Clear();
			txtAContacto->Clear();
			txtAHora->Clear();
			txtACantidad->Clear();
			txtATotal->Clear();
			rbSI->Checked = false;
			rbNO->Checked = false;
		}
	private: System::Windows::Forms::DataGridView^ dgvPila;
	public:
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DueñoH;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ContactoH;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HoraLlegadaH;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CantMascotasH;
	private: System::Windows::Forms::Button^ btnVerHistorial;
	private: System::Windows::Forms::Button^ btnCerrarHistorial;
	private: System::Windows::Forms::TextBox^ txtATotal;
	public:
	private: System::Windows::Forms::Label^ lblTotal;
	private: System::Windows::Forms::GroupBox^ gbPagado;
	private: System::Windows::Forms::RadioButton^ rbNO;
	private: System::Windows::Forms::RadioButton^ rbSI;
	private: System::Windows::Forms::Button^ btnUltimoL;
	private: System::Windows::Forms::Button^ btnSiguienteL;
	private: System::Windows::Forms::Button^ btnAnteriorL;
	private: System::Windows::Forms::Button^ btnPrimero;
	private: System::Windows::Forms::Button^ btnEliminarL;
	private: System::Windows::Forms::Button^ btnInsertarL;
	private: System::Windows::Forms::Panel^ panelAtencion;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtAHora;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtAContacto;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtANombre;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ btnDehacer;
	private: System::Windows::Forms::Button^ btnAtender;
	public: System::Windows::Forms::TextBox^ txtACantidad;
	private:
	private:
	public:
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
	private: System::Windows::Forms::Label^ lblTabla;
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
			this->lblTabla = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnCerrarLista = (gcnew System::Windows::Forms::Button());
			this->btnVerLista = (gcnew System::Windows::Forms::Button());
			this->btnCerrarHistorial = (gcnew System::Windows::Forms::Button());
			this->btnVerHistorial = (gcnew System::Windows::Forms::Button());
			this->btnDehacer = (gcnew System::Windows::Forms::Button());
			this->btnAtender = (gcnew System::Windows::Forms::Button());
			this->panelAtencion = (gcnew System::Windows::Forms::Panel());
			this->btnUltimoL = (gcnew System::Windows::Forms::Button());
			this->btnSiguienteL = (gcnew System::Windows::Forms::Button());
			this->btnAnteriorL = (gcnew System::Windows::Forms::Button());
			this->btnPrimero = (gcnew System::Windows::Forms::Button());
			this->btnEliminarL = (gcnew System::Windows::Forms::Button());
			this->btnInsertarL = (gcnew System::Windows::Forms::Button());
			this->gbPagado = (gcnew System::Windows::Forms::GroupBox());
			this->rbNO = (gcnew System::Windows::Forms::RadioButton());
			this->rbSI = (gcnew System::Windows::Forms::RadioButton());
			this->txtATotal = (gcnew System::Windows::Forms::TextBox());
			this->lblTotal = (gcnew System::Windows::Forms::Label());
			this->txtACantidad = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtAHora = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtAContacto = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtANombre = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Dueño = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contacto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hora = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CantMascotas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvPila = (gcnew System::Windows::Forms::DataGridView());
			this->DueñoH = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ContactoH = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HoraLlegadaH = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CantMascotasH = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgvLista = (gcnew System::Windows::Forms::DataGridView());
			this->NombreLis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ContactoLis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HoraLlegadaLis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CantMascotasLis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CostoTotal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Pagado = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panelAtencion->SuspendLayout();
			this->gbPagado->SuspendLayout();
			this->panelCola->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtCantMascotas))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPila))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->BeginInit();
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
			// lblTabla
			// 
			this->lblTabla->AutoSize = true;
			this->lblTabla->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.125F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTabla->Location = System::Drawing::Point(1282, 179);
			this->lblTabla->Name = L"lblTabla";
			this->lblTabla->Size = System::Drawing::Size(350, 51);
			this->lblTabla->TabIndex = 15;
			this->lblTabla->Text = L"Cola de Atención";
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
			this->panel2->Size = System::Drawing::Size(1765, 161);
			this->panel2->TabIndex = 19;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->btnCerrarLista);
			this->panel3->Controls->Add(this->btnVerLista);
			this->panel3->Controls->Add(this->btnCerrarHistorial);
			this->panel3->Controls->Add(this->btnVerHistorial);
			this->panel3->Controls->Add(this->btnDehacer);
			this->panel3->Controls->Add(this->btnAtender);
			this->panel3->Controls->Add(this->lblTabla);
			this->panel3->Controls->Add(this->panelAtencion);
			this->panel3->Controls->Add(this->panelCola);
			this->panel3->Controls->Add(this->dataGridView1);
			this->panel3->Controls->Add(this->dgvPila);
			this->panel3->Controls->Add(this->dgvLista);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(2046, 905);
			this->panel3->TabIndex = 20;
			// 
			// btnCerrarLista
			// 
			this->btnCerrarLista->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCerrarLista->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnCerrarLista->Location = System::Drawing::Point(1675, 747);
			this->btnCerrarLista->Name = L"btnCerrarLista";
			this->btnCerrarLista->Size = System::Drawing::Size(166, 43);
			this->btnCerrarLista->TabIndex = 57;
			this->btnCerrarLista->Text = L"Cerrar Lista";
			this->btnCerrarLista->UseVisualStyleBackColor = true;
			this->btnCerrarLista->Click += gcnew System::EventHandler(this, &MyForm::btnCerrarLista_Click);
			// 
			// btnVerLista
			// 
			this->btnVerLista->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnVerLista->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnVerLista->Location = System::Drawing::Point(1528, 747);
			this->btnVerLista->Name = L"btnVerLista";
			this->btnVerLista->Size = System::Drawing::Size(141, 43);
			this->btnVerLista->TabIndex = 56;
			this->btnVerLista->Text = L"Ver Lista";
			this->btnVerLista->UseVisualStyleBackColor = true;
			this->btnVerLista->Click += gcnew System::EventHandler(this, &MyForm::btnVerLista_Click);
			// 
			// btnCerrarHistorial
			// 
			this->btnCerrarHistorial->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnCerrarHistorial->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnCerrarHistorial->Location = System::Drawing::Point(1346, 747);
			this->btnCerrarHistorial->Name = L"btnCerrarHistorial";
			this->btnCerrarHistorial->Size = System::Drawing::Size(166, 43);
			this->btnCerrarHistorial->TabIndex = 55;
			this->btnCerrarHistorial->Text = L"Cerrar Historial";
			this->btnCerrarHistorial->UseVisualStyleBackColor = true;
			this->btnCerrarHistorial->Click += gcnew System::EventHandler(this, &MyForm::btnCerrarHistorial_Click);
			// 
			// btnVerHistorial
			// 
			this->btnVerHistorial->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnVerHistorial->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnVerHistorial->Location = System::Drawing::Point(1199, 747);
			this->btnVerHistorial->Name = L"btnVerHistorial";
			this->btnVerHistorial->Size = System::Drawing::Size(141, 43);
			this->btnVerHistorial->TabIndex = 54;
			this->btnVerHistorial->Text = L"Ver Historial";
			this->btnVerHistorial->UseVisualStyleBackColor = true;
			this->btnVerHistorial->Click += gcnew System::EventHandler(this, &MyForm::btnVerHistorial_Click);
			// 
			// btnDehacer
			// 
			this->btnDehacer->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDehacer->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnDehacer->Location = System::Drawing::Point(1566, 659);
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
			// panelAtencion
			// 
			this->panelAtencion->Controls->Add(this->btnUltimoL);
			this->panelAtencion->Controls->Add(this->btnSiguienteL);
			this->panelAtencion->Controls->Add(this->btnAnteriorL);
			this->panelAtencion->Controls->Add(this->btnPrimero);
			this->panelAtencion->Controls->Add(this->btnEliminarL);
			this->panelAtencion->Controls->Add(this->btnInsertarL);
			this->panelAtencion->Controls->Add(this->gbPagado);
			this->panelAtencion->Controls->Add(this->txtATotal);
			this->panelAtencion->Controls->Add(this->lblTotal);
			this->panelAtencion->Controls->Add(this->txtACantidad);
			this->panelAtencion->Controls->Add(this->label1);
			this->panelAtencion->Controls->Add(this->txtAHora);
			this->panelAtencion->Controls->Add(this->label7);
			this->panelAtencion->Controls->Add(this->txtAContacto);
			this->panelAtencion->Controls->Add(this->label8);
			this->panelAtencion->Controls->Add(this->txtANombre);
			this->panelAtencion->Controls->Add(this->label9);
			this->panelAtencion->Location = System::Drawing::Point(297, 180);
			this->panelAtencion->Name = L"panelAtencion";
			this->panelAtencion->Size = System::Drawing::Size(726, 725);
			this->panelAtencion->TabIndex = 29;
			// 
			// btnUltimoL
			// 
			this->btnUltimoL->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnUltimoL->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnUltimoL->Location = System::Drawing::Point(526, 578);
			this->btnUltimoL->Name = L"btnUltimoL";
			this->btnUltimoL->Size = System::Drawing::Size(145, 51);
			this->btnUltimoL->TabIndex = 53;
			this->btnUltimoL->Text = L"Ultimo";
			this->btnUltimoL->UseVisualStyleBackColor = true;
			this->btnUltimoL->Click += gcnew System::EventHandler(this, &MyForm::btnUltimoL_Click);
			// 
			// btnSiguienteL
			// 
			this->btnSiguienteL->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnSiguienteL->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnSiguienteL->Location = System::Drawing::Point(375, 578);
			this->btnSiguienteL->Name = L"btnSiguienteL";
			this->btnSiguienteL->Size = System::Drawing::Size(145, 51);
			this->btnSiguienteL->TabIndex = 52;
			this->btnSiguienteL->Text = L"Siguiente";
			this->btnSiguienteL->UseVisualStyleBackColor = true;
			this->btnSiguienteL->Click += gcnew System::EventHandler(this, &MyForm::btnSiguienteL_Click);
			// 
			// btnAnteriorL
			// 
			this->btnAnteriorL->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnAnteriorL->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnAnteriorL->Location = System::Drawing::Point(224, 578);
			this->btnAnteriorL->Name = L"btnAnteriorL";
			this->btnAnteriorL->Size = System::Drawing::Size(145, 51);
			this->btnAnteriorL->TabIndex = 51;
			this->btnAnteriorL->Text = L"Anterior";
			this->btnAnteriorL->UseVisualStyleBackColor = true;
			this->btnAnteriorL->Click += gcnew System::EventHandler(this, &MyForm::btnAnteriorL_Click);
			// 
			// btnPrimero
			// 
			this->btnPrimero->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnPrimero->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnPrimero->Location = System::Drawing::Point(73, 578);
			this->btnPrimero->Name = L"btnPrimero";
			this->btnPrimero->Size = System::Drawing::Size(145, 51);
			this->btnPrimero->TabIndex = 50;
			this->btnPrimero->Text = L"Primero";
			this->btnPrimero->UseVisualStyleBackColor = true;
			this->btnPrimero->Click += gcnew System::EventHandler(this, &MyForm::btnPrimero_Click);
			// 
			// btnEliminarL
			// 
			this->btnEliminarL->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnEliminarL->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnEliminarL->Location = System::Drawing::Point(375, 521);
			this->btnEliminarL->Name = L"btnEliminarL";
			this->btnEliminarL->Size = System::Drawing::Size(296, 51);
			this->btnEliminarL->TabIndex = 49;
			this->btnEliminarL->Text = L"Eliminar";
			this->btnEliminarL->UseVisualStyleBackColor = true;
			this->btnEliminarL->Click += gcnew System::EventHandler(this, &MyForm::btnEliminarL_Click);
			// 
			// btnInsertarL
			// 
			this->btnInsertarL->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnInsertarL->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->btnInsertarL->Location = System::Drawing::Point(73, 521);
			this->btnInsertarL->Name = L"btnInsertarL";
			this->btnInsertarL->Size = System::Drawing::Size(296, 51);
			this->btnInsertarL->TabIndex = 48;
			this->btnInsertarL->Text = L"Insertar";
			this->btnInsertarL->UseVisualStyleBackColor = true;
			this->btnInsertarL->Click += gcnew System::EventHandler(this, &MyForm::btnInsertarL_Click);
			// 
			// gbPagado
			// 
			this->gbPagado->Controls->Add(this->rbNO);
			this->gbPagado->Controls->Add(this->rbSI);
			this->gbPagado->Location = System::Drawing::Point(455, 199);
			this->gbPagado->Name = L"gbPagado";
			this->gbPagado->Size = System::Drawing::Size(178, 202);
			this->gbPagado->TabIndex = 28;
			this->gbPagado->TabStop = false;
			this->gbPagado->Text = L"Pagado";
			// 
			// rbNO
			// 
			this->rbNO->AutoSize = true;
			this->rbNO->Location = System::Drawing::Point(29, 124);
			this->rbNO->Name = L"rbNO";
			this->rbNO->Size = System::Drawing::Size(74, 29);
			this->rbNO->TabIndex = 1;
			this->rbNO->TabStop = true;
			this->rbNO->Text = L"NO";
			this->rbNO->UseVisualStyleBackColor = true;
			// 
			// rbSI
			// 
			this->rbSI->AutoSize = true;
			this->rbSI->Location = System::Drawing::Point(29, 72);
			this->rbSI->Name = L"rbSI";
			this->rbSI->Size = System::Drawing::Size(62, 29);
			this->rbSI->TabIndex = 0;
			this->rbSI->TabStop = true;
			this->rbSI->Text = L"SI";
			this->rbSI->UseVisualStyleBackColor = true;
			// 
			// txtATotal
			// 
			this->txtATotal->Location = System::Drawing::Point(455, 85);
			this->txtATotal->MaxLength = 100;
			this->txtATotal->Multiline = true;
			this->txtATotal->Name = L"txtATotal";
			this->txtATotal->Size = System::Drawing::Size(178, 50);
			this->txtATotal->TabIndex = 27;
			// 
			// lblTotal
			// 
			this->lblTotal->AutoSize = true;
			this->lblTotal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTotal->Location = System::Drawing::Point(466, 46);
			this->lblTotal->Name = L"lblTotal";
			this->lblTotal->Size = System::Drawing::Size(157, 29);
			this->lblTotal->TabIndex = 26;
			this->lblTotal->Text = L"Total a Pagar";
			// 
			// txtACantidad
			// 
			this->txtACantidad->Location = System::Drawing::Point(42, 447);
			this->txtACantidad->MaxLength = 100;
			this->txtACantidad->Multiline = true;
			this->txtACantidad->Name = L"txtACantidad";
			this->txtACantidad->Size = System::Drawing::Size(324, 50);
			this->txtACantidad->TabIndex = 25;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(51, 397);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(315, 36);
			this->label1->TabIndex = 24;
			this->label1->Text = L"Cantidad de Mascotas";
			// 
			// txtAHora
			// 
			this->txtAHora->Location = System::Drawing::Point(42, 316);
			this->txtAHora->MaxLength = 100;
			this->txtAHora->Multiline = true;
			this->txtAHora->Name = L"txtAHora";
			this->txtAHora->Size = System::Drawing::Size(324, 50);
			this->txtAHora->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(51, 277);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(315, 36);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Hora de Llegada";
			// 
			// txtAContacto
			// 
			this->txtAContacto->Location = System::Drawing::Point(42, 196);
			this->txtAContacto->MaxLength = 100;
			this->txtAContacto->Multiline = true;
			this->txtAContacto->Name = L"txtAContacto";
			this->txtAContacto->Size = System::Drawing::Size(324, 50);
			this->txtAContacto->TabIndex = 21;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(51, 157);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(315, 36);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Informacion de Contacto";
			// 
			// txtANombre
			// 
			this->txtANombre->Location = System::Drawing::Point(42, 79);
			this->txtANombre->MaxLength = 100;
			this->txtANombre->Multiline = true;
			this->txtANombre->Name = L"txtANombre";
			this->txtANombre->Size = System::Drawing::Size(324, 50);
			this->txtANombre->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(51, 40);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(217, 36);
			this->label9->TabIndex = 18;
			this->label9->Text = L"Nombre del dueño";
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
			this->panelCola->Location = System::Drawing::Point(287, 167);
			this->panelCola->Name = L"panelCola";
			this->panelCola->Size = System::Drawing::Size(730, 738);
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
			this->label2->Size = System::Drawing::Size(258, 36);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Nombre del dueño";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Dueño,
					this->Contacto, this->Hora, this->CantMascotas
			});
			this->dataGridView1->Location = System::Drawing::Point(1062, 246);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->RowTemplate->Height = 33;
			this->dataGridView1->Size = System::Drawing::Size(946, 396);
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
			// dgvPila
			// 
			this->dgvPila->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPila->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->DueñoH, this->ContactoH,
					this->HoraLlegadaH, this->CantMascotasH
			});
			this->dgvPila->Location = System::Drawing::Point(1065, 248);
			this->dgvPila->Name = L"dgvPila";
			this->dgvPila->RowHeadersWidth = 82;
			this->dgvPila->RowTemplate->Height = 33;
			this->dgvPila->Size = System::Drawing::Size(934, 394);
			this->dgvPila->TabIndex = 32;
			// 
			// DueñoH
			// 
			this->DueñoH->HeaderText = L"DueñoH";
			this->DueñoH->MinimumWidth = 10;
			this->DueñoH->Name = L"DueñoH";
			this->DueñoH->ReadOnly = true;
			this->DueñoH->Width = 200;
			// 
			// ContactoH
			// 
			this->ContactoH->HeaderText = L"ContactoH";
			this->ContactoH->MinimumWidth = 10;
			this->ContactoH->Name = L"ContactoH";
			this->ContactoH->ReadOnly = true;
			this->ContactoH->Width = 200;
			// 
			// HoraLlegadaH
			// 
			this->HoraLlegadaH->HeaderText = L"HoraLlegadaH";
			this->HoraLlegadaH->MinimumWidth = 10;
			this->HoraLlegadaH->Name = L"HoraLlegadaH";
			this->HoraLlegadaH->ReadOnly = true;
			this->HoraLlegadaH->Width = 200;
			// 
			// CantMascotasH
			// 
			this->CantMascotasH->HeaderText = L"CantMascotasH";
			this->CantMascotasH->MinimumWidth = 10;
			this->CantMascotasH->Name = L"CantMascotasH";
			this->CantMascotasH->ReadOnly = true;
			this->CantMascotasH->Width = 200;
			// 
			// dgvLista
			// 
			this->dgvLista->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvLista->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->NombreLis, this->ContactoLis,
					this->HoraLlegadaLis, this->CantMascotasLis, this->CostoTotal, this->Pagado
			});
			this->dgvLista->Location = System::Drawing::Point(1065, 246);
			this->dgvLista->Name = L"dgvLista";
			this->dgvLista->RowHeadersWidth = 82;
			this->dgvLista->RowTemplate->Height = 33;
			this->dgvLista->Size = System::Drawing::Size(946, 398);
			this->dgvLista->TabIndex = 58;
			// 
			// NombreLis
			// 
			this->NombreLis->HeaderText = L"NombreLis";
			this->NombreLis->MinimumWidth = 10;
			this->NombreLis->Name = L"NombreLis";
			this->NombreLis->ReadOnly = true;
			this->NombreLis->Width = 200;
			// 
			// ContactoLis
			// 
			this->ContactoLis->HeaderText = L"ContactoLis";
			this->ContactoLis->MinimumWidth = 10;
			this->ContactoLis->Name = L"ContactoLis";
			this->ContactoLis->ReadOnly = true;
			this->ContactoLis->Width = 200;
			// 
			// HoraLlegadaLis
			// 
			this->HoraLlegadaLis->HeaderText = L"HoraLlegadaLis";
			this->HoraLlegadaLis->MinimumWidth = 10;
			this->HoraLlegadaLis->Name = L"HoraLlegadaLis";
			this->HoraLlegadaLis->ReadOnly = true;
			this->HoraLlegadaLis->Width = 200;
			// 
			// CantMascotasLis
			// 
			this->CantMascotasLis->HeaderText = L"CantMascotasLis";
			this->CantMascotasLis->MinimumWidth = 10;
			this->CantMascotasLis->Name = L"CantMascotasLis";
			this->CantMascotasLis->ReadOnly = true;
			this->CantMascotasLis->Width = 200;
			// 
			// CostoTotal
			// 
			this->CostoTotal->HeaderText = L"CostoTotal";
			this->CostoTotal->MinimumWidth = 10;
			this->CostoTotal->Name = L"CostoTotal";
			this->CostoTotal->ReadOnly = true;
			this->CostoTotal->Width = 200;
			// 
			// Pagado
			// 
			this->Pagado->HeaderText = L"Pagado";
			this->Pagado->MinimumWidth = 10;
			this->Pagado->Name = L"Pagado";
			this->Pagado->ReadOnly = true;
			this->Pagado->Width = 200;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(2046, 905);
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
			this->panelAtencion->ResumeLayout(false);
			this->panelAtencion->PerformLayout();
			this->gbPagado->ResumeLayout(false);
			this->gbPagado->PerformLayout();
			this->panelCola->ResumeLayout(false);
			this->panelCola->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->txtCantMascotas))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPila))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvLista))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		panelCola->Visible = true;
		panelAtencion->Visible = false;
		btnAtender->Visible = false;
		btnDehacer->Visible = false;
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
	clear_atencion();
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
	datos^ Colatexto;
	Colatexto = cola_clientes->Primero(); //Mira el primero de la col
	txtANombre->Text = Colatexto->getDueno();
	txtACantidad->Text = Colatexto->getcantmascotas().ToString();
	txtAHora->Text = Colatexto->getHora_llegada();
	txtAContacto->Text = Colatexto->getContacto();
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
	clear_ventana();
	datos^ primero;
	primero = pila_clientes->Eliminar(); //se Saca de la pila
	dgvPila->Rows->RemoveAt(dgvPila->Rows->Count-2); // elimina del grid la fila donde se encuentra el item o elemento de la pila que se elimino
	if (primero != nullptr) {
		cola_clientes->AgregarInicio(primero);//Se vuelve a poner a la cola
		//Ahora hay que adicionarlo al Grid
		dataGridView1->Rows->Insert(0, primero->getDueno(), primero->getContacto(), primero -> getHora_llegada(), primero->getcantmascotas());dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;dataGridView1->CurrentCell = dataGridView1->Rows[0]->Cells[0];
		clear_atencion();
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	datos_atencion^ primero;
	primero = lista_atencion->Primero(); //Devuelve el primero de la lista
	if (primero != nullptr) {
		txtANombre->Text = primero->getdueno()->getDueno();
		txtAContacto->Text = primero->getdueno()->getContacto();
		txtAHora->Text = primero->getdueno()->getHora_llegada();
		txtATotal->Text = primero->getcosto().ToString();
		if (primero->getpagado()) {
			rbSI->Checked = true;
			rbNO->Checked = false;
		}
		else {
			rbSI->Checked = false;
			rbNO->Checked = true;
		}
	}
}
private: System::Void btnInsertarL_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txtANombre->Text != "") {
		bool pagado;
		double pago = Double::Parse(txtATotal->Text);
		String^ texto = txtACantidad->Text;
		int numero = Int32::Parse(texto);
		if (rbSI->Checked == true) pagado = true;
		if (rbNO->Checked == true) pagado = false;
		datos^ nuevo = gcnew datos(txtANombre->Text, txtAContacto->Text, txtAHora->Text, numero);
		datos_atencion^ nueva = gcnew datos_atencion(dateTimeFecha->Value, pago, pagado, nuevo);
		lista_atencion->Agregar(nueva);
		clear_ventana();
	}
}
private: System::Void btnUltimoL_Click(System::Object^ sender, System::EventArgs^ e) {
	datos_atencion^ ultimo;
	ultimo = lista_atencion->Ultimo(); //Devuelve el ultimo de la lista
	//selecciona en el grid
	
	if (ultimo != nullptr) {
		txtANombre->Text = ultimo->getdueno()->getDueno();
		txtAContacto->Text = ultimo->getdueno()->getContacto();
		txtAHora->Text = ultimo->getdueno()->getHora_llegada();
		txtATotal->Text = ultimo->getcosto().ToString();
		if (ultimo->getpagado()) {
			rbSI->Checked = true;
			rbNO->Checked = false;
		}
		else {
			rbSI->Checked = false;
			rbNO->Checked = true;
		}
	}
}
private: System::Void btnAnteriorL_Click(System::Object^ sender, System::EventArgs^ e) {
	datos_atencion^ anterior;
	anterior = lista_atencion->Anterior(txtANombre->Text); //Devuelve el anterior a uno de la lista
	
	if (anterior != nullptr) {
		txtANombre->Text = anterior->getdueno()->getDueno();
		txtAContacto->Text = anterior->getdueno()->getContacto();
		txtAHora->Text = anterior->getdueno()->getHora_llegada();
		txtATotal->Text = anterior->getcosto().ToString();
		if (anterior->getpagado()) {
			rbSI->Checked = true;
			rbNO->Checked = false;
		}
		else {
			rbSI->Checked = false;
			rbNO->Checked = true;
		}
	}

}
private: System::Void btnSiguienteL_Click(System::Object^ sender, System::EventArgs^ e) {
	datos_atencion^ siguiente;
	siguiente = lista_atencion->Siguiente(txtANombre->Text); //Devuelve el anterior a uno de la lista
	auto item = lista_atencion->Siguiente(txtANombre->Text);
	
	if (siguiente != nullptr) {
		txtANombre->Text = siguiente->getdueno()->getDueno();
		txtAContacto->Text = siguiente->getdueno()->getContacto();
		txtAHora->Text = siguiente->getdueno()->getHora_llegada();
		txtATotal->Text = siguiente->getcosto().ToString();
		if (siguiente->getpagado()) {
			rbSI->Checked = true;
			rbNO->Checked = false;
		}
		else {
			rbSI->Checked = false;
			rbNO->Checked = true;
		}
	}
}
private: System::Void btnEliminarL_Click(System::Object^ sender, System::EventArgs^ e) {
	if (lista_atencion->Eliminar(txtANombre->Text)) {
		MessageBox::Show("Se eliminó con éxito", "Éxito", MessageBoxButtons::OK,
			MessageBoxIcon::Information);
	}
	else {
		MessageBox::Show("No se encontró ese nombre", "Error", MessageBoxButtons::OK,
			MessageBoxIcon::Warning);
	}
}

private: System::Void btnVerHistorial_Click(System::Object^ sender, System::EventArgs^ e) {
	lblTabla->Text = "HISTORIAL DE ATENCIONES";
	dgvPila->BringToFront();
	if(pila_clientes->ObtenerCantidad() >= 1) {
		// Limpiar el DataGridView antes de mostrar los datos
		dgvPila->Rows->Clear();
		// Obtener todos los elementos de la pila sin eliminarlos
		array<datos^>^ elementos = pila_clientes->ObtenerElementos();
		//Invertir el orden para que aparezcan del primero que entró al último
		Array::Reverse(elementos);
		// Recorrer la pila y agregar cada elemento al grid
		for each (datos ^ item in elementos) {
			array<String^>^ fila = gcnew array<String^>{
				item->getDueno(),               
					item->getContacto(),
					item->getHora_llegada(),
					item->getcantmascotas().ToString()
			};
			dgvPila->Rows->Add(fila);
		}
		dgvPila->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
	}
}
private: System::Void btnCerrarHistorial_Click(System::Object^ sender, System::EventArgs^ e) {
	lblTabla->Text = "COLA DE ATENCION";
	dgvPila->SendToBack();
}
private: System::Void btnVerLista_Click(System::Object^ sender, System::EventArgs^ e) {
	lblTabla->Text = "LISTA DE ATENCION";
	dgvLista->BringToFront();
	if (lista_atencion->ObtenerCantidad() >= 1) {
		// Limpiar el DataGridView antes de mostrar los datos
		dgvLista->Rows->Clear();
		// Obtener todos los elementos de la lista sin eliminarlos
		array<datos_atencion^>^ elementos = lista_atencion->ObtenerElementos();
		// Recorrer la lista y agregar cada elemento al grid
		for each (datos_atencion ^ item in elementos) {
			array<String^>^ fila = gcnew array<String^>{
				item->getdueno()->getDueno(),
					item->getdueno()->getContacto(),
					item->getdueno()->getHora_llegada(),
					item->getdueno()->getcantmascotas().ToString(),
					item->getcosto().ToString(),
					item->getpagado() ? "Sí" : "No"
			};
			dgvLista->Rows->Add(fila);
		}
		dgvLista->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
	}
}
private: System::Void btnCerrarLista_Click(System::Object^ sender, System::EventArgs^ e) {
	lblTabla->Text = "COLA DE ATENCION";
	dgvLista->SendToBack();
}
private: System::Void btnPrimero_Click(System::Object^ sender, System::EventArgs^ e) {
	datos_atencion^ primero;
	primero = lista_atencion->Primero(); //Devuelve el primero de la lista
	if (primero != nullptr) {
		txtANombre->Text = primero->getdueno()->getDueno();
		txtAContacto->Text = primero->getdueno()->getContacto();
		txtAHora->Text = primero->getdueno()->getHora_llegada();
		txtATotal->Text = primero->getcosto().ToString();
		if (primero->getpagado()) {
			rbSI->Checked = true;
			rbNO->Checked = false;
		}
		else {
			rbSI->Checked = false;
			rbNO->Checked = true;
		}
	}
}
};
}
