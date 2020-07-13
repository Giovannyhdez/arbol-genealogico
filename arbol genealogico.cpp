#include <stdio.h>
#include <stdlib.h>

int main()
{
   int menu;
   
  do{
 printf("escoje una de las opciones del arbol genialogico.\n1.abuela.\n2.abuelo.\n3.tia.\n4.tia.\n5.tia.\n6.tio.\n7.tia.\n8.tia.\n9.tio.\n10.mama."),
  scanf("%d",&menu);
  }while(menu>=12);
  
  
   switch(menu)
   {
   	case 0:
   		printf("arbol genialogico");
   		break;
   	case 1:
	   printf("Alicia Gonzales 05/09/1936");
	   break;
	   
	   case 2:
	   printf("Felipe Hernandez Najera 08/23/1932");
	   break;
	   
	   case 3:
	   printf("Guadalupe Hernandez 02/10/195(tres hijos, francisco barragan hdez,marvin barragan hdez,alexander barragan hdez)");
	   break;
	   
	   case 4:
	   	printf("Marta Hernandez  05/08/1958");
	   	break;
	   	
	   	case 5:
	   		printf("Veronica Hernandez  01/13/1960(dos hijos  Maura Isabel Garcia Hdez,Carlos Paulo Garcia Hdez)");
	   		break;
	   		
	   	case 6:
	   		printf("Raymundo Felipe Hernandez  09/28/1962");
	   		break;
	   			
	   	case 7:
	   		printf("Blanca Jesus Hernandez  07/09/1966(una hija Yesica Nalleli)");
	   		break;
	   		
	   	case 8:
		   printf("Lourdes Hernadez 03/12/1968 ");
		   break;
		   
		   case 9:
		   	printf("Rodolfo Hernandez 09/04/1969");
		   	break;
		   	
	   	case 10:
		   	printf("Maria Cristina Hernandez 05/06/1977(tres hijos mi hermana lizbeth jacqueline, yo denylson giovannyy mi hermano olivier israel)");
		   	break;
		   	
		   		}
	return 0;
}
		   		
