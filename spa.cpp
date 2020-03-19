//Registro clientes del Gimnasio

#include <iostream>
#include <conio.h>
#include <string.h>
#include <fstream>
#include <stdlib.h>

//Limpiar pantalla
#ifdef _WIN32
#define CLEAR "cls"
#elif defined(unix)||defined(__unix__)||defined(__unix)||defined(__APPLE__)||defined(__MACH__)
#define CLEAR "clear"
#else
#error "No es posible lompiar la pantalla limpiar pantalla"
#endif

using namespace std;

int subopcion, menumem, servop, menumasaj;		//Función principal
class menu
{
private:	//atributos privados
    char nombre[50];
    char membresia[30];
    char servicio[20];
    char masajista[30];
    char codigoCliente[30];
    char nombreMasaj[30];
    char especialidad[30];
    char horario[20];
    char descanso[30];
    char codigoMasajista[30];

public:		//ATRIBUTOS PUBLICOS
	void listarMasajistas();
	void detallesMasajistas();
    void mostarRegistroMasaj(char codigo [30]);
    void altaCliente();
    void listarClientes();
    void menuPrincipal();
    void detallesCliente();
    void mostarRegistro(char codigo [30]);
};

void pausa();
void error();

void menu::menuPrincipal()
{
    int opcion;
    do
    {
    	system("cls");

        cout<<"***Menu principal***\n\n";
      	cout<<"1.-Clientes \n";
        cout<<"2.-Membresias \n";
        cout<<"3.-Servicios \n";
        cout<<"4.-Masajistas \n";
        cout<<"5.-Salir \n";
        cout<<"Opci\242n: ";
        cin>>opcion;

        switch(opcion)
        {
        case 1:
        		menuclientes:

        			system("cls");

					cout<<"***Clientes***\n";
					cout<<"1.-Dar de alta a un cliente: \n";
					cout<<"2.-Mostrar registros de clientes: \n";
					cout<<"3.-Regresar al menu: ";
					cout<<"\n\nOpcion: ";
					cin>>subopcion;
					do{
					switch(subopcion){		//seleccionador
			//Clientes//
					case 1:
							system("cls");
							altaCliente();
							break;
					case 2:
					listarClientes();
            		break;

					default:
            			if(subopcion==3){
           					 system(CLEAR);
  							menu inicio;
   							 inicio.menuPrincipal();
							}else{
						cout<<"Ha ingresado una opci\242n no valida!\n\n";
		           			 getch();
		          				  goto menuclientes;
    			 }
    			 break;

				}
					}while(subopcion!=3 );

            break;

        case 2:
            	menumembresias:
					system("cls");
					menumem=0;
					cout<< "**Consultar informacion de Membresias***\n";
					cout<<"1.-Basica: \n";
					cout<<"2.-Socio: \n";
					cout<<"3.-Socio premium: \n";
					cout<<"4.-Vip: \n";
					cout<<"5.-Regresar al menu: \n";
					cout<<"Opcion:";
					cin>>menumem;

// Opciones del menu

					do{
					switch(menumem){
						case 1:
								system("cls");
								cout<<"Membresia Basica\n\n"<<"Esta membresia es la mas basica de todas";
								getch();
								goto menumembresias;
						 		break;
						case 2: system("cls");
								cout<<"Membresia Socios\n\n"<<"Esta membresia es de socios";
								getch();
								goto menumembresias;
						 		break;
						case 3: system("cls");
								cout<<"Membresia Premium\n\n"<<"Esta membresia es de socios con caracteristicas premium";
								getch();
								goto menumembresias;
						 		break;
						case 4: system("cls");
								cout<<"Membresia VIP\n\n"<< "todas las carecteristicas chidas";
								getch();
								goto menumembresias;
						 		break;
						default:
            					if(menumem==5){
           					 		system(CLEAR);
  									menu inicio;
   							 		inicio.menuPrincipal();
								}else{
									cout<<"Ha ingresado una opci\242n no valida!\n\n";
		           			 		getch();
		          				  	goto menumembresias;
    			 }
    			 break;


					}
					}while(menumem!=5);

					break;

        case 3:
            menuservicios:
					system("cls");
					cout<<"**SERVICIOS**\n";
					cout<<"1.Depilacion: \n";
					cout<<"2.Pedicure: \n";
					cout<<"3.Masaje prenatal:\n";
					cout<<"4.limpieza facial: \n";
					cout<<"5.Regresar  al Menu: \n";
					cout<<"Opcion:";
					cin>>servop;
					do{
//menus derivados
					switch(servop){
						case 1:
								system("cls");
								cout<<"Servicio de Depilacion\n\n"<<"Depilacion de vello";
								getch();
								goto menuservicios;
						 		break;
						case 2: system("cls");
								cout<<"Servicio de Pedicure\n\n"<<"te dejamos las uñas licitas y bonitas";
								getch();
								goto menuservicios;
						 		break;
						case 3: system("cls");
								cout<<"Servicio de Masaje Prenatal\n\n"<<"Brindamos un masaje relajante";
								getch();
								goto menuservicios;
						 		break;
						case 4: system("cls");
								cout<<"Servicio de Limpieza Facial\n\n"<<"te exfoliamos y limpianmos la cara";
								getch();
								goto menuservicios;
						 		break;
						default:

						if(servop==5){
							 system(CLEAR);
  							  menu inicio;
   							 inicio.menuPrincipal();
						}else{
						cout<< "Opcion invalida";  getch(); 	goto menuservicios; break;
						}




					}
					}while(servop!=5);


				break;

        case 4:
        		menumasj:
        			system("cls");
					cout<<"**CONSULTA DE MASAJISTAS**\n";
					cout<<"1.-Buscar masajistas: " <<endl;
					cout<<"2.-Listar todo: "<<endl;
					cout<<"3.-Volver al menu: "<<endl;
					cout<<"Opcion: "<<endl;
					cin>>menumasaj;
					do{
						switch(menumasaj){
							case 1: detallesMasajistas();
								break;

							case 2: listarMasajistas();
								break;

							default:
							if(menumasaj!=3){
								fflush(stdin);
							cout<<"Ingresa una opcion valida";
							getch();
							goto menumasj;

							getch();


							}else {
								system(CLEAR);
    						menu inicio;
    						inicio.menuPrincipal();

							}

							break;
						}

					}while(menumasaj!=3);


				break;

		default:
            if(opcion==5){
            	cout<<"adios";
			}else{
			cout<<"Ha ingresado una opci\242n no valida!\n\n";
            getch();
    			 }
    			 break;
		}


	}while(opcion!=5);
}

