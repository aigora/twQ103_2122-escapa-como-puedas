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
	char res9[50];
	char res10[50];
	char res11[50];
	char res12[50];
	char res13[50];
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

int pregunta9(char respuesta9[]) {
	
	int orden2,i;
	char frase2[]="resistire para seguir viviendo";
	
	orden2=strcmp(respuesta9,frase2);
	if(orden2==0) {
	
	
	} else if(orden2==1) {
	
	}
	
return orden2;						
}

int pregunta10(char respuesta10[]) {
	
	int orden3,i;
	char frase2[]="quedate en tu casa";
	
	orden3=strcmp(respuesta10,frase2);
	if(orden3==0) {
	
	
	} else if(orden3==1) {
	
	}
	
return orden3;						
}

int pregunta11(char respuesta11[]) {
	
	int orden4,i;
	char frase2[]="Nueva Zelanda";
	
	orden4=strcmp(respuesta11,frase2);
	if(orden4==0) {
	
	
	} else if(orden4==1) {
	
	}
	
return orden4;						
}

int pregunta12(char respuesta12[]) {
	
	int orden5,i;
	char frase2[]="Amazonas";
	
	orden5=strcmp(respuesta12,frase2);
	if(orden5==0) {
	
	
	} else if(orden5==1) {
	
	}
	
return orden5;						
}

