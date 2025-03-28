INTRODUCCIÓN

Este programa permite al usuario ingresar vértices en un espacio tridimensional y crear caras utilizando estos vértices. Los vértices y las caras pueden ser visualizados y gestionados a través de un menú interactivo. Está implementado en dos lenguajes: C++ y Python, y permite al usuario elegir las opciones para ingresar vértices, ingresar caras, imprimir la figura resultante y salir del programa.

INSTALACIÓN/GUIA DE USO 

Asegúrate de tener Python instalado en tu sistema. Puedes descargarlo desde la página oficial de este mismo, o usar visual studio code, el que te permitirá usar diferentes lenguajes, pero para este caso desde el mismo, visual studio descargas Python y sus extensiones.

Una vez instalado, abre una terminal con la tecla F1(en el caso de visual studio code) y verifica que Python esté correctamente instalado con el siguiente comando: Python --version, que más allá de mostrarte que se encuentra instalado te dira en que versión se encuentra Instalación de C++

Si deseas ejecutar el código en C++, puedes usar también visual studio code, descargando compilador de c++ en la misma aplicación y después de esto descargas MinGW, a lo que siguiendo las instrucciones te quedara listo para poder usarlo.

Verifica que tienes un compilador de C++ en tu sistema usando el siguiente comando en la terminal g++ o g++ --version GUIA DE USO Usar el programa en Python

Guarda el archivo en la ruta que desees preferiblemente crea una carpeta.

Abre una terminal, en el caso de visual studio code con la tecla F1, que te llevara a la ruta donde guardaste el código y en la consola se ejecutara todo.

Descripción del Código 

C++:

1.Estructuras de datos: Utiliza dos vectores bidimensionales, vertices para almacenar los vértices y caras para almacenar las caras.

2.Bucle principal: El programa ejecuta un bucle infinito que ofrece al usuario un menú con opciones. Según la opción seleccionada, el programa ejecuta la acción correspondiente.

3.Ingreso de vértices y caras: Los vértices se ingresan como coordenadas x, y, z y se almacenan en un vector de flotantes. Las caras se almacenan como índices de vértices en un vector de enteros.

4.Impresión de figuras: Cuando se selecciona la opción de imprimir la figura, el programa muestra los vértices y las caras.

5.Se utilizo ".size" con el fin de indicar el temaño del vertice y el "push_back" para insertar elemntos 

Python:

1.Estructuras de datos: Al igual que en C++, se usan listas para almacenar los vértices y las caras.

2.Interactividad: El programa utiliza input() para recibir entradas del usuario y mostrar las opciones disponibles.

3.El programa sigue la misma lógica de interacción que el código en C++, donde se permite ingresar vértices, caras y ver la figura resultante.

4.Verificación de entradas: Asegura que los índices ingresados para las caras sean válidos, es decir, que estén dentro del rango de vértices existentes.

Ejemplo de Uso

MENÚ
1. Ingresar vértice
2. Ingresar cara
3. Imprimir figura
4. Salir
Seleccione una opción: 1
Ingrese la coordenada x del vértice: 1.0
Ingrese la coordenada y del vértice: 2.0
Ingrese la coordenada z del vértice: 3.0

MENÚ
1. Ingresar vértice
2. Ingresar cara
3. Imprimir figura
4. Salir
Seleccione una opción: 2
¿Cuántos vértices tiene esta cara? 1
Ingrese el índice del vértice 1: 0

MENÚ
1. Ingresar vértice
2. Ingresar cara
3. Imprimir figura
4. Salir
Seleccione una opción: 3
Vértices:
Vértice 0: (1.0, 2.0, 3.0)
Caras:
Cara 0: [0]

Errores Comunes

1.Índice de vértice incorrecto: Si ingresas un índice fuera del rango de vértices existentes, el programa mostrará un error.
Solución: Asegúrate de usar índices válidos.
2.Intentar crear una cara sin vértices: Si no has ingresado vértices, no podrás crear una cara.
Solución: Ingresa al menos un vértice antes de crear una cara.
3.Cantidad de vértices para la cara mayor a los disponibles: Si intentas usar más vértices de los que has ingresado, el programa dará un error.
Solución: Verifica que la cantidad de vértices sea correcta.
4.Entrada no numérica para vértices: Si ingresas un valor no numérico al definir un vértice, el programa fallará.
Solución: Ingresa solo números válidos (flotantes o enteros). 
5.Opción no válida en el menú: Si seleccionas una opción fuera del rango (1-4), el programa te notificará.
Solución: Elige una opción válida del menú.

Contribuciones Si deseas contribuir al proyecto, se puede haciendo que el desarrollo del código sea más eficaz, también se pueden incluir más materiales, o también organizando mejor el código.

Licencia Licenciado bajo Python Softwate Foundation License (PSFL). C++ no tiene una licencia pero las bibliotecas que usa si la tienen como, la Licencia Pública General GNU o la Licencia MIT.
