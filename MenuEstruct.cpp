/** Estrucura del me� del software
Lopezveloz Martinez Itzia
Proyecto Final: F�sica Computacional I **/



#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <stdio.h>


using namespace std;
int main(){
	int electron, config, options, concept;
	char exeptions;
	
	do
	{
		cout<<"�Bienvenido!\n"<<endl;
		cout<<"�Qu� hace �ste programa?\n\n"<<endl;
		cout<<"1.- Conceptos de Qu�mica B�sica"<<endl;
		cout<<"2.- Informaci�n General de los Elementos de la Tabla Peri�dica"<<endl;
		cout<<"3.- Configuraci�n Energ�tica de los Elementos"<<endl;
		cout<<"4.- Calculadora Multifunci�n de Mol"<<endl;
		cout<<"5.- Cr�ditos"<<endl;
		cout<<"6.- Salir\n"<<endl;
		cout<<"Seleccione una opci�n: ";
			cin>>options;
	
	//**************COCEPTOS DE QUIMICA B�SICA**********************************************//
		if(options==1){ 
			do
			{
				printf("Conceptos de Qu�mica B�sica \n\n");
				cout<<"1.- MASA"<<endl;
				cout<<"2.- ENERG�A"<<endl;
				cout<<"3.- LEYES DE CONSERVACION"<<endl;
				cout<<"4.- TRANSFORMACIONES DE LA ENERG�A"<<endl;
				cout<<"5.- PROPIEDADES DE LA MASA"<<endl;
				cout<<"6.- ESTADOS DE LA MASA"<<endl;
				cout<<"7.- FEN�MENOS F�SICOS Y FEN�MENOS QU�MICOS"<<endl;
				cout<<"8.- ELEMENTOS, COMPUESTOS Y MEZCLAS"<<endl;
				cout<<"9.- �TOMO"<<endl;
				cout<<"10.- PART�CULAS SUBAT�MICAS"<<endl;
				cout<<"11.- MOL"<<endl;
				cout<<"12.- IS�TOPO"<<endl;
				cout<<"13.- N�MERO AT�MICO"<<endl;
				cout<<"14.- N�MERO DE MASA"<<endl;
				cout<<"15.- PESO AT�MICO"<<endl;
				cout<<"16.- CONFIGURACI�N ELECTR�NICA"<<endl;
				cout<<"17.- LA TABLA PERI�DICA"<<endl;
				cout<<"18.- GRUPOS"<<endl;
				cout<<"19.- PERIODOS"<<endl;
				cout<<"20.- VALENCIA Y N�MERO DE OXIDACI�N"<<endl;
				cout<<"21.- METALES Y NO METALES"<<endl;
				cout<<"22.- Regresar al men� principal"<<endl;
				cout<<"Seleccione el n�mero de un concepto: ";
				cin>>concept;
				if(concept==1){
				system("CLS");
					 printf("MASA\n\n");
								printf("En f�sica, masa (del lat�n massa) es una magnitud que expresa la cantidad de materia de un cuerpo, medida por la inercia de este, que determina la aceleraci�n producida por una fuerza que act�a sobre �l.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==2){
					system("CLS");
					 printf("ENERG�A\n\n");
								printf("El t�rmino energ�a (del griego en�rgeia, �actividad�, �operaci�n�; de energ�s, �fuerza de acci�n� o �fuerza de trabajo�) tiene diversas acepciones y definiciones, relacionadas con la idea de una capacidad para obrar, surgir, transformar o poner en movimiento. En f�sica, �energ�a� se define como la capacidad para realizar un trabajo. En tecnolog�a y econom�a, �energ�a� se refiere a un recurso natural (incluyendo a su tecnolog�a asociada) para poder extraerla, transformarla y darle un uso industrial o econ�mico.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==3){
					system("CLS");
					 printf("LEYES DE LA CONSERVACION\n\n");
								printf("Existen relaciones en el estudio de la masa y de la energ�a que se expresan en forma matem�tica y de varias maneras. Estas relaciones son las leyes de la conservaci�n, pilares sobre los que se sostienen los cambios qu�micos.\n\n");
								printf("- Ley de la conservaci�n de la masa. �sta ley fue enunciada por Lavoisier y establece que 'la masa no se crea ni se destruye, s�lo se transforma'.\n");
								printf("- Ley de la conservaci�n de la energ�a. Debida a Mayer esta ley establece que 'la energ�a del universo se mantiene constante de tal manera que no puede ser creada ni destruida y cambiar de una forma o clase a otra'.\n\n");
								printf("Ley de la conservaci�n de la materia. �sta ley se funda en la teor�a de la relatividad de Einstein y dice que 'la cantidad de masa energ�a que se manifiesta en un determinado espacio tiempo es constante'.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==4){
					system("CLS");
					 printf("TRANSFORMACIONES DE LA ENERG�A\n\n");
								printf("En principio, solo hay dso tipos de energ�a, la potencial y la cin�tica. Con la transformaci�n de �stas dos, ocurren otras manifestaciones.\n\n");
								printf("- Energ�a potencial. Es la energ�a almanecana en una part�cula debido a su posici�n dentro de un campo de fuerzas el�ctricas magn�ticas o gravitacionales.\n");
								printf("- Energ�a cin�tica. Es la energ�a que poseen los cuerpos en movimiento, o bien la energ�a debida a una part�cula y en virtud de su velocidad.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==5){
					system("CLS");
					 printf("PROPIEDADES DE LA MASA\n\n");
								printf("La masa se presenta ante nuestros sentidos como elementos, compuestos, mezclas, s�lidos, gases o l�quidos. La masa y el peso son diferentes propiedades, que se definen en el �mbito de la f�sica. La masa es una medida de la cantidad de materia que posee un cuerpo mientras que el peso es una medida de la fuerza que es causada sobre el cuerpo por el campo gravitatorio. Por lo tanto la masa de un objeto no cambiar� de valor sea cual sea la ubicaci�n que tenga sobre la superficie de la Tierra. La masa se corresponde con el concepto com�n de cuan �pesado� es un objeto. Sin embargo, en realidad la masa es una propiedad inercial; o sea la tendencia de un objeto a permanecer moviendose con una velocidad constante a menos que una fuerza externa actue sobre �l. Seg�n la Segunda ley de Newton, expresada por la f�rmula F = ma un objeto con una masa, m, de un kilogramo sufrir� una aceleraci�n, a, de un metro por segundo al cuadrado (aproximadamente un d�cimo de la aceleraci�n causada por la gravedad terrestre) cuando act�e sobre el mismo una fuerza, F, de un newton.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==6){
					system("CLS");
					 printf("ESTADOS DE LA MASA\n\n");
								printf("En f�sica y qu�mica se observa que, para cualquier sustancia o mezcla, modificando sus condiciones de temperatura o presi�n, pueden obtenerse distintos estados o fases, denominados estados de agregaci�n de la materia, en relaci�n con las fuerzas de uni�n de las part�culas (mol�culas, �tomos o iones) que la constituyen. Todos los estados de agregaci�n poseen propiedades y caracter�sticas diferentes; los m�s conocidos y observables cotidianamente son cuatro, llamados fases s�lida, l�quida, gaseosa y plasm�tica. Tambi�n son posibles otros estados que no se producen de forma natural en nuestro entorno, por ejemplo: condensado de Bose-Einstein, condensado fermi�nico y estrellas de neutrones. Se cree que tambi�n son posibles otros, como el plasma de quark-glu�n.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==7){
					system("CLS");
					 printf("FEN�MENOS F�SICOS Y FEN�MENOS QU�MICOS\n\n");
								printf("A las modificaciones o cambios que experimentan las substancias bajo la accion de las diferentes formas de enrg�a se les llama fen�menos. Las modificaciones o cambios que no alteran la composici�n intr�nseca de la substancia, o que solo lo hacen de modo aparente y transitorio, reciben el nombre de fen�menos f�sicos.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==8){
					system("CLS");
					 printf("ELEMENTOS, COMPUESTOS Y MEZCLAS\n\n");
								printf("Las sustancias son los materiales con los que trabajan en qu�mico y pueden ser puras o no. \n\nLos elementos son sustancias simples que no pueden descomponerse por m�todos qu�micos ordinarios en algo m�s sencillo. \nLos compuestos son sustancias que resultan de la uni�n qu�mica de dos o m�s elementos en proporciones definidas como se combinan de tal manera que ya no es posible identificarlos por sus propiedades originales e individuales y s�lo una acci�n qu�mica nos puede separar.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==9){
					system("CLS");
					 printf("�TOMO\n\n");
								printf("El t�rmino �tomo proviene del griego '�tomon', y fue el nombre que se dice les dio Dem�crito de Abdera a las part�culas que �l conceb�a como las de menor tama�o posible. Un �tomo es la unidad constituyente m�s peque�a de la materia que tiene las propiedades de un elemento qu�mico.\nCada �tomo se compone de un n�cleo y uno o m�s electrones unidos al n�cleo. El n�cleo est� compuesto de uno o m�s protones y t�picamente un n�mero similar de neutrones. Los protones y los neutrones son llamados nucleones. M�s del 99,94 % de la masa del �tomo est� en el n�cleo. Los protones tienen una carga el�ctrica positiva, los electrones tienen una carga el�ctrica negativa y los neutrones tienen ambas cargas el�ctricas, haci�ndolos neutros. Si el n�mero de protones y electrones son iguales, ese �tomo es el�ctricamente neutro. Si un �tomo tiene m�s o menos electrones que protones, entonces tiene una carga global negativa o positiva, respectivamente, y se denomina ion (ani�n si es negativa y cati�n si es positiva).\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==10){
					system("CLS");
					 printf("PART�CULAS SUBAT�MICAS\n\n");
								printf("Una part�cula subat�mica es aquella que es m�s peque�a que el �tomo. Puede ser una part�cula elemental o una compuesta, a su vez, por otras part�culas subat�micas, como son los quarks, que componen los protones y neutrones. No obstante, existen otras part�culas subat�micas, tanto compuestas como elementales, que no son parte del �tomo, como es el caso de los neutrinos y bosones.\nLa mayor�a de las part�culas elementales que se han descubierto y estudiado no pueden encontrarse en condiciones normales en la Tierra, generalmente porque son inestables (se descomponen en part�culas ya conocidas), o bien, son dif�ciles de producir de todas maneras. \n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==11){
					system("CLS");
					 printf("MOL\n\n");
								printf("El mol (s�mbolo: mol) es la unidad con que se mide la cantidad de sustancia, una de las siete magnitudes f�sicas fundamentales del Sistema Internacional de Unidades.\n\n");
							system("PAUSE");
							system("CLS");
						}
				else if (concept==12){
					system("CLS");
					printf("IS�TOPO\n");
								printf("Se denomina is�topos a los �tomos de un mismo elemento, cuyos n�cleos tienen una cantidad diferente de neutrones, y por lo tanto, difieren en n�mero m�sico.\n\n");
							system("PAUSE");
							system("CLS");
							}
				if(concept==13){
					system("CLS");
					 printf("N�MERO AT�MICO\n\n");
								printf("El n�mero at�mico? de un elemento qu�mico es el n�mero total de protones que tiene cada �tomo de ese elemento. Se suele representar con la letra Z.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==14){
					system("CLS");
					 printf("N�MERO DE MASA\n\n");
								printf("En qu�mica, el n�mero m�sico o n�mero de masa es la suma del n�mero de protones y el n�mero de neutrones del n�cleo de un �tomo. Se simboliza con la letra A. Suele ser mayor que el n�mero at�mico, dado que los neutrones del n�cleo proporcionan a �ste la cohesi�n necesaria para superar la repulsi�n entre los protones.\nEl n�mero m�sico es adem�s el indicativo de los distintos is�topos de un elemento qu�mico. Dado que el n�mero de protones es id�ntico para todos los �tomos del elemento, s�lo el n�mero m�sico, que lleva impl�cito el n�mero de neutrones en el n�cleo, indica de qu� is�topo del elemento se trata. \nN�mero m�sico (A) = n�mero at�mico (Z) + n�mero de neutrones(N)\n\nA = Z + N\n\nPara calcular la cantidad de neutrones que posee un �tomo debe hacerse: 'A - Z', (N�mero m�sico menos n�mero at�mico) consultando antes en la tabla peri�dica las cantidades correspondientes.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==15){
					system("CLS");
					 printf("PESO AT�MICO\n\n");
								printf("El peso at�mico es una cantidad f�sica adimensional, definida como la raz�n del promedio de las masas de los �tomos de un elemento (de una muestra dada o fuente) con respecto a la doceava parte de la masa de un �tomo de carbono-12 (conocida como una unidad de masa at�mica unificada).\nEl concepto se utiliza generalmente sin mayor calificaci�n para referirse al peso at�mico est�ndar, que a intervalos regulares publica la Comisi�n sobre Abundancia de Is�topos y Pesos At�micos de la IUPAC. Se pretende que sean aplicables a materiales de laboratorios normales.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==16){
					system("CLS");
					 printf("CONFIGURACI�N ELECTR�NICA\n\n");
								printf("En qu�mica, la configuraci�n electr�nica indica la manera en la cual los electrones se estructuran, comunican u organizan en un �tomo de acuerdo con el modelo de capas electr�nicas, en el cu�l las funciones de ondas del sistema se expresa como un �tomo o at�micamente un producto de orbitales antisimetrizadas. La configuraci�n electr�nica es importante porque determina las propiedades de combinaci�n qu�mica de los �tomos y por tanto su posici�n en la tabla peri�dica.\nSe utiliza en una notaci�n est�ndar para describir las configuraciones electr�nicas de �tomos y mol�culas. Para los �tomos, la notaci�n contiene la definici�n de los orbitales at�micos (en la forma n l, por ejemplo 1s, 2p, 3d, 4f) indicando el n�mero de electrones asignado a cada orbital (o al conjunto de orbitales de la misma subcapa ) como un super�ndice.\nPara �tomos con muchos electrones, esta notaci�n puede ser muy larga por lo que se utiliza una notaci�n abreviada, que tiene en cuenta que las primeras subcapas son iguales a las de alg�n gas noble. \n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==17){
					system("CLS");
					 printf("LA TABLA PERI�DICA\n\n");
								printf("La tabla peri�dica de los elementos es una disposici�n de los elementos qu�micos en forma de tabla, ordenados por su n�mero at�mico (n�mero de protones), por su configuraci�n de electrones y sus propiedades qu�micas. Este ordenamiento muestra tendencias peri�dicas, como elementos con comportamiento similar en la misma columna.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==18){
					system("CLS");
					 printf("GRUPOS\n\n");
								printf("A las columnas verticales de la tabla peri�dica se las conoce como grupos o familias. Hay 18 grupos en la tabla peri�dica est�ndar. En virtud de un convenio internacional de denominaci�n, los grupos est�n numerados de 1 a 18 desde la columna m�s a la izquierda �los metales alcalinos� hasta la columna m�s a la derecha �los gases nobles�.\n\n");
							system("PAUSE");
							system("CLS");
						}	
				if(concept==19){
					system("CLS");
					 printf("PERIODOS\n\n");
								printf("Las filas horizontales de la tabla peri�dica son llamadas per�odos. El n�mero de niveles energ�ticos de un �tomo determina el periodo al que pertenece. Cada nivel est� dividido en distintos subniveles, que conforme aumenta su n�mero at�mico cada elemento se coloca seg�n su configuraci�n electr�nica y da forma a la tabla peri�dica.\nLos elementos en el mismo per�odo muestran tendencias similares en radio at�mico, energ�a de ionizaci�n, afinidad electr�nica y electronegatividad. En un per�odo el radio at�mico normalmente decrece si nos desplazamos hacia la derecha debido a que cada elemento sucesivo a�adi� protones y electrones, lo que provoca que este �ltimo sea arrastrado m�s cerca del n�cleo.? Esta disminuci�n del radio at�mico tambi�n causa que la energ�a de ionizaci�n y la electronegatividad aumenten de izquierda a derecha en un per�odo, debido a la atracci�n que ejerce el n�cleo sobre los electrones. La afinidad electr�nica tambi�n muestra una leve tendencia a lo largo de un per�odo. Los metales �a la izquierda� generalmente tienen una afinidad menor que los no metales �a la derecha del per�odo�, excepto para los gases nobles.\nLa tabla peri�dica consta de 7 per�odos.\n\n");
							system("PAUSE");
							system("CLS");
						}	
				if(concept==20){
					system("CLS");
					 printf("VALENCIA Y N�MERO DE OXIDACI�N\n\n");
								printf("En qu�mica, la valencia, tambi�n conocida como n�mero de valencia, es una medida de la cantidad de enlaces qu�micos formados por los �tomos de un elemento qu�mico.\nSe denomina n�mero de oxidaci�n a la carga que se le asigna a un �tomo cuando los electrones de enlace se distribuyen seg�n ciertas reglas pr�cticas un tanto arbitrarias.\n\nTales reglas pr�cticas son:\n-En las sustancias simples, es decir las formadas por un solo elemento, el n�mero de oxidaci�n es 0.\n-El ox�geno, cuando est� combinado, act�a frecuentemente con -2, a excepci�n de los per�xidos, en cuyo caso act�a con n�mero de oxidaci�n  -1.\n-El Hidr�geno act�a con n�mero de oxidaci�n +1 cuando est� combinado con un no metal, por ser �ste m�s electronegativo; y con -1 cuando est� combinado con un metal, por ser �ste m�s electropositivo.\n-En los iones monoat�micos, el n�mero de oxidaci�n coincide con la carga del i�n.\n-Recordar que los elementos de los grupos IA (1) y IIA (2) forman iones de  carga +1 y +2 respectivamente, y los del VIIA (17) y VIA(16), de carga �1 y �2 cuando son monoat�micos.\n-La suma de los n�meros de oxidaci�n es igual a la carga de la especie; es decir, que si se trata de sustancias, la suma ser� 0, mientras que si se trata de iones, ser� igual a la carga de �stos.\n\n");
							system("PAUSE");
							system("CLS");
						}	
				if(concept==21){
					system("CLS");
					 printf("METALES Y NO METALES\n\n");
								printf("METALES\n\nLa mayor parte de los elementos met�licos exhibe el lustre brillante que asociamos a los metales. Los metales conducen el calor y la electricidad, son maleables (se pueden golpear para formar l�minas delgadas) y d�ctiles (se pueden estirar para formar alambres). Todos son s�lidos a temperatura ambiente con excepci�n del mercurio (punto de fusi�n =-39 �C), que es un l�quido.\n\nNO METALES\n\nLos no metales var�an mucho en su apariencia no son lustrosos y por lo general son malos conductores del calor y la electricidad. Sus puntos de fusi�n son m�s bajos que los de los metales (aunque el diamante, una forma de carbono, se funde a 3570 �C). Varios no metales existen en condiciones ordinarias como mol�culas diat�micas.\nSe encuentran en los tres estados de la materia a temperatura ambiente: son gases (como el ox�geno), l�quidos (bromo) y s�lidos (como el carbono). No tienen brillo met�lico y no reflejan la luz. Muchos no metales se encuentran en todos los seres vivos: carbono, hidr�geno, ox�geno, nitr�geno, f�sforo y azufre en cantidades importantes. \n\n");
							system("PAUSE");
							system("CLS");
						}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~REGRESAR AL MAN� PRINCIPAL~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
				else if (concept<1 || concept>22){
							system("CLS");
					}
			}while(options !='22');
		}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONFIGURACION ELECTR�NICA~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	else if(options==3){
		cout<<"Ingrese el n�mero de electrones del �tomo"<<endl;
 cin>>electron;
 if(electron<=0) { cout << "No v�lido" << endl; exit(0);}
 if(electron>118) { cout << "No v�lido" << endl; exit(0);}
	
	//******************** PRIMER PERIODO (K) ***********************************//
	
	if(electron<=2){
			switch(electron){
					case 1 :printf("El elemento es Hidr�geno (H) \n\n");
						break;
					case 2 :printf("El elemento es Helio (He) \n\n");
						break;
			}
		config=electron;
		cout<<"Su configuraci�n electr�nica es: 1s^"<<config<<endl;
	}	
	
	//*********************SEGUNDO PERIODO (L) *********************************//
	//----------------------------[He]-------------------------------------------//
	
	else if(electron<=4){
				switch(electron){
						case 3 :printf("El elemento es Litio (Li) \n\n");
							break;
						case 4 :printf("El elemento es Berilio (Be) \n\n");
							break;
						}
		config=electron-2;
			cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^"<<config<<endl;
			cout<<"[He]2s^"<<config<<endl;
    }
	else if(electron<=10){
				switch(electron){
						case 5 :printf("El elemento es Boro (B) \n\n");
							break;
						case 6 :printf("El elemento es Carbono (C) \n\n");
							break;
						case 7 :printf("El elemento es Nitr�geno (N) \n\n");
							break;
						case 8 :printf("El elemento es Ox�geno (O) \n\n");
							break;
						case 9 :printf("El elemento es Fl�or (F) \n\n");
							break;
						case 10 :printf("El elemento es Ne�n (N) \n\n");
							break;
						}
		config=electron-4;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^"<<config<<endl;
		cout<<"[He]2s^2, 2p^"<<config<<endl;
	}
	
	//************************ TERCER PERIODO (M) ********************************//
	//--------------------------------[Ne]--------------------------------------//
	
	else if(electron<=12){
			switch(electron){
						case 11 :printf("El elemento es Sodio (Na) \n\n");
							break;
						case 12 :printf("El elemento es Magnesio (Mg) \n\n");
							break;
						}
		config=electron-10;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^"<<config<<endl;
		cout<<"[Ne]3s^"<<config<<endl;
	}
    else if(electron<=18){
    		switch(electron){
						case 13 :printf("El elemento es Aluminio (Al) \n\n");
							break;
						case 14 :printf("El elemento es Silicio (Si) \n\n");
							break;
						case 15 :printf("El elemento es F�sforo (P) \n\n");
							break;
						case 16 :printf("El elemento es Azufre (S) \n\n");
							break;
						case 17 :printf("El elemento es Cloro (Cl) \n\n");
							break;
						case 18 :printf("El elemento es Arg�n (Ar) \n\n");
							break;	
						}
		config=electron-12;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^"<<config<<endl;
		cout<<"[Ne]3s^2, 3p^"<<config<<endl;
	}
	
	//************************ CUARTO PERIODO (N >4p<)******************************//
	//----------------------------------[Ar]-----------------------------------------//
	
    else if(electron<=20){
    		switch(electron){
						case 19 :printf("El elemento es Potasio (K) \n\n");
							break;
						case 20 :printf("El elemento es Calcio (Ca) \n\n");
							break;
						}
		config=electron-14;
		cout<<"La configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^"<<config<<endl;
		cout<<"[Ar]4s^"<<config<<endl;
	}
    else if(electron<=30){
    	if(electron==24 || electron==29){
    	    		switch(electron){
						case 24 :printf("El elemento es Cromo (Cr) \n\n");
							break;
						case 29 :printf("El elemento es Cobre (Cu) \n\n");
							break;
						}
		config=electron-19;
		cout<<"La configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^"<<config<<", 4s^1"<<endl;
		cout<<"[Ar]3d^ "<<config<<", 4s^1"<<endl;
				cout<<"�Porqu� estoy viendo �sto?"<<endl;
				cout<<"Presiona 'Y' para saber m�s"<<exeptions<<endl;
				cout<<"Presiona 'N' para salir"<<exeptions<<endl;
				cin>>exeptions;
					switch(exeptions){
						case 'Y':
						case 'y':cout<<"Al desarrollar la configuraci�n electr�nica, encontramos una serie de excepciones. Por ejemplo, es m�s estable llenar dos medios orbitales que completar uno y dejar el otro a uno o dos electrones de estar completado a la mitad. As�, los metales del grupo 6 en vez de tener los orbitales externos completos y el orbital d a un electr�n de estar semi-completo, donar�n un electr�n del orbital s al orbital d, quedando ambos completos a la mitad:s^1d^5 en lugar de s^2d^4. Igualmente, es m�s estable rellenar los orbitales d completamente, por lo que los elementos del grupo 11 tender�n a adoptar la configuraci�n s^1 d^10 en lugar de s^2 d^9. Algunos ejemplos de �stas anomal�as son '24 Cr' y '29 Cu'"<<endl;
						case 'N':
						case 'n':exit(0);
						break;
               			default:cout<<"Incorrecto"<<endl;
               		}
			}
		else{
			switch(electron){
						case 21 :printf("El elemento es Escandio (Sc) \n\n");
							break;
						case 22 :printf("El elemento es Titanio (Ti) \n\n");
							break;
						case 23 :printf("El elemento es Vanadio (V) \n\n");
							break;
						case 25 :printf("El elemento es Manganeso (Mn) \n\n");
							break;
						case 26 :printf("El elemento es Hierro (Fe) \n\n");
							break;
						case 27 :printf("El elemento es Cobalto (Co) \n\n");
							break;
						case 28 :printf("El elemento es Niquel (Ni) \n\n");
							break;
						case 30 :printf("El elemento es Zinc (Zn) \n\n");
							break;
						}
		config=electron-20;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^"<<config<<", 4s^2"<<endl;
		cout<<"[Ar]3d^"<<config<<"4s^2"<<endl;
		}
	}
	else if(electron<=36){
		switch(electron){
						case 31 :printf("El elemento es Galio (Ga) \n\n");
							break;
						case 32 :printf("El elemento es Germanio (Ge) \n\n");
							break;
						case 33 :printf("El elemento es Ars�nico (As) \n\n");
							break;
						case 34 :printf("El elemento es Selenio (Se) \n\n");
							break;
						case 35 :printf("El elemento es Bromo (Br) \n\n");
							break;
						case 36 :printf("El elemento es Kript�n (Kr) \n\n");
							break;
						}
		config=electron-30;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^"<<config<<endl;
		cout<<"[Ar]3d^10, 4s^2, 4p^"<<config<<endl;
	}
	
	//************************ QUINTO PERIODO (N >4d<)******************************//
	//----------------------------------[Kr]----------------------------------------//
	
	else if(electron<=38){
			switch(electron){
						case 37 :printf("El elemento es Rubidio (Rb) \n\n");
							break;
						case 38 :printf("El elemento es Estroncio (Sr) \n\n");
							break;
						}
		config=electron-36;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 5s^"<<config<<endl;
		cout<<"[Kr]5s^"<<config<<endl;
	}
	else if(electron<=48){
		if(electron==41 || electron==42 || electron==44 || electron==45 || electron==47){
				switch(electron){
						case 41 :printf("El elemento es Niobio (Nb) \n\n");
							break;
						case 42 :printf("El elemento es Molibdeno (Mo) \n\n");
							break;
						case 44 :printf("El elemento es Rutenio (Ru) \n\n");
							break;
						case 45 :printf("El elemento es Rodio (Rh) \n\n");
							break;
						case 47 :printf("El elemento es Plata (Ag) \n\n");
							break;
						}
			config=electron-37;
			cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^"<<config<<", 5s^1"<<endl;
			cout<<"[Kr]4d^"<<config<<", 5s^1"<<endl;
				cout<<"�Porqu� estoy viendo �sto?"<<endl;
				cout<<"Presiona 'Y' para saber m�s"<<exeptions<<endl;
				cout<<"Presiona 'N' para salir"<<exeptions<<endl;
				cin>>exeptions;
					switch(exeptions){
						case 'Y':
						case 'y':cout<<"Al desarrollar la configuraci�n electr�nica, encontramos una serie de excepciones. Por ejemplo, es m�s estable llenar dos medios orbitales que completar uno y dejar el otro a uno o dos electrones de estar completado a la mitad. As�, los metales del grupo 6 en vez de tener los orbitales externos completos y el orbital d a un electr�n de estar semi-completo, donar�n un electr�n del orbital s al orbital d, quedando ambos completos a la mitad:s^1d^5 en lugar de s^2d^4. Igualmente, es m�s estable rellenar los orbitales d completamente, por lo que los elementos del grupo 11 tender�n a adoptar la configuraci�n s^1 d^10 en lugar de s^2 d^9. Algunos ejemplos de �stas anomal�as son '24 Cr' y '29 Cu'"<<endl;
						case 'N':
						case 'n':exit(0);
						break;
               			default:cout<<"Incorrecto"<<endl;
               		}
		}
		else if(electron==46){
			switch(electron){
						case 46 :printf("El elemento es Paladio (Pd) \n\n");
							break;
						}
			cout<<"La configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10"<<endl;
			cout<<"[Kr]4d^10"<<config<<endl;
				cout<<"�Porqu� estoy viendo �sto?"<<endl;
				cout<<"Presiona 'Y' para saber m�s"<<exeptions<<endl;
				cout<<"Presiona 'N' para salir"<<exeptions<<endl;
				cin>>exeptions;
					switch(exeptions){
						case 'Y':
						case 'y':cout<<"Al desarrollar la configuraci�n electr�nica, encontramos una serie de excepciones. Por ejemplo, es m�s estable llenar dos medios orbitales que completar uno y dejar el otro a uno o dos electrones de estar completado a la mitad. As�, los metales del grupo 6 en vez de tener los orbitales externos completos y el orbital d a un electr�n de estar semi-completo, donar�n un electr�n del orbital s al orbital d, quedando ambos completos a la mitad:s^1d^5 en lugar de s^2d^4. Igualmente, es m�s estable rellenar los orbitales d completamente, por lo que los elementos del grupo 11 tender�n a adoptar la configuraci�n s^1 d^10 en lugar de s^2 d^9. Algunos ejemplos de �stas anomal�as son '24 Cr' y '29 Cu'"<<endl;
						case 'N':
						case 'n':exit(0);
						break;
               			default:cout<<"Incorrecto"<<endl;
               		}
		}
		else{
			switch(electron){
						case 43 :printf("El elemento es Tecnecio (Tc) \n\n");
							break;
						case 48 :printf("El elemento es Cadmio (Cd) \n\n");
							break;
						}
		config=electron-38;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^"<<config<<", 5s^2"<<endl;
		cout<<"[Kr]4d^"<<config<<", 5s^2"<<endl;
		}	
	}
	else if(electron<=54){
			switch(electron){
						case 49 :printf("El elemento es Indio (In) \n\n");
							break;
						case 50 :printf("El elemento es Esta�o (Sn) \n\n");
							break;
						case 51 :printf("El elemento es Antimonio (Sb) \n\n");
							break;
						case 52 :printf("El elemento es Telurio (Te) \n\n");
							break;
						case 53 :printf("El elemento es Yodo (I) \n\n");
							break;
						case 54 :printf("El elemento es Xen�n (Xe) \n\n");
							break;
						}
		config=electron-48;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^"<<config<<endl;
		cout<<"[Kr]4d^10, 5s^2, 5p^"<<config<<endl;
	}
	
	//***************************SEXTO PERIODO (P) **********************************************//
	//--------------------------------[Xe]-----------------------------------------------------//
	
	else if(electron<=56){
		switch(electron){
						case 55 :printf("El elemento es Cesio (Cs) \n\n");
							break;
						case 56 :printf("El elemento es Bario (Ba) \n\n");
							break;
						}
		config=electron-55;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 5s^2, 5p^6, 6s^"<<config<<endl;
		cout<<"[Xe]6s^"<<config<<endl;
	}
	else if(electron==57){
			switch(electron){
						case 57 :printf("El elemento es Lantano (La) \n\n");
							break;
						}
		cout<<"La configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 5s^2, 5p^6, 4f^1, 6s^2"<<endl;
		cout<<"[Xe]5d^1, 6s^2"<<endl;
	}
	
	//******************************* LANT�NIDOS *****************************************//
	//--------------------------------sigue [Xe]-------------------------------------//
	
	else if(electron<=70){
	cout<<"�ste elemento pertenece a la secci�n de 'Tierras Raras' en la fila de los lant�nidos en la Tabla Peri�dica\n"<<endl;
		if(electron==58){
			switch(electron){
						case 58 :printf("El elemento es Cerio (Ce) \n\n");
							break;
						}
			cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^1, 5d^1, 6s^2"<<endl;
			cout<<"[Xe]4f^1, 5d^1, 6s^2"<<endl;
			cout<<"�Porqu� estoy viendo �sto?"<<endl;
			cout<<"Presiona 'Y' para saber m�s"<<exeptions<<endl;
			cout<<"Presiona 'N' para salir"<<exeptions<<endl;
				cin>>exeptions;
					switch(exeptions){
						case 'Y':
						case 'y':cout<<"Al desarrollar la configuraci�n electr�nica, encontramos una serie de excepciones. Por ejemplo, es m�s estable llenar dos medios orbitales que completar uno y dejar el otro a uno o dos electrones de estar completado a la mitad. As�, los metales del grupo 6 en vez de tener los orbitales externos completos y el orbital d a un electr�n de estar semi-completo, donar�n un electr�n del orbital s al orbital d, quedando ambos completos a la mitad:s^1d^5 en lugar de s^2d^4. Igualmente, es m�s estable rellenar los orbitales d completamente, por lo que los elementos del grupo 11 tender�n a adoptar la configuraci�n s^1 d^10 en lugar de s^2 d^9. Algunos ejemplos de �stas anomal�as son '24 Cr' y '29 Cu'"<<endl;
						case 'N':
						case 'n':exit(0);
						break;
               			default:cout<<"Incorrecto"<<endl;
               		}
				}
		else{
			switch(electron){
						case 59 :printf("El elemento es Praseodiomio (Pr) \n\n");
							break;
						case 60 :printf("El elemento es Neodimio (Nd) \n\n");
							break;
						case 61 :printf("El elemento es Prometio (Pm) \n\n");
							break;
						case 62 :printf("El elemento es Samario (Sm) \n\n");
							break;
						case 63 :printf("El elemento es Europio (Eu) \n\n");
							break;
						case 64 :printf("El elemento es Gadolinio (Gd) \n\n");
							break;
						case 65 :printf("El elemento es Terbio (Tb) \n\n");
							break;
						case 66 :printf("El elemento es Disprosio (Dy) \n\n");
							break;
						case 67 :printf("El elemento es Holmio (Ho) \n\n");
							break;
						case 68 :printf("El elemento es Erbio (Er) \n\n");
							break;
						case 69 :printf("El elemento es Tulio (Tm) \n\n");
							break;
						case 70 :printf("El elemento es Iterbio (Yb) \n\n");
							break;
						}
			config=electron-56;
			cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^"<<config<<", 6s^2"<<endl;
			cout<<"[Xe]4f^"<<config<<", 6s^2"<<endl;  //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! FALTAMENSAJE POR QUE ESTOY VIENDO �STP??????????????????!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//
		}
	}
	
	//****************************** REGRESO **********************************************//
	//---------------------------------sigue [Xe]--------------------------------------------//
	
	else if(electron<=77){
		switch(electron){
						case 71 :printf("El elemento es Lutercio (Lu) \n\n");
							break;
						case 72 :printf("El elemento es Hafnio (Hf) \n\n");
							break;
						case 73 :printf("El elemento es T�ntalo (Ta) \n\n");
							break;
						case 74 :printf("El elemento es Wolframio (W) \n\n");
							break;
						case 75 :printf("El elemento es Renio (Re) \n\n");
							break;
						case 76 :printf("El elemento es Osmio (Os) \n\n");
							break;
						case 77 :printf("El elemento es Iridio (Ir) \n\n");
							break;
						}
		config=electron-70;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^"<<config<<", 6s^2"<<endl;
		cout<<"[Xe] 4f^14, 5d^"<<config<<", 6s^2"<<endl;
	}//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! FALTAMENSAJE POR QUE ESTOY VIENDO �STP??????????????????!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//
	else if(electron<=79){
		switch(electron){
						case 78 :printf("El elemento es Platino (Pt) \n\n");
							break;
						case 79 :printf("El elemento es Oro (Au) \n\n");
							break;
						}
		config=electron-70;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^"<<config<<", 6s^1"<<endl;
		cout<<"[Xe] 4f^14, 5d^"<<config<<", 6s^1"<<endl;
	}//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! FALTAMENSAJE POR QUE ESTOY VIENDO �STP??????????????????!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//
	else if(electron==80){
		switch(electron){
						case 80 :printf("El elemento es Mercurio (Hg) \n\n");
							break;
						}
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 6s^2"<<endl;
		cout<<"[Xe] 4f^14, 5d^10, 6s^2"<<endl;
	}
	else if(electron<=86){
		switch(electron){
						case 81 :printf("El elemento es Talio (Tl) \n\n");
							break;
						case 82 :printf("El elemento es Plomo (Pb) \n\n");
							break;
						case 83 :printf("El elemento es Bismuto (Bi) \n\n");
							break;
						case 84 :printf("El elemento es Polonio (Po) \n\n");
							break;
						case 85 :printf("El elemento es Astato (At) \n\n");
							break;
						case 86 :printf("El elemento es Rad�n (Rn) \n\n");
							break;
						}
		config=electron-80;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 6s^2, 6p^"<<config<<endl;
		cout<<"[Xe] 4f^14, 5d^10, 6s^2, 6p^"<<config<<endl;
	}
	
	//**********************************SEPTIMO PERIODO*************************************//
	//--------------------------------------[Rn]------------------------------------------------//
	
	else if(electron<=88){
		switch(electron){
						case 87 :printf("El elemento es Francio (Fr) \n\n");
							break;
						case 88 :printf("El elemento es Radio (Ra) \n\n");
							break;
						}
		config=electron-87;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 6s^2, 6p^6, 7s^"<<config<<endl;
		cout<<"[Rn] 7s^"<<config<<endl;
	}
	
	//******************************* ACT�NIDOS *****************************************//
	//--------------------------------sigue [Rn]-------------------------------------//	
	
	else if(electron<=90){
				switch(electron){
						case 89 :printf("El elemento es Actinio (Ac) \n\n");
							break;
						case 90 :printf("El elemento es Torio (Th) \n\n");
							break;
						}
	cout<<"�ste elemento pertenece a la secci�n de 'Tierras Raras' en la fila de los act�nidos en la Tabla Peri�dica\n"<<endl;
		config=electron-88;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 6s^2, 6p^6, 6d^"<<config<<", 7s^2"<<endl;
		cout<<"[Rn] 6d^"<<config<<", 7s^2"<<endl; //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! FALTAMENSAJE POR QUE ESTOY VIENDO �STP??????????????????!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//
	}
	else if(electron<=93){
				switch(electron){
						case 91 :printf("El elemento es Protactinio (Pa) \n\n");
							break;
						case 92 :printf("El elemento es Uranio (U) \n\n");
							break;
						case 93 :printf("El elemento es Neptunio (Np) \n\n");
							break;
						}
	cout<<"�ste elemento pertenece a la secci�n de 'Tierras Raras' en la fila de los act�nidos en la Tabla Peri�dica\n"<<endl;
		config=electron-89;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^"<<config<<", 6s^2, 6p^6, 6d^1, 7s^2"<<endl;
		cout<<"[Rn] 5f^"<<config<<", 6d^1, 7s^2"<<endl;
	}
	else if(electron<=95){
				switch(electron){
						case 94 :printf("El elemento es Plutonio (Pu) \n\n");
							break;
						case 95 :printf("El elemento es Americio (Am) \n\n");
							break;
						}
	cout<<"�ste elemento pertenece a la secci�n de 'Tierras Raras' en la fila de los act�nidos en la Tabla Peri�dica\n"<<endl;
		config=electron-88;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^"<<config<<", 6s^2, 6p^6, 6d^1, 7s^2"<<endl;
		cout<<"[Rn] 5f^"<<config<<", 7s^2"<<endl;
	}
	else if(electron==96){
				switch(electron){
						case 96 :printf("El elemento es Curio (Cm) \n\n");
							break;
						}
	cout<<"�ste elemento pertenece a la secci�n de 'Tierras Raras' en la fila de los act�nidos en la Tabla Peri�dica\n"<<endl;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^7, 6s^2, 6p^6, 6d^1, 7s^2"<<endl;
		cout<<"[Rn] 5f^7, 6d^1, 7s^2"<<endl;
	}
	else if(electron<=102){
				switch(electron){
						case 97 :printf("El elemento es Berkelio (Bk) \n\n");
							break;
						case 98 :printf("El elemento es Californio (Cf) \n\n");
							break;
						case 99 :printf("El elemento es Einstenio (Es) \n\n");
							break;
						case 100 :printf("El elemento es Fermio (Fm) \n\n");
							break;
						case 101 :printf("El elemento es Mendelevio (Md) \n\n");
							break;
						case 102 :printf("El elemento es Nobelio (No) \n\n");
							break;
						}
	cout<<"�ste elemento pertenece a la secci�n de 'Tierras Raras' en la fila de los act�nidos en la Tabla Peri�dica\n"<<endl;
		config=electron-88;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^"<<config<<", 6s^2, 6p^6, 6d^1, 7s^2"<<endl;
		cout<<"[Rn] 5f^"<<config<<", 7s^2"<<endl;
	}
	
	//****************************** REGRESO **********************************************//
	//---------------------------------sigue [Rn]--------------------------------------------//
	//______________________________ ELEMENTOS SINT�TICOS Owo_________________________________//
	
	else if(electron<=109){
				switch(electron){
						case 103 :printf("El elemento es Lawrencio (Lr) \n\n");
							break;
						case 104 :printf("El elemento es Rutherfordio (Rf) \n\n");
							break;
						case 105 :printf("El elemento es Dubnio (Db) \n\n");
							break;
						case 106 :printf("El elemento es Seaborgio (Sg) \n\n");
							break;
						case 107 :printf("El elemento es Bohrio (Bh) \n\n");
							break;
						case 108 :printf("El elemento es Hasio (Hs) \n\n");
							break;
						case 109 :printf("El elemento es Meitnerio (Mt) \n\n");
							break;
						
						}
	cout<<"�ste elemento es sint�tico, lo que significa que fue creado en un laboratorio, para mas informaci�n visita el partado 'La Tabla Peri�dica'"<<endl;
		config=electron-102;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^14, 6s^2, 6p^6, 6d^"<<config<<", 7s^2"<<endl;
		cout<<"[Rn] 5f^14, 6d^"<<config<<", 7s^2"<<endl;
	}
	else if(electron<=111){
				switch(electron){
						case 110 :printf("El elemento es Darmsatio (Ds) \n\n");
							break;
						case 111 :printf("El elemento es Roentgenio (Rg) \n\n");
							break;
						}
	cout<<"�ste elemento es sint�tico, lo que significa que fue creado en un laboratorio, para mas informaci�n visita el partado 'La Tabla Peri�dica'"<<endl;
		config=electron-101;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^14, 6s^2, 6p^6, 6d^"<<config<<", 7s^1"<<endl;
		cout<<"[Rn] 5f^14, 6d^"<<config<<", 7s^1"<<endl;
	}
	else if(electron<=112){
				switch(electron){
						case 112 :printf("El elemento es Copernicio (Cn) \n\n");
							break;
						}
	cout<<"�ste elemento es sint�tico, lo que significa que fue creado en un laboratorio, para mas informaci�n visita el partado 'La Tabla Peri�dica'"<<endl;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^14, 6s^2, 6p^6, 6d^10, 7s^2"<<endl;
		cout<<"[Rn] 5f^14, 6d^10, 7s^2"<<endl;
	}
	else if(electron<=118){
				switch(electron){
						case 113 :printf("El elemento es Nihonio (Nh) \n\n");
							break;
						case 114 :printf("El elemento es Flerovio (Fl) \n\n");
							break;
						case 115 :printf("El elemento es Moscovio (Mc) \n\n");
							break;
						case 116 :printf("El elemento es Livermorio (Lv) \n\n");
							break;
						case 117 :printf("El elemento es Teneso (Ts) \n\n");
							break;
						case 118 :printf("El elemento es Oganes�n (Og) \n\n");
							break;
						}
	cout<<"�ste elemento es sint�tico, lo que significa que fue creado en un laboratorio, para mas informaci�n visita el partado 'La Tabla Peri�dica'"<<endl;
		config=electron-112;
		cout<<"Su configuraci�n electr�nica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^14, 6s^2, 6p^6, 6d^10, 7s^2, 7p^"<<config<<endl;
		cout<<"[Rn] 5f^14, 6d^10, 7s^2, 7p^"<<config<<endl;
	}
	}
	}while(options !=6);
	 return 0;
}

