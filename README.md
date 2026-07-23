# BIBLIOTECA CLI
Este proyecto es realizado para realizar una practica basica en C++,
que involucre los conceptos basicos, como condicionales, funciones,
variables, bucles, modificacion de archivos, etc.

---

## En que consiste
Usando el compilador de g++ usado para compilar el paquete que funcione
en el CLI de forma que se ejecuta desde el cmd de windows el paquete resultante.

El proyecto consta en realizar un sistema de gestion bibliotecaria que realizara
acciones como:

    1. Gestionar usuarios: Inicios de sesion, creacion de usuarios,
    eliminar usuarios, modificarlos, libros prestados, historial de prestamos.
    2. Gestion de libros: Libros prestados, historial de a quien han sido prestados,
    inventario de libros, etc.
    3. Busqueda de libros: consultar los libros en el inventario,
    los que estan disponibles para prestamos, los que estan prestados, etc.
    4. Escribir archivos: para la primera version escribir en un archivo de tipo json.
    5. Conexion con DB: para versiones posteriores el programa realizara una conexion
    con una base de datos relacional y ahi almacenara los datos.

---

## Estructura del proyecto
- Archivo *library.cpp* contiene el codigo fuente del programa, contiene la ejecucion
principal y este es el programa que se compila, ya que incluira las conexiones con
otros fragmentos de codigo.

- Directorio *utils*, contendra utilidades repetitivas a lo largo del codigo, como
la limpieza de la terminal, y otras que surjan a lo largo del desarrollo del proyecto.