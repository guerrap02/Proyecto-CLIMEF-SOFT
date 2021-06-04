/*      SEMINARIO DE SOLUCIÓN DE 
        PROBLEMAS DE PREGRAMACIÓN:
                PROYECTO 
    
    EQUIPO 2: 
    GUERRA LÓPEZ PAULINA ESTEFANIA 
    MOISES

    TEMA: SISTEMA MEDICO ADMINISTRATIVO
            *CLIMEF SOFT*   */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define "ADMIN"
#define "123"

//  Registro del sistema
struct agenda
{
    char empleado[50], consulta[50];
    char paciente[50], nombre[50], edad[50], sexo[50], telefono[50];
    char rfc[50], tipo_paciente[50], curp[50], domicilio[50];
};sistema[700];

// menu principal
char menu_principal()
{   //  se muestran las opciones
    printf("\n\n\tMENU PRINCIPAL");
    printf("\n\t1)  Empleado ");
    printf("\n\t2)  Paciente ");
    printf("\n\t3)  Consulta ");
    printf("\n\t0)  Salir ");
};

void main()
{
    int seguir = 1, opc_1;
    char usuario, contraseña;

    while seguir == 1   //  entra a un ciclo el cual no sabemos cuando va a parar
    {
        system("cls");  //  limpia pantalla
        printf("\n\tUsuario: ");    //  pide auntentificación
        fflush(stdin)
        scanf("%[^\n]s", &usuario);
        printf("\n\tContraseña: ");
        scanf("%[^\n]s", &contraseña);

        if (usuario == "ADMIN" & contraseña == "123")   //  si la la autentificación es correcta
        {
            system("cls");
            menu_principal();
            printf("\n\tElige una opción: ");
            scanf("%d", &opc_1);
            if opc >=1 & opc <=3
            {
                switch (opc)
                {
                    case 1:
                        empleado_sub();
                        break;
                    case 2:
                        paciente_sub();
                        break;
                    case 3:
                        consulta_sub();
                }
            }
            else if opc == 0
                seguir = 0;
            else
                printf("\n\tHas ingresado una opción incorrecta, vuelve a intentar")
        }

        else if (usuario == "ADMIN" & contraseña != "123")    //  si solo
        {
            printf("\n\tLa contraseña es incorrecta");
        }
        else if (contraseña == "123" & usuario != "ADMIN")
        {
            printf("\n\tEl usuario es incorrecta");
        }
        else
            printf("\n\tUsuario y contraseña incorrectos");
        
    } 

};

void empleado_sub()
{
    system("cls");
    printf("\n\t1) Alta");
    printf("\n\t2) Visualizar");
    printf("\n\t3) Búsqueda");
    printf("\n\t0) Regresar al menú anterior")
};