void menu::altaCliente()
{
    ofstream escritura;
    ifstream verificador;
    char auxCodigo[30];
    bool coincidencia=false;
    verificador.open("clientes.txt",ios::in);
    escritura.open("clientes.txt",ios::app);
    if(escritura.is_open()&&verificador.is_open())
    {
        cout<<"\t\t\t\t***Dar de alta un cliente***\t\t\t\t\n\n";
        fflush(stdin);
        cout<<"Ingresa el c\242digo del cliente: ";
        cin.getline(auxCodigo,30);
        if(strcmp(auxCodigo,"")==0)
            do
            {
                cout<<"c\242digo de cliente no v\240lido!, intentalo nuevamente: ";
                cin.getline(auxCodigo,30);
            }
            while(strcmp(auxCodigo,"")==0);
        do
        {
            verificador.seekg(0);
            verificador>>codigoCliente;
            while(!verificador.eof())
            {
                verificador>>nombre>>membresia>>servicio>>masajista;

                if(strcmp(codigoCliente,auxCodigo)==0)
                {
                    coincidencia=true;
                    cout<<"\n\nYa existe un cliente con ese c\242digo!\n\n";
                    cout<<"El cliente con ese c\242digo es: "<<nombre<<"\n\n";
                    cout<<"Ingresa un c\242digo v\240lido!: ";
                    cin.getline(auxCodigo,30);
                    if(strcmp(auxCodigo,"")==0)
                        do
                        {
                            cout<<"\nc\242digo de cliente no v\240lido!, intentalo nuevamente: ";
                            cin.getline(auxCodigo,30);
                        }
                        while(strcmp(auxCodigo,"")==0);

                    break;
                }

                verificador>>codigoCliente;
            }

            if(verificador.eof()&&strcmp(auxCodigo,codigoCliente)!=0)
                coincidencia=false;

        }
        while(coincidencia==true);
        system(CLEAR);
        strcpy(codigoCliente,auxCodigo);
        cout<<"***Dar de alta un cliente***\n\n";
        cout<<"Ingresa el c\242digo del cliente: ";
        cout<<codigoCliente;
        cout<<"\n\n";
        fflush(stdin);
        cout<<"Ingresa el nombre del cliente: ";
        cin.getline(nombre,50);
        cout<<"\n\n";
        fflush(stdin);
        cout<<"Tipo de membresia: ";
        cin.getline(membresia,30);
        cout<<"\n\n";
        fflush(stdin);
        cout<<"Servicio: ";
        cin.getline(servicio,20);
        cout<<"\n\n";
        fflush(stdin);
        cout<<"Nombre de Masajista: ";
        cin.getline(masajista,30);
        cout<<"\n\n";

        escritura<<codigoCliente<<"\n\n"<<nombre<<"\n\n"<<membresia<<"\n\n"<<servicio <<"\n\n"<<masajista<<"\n\n";

        cout<<"El registro se ha completado correctamente.\n\n";
    }

    else
    {
        error();
    }

    escritura.close();
    verificador.close();
    pausa();
}


