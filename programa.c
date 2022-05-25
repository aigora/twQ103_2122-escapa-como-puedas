#include <stdio.h>
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

struct respuestas {
	int res1;
	int res2;
	int res3;
	int res4;
	float res5;
	float res6;
	char res7[30];
	char res8[30];
};

struct puntos {
	int equipo1;
	int equipo2;
};

int pregunta7(char respuesta7[]) {
	
	int orden,i;
	char frase2[]="sulfito plumboso";
	
	orden=strcmp(respuesta7,frase2);
	if(orden==0) {
	
	
	} else if(orden==1) {
	
	}
	
return orden;						
}

int pregunta8(char respuesta8[]) {
	
	int orden1,i;
	char frase2[]="manganato de cesio";
	
	orden1=strcmp(respuesta8,frase2);
	if(orden1==0) {
	
	
	} else if(orden1==1) {
	
	}
	
return orden1;						
}


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
	
	int i=0,j=0,m=0,orden, orden1;
	int respuesta1,respuesta2,respuesta3, respuesta4;
	float respuesta5, respuesta6;
	char respuesta7[30], respuesta8[30];
	char opcion;
	FILE *pf;
	char cad[1500];
	int edad,numero;
	setlocale (LC_CTYPE,"spanish"); 
	struct grupos grupo[2];
	struct respuestas respuesta={3,4,1,7,0.82,0.000000024,"sulfito plumboso","manganato de cesio"};
	struct puntos punto={5,5};
	
	


printf("\n\nBienvenidos a ESCAPATE COMO PUEDAS\n\n\n");

banner();

printf("Para poder jugar a este escape room necesitaras ser mayor de edad\n");
printf("A continuacion debes elegir una de las dos opciones;\n\n");

