#include <iostream>
#include <vector>

using namespace std;

// Para composición
class Motor {
    private:
    int _numCilindros;
    
    public:
    Motor(){_numCilindros = 4;};
    
    int getNumCilindros(){return _numCilindros;};
};

class Vehiculo {
  private:
  string _chassis;
  string _marca;
  string _color;
  
  protected:
  float _acelerar; // Para herencia
  
  public:
  Motor* motor = new Motor(); // Para composición
  
  // Setters
  void setChassis(string chassis){_chassis = chassis;};
  void setMarca(string marca){_marca = marca;};
  void setColor(string color){_color = color;};
  void setAcelerar(float acc){_acelerar = acc;};
  
  // Getters
  float getAcelerar(){return _acelerar;};
  
  // Funcion virtual
  virtual void acelerar(float acc) = 0; // puramente virtual
  
  // Funciones
  void cambiarColor(string color){_color = color;};
  void imprimirCaracteristicas(){
      cout << "Chassis: " << _chassis << ", Marca: " << _marca << ", Color: " << _color << ", Motor: " << motor->getNumCilindros()<< endl;
  }
};

// Para herencia
class Toyota : public Vehiculo {
    
  private:
  bool _electrico;
  
  public:
  Toyota(){_electrico = false;};
  ~Toyota(){cout << "objeto eliminado" << endl;};
  void acelerar(float acc) {setAcelerar(2*acc);}; // Uso de la función virtual
};

// Para herencia
class Nissan : public Vehiculo {
    
  public:
  Nissan(){};
  void acelerar(float acc) {_acelerar = 1.2*acc;}; // Uso de la función virtual
  
};

// Para agregación
class Taller{
    private:
    vector<Vehiculo*> _listaDeVehiculos;
    
    public:
    Taller(){};
    void agregarVehiculo(Vehiculo* veh){_listaDeVehiculos.push_back(veh);}
    void sacarPrimerVehiculo() {_listaDeVehiculos.erase(_listaDeVehiculos.begin());}
    void imprimirListaVehiculos(){
        cout << "Los vehículos en el taller son: " << endl;
        cout << "##########################################################" << endl;
        for(Vehiculo* veh: _listaDeVehiculos){
            veh->imprimirCaracteristicas();
        }
        cout << "##########################################################" << endl;
        cout<< endl;
    }
};

int main()
{
    
	Toyota* veh1 = new Toyota();
	Nissan* veh2 = new Nissan();
	
	veh1->setChassis("A121212XSA");
	veh1->setMarca("Rush");
	veh1->setColor("Blanco");
	
	veh2->setChassis("V1754572JHA");
	veh2->setMarca("Sentra");
	veh2->setColor("Dorado");
	
  veh1->acelerar(3.0);
  cout << veh1->getAcelerar() << endl;
    
  // Para agregación
  Taller* taller = new Taller();
  taller->agregarVehiculo(veh1);

  taller->imprimirListaVehiculos();

  taller->agregarVehiculo(veh2);

  taller->imprimirListaVehiculos();

  taller->sacarPrimerVehiculo();

  taller->imprimirListaVehiculos();

  delete veh1;

  veh2->imprimirCaracteristicas();
	
	return 0;
}
