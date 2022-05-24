#include <stdio.h>
#include <iostream>
#include <ctime> 
#include <locale.h>
#include <string.h>
#include <stdlib.h>



typedef struct{
char nombre_integrantes[20];
char capitan[20];
char correo[50];
char contrasenna[10]; 
}equipo;

struct grupos{
char nombre_equipo[20];
equipo introduccion [20];
};



void banner () {
printf("                   ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶                     \n");
printf("                 ¶¶¶¶¶¶             ¶¶¶¶¶¶¶                \n");
printf("              ¶¶¶¶                       ¶¶¶¶              \n");
printf("             ¶¶¶                             ¶¶            \n");
printf("            ¶¶                                ¶¶           \n");
printf("           ¶¶                                 ¶¶           \n");
printf("          ¶¶                                   ¶¶          \n");
printf("          ¶¶ ¶¶                             ¶¶ ¶¶          \n");
printf("          ¶¶ ¶¶                             ¶¶  ¶          \n");
printf("          ¶¶ ¶¶                             ¶¶  ¶          \n");
printf("          ¶¶  ¶¶                            ¶¶ ¶¶          \n");
printf("          ¶¶  ¶¶                           ¶¶  ¶¶          \n");
printf("           ¶¶ ¶¶   ¶¶¶¶¶¶¶¶     ¶¶¶¶¶¶¶¶   ¶¶ ¶¶           \n");
printf("            ¶¶¶¶ ¶¶¶¶¶¶¶¶¶¶     ¶¶¶¶¶¶¶¶¶ ¶¶¶¶¶           \n");
printf("             ¶¶¶ ¶¶¶¶¶¶¶¶¶¶     ¶¶¶¶¶¶¶¶¶¶ ¶¶¶             \n");
printf("    ¶¶¶       ¶¶  ¶¶¶¶¶¶¶¶       ¶¶¶¶¶¶¶¶¶  ¶¶      ¶¶¶¶   \n");
printf("   ¶¶¶¶¶     ¶¶   ¶¶¶¶¶¶¶   ¶¶¶   ¶¶¶¶¶¶¶   ¶¶     ¶¶¶¶¶¶  \n");
printf("  ¶¶   ¶¶    ¶¶     ¶¶¶    ¶¶¶¶¶    ¶¶¶     ¶¶    ¶¶   ¶¶  \n");
printf(" ¶¶¶    ¶¶¶¶  ¶¶          ¶¶¶¶¶¶¶          ¶¶  ¶¶¶¶    ¶¶¶ \n");
printf("¶¶         ¶¶¶¶¶¶¶¶       ¶¶¶¶¶¶¶       ¶¶¶¶¶¶¶¶¶        ¶¶\n");
printf("¶¶¶¶¶¶¶¶¶     ¶¶¶¶¶¶¶¶    ¶¶¶¶¶¶¶    ¶¶¶¶¶¶¶¶      ¶¶¶¶¶¶¶¶\n");
printf("  ¶¶¶¶ ¶¶¶¶¶       ¶¶¶¶¶              ¶¶¶ ¶¶     ¶¶¶¶¶¶ ¶¶¶\n");
printf("          ¶¶¶¶¶¶  ¶¶¶  ¶¶           ¶¶  ¶¶¶  ¶¶¶¶¶¶        \n");
printf("              ¶¶¶¶¶¶ ¶¶ ¶¶¶¶¶¶¶¶¶¶¶ ¶¶ ¶¶¶¶¶¶              \n");
printf("                  ¶¶ ¶¶ ¶ ¶ ¶ ¶ ¶ ¶ ¶ ¶ ¶¶                 \n");
printf("                ¶¶¶¶  ¶ ¶ ¶ ¶ ¶ ¶ ¶ ¶   ¶¶¶¶¶              \n");
printf("            ¶¶¶¶¶ ¶¶   ¶¶¶¶¶¶¶¶¶¶¶¶¶   ¶¶ ¶¶¶¶¶            \n");
printf("    ¶¶¶¶¶¶¶¶¶¶     ¶¶               ¶¶      ¶¶¶¶¶¶¶¶¶      \n");
printf("   ¶¶           ¶¶¶¶¶¶¶             ¶¶¶¶¶¶¶¶          ¶¶   \n");
printf("    ¶¶¶     ¶¶¶¶¶     ¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶     ¶¶¶¶¶     ¶¶¶    \n");
printf("     ¶¶   ¶¶¶           ¶¶¶¶¶¶¶¶¶           ¶¶¶   ¶¶       \n");
printf("      ¶¶  ¶¶                                   ¶¶  ¶¶      \n");
printf("       ¶¶¶¶                                     ¶¶¶¶       \n");
printf("\n");

return; 
}

