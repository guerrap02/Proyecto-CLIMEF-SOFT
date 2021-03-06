/*              SEMINARIO DE SOLUCIÓN DE
                PROBLEMAS DE PREGRAMACIÓN:
                    PROYECTO

    EQUIPO 2:
                GUERRA LÓPEZ PAULINA ESTEFANIA
                ZARAGOZA JIMENEZ MOISES DE JESUS

    TEMA:       SISTEMA MEDICO ADMINISTRATIVO
                        *CLIMEF SOFT*   */

//libr4erias
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//constantes
#define USUARIO "ADMIN"
#define CLAVE "123"

#define TECLA_ENTER 13
#define TECLA_BACKSPACE 8
#define LONGITUD 5
#define MAX_INTENTOS 3
#define TAM 700

//  Prototipos
void menu_principal();
void submenu();

//  Estructuras
    //  Las estructuras no estan completas me revolivi en este apartado
    //  empleadp
struct empleado{
    int num_empleado;
    char nombre[30];
}registro[TAM];

    //  Paciente
struct paciente{
    char nombre [30];
    int edad, rfc;
    char curp[30], domicilio[20], telefono[10];
}registro[TAM];

    // consulta
struct consulta{
    char id[10];
    int rfcc;
    char nombre[30];
}registro[TAM];


// main
int main(){
	char usuario[LONGITUD + 1];
	char clave[LONGITUD + 1];
	int intento = 0;
	int ingresa = 0;
	char caracter;
	int i = 0, opc, opc1, seguir = 1;

	do {
		i = 0;
		system("cls");
		printf("\n\t\t\tINICIO DE SESION\n");
		printf("\n\t\tUSUARIO: ");
		gets(usuario);
		printf("\t\tCONTRASEÑA: ");
		while (caracter = getch()) {
			if (caracter == TECLA_ENTER) {
				clave[i] = '\0';
				break;

			} else if (caracter == TECLA_BACKSPACE) {
				if (i > 0) {
					i--;
					printf("\b \b");
				}

			} else {
				if (i < LONGITUD) {
					printf("*");
					clave[i] = caracter;
					i++;
				}
			}
		}

		if (strcmp(usuario, USUARIO) == 0 && strcmp(clave, CLAVE) == 0) {
			ingresa = 1;

		} else {
			printf("\n\t\tUsuario y/o clave son incorrectos\n");
			intento++;
			getchar();
		}

	} while (intento < MAX_INTENTOS && ingresa == 0);

	while (seguir == 1){
        if (ingresa == 1) {
        system("cls");
		printf("\n\n\t\tBienvenido al Sistema\n");
		menu_principal();
		printf("\n\t\tSeleciona una opcion: ");
		scanf("%d", &opc);

		switch (opc){
            case 1:
                system("cls");
                printf("\n\n\t\tEmpleado\n");
                submenu();
                printf("\n\t\tSeleciona una opcion: ");
                scanf("%d", &opc1);
                switch (opc1){
                    case 0:
                        break;
                    case 1:
                        // alta
                        break;
                    case 2:
                        //visualizar
                        break;
                    case 3:
                        //Busqueda
                    default:
                        printf("\n\t\tHa seleccionado una opcion incorrecta");
                }

                break;
            case 2:
                system("cls");
                printf("\n\n\t\tPaciente\n");
                submenu();
                system("PAUSE");
                break;
            case 3:
                system("cls");
                printf("\n\n\t\tConsulta\n");
                submenu();
                system("PAUSE");
                break;
            case 0:
                seguir = 0;
                break;
            default:
                system("cls");
                printf("\n\n\tHa ingresado una opcion incorrecta, intente de nuevo\n");

		}



        }
        else {
            system("cls");
            printf("\n\n\tHa sobrepasado el numero maximo de intentos permitidos\n");
        }

	}

	return 0;
}

//  Menu
void menu_principal(){
    printf("\n\n\t\tMenu:");
    printf("\n\t\t1) Empleado");
    printf("\n\t\t2) Paciente");
    printf("\n\t\t3) Consulta");
    printf("\n\t\t0) Salir");
};

//Submenu
void submenu(){
    printf("\n\t\t1) Alta (registro de datos)");
    printf("\n\t\t2) Visualizar (mostrar datos)");
    printf("\n\t\t3) Busqueda (localización de datos)");
    printf("\n\t\t0) Regresar al menú anterior");
};

