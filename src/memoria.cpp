#include <iostream> //Incluimos la biblioteca iostream para poder usar las funciones de entrada y salida de datos, como cout para imprimir en pantalla y cin para leer datos del usuario
using namespace std; //Usamos el espacio de nombres std para evitar tener que escribir std:: antes de cada función o tipo de dato de la biblioteca estándar, como cout, cin, string, vector, etc.

int main(){
    
    cout<<"int:"<<sizeof(int)<<endl; //sizeof es un operador que devuelve el tamaño en bytes de un tipo de dato o variable
    cout<<"char:"<<sizeof(char)<<endl; //Char es un tipo de dato que representa un solo caracter y ocupa 1 byte de memoria
    cout<<"float:"<<sizeof(float)<<endl; //Float es un tipo de dato que representa un numero decimal y ocupa 4 bites de memoria
    cout<<"double:"<<sizeof(double)<<endl; //Double es un tipo de dato que representa un numero decimal con mayor precision que el float y ocupando 8 bytes de memoria
    cout<<"bool:"<<sizeof(bool)<<endl; //Bool es un tipo de dato que representa un valor booleano (true o false) y ocupa 1 byte de memoria
    cout<<"long:"<<sizeof(long)<<endl; //Long es un tipo de dato que representa un numero entero con mayor rango

    int a=0;
    cout<<&a<<endl; //Direccion de memoria de la variable a
    cout<<a<<endl; //Valor de la variable a
    cout<<*(&a)<<endl; //Variable a traves de la direccion de memoria 

    cout<<sizeof(int*)<<endl; //Un puntero es una variable que almacena la direccion de memoria de otra variable, el tamaño de un puntero depende del sistema operativo y la arquitectura del procesador, en sistemas de 32 bytes el tamaño de un puntero es de 4 bytes, mientras que en sistemas de 64 bytes el tamaño de un puntero es de 8 bytes 
    cout<<sizeof(char*)<<endl; //El tamaño de un puntero es el mismo para cualquier tipo de dato, ya que solo almacena la direccion de memoria, por lo tanto el tamaño de un puntero a int, char, float, double, bool o long es el mismo en un sistema dado
    cout<<sizeof(float*)<<endl; //El tamaño de un puntero es el mismo para cualquier tipo de dato, ya que solo almacena la direccion de memoria, por lo tanto el tamaño de un puntero a int, char, float, double, bool o long es el mismo en un sistema dado
    cout<<sizeof(double*)<<endl; //El tamaño de un puntero es el mismo para cualquier tipo de dato, ya que solo almacena la direccion de memoria, por lo tanto el tamaño de un puntero a int, char, float, double, bool o long es el mismo en un sistema dado
    cout<<sizeof(bool*)<<endl; //El tamaño de un puntero es el mismo para cualquier tipo de dato, ya que solo almacena la direccion de memoria, por lo tanto el tamaño de un puntero a int, char, float, double, bool o long es el mismo en un sistema dado
    cout<<sizeof(long*)<<endl; //El tamaño de un puntero es el mismo para cualquier tipo de dato, ya que solo almacena la direccion de memoria, por lo tanto el tamaño de un puntero a int, char, float, double, bool o long es el mismo en un sistema dado

        
    int* direccion; //Declaramos un puntero a int llamado direccion
    cout<<direccion<<endl; //Valor del puntero direccion, que es una direccion de memoria no inicializada, por lo tanto puede contener cualquier valor basura
    cout<<&direccion<<endl; //Direccion de memoria del puntero direccion, que es una variable local dentro de la funcion main, por lo tanto su direccion de memoria es diferente a la de a
    cout<<*direccion<<endl; //Valor al que apunta el puntero direccion, que es una direccion de memoria no inicializada, por lo tanto puede contener cualquier valor basura o provocar un error de acceso a memoria
    
    return 0; //El programa devuelve 0 para indicar que se ha ejecutado correctamente
}