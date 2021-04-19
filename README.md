# Interfaz de planta industrial de yogurt 

Proyecto para la cátedra de Informática Avanzanda de la Universidad Nacional de La Matanza
 
Sistema operativo: Windows 10 /
IDE: C++ Builder /
Lenguajes: C, C++ y Pascal

<img src = "/HMI_Yogurt_Manufacturing_Process/Imagenes/Interfaz.png" >

Objetivo General:

Se describe el proceso de la fabricación continua y  producción en serie del yogurt saborizado.

Limites:

La descripción de la fabricación tomará partida desde la refrigeración de la leche sin procesar hasta que el yogur esté saborizado.

Alcance:

El proyecto comprenderá las siguientes etapas:

●	Refrigeración.

●	Estandarización.

●	Pasteurización.

●	Homogeneización.

●	Pre-enfriado.

●	Incubación.

●	Enfriamiento.

●	Saborizado.


El proyecto no comprenderá las siguientes etapas:

●	Transporte.

●	Filtrado.

●	Inoculación.

●	Llenado.

●	Empaquetado.


Variables:

Variables analógicas:

1.	Temperatura de depósito de leche.
2.	Temperatura de estandarización.
3.	Temperatura del refrigerante.
4.	Temperatura de pasteurización.
5.	Tiempo de pasteurización.
6.	Temperatura de homogeneización.
7.	Tiempo de pre-enfriado.
8.	Temperatura de pre-enfriado.
9.	Tiempo de incubación.
10.	Temperatura de incubación.
11.	Tiempo de enfriado.
12.	Temperatura de enfriado.
13.	Porcentaje de yogurt en el envase.
14.	Porcentaje de colchón de frutas/cereal en el envase.
15.	Porcentaje de cubierta en el envase.

Variables discretas:

1.	Encendido/Apagado del motor de refrigeración.
2.	Encendido/Apagado del motor de estandarización.
3.	Encendido/Apagado del motor de pasteurización.
4.	Encendido/Apagado del motor de homogeneización.
5.	Encendido/Apagado del motor de pre-enfriado e incubación.
6.	Encendido/Apagado del motor de enfriado.
7.	Apertura/Clausura de válvula de tanque de refrigeración.
8.	Apertura/Clausura de válvula de tanque de estandarización.
9.	Apertura/Clausura de válvula de tanque de pasteurización.
10.	Apertura/Clausura de válvula de tanque de homogeneización.
11.	Apertura/Clausura de válvula de tanque de pre-enfriado e incubación.
12.	Apertura/Clausura de válvula de tanque de enfriado.

Eventos:

●	Marcha/Parada de motores.

●	Apertura/Clausura de válvulas.

●	Estado de la producción de la receta.

●	Cambios y selección de receta.

●	Log in y Log off de usuarios.

●	Detalle de alarma.


Jerarquía de usuarios:

1.	Administrador:
 a.	Es responsable de modificar, agregar y eliminar las recetas. 
 b.	Es responsable de modificar, agregar y eliminar usuarios sin importar su jerarquía.
 c.	Es responsable de realizar las tareas del supervisor.

2.	Supervisor: 
 a.	Es responsable de atender las alarmas.
 b.	Es responsable de modificar, agregar y eliminar usuarios debajo de su jerarquía.
 c.	Es responsable de elegir la receta para producción.
 d.	Es responsable de realizar las tareas del operario.

3.	Operario: 
 a.	Es responsable de operar la planta según la receta en curso dentro de los parámetros ideales.
 


