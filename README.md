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