int pregunta13(char respuesta13[]) {
	
	int orden6,i;
	char frase2[]="Inglaterra";
	
	orden6=strcmp(respuesta13,frase2);
	if(orden6==0) {
	
	
	} else if(orden6==1) {
	
	}
	
return orden6;						
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
	
	int i=0,j=0,m=0,orden, orden1,orden2, orden3, orden4, orden5, orden6,  covid=2019, suma=0, decision;
	int respuesta1,respuesta2,respuesta3, respuesta4;
	int comodin, comodin1;
	float respuesta5, respuesta6;
	char respuesta7[30], respuesta8[30],respuesta9[50], respuesta10[50], respuesta11[50], respuesta12[50], respuesta13[50];
	char cancion[50],cancion2[50];
	char opcion;
	char jug1,jug2;
	FILE *pf;
	char caracter;
	char cad[1500];
	int edad,numero;
	setlocale (LC_CTYPE,"spanish"); 
	struct grupos grupo[2];
	struct respuestas respuesta={3,4,1,7,0.82,0.000000024,"sulfito plumboso","manganato de cesio","resistire para seguir viviendo","quedate en tu casa","Nueva Zelanda","Amazonas","Inglaterra"};
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
					system("cls");		
                	pf=fopen("introduccion.txt", "r");
                    while((caracter=fgetc(pf))!=EOF)
                    printf("%c", caracter);
                    printf("\n");
                    fclose(pf);
                    
                    	pf=fopen("1preguntaE1.txt", "r");
                        while((caracter=fgetc(pf))!=EOF)
                        printf("%c", caracter);
                        printf("\n");
                        fclose(pf);
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
       		
						
							
					
	                    
	                pf=fopen("2preguntaE1.txt", "r");
                    while((caracter=fgetc(pf))!=EOF)
                    printf("%c", caracter);
                    printf("\n");
                    fclose(pf);
                    printf("PISTA:Buscad otra relacion a la obvia, buscad la escritura.\n");

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
					
					
					printf("Vosotros equipo %s os encontrais en el laboratorio de la planta superior\n", grupo[1].nombre_equipo);
					printf("Intentad acertar ambas preguntas y poder asi adelantar al equipo %s. Mucha suerte\n", grupo[0].nombre_equipo);
					
                    pf=fopen("1preguntaE2.txt", "r");
                    while((caracter=fgetc(pf))!=EOF)
                    printf("%c", caracter);
                    printf("\n");
                    fclose(pf);
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
       		

					
						
					printf("\n\n\nSEGUNDA PREGUNTA. EQUIPO 2\n");
					
					printf("Debeis completar la serie numerica para poder continuar\n");
					printf(" 5 6 9 6 7 6 ¿?\n");
					printf("PISTA. Hay 7 numeros, que corresponden con 7 dias\n");
					
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
					
					
					system("cls");
					
					
					printf("MUY BIEN EQUIPOS HABEIS CONSEGUIDO PASAR A LA SIGUIENTE RONDA\n");
					printf("Primero hagamos un recuento de los puntos que llevais cada uno\n");
					printf("El equipo %s lleva %d puntos, mientras que el equipo %s lleva %d puntos\n", grupo[0].nombre_equipo,punto.equipo1, grupo[1].nombre_equipo, punto.equipo2);
					
					printf("\n\nPerfecto. Ahora pasaremos a las siguientes cuestiones con una dificultad media\n");
					printf("Que os vaya bien. ¡Y que la suerte esté siempre de vuestra parte!\n");
					
					printf("\n\nEquipo %s os estais adentrando en la sala de control de mando, tendreis que conseguir arreglar el ordenador principal, para ver donde se encuentra la cura\n", grupo[0].nombre_equipo);
                    pf=fopen("3preguntaE1.txt", "r");
                    while((caracter=fgetc(pf))!=EOF)
                    printf("%c", caracter);
                    printf("\n");
                    fclose(pf);
	  				
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
					  
					system("cls");
					
					
					printf("\n\nEquipo %s. Vosotros os encontrais actualmente en la sala de alta corriente\n");
                    pf=fopen("3preguntaE2.txt", "r");
                    while((caracter=fgetc(pf))!=EOF)
                    printf("%c", caracter);
                    printf("\n");
                    fclose(pf);
	  				
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
	  					
	  				system("cls");
					  
					  	
	  				printf("Perfecto. Espero que hayais conseguido muchos puntos en estas ultimas preguntas\n");
					printf("A continuacion os haremos las ultimas antes del duelo final.\n");
					
					printf("Equipo %s es tu turno\n", grupo[0].nombre_equipo);
					
					printf("Debereis escribir la nomenclatura tradicional de este compuesto PbSO3 que ha sido utilizado para la cura y obtener asi mas puntuacion\n");
	
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
					system("cls");
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
					
					
					system("cls");
					
					
					printf("Equipo %s habeis llegado a la zona de descanso donde debereis tomar una de las decisiones mas importantes\n", grupo[0].nombre_equipo);
					printf("Os daremos la opcion de poder hacer algunas preguntas mas extras antes del ultimo duelo\n");
					printf("¡¡CUIDADO!! No es oro todo lo que reluce, si fallais en estas preguntas tambien os restaran mas puntos de lo normal\n");
					printf("Es hora de tomar una decision. ¿Quereis hacer algunas preguntas mas?\n");
					printf("Pulsad 1 si quereis utlizar el comodin.        Pulsad 2 si no quereis utilizarlo\n");
					fflush(stdin);
					scanf("%d", &comodin);
					switch(comodin) {
					case 1:
					printf("Perfecto a continuacion os realizaremos unas preguntas sencillas\n");
					printf("Primera pregunta\n");
					for(i=0;i<1;i++) {
							
                        printf("¿Cuál fue el primer país en aprobar el sufragio femenino?\n");
						fflush (stdin);
						gets(respuesta11);
						
						orden4=pregunta11(respuesta11);
						
						if(pregunta11(respuesta11)==0) {
							printf("Correcto\n");
							punto.equipo1=punto.equipo1+3;
							break;
							
						}else if(pregunta11(respuesta11)!=0) {
							punto.equipo1=punto.equipo1-3;
							printf("Incorrecta\n");
						}
					}
					
							
					printf("Segunda y ultima oportunidad\n");
					for(i=0;i<1;i++) {
						
						printf("¿Cuál es el río más caudaloso del mundo?\n");
						fflush (stdin);
						gets(respuesta12);
						
						orden5=pregunta12(respuesta12);
						
						if(pregunta12(respuesta12)==0) {
							printf("Correcto\n");
							punto.equipo1=punto.equipo1+3;
							break;
							
						}else if(pregunta12(respuesta12)!=0) {
							punto.equipo1=punto.equipo1-3;
							printf("Incorrecta\n");
						}
					}
						break;
					case '2':
						printf("No habeis cogido el comodin\n");
						break;
						
					}	
					
					
					system("cls");
					
					
					printf("Equipo %s habeis llegado a la cafeteria donde debereis tomar una de las decisiones mas importantes\n", grupo[1].nombre_equipo);
					printf("Os daremos la opcion de poder hacer algunas preguntas mas extras antes del ultimo duelo\n");
					printf("¡¡CUIDADO!! No es oro todo lo que reluce, si fallais en estas preguntas tambien os restaran mas puntos de lo normal\n");
					printf("Es hora de tomar una decision. ¿Quereis hacer algunas preguntas mas?\n");
					printf("Pulsad 1 si quereis utlizar el comodin.        Pulsad 2 si no quereis utilizarlo\n");
					fflush(stdin);
					scanf("%d", &comodin1);
					switch(comodin1) {
					case 1:
					printf("Perfecto a continuacion os realizaremos unas preguntas sencillas\n");
					printf("Primera pregunta\n");
					for(i=0;i<1;i++) {
							
                        printf("¿Dónde se inventó el Ping-Pong?\n");
						fflush (stdin);
						gets(respuesta13);
						
						orden6=pregunta13(respuesta13);
						
						if(pregunta13(respuesta13)==0) {
							printf("Correcto\n");
							punto.equipo2=punto.equipo2+3;
							break;
							
						}else if(pregunta13(respuesta13)!=0) {
							punto.equipo2=punto.equipo2-3;
							printf("Incorrecta\n");
						}
					}
							
					printf("Segunda y ultima oportunidad\n");
					for(i=0;i<1;i++) {
                     //pregunta
                    }
						break;
						
					case 2:
						printf("No habeis cogido el comodin\n");
						break;
						
					}
						
						
					system("cls");
					
						
					printf("Muy bien equipos. Espero que hayais podido ganar algun punto mas con estas preguntas extras\n");
					printf("Entramos en la recta final del duelo\n");
					printf("Ambos equipos os enfrentareis a una ultima pregunta mas dificil, a las puertas del antidoto\n");
					printf("Mucha suerte. Equipo %s seras el primero en resolver la pregunta\n", grupo[0].nombre_equipo);
					
					printf("A continuacion debereis averiguar el texto encriptado\n\n\n");
					printf("Pista: El año donde comenzo el covid es 2019, que sumado es 12\n");
	
					for(i=0;i<4;i++) {
		
						suma+=covid%10;
		
						covid/=10;
					}
							
					i=0;
					while(respuesta.res9[i]!='\0') {
		
						if(respuesta.res9[i]== 'e' || respuesta.res9[i]=='i' || respuesta.res9[i]=='a'|| respuesta.res9[i]=='s' || respuesta.res9[i]=='o') {
							cancion[i]=respuesta.res9[i];
						}else{
							cancion[i]=respuesta.res9[i]+suma;
						}
			
					i++;
					}
					
					printf("%s\n",cancion);
					
					for(i=0;i<1;i++) {
						printf("Introduce el texto desencriptado\n");
						fflush(stdin);
						gets(respuesta9);
						
						orden2=pregunta9(respuesta9);
						if(pregunta9(respuesta9)==0) {
							punto.equipo1=punto.equipo1+15;
							printf("¡¡¡CORRECTOOO!!!\n");
							break;
						}else if(pregunta9(respuesta9)!=0) {
							punto.equipo1=punto.equipo1-5;
							printf("Incorrecta\n");
							break;
						}
					}
					
					
					system("cls");
					
					
					printf("Mucha suerte. Equipo %s es tu turno\n", grupo[1].nombre_equipo);
					printf("A continuacion debereis averiguar el texto encriptado\n\n\n");
					printf("Pista: El año donde comenzo el covid es 2019, que sumado es 12\n");
					
					suma=0;
					for(i=0;i<4;i++) {
		
						suma+=covid%10;
		
						covid/=10;
					}
					
					i=0;
					while(respuesta.res10[i]!='\0') {
		
						if(respuesta.res10[i]== 'e' || respuesta.res10[i]=='a' || respuesta.res10[i]=='t') {
							cancion2[i]=respuesta.res10[i];
						}else{
							cancion2[i]=respuesta.res10[i]+suma;
						}
			
					i++;
					}
					
					printf("%s\n",cancion2);
					
					for(i=0;i<1;i++) {
						printf("Introduce el texto desencriptado\n");
						fflush(stdin);
						gets(respuesta10);
						
						orden3=pregunta10(respuesta10);
						if(pregunta10(respuesta10)==0) {
							punto.equipo2=punto.equipo2+15;
							printf("¡¡¡CORRECTOOO!!!\n");
							break;
						}else if(pregunta10(respuesta10)!=0) {
							punto.equipo2=punto.equipo2-5;
							printf("Incorrecta\n");
							break;
						}
					}
					
					system("cls");
					
					printf("Bueno equipos por fin os veis las caras despues de estar deambulando por todo el laboratorio\n");
					printf("Por fin ha llegado la hora de conocer quien se queda la cura, esa tan famosa por la que habeis estado luchando en cada una de las pruebas\n");
					printf("Hagamos el ultimo recuento de puntos.\n");
					printf("\n\nEQUIPO %s habeis conseguido un total de %d puntos\n", grupo[0].nombre_equipo, punto.equipo1);
					printf("\n\nEQUIPO %s habeis conseguido un total de %d puntos\n", grupo[1].nombre_equipo, punto.equipo2);
					
					if(punto.equipo1>punto.equipo2) {
						printf("El equipo %s es el ganador de la cura\n", grupo[0].nombre_equipo);
					} else if(punto.equipo1<punto.equipo2) {
						printf("El equipo %s es el ganador de la cura\n", grupo[1].nombre_equipo);
					} else if(punto.equipo1==punto.equipo2) {
						printf("Parece que tenemos un empate\n");
						printf("Jugaremos como a la vieja ausanza, a un PIEDRA, PAPEL O TIJERA\n");
						printf("Ya conoceis las reglas. Los capitanes de cada equipo tendran un unico movimiento.\n");
						printf("Mucha suerte\n");
						
						do{
	
    						printf("Eliga una opcion para jugar a piedra(I), papel(P), tijera(T):\n");
    						printf("El jugador 1 elige su movimiento, y luego el segundo jugador:\n");
    						scanf("%c %c",&jug1,&jug2);

    						if (jug1=='I' && jug2=='T') {
        					printf("Piedra rompe tijeras, gana jugador 1");
    						}
    						else if (jug1=='T' && jug2=='I') {
     						printf("Piedra rompe tijeras, gana jugador 2");
    						}
   							 else if (jug1=='I' && jug2=='P') {
     						printf("Papel cubre piedra, gana jugador 2");
    						}
    						else if (jug1=='P' && jug2=='I') {
     					    printf("Papel cubre piedra, gana jugador 1");
    						}
    						else if (jug1=='T' && jug2=='P') {
    					    printf("Tijera corta papel, gana jugador 1");
    						}
    						else if (jug1=='P' && jug2=='T') {
        					printf("Tijera corta papel, gana jugador 2");
    						}

    					}while(jug1==jug2);
						
					}
					
					printf("Vencedores. Debereis elegir ahora vuestro final. Ha sido un placer contar con vosotros y confiamos en que hareis lo correcto\n");
					printf("Introducid vuestra decision:\n");
					printf("1-Salvar el mundo\n");
					printf("2-No salavarlo\n");
					scanf("%d", &decision);
					
					switch(decision) {
						case 1:
							printf("Estamos muy orgullosos de vosotros. Salid y arreglad el mundo\n");
							printf("Equipo perdedor. Lo sentimos por vosotros pero hasta aqui ha llegado vuestra mision.\n");
							printf("Ha sido un placer conoceros pero conoceis las normas y para que unos salgan otros deben quedarse\n");
							break;
						case 2:
							printf("No estamos conformes con vuestra decision pero para ello habeis luchado tanto, esperamos que recapaciteis a tiempo\n");
							printf("Esto causara la extincion humana\n");
							printf("Equipo perdedor. Lo sentimos por vosotros pero hasta aqui ha llegado vuestra mision.\n");
							printf("Ha sido un placer conoceros pero conoceis las normas y para que unos salgan otros debern quedarse\n");
}

					
						break;
						return 0;
							
                		
	                   	
                			
                	
            case 'C':
					
					if (!(pf=fopen("instrucciones.txt","rb"))) 
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



