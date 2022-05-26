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
	char caracter;
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
       		
						
							
					system("cls");
	                    
	                pf=fopen("2preguntaE1.txt", "r");
                    while((caracter=fgetc(pf))!=EOF)
                    printf("%c", caracter);
                    printf("\n");
                    fclose(pf);

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



