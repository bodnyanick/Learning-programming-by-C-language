#include "ucheba.h"

#include <ctype.h>
#include <math.h>
#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define CURRENT_YEAR 2021

int main() {
  //! УКАЗАТЕЛИ НАКОНЕЦ-ТАКИ!!!
// ТУТ ПРИМЕР(-ы) 25-ой ГЛАВЫ



  // ТУТ ПРИМЕР(-ы) 24-ой ГЛАВЫ
  //! ЗАДАЧА ИЗ КНИГИ
/*int kids;
  int *pKids;
  float price;
  float *pPrice;
  char code;
  char *pCode;
  price = 17.50;
  pPrice = &price;
  printf("\n Скольких детей вы ведете в аквапарк? ");
  scanf(" %d", &kids);
  pKids = &kids;
  printf("\n У Вас есть скидка?");
  printf("\n Введите E для скидки сотрудника, S для скидки по программе "Sav-More" ");
  printf("или N если скидки нет: ");
  scanf(" %c", &code);
  pCode = &code;
  printf("\n Сначала давайте поработаем с переменными:\n");
  printf("У вас %d детей...\n", kids);
  switch (code) {
    case ('E'):
      printf("Скидка сотрудника позволяет сэкономить 25%% от цены ");
      printf("$%.2f price", price);
      printf("\n Общая стоимость билетов: $%.2f", (price * .75 * kids));
      break;
    case ('S'):
      printf("Скидка Sav-more позволяет сэкономить 15%% от цены ");
      printf("$%.2f price", price);
      printf("\n Общая стоимость билетов: $%.2f", (price * .85 * kids));
      break;
    default:  // Если введена N при отсутствии скидки или неправильная буква
      printf("Вы заплатите полную стоимость билетов,");
      printf("которая составит $%.2f", price);
  }
  // Теперь повторим тот же самый код, но использовав для получения тех же
  // результатов разыменованные указатели
  printf("\n\n\n Теперь поработаем с указателями:\n");
  printf(" У вас %d детей...\n", *pKids);
  switch (*pCode) {
    case ('E'):
      printf("Скидка сотрудника позволяет сэкономить 25%% от цены ");
      printf("$%.2f price", *pPrice);
      printf("\n Общая стоимость билетов: $%.2f", (*pPrice * .75 * *pKids));
      break;
    case ('S'):
      printf("Скидка Sav-more позволяет сэкономить 15%% от цены ");
      printf("$%.2f price", *pPrice);
      printf("\n Общая стоимость билетов: $%.2f", (*pPrice * .85 * *pKids));
      break;
    default:  // Если введена N при отсутствии скидки или неправильная буква
      printf("Вы заплатите полную стоимость билетов, ");
      printf("которая составит $%.2f", *pPrice);
  }
*/
  //!
  /*int age = 19; //Запись числа 19 в переменную age
  int *pAge = &age; // Связь с указателем

  printf("Возраст: %d.\n", age);
  printf("Возраст: %d.\n", *pAge);

  printf("Адрес переменной age: %p\n", (void*)&age);
  printf("Адрес переменной pAge: %p\n", (void*)&pAge);
  printf("Значение, на которое указывает pAge: %p\n", (void*)pAge);
  */
  //! МАССИВЫ
  // ТУТ ПРИМЕР(-ы) 23-ой ГЛАВЫ
  // прога-поиск в отсортированном списке идентификационных номеров клиентов и
  // выводит соответствующий кредитный баланс
  /*int ctr;       //Счетчик цикла
    int idSearch;  //Искомый клиент (ключ)
    int found = 0;  //Будет равен 1 (ИСТИНА) если клиент найден
    //Определение 10 элементов двух параллельных массивов
    int custID[10] = {313, 453, 502, 101, 892, 475, 792, 912, 343, 633};
    float custBal[10] = {0.00,   45.43,  71.23,  301.56, 9.08,
                       192.41, 389.00, 229.67, 18.31,  59.54};
    int tempID;
    int inner, outer, didSwap;
  //Для сортировки
    float tempBal;
    //Сначала отсортировать массив по номерам
    for (outer = 0; outer < 9; outer++) {
      didSwap = 0;  //Становится равной 1 (ИСТИНА), если список еще не
  сортирован for (inner = outer; inner < 10; inner++) { if (custID[inner] <
  custID[outer]) { tempID = custID[inner]; tempBal = custBal[inner];
          custID[inner] = custID[outer];
          custBal[outer] = tempBal;
          custID[outer] = tempID;
          didSwap = 1;
        }
      }
      if (didSwap == 0) {
        break;
      }
    }
    //Взаимодействие с пользователем, ищущим баланс.
    printf("\n\n*** Проверка баланса клиента ***\n");
    printf("Введите искомый номер клиента: ");
    scanf(" %d", &idSearch);
    //Поиск и установление наличия номера клиента в массиве
    for (ctr = 0; ctr < 10; ctr++)
    {
      if (idSearch == custID[ctr])  //Они равны?
      {
        found = 1;  //Да, флаг равенства установить в 1
        break;      //Продолжать цикл не нужно
      }
    }
    //! В случаях, когда массив содержит несколько тысяч элементов, такой
  оператор
    //! if может сэкономить значительное количество процессорного времени.
  while (ctr < 10 && !found) {
      if (custID[ctr] > idSearch)  //Нет смысла продолжать поиск
      {
          break;
      }
      // Здесь можно добавить дополнительную логику, если она нужна
      ctr++;
  }
  //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    //По завершении цикла, номер был либо найден (found = 1), либо нет
    if (found) {
      if (custBal[ctr] > 100.00) {
        printf("\n** Баланс клиента: $%.2f.\n", custBal[ctr]);
        printf(" Кредит недоступен.\n");
      } else {
        printf("\n** У клиента хороший кредитный баланс!\n");
      }
    } else {
      printf("** Вы ввели неверный ID клиента.");
      printf("\n Введенный ID %3d в списке не найден.\n", idSearch);
    }
  */

  //! Пузырьковая сртировка
  /*int ctr, inner, outer, didSwap, temp;
  int nums[10];
  time_t t;
  srand(time(&t));
  for (ctr = 0; ctr < 10; ctr++) // инициализирую массив случайными числами
  {
  nums[ctr] = (rand() % 99) + 1; // функция rand() возвращает случайное число от
  0 до максимального значения
  }
  puts("\n Список чисел перед сортировкой:"); //! массив ДО сортировки
  for (ctr = 0; ctr < 10; ctr++)
  {
  printf("%d\n", nums[ctr]);
  }
  for (outer = 0; outer < 9; outer++)
  {
  didSwap = 0; // 1 - если сортировки ещё не было
  for (inner = outer; inner < 10; inner++)
  {
  if (nums[inner] < nums[outer])
  {
  // Механизм перестановки чисел во внутреннем цикле
  temp = nums[inner];
  nums[inner] = nums[outer];
  nums[outer ] = temp;
  // программа должна поменять местами элементы nums[inner] и nums[outer]
  didSwap = 1;
  }
  }
  if (didSwap == 0)
  {
  break;
  }
  }
  puts("\n Список чисел после сортировки:"); //! массив после сортировки
  for (ctr = 0; ctr <10; ctr++)
  {
  printf("%d\n", nums[ctr]);
  }
  */

  // ТУТ ПРИМЕР(-ы) 22-ой ГЛАВЫ
  //! Это тоже с книги, только уже 3 параллельных массива и БЕЗ КЛЮЧИКА
  /*int gameScores[10] = {12, 5, 21, 15, 32, 10, 6, 31, 11, 10};
  int gameRebounds[10] = {5, 7, 1, 5, 10, 3, 0, 7, 6, 4};
  int gameAssists[10] = {2, 9, 4, 3, 6, 1, 11, 6, 9, 10};

  int bestGame = 0; // сюда пишутся очки
  int gmMark = 0; // сюда номер игры
  int i;

  for (i = 0; i < 10; i++) { // по факту задаётся сколько игр надо перебрать
    if (gameScores[i] > bestGame) { //! это называется ПОСЛЕДОВАТЕЛЬНЫЙ ПОИСК
      bestGame = gameScores[i];
      gmMark = i;
    }
  }
  printf("\n Очки игрока в самой результативной игре: \n");
  printf("Самой результативной стала игра № %d\n", gmMark+1);
  printf("Заработано %d очков\n", gameScores[gmMark]);
  printf("Подобрано %d мячей\n", gameRebounds[gmMark]);
  printf("Осуществлено %d голевых передач\n", gameAssists[gmMark]);
  */

  //! ЭТО прога с книги. Фишка - во вложенном в оба массива счётчке ctr - он
  //! делает оба массива параллельными.
  /*int ctr;       //Счетчик цикла
    int idSearch;  //Искомый клиент (ключ)
    int found = 0;  //Будет равен 1 (ИСТИНА) если клиент найден
    //Определение 10 элементов двух параллельных массивов
    int custID[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};
    float custBal[10]= { 0.00, 45.43, 71.23, 301.56, 9.08, 192.41,
                        389.00, 229.67, 18.31, 59.54};  // Взаимодействие с
    пользователем, ищущим баланс printf("\n\n*** Проверка баланса клиента
    ***\n"); printf("Введите искомый номер клиента: "); scanf(" %d", &idSearch);
    // Поиск и установление наличия номера клиента в массиве for (ctr = 0; ctr <
    10; ctr++){ if (idSearch == custID[ctr]) { found = 1; break;
      }
    }
    if (found) {
      if (custBal[ctr] > 100.00) {
        printf("\n**Баланс клиента: $%.2f.\n", custBal[ctr]);
        printf(" Кредит недоступен.\n");
      } else {
        printf("\n**У клиента хороший кредитный баланс!\n");
      }
    } else {
      printf("**Вы ввели неверный ID клиента.");
      printf("\n Введенный ID %d в списке не найден.\n", idSearch);
    }
  */

  //! это рожал я, не родил.
  /*int BD_num [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int CustID;
  //float custBal[10]={0.00, 45.43, 71.23, 301.56, 9.08, 192.41, 389.00,
  229.67, 18.31, 59.54}; printf("Enter indefinite number of customers: ");
  scanf("%d", &CustID);

  if(CustID == BD_num [9]){
    printf("Your number is correct!\n");
    }else{
    printf("Your number is incorrect!\n");
  }
  */

  // ТУТ ПРИМЕР(-ы) 21-ой ГЛАВЫ

  /*int points[10] = {12, 5, 21, 15, 32, 10};
  int i;
  float srv;
  int allPoints = 0;
  for(i = 6; i < 10; i++){
    printf("Players points for the game №%d: ", i+1);
    scanf("%d", &points[i]);
  }

  for (i=0; i<10; i++)
  {
    allPoints += points [i];
  }

  srv = ((float)allPoints / 10);
  printf("Total points: %d\n", allPoints);
  printf("Average points for all days: %.2f\n", srv);
  */

  //! Если массив char - нуль-символ выводится
  //! Если массив int - нуль-символ не выводится
  /*
  char ages[3];
  int i;
  for (i = 0; i < 3; i++)
  {
  printf("Введите возраст ребенка №%d ", i+1);
  scanf("%hhd", &ages[i]); //Получает от пользователя следующий возраст
  }
  printf("%hhd\n", ages[3]);
  */

  /*
  char array [20];
  printf("%s\n", strcpy(array, "Hello"));
  int vals[5] = {10, 40, 70, 90, 120};
  printf("%d %d %d %d %d\n", vals[0], vals[1], vals[2], vals[3], vals[4]);
  char grades[5] = {'A', 'B', 'C', 'D', 'F'};
  printf("%c %c %c %c %c\n", grades[0], grades[1], grades[2], grades[3],
  grades[4]); char grades2[5] = {'A', 'B', 'C', 'D', '\0'}; fgets(grades2,
  sizeof(grades2), stdin); grades2[strcspn(grades2, "\n")] = 0;
  */

  // ТУТ ПРИМЕР(-ы) 20-ой ГЛАВЫ
  //! Генерация случайных чисел
  /*
  float dice;
  dice = (rand() % 5) ; //От 1 до 6
  printf("Вы получили кубик с числом %.0f.\n", dice);
  */
  //! Функция rand() возвращает случайное число от 0 до максимального значения
  //! int. Функция srand() устанавливает новое значение порождающего числа для
  //! случайных чисел. Функция rand() использует порождающее число для генерации
  //! случайных чисел.

  /*float dollars = 0.0;
  //! И положительное и отрицательное округлит в МЕНЬШУЮ сторону
  float change = -1.5;
  dollars = floor(change);
  printf("Сдача включает %f долларовых банкнот.\n",
  dollars);
  //! Абсолютное значение выводится без дробной части благодаря использованию
  кода преобразования %f со спецификатором .0. printf("Абсолютное значение
  -25.0:
  %.0f.\n", fabs(-25.0));
  //! Возведение в степень и вывод квадратного корня:
  printf("10 в третьей степени: %.0f. \n", pow(10.0, 3.0));
  printf("Квадратный корень из 64: %.0f. \n", sqrt(64));
  */

  // ТУТ ПРИМЕР(-ы) 19-ой ГЛАВЫ
  /*char first[25] = "Сидоров";
  char last[25] = " Анатолий";
  strcat(first, last);
  printf("Меня зовут %s\n", first);
  */

  /*char userInput;
  printf("Do you want to continue? [Y/N] ");
  scanf("%c", &userInput);
  //! ВОТ ЭТО:
  if((userInput == 'Y') || (userInput == 'y'))
  { printf("yes\n"); }
  else
  { printf("no\n"); }
  //! ТО ЖЕ САМОЕ, ЧТО И ЭТО (или меняю на tolower()):
  if(toupper((userInput) == 'Y')) //нужно проверить только символ верхнего
  регистра { printf("yes\n"); } else { printf("no\n"); }
  */

  //! ТУТ ПРОГА ИЗ КНИГИ
  /*int i;
  int hasUpper, hasLower, hasDigit;
  char user[25], password[25];
  //Инициализировать все три переменные 0, т.е. ЛОЖЬю
  hasUpper = hasLower = hasDigit = 0;
  printf("Как Вас зовут? ");
  scanf(" %s", user);
  printf("Пожалуйста, придумайте пароль: ");
  scanf(" %s", password);
  size_t password_length = strlen(password);
  //Данный цикл проходит по всем символам пароля
  //и проверяет не является ли символ буквой верхнего,
  //нижнего регистра или цифрой
  for (i = 0; i < (int)password_length; i++) {
    if (isdigit(password[i])) {
      hasDigit = 1;
      continue;
    }
    if (isupper(password[i])) {
      hasUpper = 1;
      continue;
    }
    if (islower(password[i])) {
      hasLower = 1;
      continue;
    }
  }
  //Данный оператор if будет выполнен только в том
  случае, если все переменные ниже равны 1, а равны 1
  они могут быть только в том случае, если в пароле
  найдены символы всех трех категорий
  if ((hasDigit) && (hasUpper) && (hasLower)) {
    printf("\nХорошая работа, %s,\n", user);
    printf("Ваш пароль содержит большие, маленькие буквы и цифры.");
  } else {
    printf("\nПридумайте новый пароль, %s,\n", user);
    printf("Содержащий большие, маленькие буквы и цифры.");
  }
  printf("\n\n\n");
  */

  //! ТУТ МОЯ "ЧУДО" ПРограмма, НИХЕРА НЕ ДОДЕЛАЛ, НАДОЕЛО.
  /*int i;
  char login[100];
  char password[100];
  printf("Enter your login: ");
  scanf("%s", login);
  printf("Enter your password: ");
  scanf("%s", password);
  for (i = 0; i < 100 && password[i] != '\0'; i++) {
      if(isupper(password[i])) {
          printf("Upper case letter\n");
      } else if (islower(password[i])) {
          printf("Lower case letter\n");
      } else if (isdigit(password[i])) {
          printf("Digit\n");
      } else if (ispunct(password[i])) {
          printf("Punctuation mark\n");
      } else {
          printf("Other character\n");
      }
  }
  */

  //! Функции для проверки регистра буквы
  /*int x = 'a';
  if (islower(x))
  {
  printf("Буква нижнего регистра\n");
  }
  */

  /*int x = 'A';
  if ((x >= 'A') && (x <= 'Z'))
  {
  printf("Буква верхнего регистра\n");
  }
  */

  //! Тут функции для тестирования ввода символов (Число И буква)
  /*char x = 'a';
  if (isdigit(x))
  {
  printf("Число\n");
  }
  */
  /*char x = '3';
  if (isalpha(x))
  {
  printf("Вы ввели букву\n");
  }
  */

  // ТУТ ПРИМЕР(-ы) 18-ой ГЛАВЫ
  //! Вообще я ПЛОХО понял эту главу!!!
  //! По итогу НЕ понял, как работает GETCH()!!!
  /*int v1 = getchar();
  int v2 = getchar();
  printf("%c %c \n", v1, v2);
  */

  /*int x = getchar();
  int y = putchar(x);
  printf("\n%d\n", y);
  */
  //! НО!!! потом я нашёл как работает. Через библиотеку #include <ncurses.h>!!!
  /*int ch;

  // Инициализация ncurses
  initscr();          // Запуск ncurses
  noecho();           // Отключаем отображение вводимых символов
  cbreak();          // Включаем неканонический режим

  printw("Нажмите любую клавишу: "); // Выводим сообщение
  ch = getch();       // Считываем символ без ожидания Enter

  printw("\n Вы нажали: %c\n", ch); // Выводим нажатую клавишу
  refresh();          // Обновляем экран

  getch();           // Ожидаем нажатия клавиши перед выходом
  endwin();          // Завершение работы с ncurses
  */
  //! Пример реализации безбуферного ввода

  /*#include <stdio.h>
  #include <termios.h>
  #include <unistd.h>

  int getch(void) {
      struct termios oldt, newt;
      int ch;

      // Получаем текущие настройки терминала
      tcgetattr(STDIN_FILENO, &oldt);
      newt = oldt;

      // Отключаем канонический режим и эхо
      newt.c_lflag &= ~(ICANON | ECHO);
      tcsetattr(STDIN_FILENO, TCSANOW, &newt); // Применяем новые настройки

      ch = getchar(); // Считываем символ

      // Восстанавливаем старые настройки терминала
      tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
      return ch;
  }

  int main() {
      printf("Нажмите любую клавишу: ");
      int ch = getch(); // Считываем символ без ожидания Enter
      printf("\nВы нажали: %c\n", ch);
      return 0;
  }
  */
  //! ТУТ функция GETCH()!!! НО!!! я хуй знает - КАК она работает???
  /*int i;
  int firstInit[5];
  int lastInit[5];
  printf("Введите первые буквы имени и фамилии: \n");
  for(i = 0; i < 6; i++){
    firstInit[i] = getchar_unlocked();
    lastInit[i] = getchar_unlocked();
    getchar_unlocked();
  }
  printf("Первые буквы имени: %ls\n", firstInit);
  printf("Последние буквы имени: %ls\n", lastInit);
  */

  //! Эта программа — демонстрация функции getchar()
  /*int i;
    char msg[25];
    printf("Введите макс. 25 символов и нажмите Enter…\n");
    for (i = 0; i < 25; i++) {
      msg[i] = getchar();  //Вводит один символ
      if (msg[i] == '\n') {
        i--;
        break;
      }
    }
    putchar('\n');  //Перенос строки после завершения цикла
    for (; i >= 0; i--) { //! Тут ПРОПУЩЕН первый аргумент в цикле, т.к. он
    задан в массиве ВВОДОМ с клавиатуры putchar(msg[i]);
    }
    putchar('\n');
  */
  //! Эта программа — демонстрация функции putchar()
  /*
      int i;
      char msg[] = "C – это весело";
      for (i = 0; i < (int) strlen(msg); i++) {
        putchar(msg[i]);  //Вывод одного символа
      }
      putchar('\n');  //Перенос строки после завершения цикла
  */
  // ТУТ ПРИМЕР(-ы) 17-ой ГЛАВЫ
  //! The start of the function
  /*
    int choice1;
    int choice2;

    printf("Select decade: \n");
    printf("1. 1980s\n");
    printf("2. 1990s\n");
    printf("3. 2000s\n");
    printf("4. Exit\n");

    do {
      printf("Enter your choice (1-4): ");
      scanf(" %d", &choice1);
      switch (choice1) {
        case (1): {
          printf("Select a topic of the decade %d: \n", choice1);
          printf("1. Sport \n");
          printf("2. Entertainment \n");
          printf("3. Policy \n");
          scanf("%d", &choice2);
          if (choice2 == 1) {
            printf("The NFL Champions in 1980-1989 years are:\n");
            printf("1980: Philadelphia Phillies\n");
            printf("1981: Los Angeles Dodgers\n");
            printf("1982: St. Louis Cardinals\n");
            printf("1983: Baltimore Orioles\n");
            printf("1984: Detroit Tigers\n");
            printf("1985: Kansas City Royals\n");
            printf("1986: New York Mets\n");
            printf("1987: Minnesota Twins\n");
            printf("1988: Los Angeles Dodgers\n");
            printf("1989: Oakland A’s\n");
            printf("\n\n\n");
            break;
          } else if (choice2 == 2) {
            printf("Oscar champions in 1980-1989 years are:\n");
            printf("1980: Ordinary People\n");
            printf("1981: Chariots of Fire\n");
            printf("1982: Gandhi\n");
            printf("1983: Terms of Endearment\n");
            printf("1984: Amadeus\n");
            printf("1985: Out of Africa\n");
            printf("1986: Platoon\n");
            printf("1987: The Last Emperor\n");
            printf("1988: Rain Man\n");
            printf("1989: Driving Miss Daisy\n");
            printf("\n\n\n");
            break;
          } else if (choice2 == 3) {
            printf("USA Presidents in 1980-1989 years are:\n");
            printf("1980: Джимми Картер\n");
            printf("1981-1988: Рональд Рейган\n");
            printf("1989: Джордж Буш\n");
            printf("\n\n\n");
            break;
          } else if (choice2 == 4) {
            exit(1);
          } else {
            printf("Sorry, the number undefined\n");
            break;
          }
        }
        case (2): {
          printf("Select a topic of the decade %d: \n", choice1);
          printf("1. Sport \n");
          printf("2. Entertainment \n");
          printf("3. Policy \n");
          scanf("%d", &choice2);
          if (choice2 == 1) {
            printf("The NBA Champions in 1990-1999 years are:\n");
            printf("1990: Golden State Warriors\n");
            printf("1991: Boston Celtics\n");
            printf("1992: Brooklyn Nets\n");
            printf("1993: New York Knicks\n");
            printf("1994: Los Angeles Lakers\n");
            printf("1995: Miami Heat\n");
            printf("1996: San Antonio\n");
            printf("1997: Florida Marlins\n");
            printf("1998: New York Yankees\n");
            printf("1999: New York Yankees\n");
            printf("\n\n\n");
            break;
          } else if (choice2 == 2) {
            printf("Oscar champions in 1990-1999 years are:\n");
            printf("1990: Tony Blair\n");
            printf("1991: Jack Nicholson\n");
            printf("1992: Rita Winslet\n");
            printf("1993: Scarlett Johansson\n");
            printf("1994: Tina Fey\n");
            printf("1995: Kate Winslet\n");
            printf("1996: Kristen Stewart\n");
            printf("1997: Cynthia Nixon\n");
            printf("1998: Susan Sarandon\n");
            printf("1999: Susan Sarandon\n");
            printf("\n\n\n");
            break;
          } else if (choice2 == 3) {
            printf("USA Presidents in 1990-1999 years are:\n");
            printf("1990: Рональд Маккейн\n");
            printf("1991-1999: Джордж Буш\n");
            printf("\n\n\n");
            break;
          } else if (choice2 == 4) {
            exit(1);
          } else {
            printf("Sorry, the number undefined\n");
            break;
          }
        }
        case (3): {
          printf("Select a topic of the decade %d: \n", choice1);
          printf("1. Sport \n");
          printf("2. Entertainment \n");
          printf("3. Policy \n");
          scanf("%d", &choice2);
          if (choice2 == 1) {
            printf("The NHL Champions in 2000-2009 years are:\n");
            printf("2000: Boston Bruins\n");
            printf("2001: New York Islanders\n");
            printf("2002: Chicago Blackhawks\n");
            printf("2003: Washington Capitals\n");
            printf("2004: Dallas Stars\n");
            printf("2005: Los Angeles Kings\n");
            printf("2006: Philadelphia");
            printf("2007: Boston Red Sox\n");
            printf("2008: Philadelphia Phillies\n");
            printf("2009: New York Yankees\n");
            printf("\n\n\n");
            break;
          } else if (choice2 == 2) {
            printf("Oscar champions in 2000-2009 years are:\n");
            printf("2000: Hans Zimmer\n");
            printf("2001: Donald Trump\n");
            printf("2002: Roger Federer\n");
            printf("2003: Joe Biden\n");
            printf("2004: Kate Winslet\n");
            printf("2005: Susan Sarandon\n");
            printf("2006: Kristen Stewart\n");
            printf("2007: Kate Winslet\n");
            printf("2008: Kate Winslet\n");
            printf("2009: Susan Sarandon\n");
            printf("\n\n\n");
            break;
          } else if (choice2 == 3) {
            printf("USA Presidents in 2000-2009 years are:\n");
            printf("2000-х годов:\n");
            printf("2000: Bill Clinton\n");
            printf("2001-2008: George Bush\n");
            printf("2009: Barrack Obama\n");
            printf("\n\n\n");
            break;
          } else if (choice2 == 4) {
            exit(1);
          } else {
            printf("Sorry, the number undefined\n");
            break;
          }
        }
          case (4):
          {
            exit(1);
            break;
          }
          default:
          {
            printf("Sorry, no %d number in menu...\n", choice1);
            printf("Try again.\n");
            break;
          }
      }
    } while ((choice1 < 1) || (choice1 > 4));
  */
  //! THE END OF MAIN FUNCTION

  /*int choise;
  printf("What you want to do?\n");
  printf("1. Add new contact\n");
  printf("2. Edit contact\n");
  printf("3. Phone contact\n");
  printf("4. Print SMS to contact\n");
  printf("5. Delete contact\n");
  printf("6. Go out from programm\n");

  do{
    printf("Choose please: \n");
    scanf ("%d", &choise);
    switch (choise)
    {
      case (1):
        printf("To add new contact, you need enter Phone number, Third and
  Lust name\n"); break; case (2): printf("Enter the name of the contact what
  you want to change\n"); break; case (3): printf("What contact do you want to
  phone?\n"); break; case (4): printf("What contact do you want to send
  SMS?\n"); break; case (5): printf("Enter the name of the contact you want to
  delete\n"); break; case (6): exit (1); //! ТОЛЬКО ЭКСАЙТ в stlib.h default:
  printf("\n %d Unknown choose. Please, try again.\n", choise); break;
    }
  }while ((choise <1) || choise > 6);
  */

  // ТУТ ПРИМЕР(-ы) 16-ой ГЛАВЫ
  //! А ЭТО - ИЗ КНИГИ - не прога, а говно ебаное
  /*int i;
    //Проход по числам от 1 до 10
    for (i = 1; i <=10; i++)
    {
    if ((i%2) == 1) //Остаток от деления нечетных чисел = 1
    {
    printf("От нечетных чисел одни неудобства…\n");
    // Перескочить к началу новой итерации цикла
    continue; //! НО: тут использовали continue, а я - НЕТ
    }
    printf("То ли дело четные числа! \n");
    }
  */

  // ! ЭТО Я - и впервые я сделал ТОП прогу!!!))))
  /*
    int i;
    for (i = 0; i <= 10; i++) {
    printf("Введи число, еблан: \n");
    scanf("%d", &i);
      if (i % 2 == 0) {
        printf("Чётные числа забесь!\n");
      }else{
        printf("Нечётные числа забесь!\n");
      }
      }
    */

  // ! А ЭТО - НЕ Я:
  /*int numTest;
  float stTest, avg, total = 0.0;
  //Запрос ввода максимум 25 оценок
  for (numTest = 0; numTest < 25; numTest++)
  {
  //Получение оценки и проверка ввода триггера -1
  printf("\n Введите оценку студента: \n");
  scanf(" %f", &stTest);
  if (stTest < 0.0)
  {
  break;
  }
  total += stTest;
  }
  avg = total / numTest;
  printf("\n Средний балл %.1f%%.\n", avg);
  */

  // ! ЭТО Я - так и недошёл до остановки цикла  на последнем студенте:
  /*
  int student;
  int studentPoints;
  float pointsAverage;
  printf("Print how much srudents in your group: \n");
  scanf("%d", &student);

  for (studentPoints = 0; studentPoints <= 5; studentPoints--) {
  printf("Print point for %d: \n", student--);
  scanf("%d", &studentPoints);
  if (studentPoints == 0){
    break;
  }
  }
  pointsAverage = (float) student / studentPoints;
  printf("Средний балл вашей группы: %.2f\n", pointsAverage);
  */

  /*
  int i;
  for (i=0; i < 10; i++)
  {
  printf("%d \n", i);
  if (i == 9)
  {
  break;
  }
  }
  */

  // ТУТ ПРИМЕР(-ы) 15-ой ГЛАВЫ
  // ! А ЭТО НЕ Я - ИЗ КНИГИ:
  /*
  int ctr, numMovies, rating, favRating, leastRating;
  char movieName[40], favourite[40], least[40];
  favRating = 0;
  leastRating = 10;
  do {
  printf("Сколько фильмов вы посмотрели за этот год? ");
  scanf(" %d", &numMovies);
  if (numMovies < 1)
  {
  printf("Ни одного фильма! Как вы можете их оценивать?\n Попробуйте
  снова!\n");
  }
  }while (numMovies <1);
  for (ctr = 1; ctr <= numMovies; ctr++)
  {
  printf("Введите название фильма (название только в 1 слово!)\n");
  scanf(" %s", movieName);
  printf("Как бы вы его оценили по шкале от 1 до 10?\n");
  scanf(" %d", &rating);
  if (rating > favRating)
  {
  strcpy(favourite, movieName);
  favRating = rating;
  }
  if (rating < leastRating)
  {
  strcpy(least, movieName);
  leastRating = rating;
  }
  }
  printf("Ваш любимый фильм: %s.\n", favourite);
  printf("Ваш наименее любимый фильм: %s.\n", least);
  */

  // ! ЭТО Я САМ НАПИСАЛ(до рейтинга не допетрил):
  /*
  int x;
  char movies[100][50];
  int grade;

  printf("How much films are you watching this year?\n");
  scanf("%d", &x);
  for (int i=1; i<=x; i++) {
    printf("What is a name of the %d film?\n", i);
    scanf("%s", movies[i]);
    printf("Paste the grade of this film up 1 to 10\n");
    scanf("%d", &grade);
  */

  /*
  int x;
  int y;
  for (x = 1; x <= 1; x++) { //! тут можно интересно поиграться с выводом х
  или у! for (y = 1; y <= 100; y++) { // ! это называется ВЛОЖЕННЫЙ цикл!
  printf("%d
  ", y);
    }
    printf("\n");
  }
  */

  /*
  int i = 0;
  int people_count;
  printf("How much people working in your organization?\n");
  scanf("%d", &people_count);
  for(i = 1; i<= people_count; i++){
    printf("Salary for person %d are given\n", i);
  }
  */

  //! ВОТ ЭТО!!!
  /*
  int ctr=1;
  while (ctr<=10){
    printf("Still counting...%d.\n", ctr);
    ctr++;
  }
  */
  //! ТОЖЕ САМОЕ ЧТО И ЭТО!!!
  /*
  int ctr=1;
  do{
    printf("Still counting...%d.\n", ctr++);
  }
  while (ctr<=10);
  */

  /*
  int ctr=1;
  for(ctr=1;ctr <=10;ctr++)
  {
    printf("Still counting...%d.\n", ctr);
  }
  */

  /*
  for (ctr = 1; ctr <= 5; ctr++)
  {
  printf("Значение счетчика %d.\n", ctr);
  }
  for (ctr = 5; ctr >= 1; ctr--)
  {
  printf("Значение счетчика %d.\n", ctr);
  }
  */

  // ТУТ ПРИМЕР 14-ой ГЛАВЫ
  /*
  int a, b, c;
  char otvet;
    do{
    printf("Введите число №1:\n");
    scanf(" %d", &a);
    printf("Введите число №2:\n");
    scanf(" %d", &b);
    c = a * b;
    printf("Резултат умножения = %d\n", c);
    printf("Умножить другие числа? [Y/N]");
    scanf(" %c", &otvet);
    if(otvet == 'n'){
    otvet = 'N';
    }
  } while (otvet != 'N' && otvet != 'n');
  */

  /*
  int ctr = 0;
  while(ctr<5){
    printf("Значение счетчика %d.\n", ++ctr);
  }
  while(ctr>1){
    printf("Значение счетчика %d.\n", --ctr);
  }
  */

  /*
  int amount;
  printf("Print a number:\n");
  scanf(" %d", &amount);
  if(amount<25){
    printf("The number is smaller\n");
  }else{
    printf("The number is done\n");
  }
  */

  /*
  while(amount<25){
    printf("The number is so small\n");
    printf("Enter anouther number, please\n");
    scanf("%d", &amount);
  }
  printf("The number is done\n");
  */

  // ТУТ ПРИМЕР 13-ой ГЛАВЫ
  /*
  char n [] = "Ruth Claire";
  int i = 10;
  printf("Размер массива n = %ld\n", sizeof(n)); // размеры в БАЙТАХ
  printf("Размер переменной n = %ld\n", sizeof(i));
  */

  /*
  int ctr = 0;
  ! ЕСТЬ РАЗНИЦА МЕЖДУ ЭТИМ:
  printf("Значение ctr = %d\n", ctr++);
  printf("Значение ctr = %d\n", ctr++);
  printf("Значение ctr = %d\n", ctr++);
  printf("Значение ctr = %d\n", ctr++);
  printf("Значение ctr = %d\n", ctr++);
  printf("Значение ctr = %d\n", ctr--);
  printf("Значение ctr = %d\n", ctr--);
  printf("Значение ctr = %d\n", ctr--);
  printf("Значение ctr = %d\n", ctr--);
  ! И ЭТИМ!!!!!
  printf("Значение ctr = %d\n", ++ctr);
  printf("Значение ctr = %d\n", ++ctr);
  printf("Значение ctr = %d\n", ++ctr);
  printf("Значение ctr = %d\n", ++ctr);
  printf("Значение ctr = %d\n", ++ctr);
  printf("Значение ctr = %d\n", --ctr);
  printf("Значение ctr = %d\n", --ctr);
  printf("Значение ctr = %d\n", --ctr);
  printf("Значение ctr = %d\n", --ctr);
  */

  /*
  int i = 2, j = 5;
  int n;
  n = ++i * j; // сначала i=3, потом n=15
  printf("Значение i = %d\n", i);
  printf("Значение n = %d\n", n);
  */

  /*
  int i = 2, j = 5;
  int n;
  n = i++ * j; // А ТУТ НАОБОРОТ!!! сначала  n=2*5, потом i=3
  printf("Значение i = %d\n", i);
  printf("Значение n = %d\n", n);
  */

  /*
  int n;
  printf("\nTouch a number from 1 to 100\n");
  scanf("\n%d", &n);
  printf("\n%d %s делится на 2.\n", n, (n % 2 == 0) ? (" ") : ("не "));
  printf("\n%d %s делится на 3.\n", n, (n % 3 == 0) ? (" ") : ("не "));
  printf("\n%d %s делится на 4.\n", n, (n % 4 == 0) ? (" ") : ("не "));
  printf("\n%d %s делится на 5.\n", n, (n % 5 == 0) ? (" ") : ("не "));
  printf("\n%d %s делится на 6.\n", n, (n % 6 == 0) ? (" ") : ("не "));
  printf("\n%d %s делится на 7.\n", n, (n % 7 == 0) ? (" ") : ("не "));
  printf("\n%d %s делится на 8.\n", n, (n % 8 == 0) ? (" ") : ("не "));
  printf("\n%d %s делится на 9.\n", n, (n % 9 == 0) ? (" ") : ("не "));
  */

  /*
  int numPear;
  printf("Touch a number from 1 to 100\n");
  scanf("%d", &numPear);
  printf("I ate %d pear%s\n", numPear, (numPear > 1) ? ("s.") : ("."));
  */

  // ТУТ ПРИМЕР 12-ой ГЛАВЫ
  /*
  char x [100];
  printf("Print your sorename, please\n");
  scanf(" %s", x);
  printf("Thank you!\n");
  if(((x[0] >= 'P') && (x[0] <= 'S' )) || ((x[0] >= 'p') && (x[0] <= 's'))){
    printf("Come with us, please.\n");
  }else{
    printf("Your tickets, please!\n");
  }
  */

  /*
  int a = 1;
  int b = 2;
  int c = 3;

  if(a+b >= 0 && a-c <0){ // или оператор "|| - или"
    printf("РОССИЯ\n");
  }else{
    printf("USA\n");
  }
  */

  // ТУТ ПРИМЕР 11-ой ГЛАВЫ
  /*
  int fun;
  printf("На сколько баллов ты счастлив, сынок? От 1 до 10\n");
  scanf(" %d", &fun);
  if(fun <= 2){
    printf("Чё такой грустный? Хуй сосал не вкусный?\n");
    }
    else if(fun <= 4){
      printf("Не грусти - вся жизнь впереди!\n");
    }
    else if(fun <= 7){
      printf("ТЫ почти чемпион, бро!\n");
    }
    else if(fun <= 10){
      printf("КРУТОЙ ПЕРЕЦ!!!\n");
    }
  */

  /*
  int YearBorn, YearToday;
  printf("What is the year today?\n");
  scanf(" %d", &YearToday);
  printf("The year of your birthday\n");
  scanf(" %d", &YearBorn);
  int YearsOldToBe = YearToday - YearBorn;

  if(YearToday != CURRENTYEAR){
    printf("ПИДОРАСИНА\n");
    }else{
      printf("You are %d this year!\n", YearsOldToBe);
    }
  if (((YearBorn % 4 == 0) && (YearBorn % 100 != 0)) || (YearBorn % 400 ==
  0)){ printf("Вы родились в високосный год! Круто!\n");
  }
  */

  // ТУТ ПРИМЕР 10-ой ГЛАВЫ
  /*
  int ctr = 0;
  ctr = ctr + 1;
  printf("Текущее значение %d\n", ctr);
  ctr *= 2;
  printf("Текущее значение %d\n", ctr);
  ctr += 1;
  printf("Текущее значение %d\n", ctr);
  printf("Текущее значение %d\n", ctr += 1);
  printf("Текущее значение %d\n", ctr += 1);
  printf("Текущее значение %d\n", ctr -= 1);
  printf("Текущее значение %d\n", ctr -= 1);
  printf("Текущее значение %d\n", ctr -= 1);
  printf("Текущее значение %d\n", ctr /= 2);
  float a;
  printf("Текущее значение %f\n", a = 1.5 * ctr / 0.5);
  ! salaryBonus = salary * (float)age / 150.0; - ЭТО ПРИСВАИВАНИЕ ПЕРЕМЕННОЙ
  ДРУГОГО ТИПА
  */

  // ТУТ ПРИМЕР 9-ой ГЛАВЫ
  /*
  int a = 5;
  int b;
  int c = 2 * (b = 2);
  int d = 3;
  int x = 10;
  int z = 3;
  float abc = a + b * c / b % d + x - z;
  printf(" %.2f\n", abc);
  */

  /*
  int kolvo;
  printf("Сколько покрышек Вы купили?\n");
  scanf("%d", &kolvo);
  float cena_z = 1500.50;
  printf(" %.2f\n", cena_z);
  float cena_p;
  printf("По какой цене? (Ответ в формате **.**)\n");
  scanf("%f", &cena_p);
  printf(" $%.2f\n", cena_p);
  float summa_z = kolvo * cena_z;
  printf(" $%.2f\n", summa_z);
  float summa_p = kolvo * cena_p;
  printf(" $%.2f\n", summa_p);
  float vyruchka = (summa_p - summa_z) * SALESTAX;
  printf("Чистая прибль составляет $%.2f\n", vyruchka);
  */

  /*
  float a = 33.3;
  int b = 3;
  float tochka_answer = a / b;
  int x = 18;
  int y = 9;
  int celoe_answer = x / y;
  int z = 8;
  int w = 4;
  int delenie_modul = z%w; - ДЛЯ ОСТАТКА ОТ ДЕЛЕНИЯ
  printf("%.2f разделить на %d получится %.2f\n", a, b, tochka_answer);
  printf("%d разделить на %d получится %d\n", x, y, celoe_answer);
  printf("Остаток от деления %d на %d равняется %d\n", z, w, delenie_modul);
  */

  // ТУТ ПРИМЕР 8-ой ГЛАВЫ
  /*
  char a [100];
  char b [100];
  float c;
  int x, y;
  char w [100];
  printf("Кто сегодня будет играть?\n");
  scanf("%s - %s", a, b);
  printf("Во сколько?\n");
  scanf("%f", &c);
  printf("Как сыграли\n");
  scanf("%d : %d", &x, &y);
  printf("Кто забил?\n");
  scanf("%s", w);
  */

  // Тут примеры до 7ой главы включительно
  /*
  int a = A;
  float b = DROB;
  char c = 'j';
  char x [25];
  strcpy(x, ORGAN);
  printf("%d\t%.1f\t%c\t%s\n", a, b, c, x);
  */

  return 0;
}