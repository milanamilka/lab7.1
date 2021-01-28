/**
 * @mainpage
 * # Загальне завдання
 * 1. **Заповнити масив** Генерація нікнейму; В заданому рядку замінити символи:
 * а та А на @;
 * о та О на 0;
 * і та I на 1;
 * s та S на $;
 * @author Nikolaenko M.
 * @date 17-dec-2020
 * @version 1.0
 */

/**
 * @file main.c
 * @brief Файл з демонстрацією роботи структури та методів
 * оперування ним.
 *
 * @author Nikolaenko M.
 * @date 17-dec-2020
 * @version 1.0
 */


//Генерація нікнейму; В заданому рядку замынити символи: а та А на @; о та О на 0; і та I на 1; s та S на $;
#include <stdio.h>

void array (char arr[] ;) ;
/**
 * Головна функція.
 *
 * Послідовність дій:
 * - вивід результату роботи функції @function array
 * @return успішний код повернення з програми (0)
 */
int main() {
 char arr[] = "MILKA"; 
 array(arr) ;
 
 
  return 0;
  }
  /**
 * @function array
 *
 * Послідовність дій:
 * - оголошеня змінних 
 *	@param arr[] Масив заданого розміру
 * - заміна символу №1 на 1
 * - заміна символу №4 на @
 */
   void array (char arr[];) {
  char arr[] = "MILKA"; 
  arr [1] = '1'; 
  arr [4] = '@';
 
  printf("%s\n", array);
 } 