int main () {
	
	int i=0,j=0,m=0;
	int respuesta1,respuesta2,respuesta3, respuesta4;
	float respuesta5, respuesta6;
	int solucion2=4;
	char opcion;
	int edad,numero;
	setlocale (LC_CTYPE,"spanish"); 
	struct grupos grupo[2];
	unsigned t0, t1,t2, t3, t4;
	double time, time1, time2, time3;
	
	


printf("\n\nBienvenidos a ESCAPATE COMO PUEDAS\n\n\n");

banner();

printf("Para poder jugar a este escape room necesitaras ser mayor de edad\n");
printf("A continuacion debes elegir una de las dos opciones;\n\n");

do {
    fflush(stdin);
    printf("Elige la opcion deseada:\n");
    printf("A - Estamos preparados para todo, empecemos a conocernos.\n");
    printf("B - Empieza el juego\n");
    printf("C - Salir del juego\n");
    fflush (stdin);
    scanf("%c", &opcion);
                
		switch (opcion) {
	
        
        	case 'A':
        		printf("Indicanos tu edad para continuar:\n");
        		scanf("%d", &edad);
        		
        		if (edad>16) { 
					
					for (i=0;i<2;i++) {
		
						printf("Introduce el nombre del equipo %d:\n",i+1);
						fflush(stdin);
						gets(grupo[i].nombre_equipo);
		
						printf("Ahora vamos con el ultimo paso, conocer a nuestros concursantes:\n");
		
						printf("Indica el numero de integrantes\n");
						scanf("%d", &numero);
		
		
						for(j=0;j<numero;j++) {
							printf ("\nEscribe el nombre del integrantre %d: \n",j+1);
							fflush(stdin);
								gets(grupo[i].introduccion[j].nombre_integrantes);
						}
						printf ("\nEscribe el nombre de vuestro capitan: \n");
						fflush(stdin);
						gets(grupo[i].introduccion[i].capitan);
			
		
						printf ("Escribe un correo electronico:\n");
						fflush(stdin);
						gets(grupo[i].introduccion[i].correo);
				
						printf ("Escribe la contraseña del equipo %d\n",i+1);
						fflush(stdin);
						gets(grupo[i].introduccion[i].contrasenna);
	
					}

				}else {
			printf("Lo sentimos, debes ser mayor de 16.\n");
				return 0;
			} 
			 
				break;
				
			case 'B':		
                	printf("¿Preparados? Comencemos.\n");
                	printf("\n\n\nEl 31 de diciembre de 2019, la Organización Mundial de la Salud (OMS) recibió reportes de presencia de neumonía, de origen desconocido, en la ciudad de Wuhan, en China.\n"); 
					printf("Rápidamente, a principios de enero, las autoridades de este país identificaron la causa como una nueva cepa de coronavirus.\n");
					printf("El objetivo, frenar cuanto antes un brote de Covid-19, una enfermedad vírica muy contagiosa y de alta letalidad provocada por el virus del mismo nombre.\n");
					printf("Es, a día de hoy, una de las más mortíferas que se conocen para el ser humano.\n");
					printf("El tiempo corre en vuestra contra. Necesitais realizar la misión en menos de una hora sino quieres que se produzca la extinción humana en la Tierra\n");
					printf("\nBienvenido a lo que podria ser el fin del mundo. Bienvenido a ESCAPA COMO PUEDAS\n");
					
					printf("Os encontrais dentro del laboratorio donde se origino la cura del coronavirus.Debereis resolver los distintos escenarios h¡antes de que se acabe el tiempo\n");
					printf("Os dirigireis a la primera puerta a la derecha donde encontrareis vuestra primera prueba\n");
					printf("Mucha suerte. Confiamos en vosotros\n");
					
					t0=clock();
						
					printf("\n\n\nPRIMERA PREGUNTA. EQUIPO 1\n");
					printf("\nBienvenidos al ordenador general. Para esta prueba contareis conun tiempo de 15seg, donde debereis marcar la opcion correcta para abrir la siguiente sala.\n");
					
					
					do {
	
						printf("Escoja una de las siguientes opciones:\n");
  						printf("Opción 1: congestión nasal, rinorrea (aumento de mucosidad nasal), estornudos. lagrimeo y enrojecimiento de los ojos, tos seca.\n");
						printf("Opcion 2: tos, dolor de garganta y destilación nasal.\n");
						printf("Opcion 3: fiebre, tos, cansancio, pérdida del gusto o del olfato\n");
						printf("Opcion 4: congestión o goteo nasal, dolor de garganta, tos, fiebre de bajo grado\n");
  						scanf("%d", &respuesta1);
  						
  						switch(respuesta1)
  						{
                 		case 1 : printf("Opción 1--ERROR\n");
                        break;
                 		case 2 : printf("Opción 2--ERROR\n");
                        break;
                 		case 3 : printf("Opción 3\n");
                        break;
                 		case 4 : printf("Opción 4--ERROR\n");
                    	break;
                 		default : printf("Opción desconocida\n"); 
                 		break;
       					}
       		
 					}while(respuesta1!=3);  
					printf("RESPUESTA COORECTA\n");
					t1 = clock();
 
	                time = (double(t1-t0)/CLOCKS_PER_SEC);
	                std::cout << "tiempo de repuesta: " << time << std::endl;
						
							
					system("cls");
	                    
	                t0=clock();      
	 				printf("\n\n\nSEGUNDA PREGUNTA. EQUIPO 1\n");
	 
	 
	 				printf("Varios policías vigilan un cuartel de delincuentes en el que quieren infiltrarse pero para el que necesitan una contraseña.\n");
					printf("Una persona llama a la puerta del local y una voz dice desde el interior 8, a lo que esa persona contesta 4. Llega otro y le dicen 14, a lo que contesta 7.\n");
	 				printf("Uno de los policías llega a la puerta del local, La voz del interior le dice 0, a lo que el responde 0\n");
	 				printf("Sin embargo, en lugar de dejarle pasar le disparan.\n");
	 				printf("Averigue cual es la contraseña\n");


	 				do {
	 					printf("Introduzca la respuesta a 0:\n");
	 					fflush(stdin);
	 					scanf("%d", &respuesta2);
	 	
	 				}while(respuesta2!=4);
	 
					printf("RESPUESTA CORRECTA. La contraseña no consistía en dividir el número entre dos, sino en decir el número de letras que tenía cada número que les decían.");
					t2 = clock();
 
                    time1 = (double(t2-t0)/CLOCKS_PER_SEC);
	                std::cout << "tiempo de respuesta: " << time1 << std::endl;
	                
					system("cls"); 
					
					t0=clock();
					printf("\n\n\nPRIMERA PREGUNTA. EQUIPO 2\n");
					do {
	
						printf("Escoja la opcion adecuada sobre el uso del tipo de mascarilla:\n");
  						printf("Opción 1: Las mascarillas higienicas no son un producto sanitario. Funcionan como un complemento de protección y seguridad.\n");
						printf("Opcion 2: Las mascarillas quirúrgicas, evitan que cualquier persona pueda alcanzar agentes infecciosos.\n");
						printf("Opcion 3: Las mascarillas EPI filtran el aire exalado para evitar la salida de organismos como virus.\n");
						printf("Opcion 4: Las mascarillas higienicas están fabricadas a base de materiales textiles y pero no son reutilizables.\n");
  						scanf("%d", &respuesta3);
  						
  						switch(respuesta3)
  						{
                 		case 1 : printf("Opción 1\n");
                        break;
                 		case 2 : printf("Opción 2--ERROR\n");
                        break;
                 		case 3 : printf("Opción 3--ERROR\n");
                        break;
                 		case 4 : printf("Opción 4--ERROR\n");
                    	break;
                 		default : printf("Opción desconocida\n"); 
                 		break;
       					}
       		
 					} while(respuesta3!=1); 
					printf("RESPUESTA COORECTA\n");
					t3=clock();
					
					time2 = (double(t3-t0)/CLOCKS_PER_SEC);
	                std::cout << "tiempo de respuesta: " << time2 << std::endl;
					
                		
						
					system("cls");
						
					printf("\n\n\nSEGUNDA PREGUNTA. EQUIPO 2\n");
					
					printf("Debeis completar la serie numerica para poder continuar\n");
					printf(" 5 6 9 6 7 6 ¿?\n");
					do{
						printf("¿Que numero falta?\n");
						scanf("%d", &respuesta4);
					
					}while(respuesta4!=7);
					
					printf("RESPUESTA CORRECTA\n");
					 
					
					
					printf("\n\n\n TERCERA PREGUNTA EQUIPO 1");
					
	  				printf("Un circuito RLC formado por R=45 O, L=0.85 H y C=6 µF se conecta a una tension alterna eficaz de 220V y 50 Hz.\n");
	  				printf("Calcula la intensidad del circuito para poder abri la puerta y continuar a la siguiente mision.\n");
	  				printf("AYUDA: La formula necesaria se encuentra en el tema de corriente alterna.\n");
	  				
	  				do{
	  					printf("Introduce la respuesta\n");
	  					scanf("%f",&respuesta5);
	  					
					  }while(respuesta5!=0.82);
					  
					printf("\n\n\n TERCERA PREGUNTA EQUIPO 2");
	  				printf("La separación entre dos placas metálicas cargadas es de 15 cm en el vacío.\n");
	  				printf(" El campo eléctrico tiene una intensidad E=3000 N/C y un electrón de carga -1,6 10-19 C y de masa 9,1 10-31 Kg se suelta justamente sobre la superficie de la placa negativa.\n");
	  				printf("¿Cuánto tiempo tardará en alcanzar la otra placa?.\n");
	  				printf("AYUDA: La formula necesaria se encuentra en el tema de electrostatica.\n");
	  				
	  				do{
	  					printf("Introduce la respuesta\n");
	  					scanf("%f", &respuesta6);
					  } while(respuesta6!=0.000000024);
						break;
						return 0;
							
                		
	                   	
                			
                	
            case 'C':		
                	printf("Se procedera a salir del juego.\n");
                		return 0;
                	break;
            	
            }    	
                	 
	} 
 while (opcion!='C'); {
	printf("\n\nERROR 80028F10. No se ha podido cargar el juego");
	system("cls");
	}
return 0; 
} 