do {
    fflush(stdin);
    printf("Elige la opcion deseada:\n");
    printf("A - Estamos preparados para todo, empecemos a conocernos.\n");
    printf("B - Empieza el juego\n");
    printf("C - Instrucciones del juego\n");
    printf("D - Salir del juego\n");
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
					printf("El tiempo corre en vuestra contra. Dos equipos os enfrentareis para capturar la cura y el mejor decidira que hacer con ella\n");
					printf("\nBienvenidos a lo que podria ser el fin del mundo. Bienvenido a ESCAPA COMO PUEDAS\n");
					
					printf("Os encontrais dentro del laboratorio donde se origino la cura del coronavirus.Debereis resolver los distintos escenarios cada uno con distintas dificultades\n");
					printf("Os dirigireis a la primera puerta a la derecha donde encontrareis vuestra primera prueba\n");
					printf("Mucha suerte. Confiamos en vosotros\n");
					
					
						
					
					printf("Bienvenidos a la sala de pruebas del laboratorio. A continuacion encontrareis un par de preguntas que debereis resolver para conseguir una mayor puntuacion\n");
					
					printf("\n\n\nPRIMERA PREGUNTA. EQUIPO 1\n");
					
					
	
						printf("Escoja una de las siguientes opciones:\n");
  						printf("Opción 1: congestión nasal, rinorrea (aumento de mucosidad nasal), estornudos. lagrimeo y enrojecimiento de los ojos, tos seca.\n");
						printf("Opcion 2: tos, dolor de garganta y destilación nasal.\n");
						printf("Opcion 3: fiebre, tos, cansancio, pérdida del gusto o del olfato\n");
						printf("Opcion 4: congestión o goteo nasal, dolor de garganta, tos, fiebre de bajo grado\n");
  						scanf("%d", &respuesta1);
  						
  						switch(respuesta1)
  						{
                 		case 1 : printf("Opción 1--ERROR\n");
                 		punto.equipo1--;
                        break;
                 		case 2 : printf("Opción 2--ERROR\n");
                 		punto.equipo1--;
                        break;
                 		case 3 : printf("Opción 3. RESPUESTA CORRECTA\n");
                 		punto.equipo1=punto.equipo1+5;
                        break;
                 		case 4 : printf("Opción 4--ERROR\n");
                 		punto.equipo1--;
                    	break;
                 		default : printf("Opción desconocida\n"); 
                 		punto.equipo1--;
                 		break;
       					}
       		
						
							
					system("cls");
	                    
	                    
	 				printf("\n\n\nSEGUNDA PREGUNTA. EQUIPO 1\n");
	 
	 
	 				printf("Varios policías vigilan un cuartel de delincuentes en el que quieren infiltrarse pero para el que necesitan una contraseña.\n");
					printf("Una persona llama a la puerta del local y una voz dice desde el interior 8, a lo que esa persona contesta 4. Llega otro y le dicen 14, a lo que contesta 7.\n");
	 				printf("Uno de los policías llega a la puerta del local, La voz del interior le dice 0, a lo que el responde 0\n");
	 				printf("Sin embargo, en lugar de dejarle pasar le disparan.\n");
	 				printf("Averigue cual es la contraseña\n");


	 				for(i=0;i<5;i++) { 
	 				
	 					printf("Introduzca la respuesta a 0:\n");
	 					
	 					scanf("%d", &respuesta2);
	 					
	 					if(respuesta2!=respuesta.res2) {
	 						punto.equipo1--;
						 } else if(respuesta2==respuesta.res2) {
						 	punto.equipo1=punto.equipo1+5;
						 	break;
						 }
	 				}
	 
					printf("RESPUESTA CORRECTA. La contraseña no consistía en dividir el número entre dos, sino en decir el número de letras que tenía cada número que les decían.");
					
	                
					system("cls"); 
					
					
					printf("\n\n\nPRIMERA PREGUNTA. EQUIPO 2\n");
					
					
	
					printf("Escoja la opcion adecuada sobre el uso del tipo de mascarilla:\n");
  					printf("Opción 1: Las mascarillas higienicas no son un producto sanitario. Funcionan como un complemento de protección y seguridad.\n");
					printf("Opcion 2: Las mascarillas quirúrgicas, evitan que cualquier persona pueda alcanzar agentes infecciosos.\n");
					printf("Opcion 3: Las mascarillas EPI filtran el aire exalado para evitar la salida de organismos como virus.\n");
					printf("Opcion 4: Las mascarillas higienicas están fabricadas a base de materiales textiles y pero no son reutilizables.\n");
  					scanf("%d", &respuesta3);
  						
  					switch(respuesta3)
  						{
                 		case 1 : printf("Opción 1. RESPUESTA COORECTA\n");
                 		punto.equipo2=punto.equipo2+5;
                        break;
                 		case 2 : printf("Opción 2--ERROR\n");
                 		punto.equipo2--;
                        break;
                 		case 3 : printf("Opción 3--ERROR\n");
                 		punto.equipo2--;
                        break;
                 		case 4 : printf("Opción 4--ERROR\n");
                 		punto.equipo2--;
                    	break;
                 		default : printf("Opción desconocida\n"); 
                 		punto.equipo2--;
                 		break;
       					}
       		

					system("cls");
						
					printf("\n\n\nSEGUNDA PREGUNTA. EQUIPO 2\n");
					
					printf("Debeis completar la serie numerica para poder continuar\n");
					printf(" 5 6 9 6 7 6 ¿?\n");
					
					for(i=0;i<5;i++) {
							printf("¿Que numero falta?\n");
					scanf("%d", &respuesta4);
					
					if(respuesta4!=respuesta.res4) {
	 						punto.equipo2--;
					} else if(respuesta4==respuesta.res4) {
							printf("RESPUESTA CORRECTA\n");
						 	punto.equipo2=punto.equipo2+5;
						 	break;
					}
					
					}
					
					
					
					printf("MUY BIEN EQUIPOS HABEIS CONSEGUIDO PASAR A LA SIGUIENTE RONDA\n");
					printf("Primero hagamos un recuento de los puntos que llevais cada uno\n");
					printf("El equipo %s lleva %d puntos, mientras que el equipo %s lleva %d puntos\n", grupo[0].nombre_equipo,punto.equipo1, grupo[1].nombre_equipo, punto.equipo2);
					
					printf("\n\nPerfecto. Ahora pasaremos a las siguientes cuestiones con una dificultad media\n");
					printf("Que os vata bien. ¡Y que la suerte esté siempre de vuestra parte!\n");
					
					printf("\n\nEquipo %s os estais adentrando en la sala de control de mando, tendreis que conseguir arreglar el ordenador principal, para ver donde se encuentra la cura\n", grupo[0].nombre_equipo);
					printf("Tened en cuenta que ahora contareis con muchas menos oportuidades que antes\n");
					printf("Sed inteligentes y no desperdicies estos puntos que luego os haran falta\n");
					printf("Nos vemos a la salida\n");
					 
					
					
					printf("\n\n\n TERCERA PREGUNTA EQUIPO 1");
					
	  				printf("Un circuito RLC formado por R=45 O, L=0.85 H y C=6 µF se conecta a una tension alterna eficaz de 220V y 50 Hz.\n");
	  				printf("Calcula la intensidad del circuito para poder abri la puerta y continuar a la siguiente mision.\n");
	  				printf("AYUDA: La formula necesaria se encuentra en el tema de corriente alterna.\n");
	  				
	  				for(i=0;i<2;i++) {
					  
	  					printf("Introduce la respuesta\n");
	  					scanf("%f",&respuesta5);
	  					
	  					if(respuesta5!=respuesta.res5) {
	  						
	  						punto.equipo1=punto.equipo1-3;
						  } else if(respuesta5==respuesta.res5) {
						  	punto.equipo1=punto.equipo1+8;
						  	printf("Correcto\n");
						  }
					  }
					  
					  
					printf("\n\nEquipo %s. Vosotros os encontrais actualmente en la sala de alta corriente\n");
					printf("Debereis poner la solucion correcta para iluminar el sendero que os llevara a la siguiente prueba\n");
					printf("Mucha suerte\n");
					
					
					printf("\n\n\n TERCERA PREGUNTA EQUIPO 2");
	  				printf("La separación entre dos placas metálicas cargadas es de 15 cm en el vacío.\n");
	  				printf(" El campo eléctrico tiene una intensidad E=3000 N/C y un electrón de carga -1,6 10-19 C y de masa 9,1 10-31 Kg se suelta justamente sobre la superficie de la placa negativa.\n");
	  				printf("¿Cuánto tiempo tardará en alcanzar la otra placa?.\n");
	  				printf("AYUDA: La formula necesaria se encuentra en el tema de electrostatica.\n");
	  				
	  				for(i=0;i<2;i++) {
	  					
					
	  					printf("Introduce la respuesta\n");
	  					scanf("%f", &respuesta6);
	  					
	  					if(respuesta6!=respuesta.res6) {
	  						punto.equipo2=punto.equipo2-3;
						} else if(respuesta6==respuesta.res6) {
						  	punto.equipo2=punto.equipo1+8;
						  	break;
						  }
	  					
	  					}
	  					
	  					
	  				printf("Perfecto. Espero que hayais conseguido muchos puntos en estas ultimas preguntas\n");
					printf("A continuacion os haremos las ultimas antes del duelo final.\n");
					
					printf("Equipo %s es tu turno\n", grupo[0].nombre_equipo);
					
					printf("Debereis escribir la nomenclatura tradicional de este compuesto PbSO3 que ha sido utilizado para la cura\n");
	
					for(i=0;i<2;i++) {
						
						printf("Introduce compuesto\n");
						fflush (stdin);
						gets(respuesta7);
						
						orden=pregunta7(respuesta7);
						
						if(pregunta7(respuesta7)==0) {
							printf("Correcto\n");
							punto.equipo1=punto.equipo1+8;
							break;
							
						}else if(pregunta7(respuesta7)!=0) {
							punto.equipo1=punto.equipo1-3;
							printf("Incorrecta\n");
						}
		
					}
					
					printf("Equipo %s, es vuestro turno de ser capaces de elegir uno de los componentes que faltan en la vacuna\n", grupo[1].nombre_equipo);
					printf("A continuacion de entre todos los botes del laboratorio debereis seleccionar el bote adecuado\n");
					printf("Mucha suerte\n");
					
					printf("Debereis escribir la nomenclatura de stock de este compuesto Cs2MnO4\n");
					
					for(i=0;i<2;i++) {
						
						printf("Introduce la nomenclatura stock de dicho compuesto\n");
						fflush (stdin);
						gets(respuesta8);
						
						orden1=pregunta8(respuesta8);
						
						if(pregunta8(respuesta8)==0) {
							printf("Correcto\n");
							punto.equipo2=punto.equipo2+8;
							break;
							
						}else if(pregunta8(respuesta8)!=0) {
							punto.equipo2=punto.equipo2-3;
							printf("Incorrecta\n");
						}
		
					}
						break;
						return 0;
							
                		
	                   	
                			
                	
            case 'C':
					
					if (!(pf=fopen("instrucciones.txt","rb"))) /* controlamos si se produce un error */
					{
						printf("Error al abrir el fichero");
					}else
					{
					fgets(cad,1500,pf);
					printf("%s",cad);
					}		
                	fclose(pf);
                	break;
                	
            case 'D':
            	printf("Se procedera a salir del juego.\n");
                return 0;
                break;
            	
            }    	
                	 
	} 
 while (opcion!='A'||'B'||'C'||'D'); {
	printf("\n\nERROR 80028F10. No se ha podido cargar el juego");
	system("cls");
	}
return 0; 
} 