void menu::detallesCliente()
{
    char auxCodigo [30];
    ifstream mostrar;
    bool encontrado=false;
    mostrar.open("clientes.txt",ios::in);
    if(mostrar.is_open())
    {
        fflush(stdin);
        system("cls");
        cout<<"***Consultar detalles de un cliente***\n\n";
        cout<<"Ingresa el c\242digo del cliente que deseas consultar detalles: ";
        cin.getline(auxCodigo,30);
        mostrar>>codigoCliente;
        getch();
        while(!mostrar.eof())
        {
            mostrar>>nombre>>membresia>>servicio>>masajista;
            if(strcmp(auxCodigo,codigoCliente)==0)
            {
                encontrado=true;
                cout<<"\n\nRegistro Encontrado\n\n";
                cout<<"C\242digo: "<<codigoCliente<<endl;
                cout<<"Nombre: "<<nombre<<endl;
                cout<<"Membresia: "<<membresia<<endl;
                cout<<"Servicio: "<<servicio<<endl;
                cout<<"Masajista: "<<masajista<<endl;
                cout<<"\n\n";
            }

            mostrar>>codigoCliente;
        }

        if(encontrado==false)
        {
            cout<<"\n\nNo se encontro el registro: "<<auxCodigo<<"\n\n";
        }
    }

    else
    {
        error();
    }

    mostrar.close();
    pausa();
}

void menu::listarClientes()
{
    int i=0;
    ifstream lectura;
    lectura.open("clientes.txt",ios::in);
    if(lectura.is_open())
    {
    	 fflush(stdin);
        system("cls");
        cout<<"***Listado de todos los clientes***\n\n";
        lectura>>codigoCliente;
        while(!lectura.eof())
        {
            i++;
            lectura>>nombre>>membresia>>servicio>>masajista;
            cout<<"C\242digo: "<<codigoCliente<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Membresia: "<<membresia<<endl;
            cout<<"Servicio: "<<servicio<<endl;
            cout<<"Masajista: "<<masajista<<endl;
            cout<<"\n\n";
            lectura>>codigoCliente;
        }

        if(i==1)
            cout<<"Hay un solo cliente en el registro \n\n";

        else

            cout<<"Hay un total de "<<i<<" clientes registrados \n\n";
    }
    else
    {
        error();
    }
    lectura.close();
    pausa();
}

void pausa()
{
	fflush(stdin);
    cout<<"Presiona Enter para continuar...";
    getch();
    system(CLEAR);
    menu inicio;
    inicio.menuPrincipal();

}

int main()
{
    system ("color f6");
    menu inicio;
    inicio.menuPrincipal();
    return 0;
}

void error()
{
    cout<<"No se pudo abrir el archivo de registros, asegurese que el archivo se encuentre en\n";
    cout<<"la misma ubicaci\242n que el programa o que el archivo de texto se llame: \n";
    cout<<"clientes.txt, si el archivo tiene otro nombre ren\242mbrelo al ya mencionado\n\n";
}

