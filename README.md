# Práctica 5: El mayor de tres números

> **En esta práctica todo es tuyo:** el análisis, la receta, el código y las pruebas. Llena cada sección en la fase que se indica.

## 1. Descripción del problema (Fase 1)
el progama sirve para analizar 3 numeros (a, b c,) y saber cual de esos 3 es el mas grande de esos 3 numeros por ej el programa te va a dar el mensaje de bienvenida despues te va a preguntar 3(a, b c,) numeros despues de eso tu vas a tener que ingresarlos en la terminal (1,2,3) despues de eso el programa los va a guardar en variables los va a analizar y va a ver cual de esos 3 numeros es el mas grande depues de tenerminar todo ese proceso los va a imprimir y te va a decir cual de esos 3 numeros es el mas grande (3) <!-- Explica con tus palabras qué hace tu programa y para qué serviría en la vida real. Máximo 4 líneas. -->

_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato y su objetivo. -->

**Entradas:**
1. 2
2. 4
3. 5

**Salida:**
1. 5

**¿Muestro el valor del mayor o cuál de los tres fue (primero, segundo o tercero)? ¿Por qué?**
mas util mostrar el numero mayor que decir que otro numero fue menor

**¿Qué función de `utilerias.h` uso para leer los números? ¿Por qué esa y no la otra?**
como una biblioteca de apoyo porque contiene ya funciones preparadas y para leer enteros se usa función leerEntero().

## 3. Restricciones e invariante (Fases 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- los numeros deben de ser validos
- el programa compara los 3 valores y elige uno como mayor sin importar el orden

**¿Hace falta validar el rango de los números (por ejemplo, rechazar el 0 o los negativos)? ¿Por qué?**
no es necesario porque el programa solo pide encontrar el mayor

**¿Qué hace mi programa cuando dos números son iguales y son los mayores? ¿Y cuando los tres son iguales?**
dos iguales el programa mostrar el valor repetido como el mayor
3 iguales el programa igual mostrara el numero

**¿Quién detecta cada error?** (¿qué revisa la función de `utilerias.h` y qué reviso yo?)
utilerias valida que el usuario realmente ingrese un numero
y yo reviso que este todo bien

**Invariante** (justo antes de mostrar el resultado, ¿qué es seguro sobre el valor que voy a mostrar?):
ese valor es mayor o igual que los otros 2
## 4. Casos resueltos a mano (Fase 1)

