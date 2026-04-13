# Trabajo 1 - Punto 2

## Respuestas sobre .gitignore

### Por qué es conveniente incluirlo?
Porque permite  mantener el repositorio limpio y organizado. Evita que se suban archivos innecesarios como:
* Archivos ejecutables generados por la compilación (`.exe`).
* Archivos temporales del sistema operativo o del editor de código (`.vscode`).
* Información snesible (contraseñas o configuraciones locales).

### Cuándo se debe hacer?
Lo ideal es incluirlo al comienzo del proyecto, inmediatamente despues de inicializar el repositorio o clonarlo, para evitar que archivos no deseados sean rastreados por Git desde el primer momento

### Cómo se configura el archivo .guitignore?
Se configura creando un archivo de texto plano `.gitignore` en la raiz del proyecto. En el se escriben patrones de nombres de archivos o de carpetas que queremos excluir. Ejemplo:
* `archivo.txt` (ignora un archivo específico).
* `*.exe`  (ignora todos los archivos con esa extensión).
*  `carpeta/` (ignora una carpeta completa).

---
*Este repositorio incluye una regla específica para ignorar un archivo `ignorado.txt`.*

## Respuestas sobre codigo_sin_funcionar.c

Para lograr que el programa compile y funcione correctamente, se realizaron las siguientes correcciones:

1. **Errores de Sintaxis:**
   - Se agregaron los puntos y coma (`;`) faltantes en las líneas de la suma y el `return 0`. Esto permitió que el compilador GCC generara el ejecutable con éxito.

2. **Errores en `scanf` (Memoria):**
   - En la instrucción `scanf("%d", &valor1);`, se agregó el operador de dirección (`&`). Originalmente, al faltar este símbolo, el programa intentaba escribir en una zona de memoria inválida, lo que provocaba un **Segmentation Fault**.

3. **Lógica de Punteros (Paso por referencia):**
   - **Problema:** La función original usaba "paso por valor", por lo que el duplicado solo ocurría en una copia interna y no afectaba a la variable original del `main`.
   - **Solución:** Se cambió la función para que reciba un puntero (`int *numero`). En el `main`, se pasa la dirección de la variable con `&valor1`. Dentro de la función, se utiliza el operador de indirección (`*`) para modificar el valor real en memoria.

## Respuestas sobre codigo_misterioso.c
Tras analizar la ejecución paso a paso con el debugger, se determinó que el código realiza una transformación matemática sobre un número entero dividida en tres etapas, utilizando el **paso por referencia (punteros)** para persistir los cambios.

**Flujo de operaciones (Ejemplo con valor de prueba 452):**
1. **Inversión:** Se invierte el número ingresado ($452 \rightarrow 254$).
2. **División:** Se calcula la mitad entera del resultado anterior ($254 / 2 = 127$).
3. **Acumulación:** Se suma al valor actual la suma de sus propios dígitos ($127 + (1+2+7) = 137$).

**Justificación de nuevos nombres descriptivos:**
Se renombraron las funciones originales para cumplir con las reglas de *Clean Code* y mejorar la legibilidad:
* `invertir_entero` (antes `f_alpha`): Realiza la inversión de los dígitos mediante el resto (`% 10`) y la división por 10.
* `mitad_entero` (antes `f_beta`): Ejecuta una división entera por 2 sobre el valor de referencia.
* `sumar_digitos_al_entero` (antes `f_gamma`): Descompone el número para sumar sus componentes e incrementa el valor original con dicho resultado.