void menu::mostarRegistro(char codigo[30])
{

    ifstream mostrar;
    mostrar.open("clientes.txt",ios::in);
    mostrar>>codigoCliente;
    while(!mostrar.eof())
    {
        mostrar>>nombre>>membresia>>servicio>>masajista;
        if(strcmp(codigo,codigoCliente)==0)
        {
        	fflush(stdin);
       		system("cls");
            cout<<"\n\nRegistro Encontrado\n\n";
            cout<<"C\242digo: "<<codigoCliente<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Membresia: "<<membresia<<endl;
            cout<<"Servicio: "<<servicio<<endl;
            cout<<"Masajista: "<<masajista<<endl;
            cout<<"\n\n";
        }

        mostrar>>codigoCliente;
    }

    mostrar.close();
}




void menu::detallesMasajistas()
{
    char auxCodigo [30];
    ifstream mostrar;
    bool encontrado=false;
    mostrar.open("masajistas.txt",ios::in);
    if(mostrar.is_open())
    {
        fflush(stdin);
        system("cls");
        cout<<"***Consultar detalles del masajista***\n\n";
        cout<<"Ingresa el c\242digo del masajista que deseas consultar detalles: ";
        cin.getline(auxCodigo,30);
        mostrar>>codigoMasajista;
        while(!mostrar.eof())
        {
            mostrar>>nombreMasaj>>especialidad>>horario>>descanso;
            if(strcmp(auxCodigo,codigoMasajista)==0)
            {
                encontrado=true;
                cout<<"\n\nRegistro Encontrado\n\n";
                cout<<"C\242digo: "<<codigoMasajista<<endl;
                cout<<"Nombre: "<<nombreMasaj<<endl;
                cout<<"especialidad: "<<especialidad<<endl;
                cout<<"horario: "<<horario<<endl;
                cout<<"Dia de descanso: "<<descanso<<endl;
                cout<<"\n\n";
            }

            mostrar>>codigoMasajista;
        }

        if(encontrado==false)
        {
            cout<<"\n\nNo se encontro el registro: "<<auxCodigo<<"\n\n";
        }
    }

    else
    {
        error();
    }

    mostrar.close();
    pausa();
}


void menu::listarMasajistas()
{
    int i=0;
    ifstream lectura;
    lectura.open("masajistas.txt",ios::in);
    if(lectura.is_open())
    {
    	system("cls");
        cout<<"***Listado de todos los masajistas***\n\n";
        lectura>>codigoMasajista;
        while(!lectura.eof())
        {
            i++;
            lectura>>nombreMasaj>>especialidad>>horario>>descanso;
            cout<<"C\242digo: "<<codigoMasajista<<endl;
            cout<<"Nombre: "<<nombreMasaj<<endl;
            cout<<"especialidad: "<<especialidad<<endl;
            cout<<"horario: "<<horario<<endl;
            cout<<"Dia de descanso: "<<descanso<<endl;
            cout<<"\n\n";
            lectura>>codigoMasajista;
        }

        if(i==1)
            cout<<"Solo hay un masajista\n\n";

        else

            cout<<"Hay un total de "<<i<<" masajistas registrados\n\n";
    }
    else
    {
        error();
    }
    lectura.close();
    pausa();
}

void menu::mostarRegistroMasaj(char codigo[30])
{

    ifstream mostrar;
    mostrar.open("masajistas.txt",ios::in);
    mostrar>>codigoMasajista;
    while(!mostrar.eof())
    {
        mostrar>>nombreMasaj>>especialidad>>horario>>descanso;
        if(strcmp(codigo,codigoMasajista)==0)
        {
            cout<<"\n\nRegistro Encontrado\n\n";
            cout<<"C\242digo: "<<codigoMasajista<<endl;
            cout<<"Nombre: "<<nombreMasaj<<endl;
            cout<<"especialidad: "<<especialidad<<endl;
            cout<<"horario: "<<horario<<endl;
            cout<<"Dia de descanso: "<<descanso<<endl;
            cout<<"\n\n";
        }

        mostrar>>codigoMasajista;
    }

    mostrar.close();
}