| Caso | Número 1 | Número 2 | Número 3 | Mayor calculado a mano |
|---|---|---|---|---|
| 1 (el mayor en primera posición) | 9 | 4 | 5 | 9 |
| 2 (el mayor en segunda posición) | 3 | 10 | 7 | 10 |
| 3 (el mayor en tercera posición) | 2 | 8 | 15 | 15 |
| 4 (con un empate) | 6 | 6 | 4 | 6 |
| 5 (con negativos) | -3 | -7 | -1 | -1 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con mis 5 casos?** Sí 
**¿Tuve que corregirla? ¿Qué cambié?** no
**¿Cuántas versiones de mi receta escribí hasta la final?** 1
**¿Se me ocurrió otra forma de resolver el problema? ¿Cuál? ¿Por qué elegí la que usé?**
no se me ocurrio otra

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o numero_mayor
./numero_mayor
```

## 7. Ejemplo de ejecución (Fase 3)
PS C:\Users\taqui\Documents\ulsa_ime_1_dp_numero_mayor> ./main.exe
el mayor de 3 :V
numero 1=1
numero 2=2
numero 3=3
mayor=3<!-- Pega aquí lo que muestra tu programa en pantalla con un caso de empate (por ejemplo 7, 7 y 3). -->

```
_____
```

## 8. De la receta al código (Fase 3)
<!-- Para cada paso de TU receta, escribe la instrucción (o instrucciones) de C++ que lo implementa. Agrega las filas que necesites. -->

| Paso de la receta | Instrucción de C++ que lo implementa |
|---|---|
| 1. Mensaje de bienvenida |std::cout << "el mayor de 3 :V" << endl; |
| 2. Pedir los 3 números | std::cout <<"numero 1=";std::cout <<"numero 2=";std::cout <<"numero 2=";|
| 3. Guardar los números en variables| std:: cin >> numero1;std:: cin >> numero2;std:: cin >> numero3 ;|
| 4. Analizar cuál es el mayor | if(numero1>numero2 && numero1>numero3) |
| 5. Imprimir el resultado | std:: cout << "mayor=" << numero3 << std::endl; |

**¿Hubo algún paso de mi receta que me costó traducir a C++? ¿Cuál y por qué?**
ninguno ya habia hecho el codigo
## 9. Experimentos (Fase 3)

**Experimento A: ¿qué te dijo el compilador con `if (a > b > c)`? ¿Qué mostró el programa con 3, 2 y 1? ¿Por qué?**
3 es el mayor

**Experimento B: al cambiar `>=` por `>` (o al revés), ¿qué mostró el programa con 7, 7, 3 y con 5, 5, 5? ¿Por qué?**
> sirve para detectar estrictamente un numero mayor
>= es mas seguro porque si hay empates igual se muestra el valor correcto

**Experimento C (opcional): con `if (a = b)`, ¿qué te dijo el compilador? ¿Qué le pasó al valor de `a`?**
= asigna == compara

## 10. Tabla de pruebas (Fase 4)

| Caso | Entradas | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|
| Mayor primero | 9, 4, 2 | 9 | 9 | si |
| Mayor en medio | 4, 9, 2 | 9 | 9 | si |
| Mayor al final | 2, 4, 9 | 9 | 9 | si |
| Empate arriba (1.º y 2.º) | 7, 7, 3 | 7 | 7 | si |
| Empate arriba (1.º y 3.º) | 7, 3, 7 | 7 | 7 | si |
| Empate abajo | 8, 3, 3 | 8 | 8 | si |
| Los tres iguales | 5, 5, 5 | 5 | 5 | si |
| Todos negativos | -4, -1, -9 | -1 | -1 | si |
| Con cero | -2, 0, -5 | 0 | 0 | si |
| Decimales cercanos | 2.5, 2.7, 2.6 | 2.7 | 2.7 | si |
| Texto | `abc` (luego 3), 1, 2 | vuelve a pedir el dato; 3 | vuelve a pedir el dato; 3 | si |
| Caso propio 1 | 12, 7, 11 | 12 | 12 | si |
| Caso propio 2 | -10, -3, -7 | -3 | -3 | si |

## 11. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
|---|---|---|---|
| 1 | algo para que cuando ponga una letra no se corrompa y se empice desde 0 | aun no lo hago es una sugerencia o mejora continua | no |
| 2 | El programa imprimía varias veces el mismo número cuando había empates | Reemplacé varios if independientes por una cadena if / else if / else | si |

**Reto elegido (opcional):** validar entradas

## 12. Dudas para el profesor (Fase 3)

| Duda | Lo que ya intenté |
|---|---|
| ninguna | nada |

## 13. Reflexión final

**¿Qué aprendí con esta práctica?**
un poco mas sobre el uso de else y if

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
nada funciona

**¿Qué fue lo más difícil y cómo lo resolví?**
hacer los if para que entendieran cual es el numero mayor

**¿Qué pregunta me quedó sin responder?**
ninguna

**¿Qué fue más fácil para mí: la Práctica 3 (receta propia con un paso de ejemplo), la 4 (receta ajena) o esta (todo desde cero)? ¿Por qué?**
todo desde 0 porque entiendo un poco mas el problema

**¿Pensé en los empates antes de programar o los descubrí al probar?**
al probar

## 14. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené las secciones 1 a 13 (no quedan `_____`)
- [ ] Escribí mi receta completa en `RECETA.md` antes de programar
- [ ] Cada bloque de `main.cpp` tiene su comentario `// Paso N`, de acuerdo con mi receta
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla, incluidos los empates
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Mi fork se llama `ulsa_ime_1_dp_numero_mayor` y el código está en `main.cpp`
- [ ] Entregué el enlace de mi fork en Classroom