/** Estrucura del meú del software
Lopezveloz Martinez Itzia
Proyecto Final: Física Computacional I **/



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
		cout<<"¡Bienvenido!\n"<<endl;
		cout<<"¿Qué hace éste programa?\n\n"<<endl;
		cout<<"1.- Conceptos de Química Básica"<<endl;
		cout<<"2.- Información General de los Elementos de la Tabla Periódica"<<endl;
		cout<<"3.- Configuración Energética de los Elementos"<<endl;
		cout<<"4.- Calculadora Multifunción de Mol"<<endl;
		cout<<"5.- Créditos"<<endl;
		cout<<"6.- Salir\n"<<endl;
		cout<<"Seleccione una opción: ";
			cin>>options;
	
	//**************COCEPTOS DE QUIMICA BÁSICA**********************************************//
		if(options==1){ 
			do
			{
				printf("Conceptos de Química Básica \n\n");
				cout<<"1.- MASA"<<endl;
				cout<<"2.- ENERGÍA"<<endl;
				cout<<"3.- LEYES DE CONSERVACION"<<endl;
				cout<<"4.- TRANSFORMACIONES DE LA ENERGÍA"<<endl;
				cout<<"5.- PROPIEDADES DE LA MASA"<<endl;
				cout<<"6.- ESTADOS DE LA MASA"<<endl;
				cout<<"7.- FENÓMENOS FÍSICOS Y FENÓMENOS QUÍMICOS"<<endl;
				cout<<"8.- ELEMENTOS, COMPUESTOS Y MEZCLAS"<<endl;
				cout<<"9.- ÁTOMO"<<endl;
				cout<<"10.- PARTÍCULAS SUBATÓMICAS"<<endl;
				cout<<"11.- MOL"<<endl;
				cout<<"12.- ISÓTOPO"<<endl;
				cout<<"13.- NÚMERO ATÓMICO"<<endl;
				cout<<"14.- NÚMERO DE MASA"<<endl;
				cout<<"15.- PESO ATÓMICO"<<endl;
				cout<<"16.- CONFIGURACIÓN ELECTRÓNICA"<<endl;
				cout<<"17.- LA TABLA PERIÓDICA"<<endl;
				cout<<"18.- GRUPOS"<<endl;
				cout<<"19.- PERIODOS"<<endl;
				cout<<"20.- VALENCIA Y NÚMERO DE OXIDACIÓN"<<endl;
				cout<<"21.- METALES Y NO METALES"<<endl;
				cout<<"22.- Regresar al menú principal"<<endl;
				cout<<"Seleccione el número de un concepto: ";
				cin>>concept;
				if(concept==1){
				system("CLS");
					 printf("MASA\n\n");
								printf("En física, masa (del latín massa) es una magnitud que expresa la cantidad de materia de un cuerpo, medida por la inercia de este, que determina la aceleración producida por una fuerza que actúa sobre él.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==2){
					system("CLS");
					 printf("ENERGÍA\n\n");
								printf("El término energía (del griego enérgeia, «actividad», «operación»; de energós, «fuerza de acción» o «fuerza de trabajo») tiene diversas acepciones y definiciones, relacionadas con la idea de una capacidad para obrar, surgir, transformar o poner en movimiento. En física, «energía» se define como la capacidad para realizar un trabajo. En tecnología y economía, «energía» se refiere a un recurso natural (incluyendo a su tecnología asociada) para poder extraerla, transformarla y darle un uso industrial o económico.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==3){
					system("CLS");
					 printf("LEYES DE LA CONSERVACION\n\n");
								printf("Existen relaciones en el estudio de la masa y de la energía que se expresan en forma matemática y de varias maneras. Estas relaciones son las leyes de la conservación, pilares sobre los que se sostienen los cambios químicos.\n\n");
								printf("- Ley de la conservación de la masa. Ésta ley fue enunciada por Lavoisier y establece que 'la masa no se crea ni se destruye, sólo se transforma'.\n");
								printf("- Ley de la conservación de la energía. Debida a Mayer esta ley establece que 'la energía del universo se mantiene constante de tal manera que no puede ser creada ni destruida y cambiar de una forma o clase a otra'.\n\n");
								printf("Ley de la conservación de la materia. Ésta ley se funda en la teoría de la relatividad de Einstein y dice que 'la cantidad de masa energía que se manifiesta en un determinado espacio tiempo es constante'.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==4){
					system("CLS");
					 printf("TRANSFORMACIONES DE LA ENERGÍA\n\n");
								printf("En principio, solo hay dso tipos de energía, la potencial y la cinética. Con la transformación de éstas dos, ocurren otras manifestaciones.\n\n");
								printf("- Energía potencial. Es la energía almanecana en una partícula debido a su posición dentro de un campo de fuerzas eléctricas magnéticas o gravitacionales.\n");
								printf("- Energía cinética. Es la energía que poseen los cuerpos en movimiento, o bien la energía debida a una partícula y en virtud de su velocidad.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==5){
					system("CLS");
					 printf("PROPIEDADES DE LA MASA\n\n");
								printf("La masa se presenta ante nuestros sentidos como elementos, compuestos, mezclas, sólidos, gases o líquidos. La masa y el peso son diferentes propiedades, que se definen en el ámbito de la física. La masa es una medida de la cantidad de materia que posee un cuerpo mientras que el peso es una medida de la fuerza que es causada sobre el cuerpo por el campo gravitatorio. Por lo tanto la masa de un objeto no cambiará de valor sea cual sea la ubicación que tenga sobre la superficie de la Tierra. La masa se corresponde con el concepto común de cuan “pesado” es un objeto. Sin embargo, en realidad la masa es una propiedad inercial; o sea la tendencia de un objeto a permanecer moviendose con una velocidad constante a menos que una fuerza externa actue sobre él. Según la Segunda ley de Newton, expresada por la fórmula F = ma un objeto con una masa, m, de un kilogramo sufrirá una aceleración, a, de un metro por segundo al cuadrado (aproximadamente un décimo de la aceleración causada por la gravedad terrestre) cuando actúe sobre el mismo una fuerza, F, de un newton.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==6){
					system("CLS");
					 printf("ESTADOS DE LA MASA\n\n");
								printf("En física y química se observa que, para cualquier sustancia o mezcla, modificando sus condiciones de temperatura o presión, pueden obtenerse distintos estados o fases, denominados estados de agregación de la materia, en relación con las fuerzas de unión de las partículas (moléculas, átomos o iones) que la constituyen. Todos los estados de agregación poseen propiedades y características diferentes; los más conocidos y observables cotidianamente son cuatro, llamados fases sólida, líquida, gaseosa y plasmática. También son posibles otros estados que no se producen de forma natural en nuestro entorno, por ejemplo: condensado de Bose-Einstein, condensado fermiónico y estrellas de neutrones. Se cree que también son posibles otros, como el plasma de quark-gluón.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==7){
					system("CLS");
					 printf("FENÓMENOS FÍSICOS Y FENÓMENOS QUÍMICOS\n\n");
								printf("A las modificaciones o cambios que experimentan las substancias bajo la accion de las diferentes formas de enrgía se les llama fenómenos. Las modificaciones o cambios que no alteran la composición intrínseca de la substancia, o que solo lo hacen de modo aparente y transitorio, reciben el nombre de fenómenos físicos.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==8){
					system("CLS");
					 printf("ELEMENTOS, COMPUESTOS Y MEZCLAS\n\n");
								printf("Las sustancias son los materiales con los que trabajan en químico y pueden ser puras o no. \n\nLos elementos son sustancias simples que no pueden descomponerse por métodos químicos ordinarios en algo más sencillo. \nLos compuestos son sustancias que resultan de la unión química de dos o más elementos en proporciones definidas como se combinan de tal manera que ya no es posible identificarlos por sus propiedades originales e individuales y sólo una acción química nos puede separar.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==9){
					system("CLS");
					 printf("ÁTOMO\n\n");
								printf("El término átomo proviene del griego 'átomon', y fue el nombre que se dice les dio Demócrito de Abdera a las partículas que él concebía como las de menor tamaño posible. Un átomo es la unidad constituyente más pequeña de la materia que tiene las propiedades de un elemento químico.\nCada átomo se compone de un núcleo y uno o más electrones unidos al núcleo. El núcleo está compuesto de uno o más protones y típicamente un número similar de neutrones. Los protones y los neutrones son llamados nucleones. Más del 99,94 % de la masa del átomo está en el núcleo. Los protones tienen una carga eléctrica positiva, los electrones tienen una carga eléctrica negativa y los neutrones tienen ambas cargas eléctricas, haciéndolos neutros. Si el número de protones y electrones son iguales, ese átomo es eléctricamente neutro. Si un átomo tiene más o menos electrones que protones, entonces tiene una carga global negativa o positiva, respectivamente, y se denomina ion (anión si es negativa y catión si es positiva).\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==10){
					system("CLS");
					 printf("PARTÍCULAS SUBATÓMICAS\n\n");
								printf("Una partícula subatómica es aquella que es más pequeña que el átomo. Puede ser una partícula elemental o una compuesta, a su vez, por otras partículas subatómicas, como son los quarks, que componen los protones y neutrones. No obstante, existen otras partículas subatómicas, tanto compuestas como elementales, que no son parte del átomo, como es el caso de los neutrinos y bosones.\nLa mayoría de las partículas elementales que se han descubierto y estudiado no pueden encontrarse en condiciones normales en la Tierra, generalmente porque son inestables (se descomponen en partículas ya conocidas), o bien, son difíciles de producir de todas maneras. \n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==11){
					system("CLS");
					 printf("MOL\n\n");
								printf("El mol (símbolo: mol) es la unidad con que se mide la cantidad de sustancia, una de las siete magnitudes físicas fundamentales del Sistema Internacional de Unidades.\n\n");
							system("PAUSE");
							system("CLS");
						}
				else if (concept==12){
					system("CLS");
					printf("ISÓTOPO\n");
								printf("Se denomina isótopos a los átomos de un mismo elemento, cuyos núcleos tienen una cantidad diferente de neutrones, y por lo tanto, difieren en número másico.\n\n");
							system("PAUSE");
							system("CLS");
							}
				if(concept==13){
					system("CLS");
					 printf("NÚMERO ATÓMICO\n\n");
								printf("El número atómico? de un elemento químico es el número total de protones que tiene cada átomo de ese elemento. Se suele representar con la letra Z.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==14){
					system("CLS");
					 printf("NÚMERO DE MASA\n\n");
								printf("En química, el número másico o número de masa es la suma del número de protones y el número de neutrones del núcleo de un átomo. Se simboliza con la letra A. Suele ser mayor que el número atómico, dado que los neutrones del núcleo proporcionan a éste la cohesión necesaria para superar la repulsión entre los protones.\nEl número másico es además el indicativo de los distintos isótopos de un elemento químico. Dado que el número de protones es idéntico para todos los átomos del elemento, sólo el número másico, que lleva implícito el número de neutrones en el núcleo, indica de qué isótopo del elemento se trata. \nNúmero másico (A) = número atómico (Z) + número de neutrones(N)\n\nA = Z + N\n\nPara calcular la cantidad de neutrones que posee un átomo debe hacerse: 'A - Z', (Número másico menos número atómico) consultando antes en la tabla periódica las cantidades correspondientes.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==15){
					system("CLS");
					 printf("PESO ATÓMICO\n\n");
								printf("El peso atómico es una cantidad física adimensional, definida como la razón del promedio de las masas de los átomos de un elemento (de una muestra dada o fuente) con respecto a la doceava parte de la masa de un átomo de carbono-12 (conocida como una unidad de masa atómica unificada).\nEl concepto se utiliza generalmente sin mayor calificación para referirse al peso atómico estándar, que a intervalos regulares publica la Comisión sobre Abundancia de Isótopos y Pesos Atómicos de la IUPAC. Se pretende que sean aplicables a materiales de laboratorios normales.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==16){
					system("CLS");
					 printf("CONFIGURACIÓN ELECTRÓNICA\n\n");
								printf("En química, la configuración electrónica indica la manera en la cual los electrones se estructuran, comunican u organizan en un átomo de acuerdo con el modelo de capas electrónicas, en el cuál las funciones de ondas del sistema se expresa como un átomo o atómicamente un producto de orbitales antisimetrizadas. La configuración electrónica es importante porque determina las propiedades de combinación química de los átomos y por tanto su posición en la tabla periódica.\nSe utiliza en una notación estándar para describir las configuraciones electrónicas de átomos y moléculas. Para los átomos, la notación contiene la definición de los orbitales atómicos (en la forma n l, por ejemplo 1s, 2p, 3d, 4f) indicando el número de electrones asignado a cada orbital (o al conjunto de orbitales de la misma subcapa ) como un superíndice.\nPara átomos con muchos electrones, esta notación puede ser muy larga por lo que se utiliza una notación abreviada, que tiene en cuenta que las primeras subcapas son iguales a las de algún gas noble. \n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==17){
					system("CLS");
					 printf("LA TABLA PERIÓDICA\n\n");
								printf("La tabla periódica de los elementos es una disposición de los elementos químicos en forma de tabla, ordenados por su número atómico (número de protones), por su configuración de electrones y sus propiedades químicas. Este ordenamiento muestra tendencias periódicas, como elementos con comportamiento similar en la misma columna.\n\n");
							system("PAUSE");
							system("CLS");
						}
				if(concept==18){
					system("CLS");
					 printf("GRUPOS\n\n");
								printf("A las columnas verticales de la tabla periódica se las conoce como grupos o familias. Hay 18 grupos en la tabla periódica estándar. En virtud de un convenio internacional de denominación, los grupos están numerados de 1 a 18 desde la columna más a la izquierda —los metales alcalinos— hasta la columna más a la derecha —los gases nobles—.\n\n");
							system("PAUSE");
							system("CLS");
						}	
				if(concept==19){
					system("CLS");
					 printf("PERIODOS\n\n");
								printf("Las filas horizontales de la tabla periódica son llamadas períodos. El número de niveles energéticos de un átomo determina el periodo al que pertenece. Cada nivel está dividido en distintos subniveles, que conforme aumenta su número atómico cada elemento se coloca según su configuración electrónica y da forma a la tabla periódica.\nLos elementos en el mismo período muestran tendencias similares en radio atómico, energía de ionización, afinidad electrónica y electronegatividad. En un período el radio atómico normalmente decrece si nos desplazamos hacia la derecha debido a que cada elemento sucesivo añadió protones y electrones, lo que provoca que este último sea arrastrado más cerca del núcleo.? Esta disminución del radio atómico también causa que la energía de ionización y la electronegatividad aumenten de izquierda a derecha en un período, debido a la atracción que ejerce el núcleo sobre los electrones. La afinidad electrónica también muestra una leve tendencia a lo largo de un período. Los metales —a la izquierda— generalmente tienen una afinidad menor que los no metales —a la derecha del período—, excepto para los gases nobles.\nLa tabla periódica consta de 7 períodos.\n\n");
							system("PAUSE");
							system("CLS");
						}	
				if(concept==20){
					system("CLS");
					 printf("VALENCIA Y NÚMERO DE OXIDACIÓN\n\n");
								printf("En química, la valencia, también conocida como número de valencia, es una medida de la cantidad de enlaces químicos formados por los átomos de un elemento químico.\nSe denomina número de oxidación a la carga que se le asigna a un átomo cuando los electrones de enlace se distribuyen según ciertas reglas prácticas un tanto arbitrarias.\n\nTales reglas prácticas son:\n-En las sustancias simples, es decir las formadas por un solo elemento, el número de oxidación es 0.\n-El oxígeno, cuando está combinado, actúa frecuentemente con -2, a excepción de los peróxidos, en cuyo caso actúa con número de oxidación  -1.\n-El Hidrógeno actúa con número de oxidación +1 cuando está combinado con un no metal, por ser éste más electronegativo; y con -1 cuando está combinado con un metal, por ser éste más electropositivo.\n-En los iones monoatómicos, el número de oxidación coincide con la carga del ión.\n-Recordar que los elementos de los grupos IA (1) y IIA (2) forman iones de  carga +1 y +2 respectivamente, y los del VIIA (17) y VIA(16), de carga –1 y –2 cuando son monoatómicos.\n-La suma de los números de oxidación es igual a la carga de la especie; es decir, que si se trata de sustancias, la suma será 0, mientras que si se trata de iones, será igual a la carga de éstos.\n\n");
							system("PAUSE");
							system("CLS");
						}	
				if(concept==21){
					system("CLS");
					 printf("METALES Y NO METALES\n\n");
								printf("METALES\n\nLa mayor parte de los elementos metálicos exhibe el lustre brillante que asociamos a los metales. Los metales conducen el calor y la electricidad, son maleables (se pueden golpear para formar láminas delgadas) y dúctiles (se pueden estirar para formar alambres). Todos son sólidos a temperatura ambiente con excepción del mercurio (punto de fusión =-39 ºC), que es un líquido.\n\nNO METALES\n\nLos no metales varían mucho en su apariencia no son lustrosos y por lo general son malos conductores del calor y la electricidad. Sus puntos de fusión son más bajos que los de los metales (aunque el diamante, una forma de carbono, se funde a 3570 ºC). Varios no metales existen en condiciones ordinarias como moléculas diatómicas.\nSe encuentran en los tres estados de la materia a temperatura ambiente: son gases (como el oxígeno), líquidos (bromo) y sólidos (como el carbono). No tienen brillo metálico y no reflejan la luz. Muchos no metales se encuentran en todos los seres vivos: carbono, hidrógeno, oxígeno, nitrógeno, fósforo y azufre en cantidades importantes. \n\n");
							system("PAUSE");
							system("CLS");
						}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~REGRESAR AL MANÚ PRINCIPAL~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
				else if (concept<1 || concept>22){
							system("CLS");
					}
			}while(options !='22');
		}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~CONFIGURACION ELECTRÓNICA~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	else if(options==3){
		cout<<"Ingrese el número de electrones del átomo"<<endl;
 cin>>electron;
 if(electron<=0) { cout << "No válido" << endl; exit(0);}
 if(electron>118) { cout << "No válido" << endl; exit(0);}
	
	//******************** PRIMER PERIODO (K) ***********************************//
	
	if(electron<=2){
			switch(electron){
					case 1 :printf("El elemento es Hidrógeno (H) \n\n");
						break;
					case 2 :printf("El elemento es Helio (He) \n\n");
						break;
			}
		config=electron;
		cout<<"Su configuración electrónica es: 1s^"<<config<<endl;
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
			cout<<"Su configuración electrónica es: 1s^2, 2s^"<<config<<endl;
			cout<<"[He]2s^"<<config<<endl;
    }
	else if(electron<=10){
				switch(electron){
						case 5 :printf("El elemento es Boro (B) \n\n");
							break;
						case 6 :printf("El elemento es Carbono (C) \n\n");
							break;
						case 7 :printf("El elemento es Nitrógeno (N) \n\n");
							break;
						case 8 :printf("El elemento es Oxígeno (O) \n\n");
							break;
						case 9 :printf("El elemento es Flúor (F) \n\n");
							break;
						case 10 :printf("El elemento es Neón (N) \n\n");
							break;
						}
		config=electron-4;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^"<<config<<endl;
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
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^"<<config<<endl;
		cout<<"[Ne]3s^"<<config<<endl;
	}
    else if(electron<=18){
    		switch(electron){
						case 13 :printf("El elemento es Aluminio (Al) \n\n");
							break;
						case 14 :printf("El elemento es Silicio (Si) \n\n");
							break;
						case 15 :printf("El elemento es Fósforo (P) \n\n");
							break;
						case 16 :printf("El elemento es Azufre (S) \n\n");
							break;
						case 17 :printf("El elemento es Cloro (Cl) \n\n");
							break;
						case 18 :printf("El elemento es Argón (Ar) \n\n");
							break;	
						}
		config=electron-12;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^"<<config<<endl;
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
		cout<<"La configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 4s^"<<config<<endl;
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
		cout<<"La configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^"<<config<<", 4s^1"<<endl;
		cout<<"[Ar]3d^ "<<config<<", 4s^1"<<endl;
				cout<<"¿Porqué estoy viendo ésto?"<<endl;
				cout<<"Presiona 'Y' para saber más"<<exeptions<<endl;
				cout<<"Presiona 'N' para salir"<<exeptions<<endl;
				cin>>exeptions;
					switch(exeptions){
						case 'Y':
						case 'y':cout<<"Al desarrollar la configuración electrónica, encontramos una serie de excepciones. Por ejemplo, es más estable llenar dos medios orbitales que completar uno y dejar el otro a uno o dos electrones de estar completado a la mitad. Así, los metales del grupo 6 en vez de tener los orbitales externos completos y el orbital d a un electrón de estar semi-completo, donarán un electrón del orbital s al orbital d, quedando ambos completos a la mitad:s^1d^5 en lugar de s^2d^4. Igualmente, es más estable rellenar los orbitales d completamente, por lo que los elementos del grupo 11 tenderán a adoptar la configuración s^1 d^10 en lugar de s^2 d^9. Algunos ejemplos de éstas anomalías son '24 Cr' y '29 Cu'"<<endl;
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
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^"<<config<<", 4s^2"<<endl;
		cout<<"[Ar]3d^"<<config<<"4s^2"<<endl;
		}
	}
	else if(electron<=36){
		switch(electron){
						case 31 :printf("El elemento es Galio (Ga) \n\n");
							break;
						case 32 :printf("El elemento es Germanio (Ge) \n\n");
							break;
						case 33 :printf("El elemento es Arsénico (As) \n\n");
							break;
						case 34 :printf("El elemento es Selenio (Se) \n\n");
							break;
						case 35 :printf("El elemento es Bromo (Br) \n\n");
							break;
						case 36 :printf("El elemento es Kriptón (Kr) \n\n");
							break;
						}
		config=electron-30;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^"<<config<<endl;
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
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 5s^"<<config<<endl;
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
			cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^"<<config<<", 5s^1"<<endl;
			cout<<"[Kr]4d^"<<config<<", 5s^1"<<endl;
				cout<<"¿Porqué estoy viendo ésto?"<<endl;
				cout<<"Presiona 'Y' para saber más"<<exeptions<<endl;
				cout<<"Presiona 'N' para salir"<<exeptions<<endl;
				cin>>exeptions;
					switch(exeptions){
						case 'Y':
						case 'y':cout<<"Al desarrollar la configuración electrónica, encontramos una serie de excepciones. Por ejemplo, es más estable llenar dos medios orbitales que completar uno y dejar el otro a uno o dos electrones de estar completado a la mitad. Así, los metales del grupo 6 en vez de tener los orbitales externos completos y el orbital d a un electrón de estar semi-completo, donarán un electrón del orbital s al orbital d, quedando ambos completos a la mitad:s^1d^5 en lugar de s^2d^4. Igualmente, es más estable rellenar los orbitales d completamente, por lo que los elementos del grupo 11 tenderán a adoptar la configuración s^1 d^10 en lugar de s^2 d^9. Algunos ejemplos de éstas anomalías son '24 Cr' y '29 Cu'"<<endl;
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
			cout<<"La configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10"<<endl;
			cout<<"[Kr]4d^10"<<config<<endl;
				cout<<"¿Porqué estoy viendo ésto?"<<endl;
				cout<<"Presiona 'Y' para saber más"<<exeptions<<endl;
				cout<<"Presiona 'N' para salir"<<exeptions<<endl;
				cin>>exeptions;
					switch(exeptions){
						case 'Y':
						case 'y':cout<<"Al desarrollar la configuración electrónica, encontramos una serie de excepciones. Por ejemplo, es más estable llenar dos medios orbitales que completar uno y dejar el otro a uno o dos electrones de estar completado a la mitad. Así, los metales del grupo 6 en vez de tener los orbitales externos completos y el orbital d a un electrón de estar semi-completo, donarán un electrón del orbital s al orbital d, quedando ambos completos a la mitad:s^1d^5 en lugar de s^2d^4. Igualmente, es más estable rellenar los orbitales d completamente, por lo que los elementos del grupo 11 tenderán a adoptar la configuración s^1 d^10 en lugar de s^2 d^9. Algunos ejemplos de éstas anomalías son '24 Cr' y '29 Cu'"<<endl;
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
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^"<<config<<", 5s^2"<<endl;
		cout<<"[Kr]4d^"<<config<<", 5s^2"<<endl;
		}	
	}
	else if(electron<=54){
			switch(electron){
						case 49 :printf("El elemento es Indio (In) \n\n");
							break;
						case 50 :printf("El elemento es Estaño (Sn) \n\n");
							break;
						case 51 :printf("El elemento es Antimonio (Sb) \n\n");
							break;
						case 52 :printf("El elemento es Telurio (Te) \n\n");
							break;
						case 53 :printf("El elemento es Yodo (I) \n\n");
							break;
						case 54 :printf("El elemento es Xenón (Xe) \n\n");
							break;
						}
		config=electron-48;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^"<<config<<endl;
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
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 5s^2, 5p^6, 6s^"<<config<<endl;
		cout<<"[Xe]6s^"<<config<<endl;
	}
	else if(electron==57){
			switch(electron){
						case 57 :printf("El elemento es Lantano (La) \n\n");
							break;
						}
		cout<<"La configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 5s^2, 5p^6, 4f^1, 6s^2"<<endl;
		cout<<"[Xe]5d^1, 6s^2"<<endl;
	}
	
	//******************************* LANTÁNIDOS *****************************************//
	//--------------------------------sigue [Xe]-------------------------------------//
	
	else if(electron<=70){
	cout<<"Éste elemento pertenece a la sección de 'Tierras Raras' en la fila de los lantánidos en la Tabla Periódica\n"<<endl;
		if(electron==58){
			switch(electron){
						case 58 :printf("El elemento es Cerio (Ce) \n\n");
							break;
						}
			cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^1, 5d^1, 6s^2"<<endl;
			cout<<"[Xe]4f^1, 5d^1, 6s^2"<<endl;
			cout<<"¿Porqué estoy viendo ésto?"<<endl;
			cout<<"Presiona 'Y' para saber más"<<exeptions<<endl;
			cout<<"Presiona 'N' para salir"<<exeptions<<endl;
				cin>>exeptions;
					switch(exeptions){
						case 'Y':
						case 'y':cout<<"Al desarrollar la configuración electrónica, encontramos una serie de excepciones. Por ejemplo, es más estable llenar dos medios orbitales que completar uno y dejar el otro a uno o dos electrones de estar completado a la mitad. Así, los metales del grupo 6 en vez de tener los orbitales externos completos y el orbital d a un electrón de estar semi-completo, donarán un electrón del orbital s al orbital d, quedando ambos completos a la mitad:s^1d^5 en lugar de s^2d^4. Igualmente, es más estable rellenar los orbitales d completamente, por lo que los elementos del grupo 11 tenderán a adoptar la configuración s^1 d^10 en lugar de s^2 d^9. Algunos ejemplos de éstas anomalías son '24 Cr' y '29 Cu'"<<endl;
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
			cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^"<<config<<", 6s^2"<<endl;
			cout<<"[Xe]4f^"<<config<<", 6s^2"<<endl;  //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! FALTAMENSAJE POR QUE ESTOY VIENDO ÉSTP??????????????????!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//
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
						case 73 :printf("El elemento es Tántalo (Ta) \n\n");
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
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^"<<config<<", 6s^2"<<endl;
		cout<<"[Xe] 4f^14, 5d^"<<config<<", 6s^2"<<endl;
	}//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! FALTAMENSAJE POR QUE ESTOY VIENDO ÉSTP??????????????????!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//
	else if(electron<=79){
		switch(electron){
						case 78 :printf("El elemento es Platino (Pt) \n\n");
							break;
						case 79 :printf("El elemento es Oro (Au) \n\n");
							break;
						}
		config=electron-70;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^"<<config<<", 6s^1"<<endl;
		cout<<"[Xe] 4f^14, 5d^"<<config<<", 6s^1"<<endl;
	}//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! FALTAMENSAJE POR QUE ESTOY VIENDO ÉSTP??????????????????!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//
	else if(electron==80){
		switch(electron){
						case 80 :printf("El elemento es Mercurio (Hg) \n\n");
							break;
						}
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 6s^2"<<endl;
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
						case 86 :printf("El elemento es Radón (Rn) \n\n");
							break;
						}
		config=electron-80;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 6s^2, 6p^"<<config<<endl;
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
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 6s^2, 6p^6, 7s^"<<config<<endl;
		cout<<"[Rn] 7s^"<<config<<endl;
	}
	
	//******************************* ACTÍNIDOS *****************************************//
	//--------------------------------sigue [Rn]-------------------------------------//	
	
	else if(electron<=90){
				switch(electron){
						case 89 :printf("El elemento es Actinio (Ac) \n\n");
							break;
						case 90 :printf("El elemento es Torio (Th) \n\n");
							break;
						}
	cout<<"Éste elemento pertenece a la sección de 'Tierras Raras' en la fila de los actínidos en la Tabla Periódica\n"<<endl;
		config=electron-88;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 6s^2, 6p^6, 6d^"<<config<<", 7s^2"<<endl;
		cout<<"[Rn] 6d^"<<config<<", 7s^2"<<endl; //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! FALTAMENSAJE POR QUE ESTOY VIENDO ÉSTP??????????????????!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!//
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
	cout<<"Éste elemento pertenece a la sección de 'Tierras Raras' en la fila de los actínidos en la Tabla Periódica\n"<<endl;
		config=electron-89;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^"<<config<<", 6s^2, 6p^6, 6d^1, 7s^2"<<endl;
		cout<<"[Rn] 5f^"<<config<<", 6d^1, 7s^2"<<endl;
	}
	else if(electron<=95){
				switch(electron){
						case 94 :printf("El elemento es Plutonio (Pu) \n\n");
							break;
						case 95 :printf("El elemento es Americio (Am) \n\n");
							break;
						}
	cout<<"Éste elemento pertenece a la sección de 'Tierras Raras' en la fila de los actínidos en la Tabla Periódica\n"<<endl;
		config=electron-88;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^"<<config<<", 6s^2, 6p^6, 6d^1, 7s^2"<<endl;
		cout<<"[Rn] 5f^"<<config<<", 7s^2"<<endl;
	}
	else if(electron==96){
				switch(electron){
						case 96 :printf("El elemento es Curio (Cm) \n\n");
							break;
						}
	cout<<"Éste elemento pertenece a la sección de 'Tierras Raras' en la fila de los actínidos en la Tabla Periódica\n"<<endl;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^7, 6s^2, 6p^6, 6d^1, 7s^2"<<endl;
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
	cout<<"Éste elemento pertenece a la sección de 'Tierras Raras' en la fila de los actínidos en la Tabla Periódica\n"<<endl;
		config=electron-88;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^"<<config<<", 6s^2, 6p^6, 6d^1, 7s^2"<<endl;
		cout<<"[Rn] 5f^"<<config<<", 7s^2"<<endl;
	}
	
	//****************************** REGRESO **********************************************//
	//---------------------------------sigue [Rn]--------------------------------------------//
	//______________________________ ELEMENTOS SINTÉTICOS Owo_________________________________//
	
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
	cout<<"Éste elemento es sintético, lo que significa que fue creado en un laboratorio, para mas información visita el partado 'La Tabla Periódica'"<<endl;
		config=electron-102;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^14, 6s^2, 6p^6, 6d^"<<config<<", 7s^2"<<endl;
		cout<<"[Rn] 5f^14, 6d^"<<config<<", 7s^2"<<endl;
	}
	else if(electron<=111){
				switch(electron){
						case 110 :printf("El elemento es Darmsatio (Ds) \n\n");
							break;
						case 111 :printf("El elemento es Roentgenio (Rg) \n\n");
							break;
						}
	cout<<"Éste elemento es sintético, lo que significa que fue creado en un laboratorio, para mas información visita el partado 'La Tabla Periódica'"<<endl;
		config=electron-101;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^14, 6s^2, 6p^6, 6d^"<<config<<", 7s^1"<<endl;
		cout<<"[Rn] 5f^14, 6d^"<<config<<", 7s^1"<<endl;
	}
	else if(electron<=112){
				switch(electron){
						case 112 :printf("El elemento es Copernicio (Cn) \n\n");
							break;
						}
	cout<<"Éste elemento es sintético, lo que significa que fue creado en un laboratorio, para mas información visita el partado 'La Tabla Periódica'"<<endl;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^14, 6s^2, 6p^6, 6d^10, 7s^2"<<endl;
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
						case 118 :printf("El elemento es Oganesón (Og) \n\n");
							break;
						}
	cout<<"Éste elemento es sintético, lo que significa que fue creado en un laboratorio, para mas información visita el partado 'La Tabla Periódica'"<<endl;
		config=electron-112;
		cout<<"Su configuración electrónica es: 1s^2, 2s^2, 2p^6, 3s^2, 3p^6, 3d^10, 4s^2, 4p^6, 4d^10, 5s^2, 5p^6, 4f^14, 5d^10, 5f^14, 6s^2, 6p^6, 6d^10, 7s^2, 7p^"<<config<<endl;
		cout<<"[Rn] 5f^14, 6d^10, 7s^2, 7p^"<<config<<endl;
	}
	}
	}while(options !=6);
	 return 0;
}

