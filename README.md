# HMI Yogurt Manufacturing Process Plant

---

![Project.Cover](/Imagenes/Interfaz.png)

---

### Download
| Latest release | Latest development build |
|----------------|--------------------------|
| [![Noto](https://img.shields.io/badge/master-v1.0-green.svg)](Enlace a la version actual) | [![Noto](https://img.shields.io/badge/develop-v1.1+-blue.svg)](Enlace a la version en desarrollo) |

---

# Contents
- 1 - [Introduction](#1-introduction)
    - 1.1 - [Objetcive](#11-Objective)
    - 1.2 - [Limits](#12)
    - 1.3 - [Scope](#13)
    - 1.4 - [Variables](#14)
    - 1.5 - [Events](#15)
    - 1.6 - [Hierarchy](#16)
- 2 - [Downloading the application](#2-downloading-the-game-pre-built)
- 3 - [Building the game](#3-building-the-game)
  - 3.1 - [Building prerequisites](#31-building-prerequisites)
  - 3.2 - [Compiling and running](#32-compiling-and-running)
- 4 - [Contributing](#4-contributing)
- 5 - [Licence](#5-licence)

---

# 1. Introduction

---

## 1.1 - Objective
Se describe el proceso de la fabricación continua y  producción en serie del yogurt saborizado.

---

## 1.2 - Limits
La descripción de la fabricación tomará partida desde la refrigeración de la leche sin procesar hasta que el yogur esté saborizado.

El proyecto no comprenderá las siguientes etapas:

●	Transporte.

●	Filtrado.

●	Inoculación.

●	Llenado.

---

## 1.3 - Scope


El proyecto comprenderá las siguientes etapas:

●	Refrigeración.

●	Estandarización.

●	Pasteurización.

●	Homogeneización.

●	Pre-enfriado.

●	Incubación.

●	Enfriamiento.

●	Saborizado.

---

## 1.4 - Variables

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

---

## 1.5 - Events


●	Marcha/Parada de motores.

●	Apertura/Clausura de válvulas.

●	Estado de la producción de la receta.

●	Cambios y selección de receta.

●	Log in y Log off de usuarios.

●	Detalle de alarma.

---

## 1.6 - Hierarchy

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
    
---

# 2. Downloading the application

---

# 3. Building the application

## 3.1 Building prerequisites

---

## 3.2 Compiling and running

---

# 4. Contributing

---
# 5. Licence

