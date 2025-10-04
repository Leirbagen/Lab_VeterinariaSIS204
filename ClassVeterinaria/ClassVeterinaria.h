#pragma once
using namespace std;
using namespace System;
using namespace System::Collections::Generic;

namespace ClassVeterinaria {
	public ref class datos {
	private:
		String^ Dueno;
		String^ Contacto;
		String^ Hora_llegada;
		int cantmascotas;
	public:
		datos(String^ Dueno, String^ Contacto, String^ Hora_llegada, int cantmascotas) {
			this->Dueno = Dueno;
			this->Contacto = Contacto;
			this->Hora_llegada = Hora_llegada;
			this->cantmascotas = cantmascotas;
		}
		String^ getDueno() { return Dueno; }
		String^ getContacto() { return Contacto; }
		String^ getHora_llegada() { return Hora_llegada; }
		int getcantmascotas() { return cantmascotas; }
		void setDueno(String^ _Dueno) { Dueno = _Dueno; }
		void setContacto(String^ _Contacto) { Contacto = _Contacto; }
		void setHora_llegada(String^ _Hora_llegada) { Hora_llegada = _Hora_llegada; }
		void setcantmascotas(int _cantmascotas) { cantmascotas = _cantmascotas; }
	};
	public ref class cola_veterinaria {
	private:
		LinkedList<datos^>^ cola; //defino la decola
	public:
		cola_veterinaria() {
			cola = gcnew LinkedList<datos^>();
		}
		void AgregarInicio(datos^ c) {
			cola->AddFirst(c);
		}
		void AgregarFinal(datos^ c) {
			cola->AddLast(c);
		}
		datos^ EliminarInicio() {
			if (cola->Count == 0) return nullptr;
			datos^ dato = cola->First->Value;
			cola->RemoveFirst();
			return dato;
		}
		datos^ EliminarFinal() {
			if (cola->Count == 0) return nullptr;
			datos^ dato = cola->Last->Value;
			cola->RemoveLast();
			return dato;
		}
		LinkedList<datos^>^ ObtenerLista() {
			return cola;
		}
		int ObtenerCantidad() {
			return cola->Count;
		}
	};
	public ref class pila_veterinaria
	{
	private:
		Stack <datos^>^ pila; //defino la pila
	public:
		pila_veterinaria() {
			pila = gcnew Stack<datos^>();
		}
		void Agregar(datos^ c) {
			pila->Push(c);
		}
		datos^ Eliminar() {
			if (pila->Count == 0) return nullptr;
			datos^ dato = pila->Peek();
			pila->Pop();
			return dato;
		}
		int ObtenerCantidad() {
			return pila->Count;
		}
	};
	public ref class datos_atencion
	{
	private:
		DateTime fechaAtencion;
		double costo;
		bool pagado;
		datos^ dueno;
	public:
		datos_atencion(DateTime fechaAtencion, double costo, bool pagado, datos^ dueno) {
			this->fechaAtencion = fechaAtencion;
			this->costo = costo;
			this->pagado = pagado;
			this->dueno = dueno;
		}
		datos^ getdueno() { return dueno; }
		DateTime getfechaAtencion() { return fechaAtencion; }
		double getcosto() { return costo; }
		bool getpagado() { return pagado; }
		void setdueno(datos^ _dueno) { dueno = _dueno; }
		void setfechaAtencion(DateTime _fechaAtencion) { fechaAtencion = _fechaAtencion; }
		void setcosto(int _costo) { costo = _costo; }
		void setpagado(bool _pagado) { pagado = _pagado; }
	};
	public ref class lista_Atencion_veterinaria
	{
	private:
		List <datos_atencion^>^ Lista; //defino la lista
	public:
		lista_Atencion_veterinaria() {
			Lista = gcnew List<datos_atencion^>();
		}
		void Agregar(datos_atencion^ c) {
			Lista->Add(c);
		}
		datos_atencion^ Primero() {
			if (Lista->Count > 0)
				return Lista[0];
			else
				return nullptr;
		}
		datos_atencion^ Ultimo() {
			if (Lista->Count > 0)
				return Lista[Lista->Count - 1];
			else
				return nullptr;
		}
		datos_atencion^ Anterior(String^ nombreBuscado) {
			for (int i = 0; i < Lista->Count; i++) {
				if (Lista[i]->getdueno()->getDueno()->Equals(nombreBuscado,
					StringComparison::InvariantCultureIgnoreCase)) {
					if (i > 0)
						return Lista[i - 1]; // anterior
					else
						return nullptr; // no hay anterior
				}
			}
			return nullptr; // no se encontró la mascota
		}
		datos_atencion^ Siguiente(String^ nombreBuscado) {
			for (int i = 0; i < Lista->Count; i++) {
				if (Lista[i]->getdueno()->getDueno()->Equals(nombreBuscado,
					StringComparison::InvariantCultureIgnoreCase)) {
					if (i < Lista->Count - 1)
						return Lista[i + 1]; // siguiente
					else
						return nullptr; // no hay siguiente
				}
			}
			return nullptr; // no se encontró la mascota
		}
		int ObtenerCantidad() {
			return Lista->Count;
		}
		List<datos_atencion^>^ ObtenerLista() {
			return Lista;
		}
		bool Eliminar(String^ nombreBuscado) {
			for (int i = 0; i < Lista->Count; i++) {
				if (Lista[i]->getdueno()->getDueno()->Equals(nombreBuscado,
					StringComparison::InvariantCultureIgnoreCase)) {
					Lista->RemoveAt(i);// elimina
					return true;
				}
			}
			return false;
		}
	};
}
