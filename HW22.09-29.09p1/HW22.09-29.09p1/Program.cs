
#region FirstTask
//Задание 1
//Пользователь вводит с клавиатуры число в диапазоне от 1 до 100. Если число кратно 3 (делится на 3 без
//остатка) нужно вывести слово Fizz. Если число кратно 5
//нужно вывести слово Buzz. Если число кратно 3 и 5 нужно
//вывести Fizz Buzz. Если число не кратно не 3 и 5 нужно
//вывести само число.
//Если пользователь ввел значение не в диапазоне от 1
//до 100 требуется вывести сообщение об ошибке.


//Console.WriteLine("Enter your number from 1 to 100");
//int number = Convert.ToInt32(Console.ReadLine());
//if (0 >= number || number >= 100) Console.WriteLine($"Number ({number}) doesn't fit");
//else if (number % 3 == 0 || number % 5 == 0)
//{
//    if (number % 3 == 0) Console.WriteLine("Fizz");
//    if (number % 5 == 0) Console.WriteLine("Buzz");
//}
//else Console.WriteLine($"Number {number} is not divisible by 3 and 5");

#endregion


#region SecondTask
//Пользователь вводит с клавиатуры два числа. Первое
//число — это значение, второе число процент, который
//необходимо посчитать. Например, мы ввели с клавиатуры
//90 и 10. Требуется вывести на экран 10 процентов от 90.
//Результат: 9.
//Console.WriteLine("Enter your number");

//float number = Convert.ToInt32(Console.ReadLine());

//Console.WriteLine("Enter your procent from number");

//float percent = Convert.ToInt32(Console.ReadLine());

//Console.WriteLine($"Result: {(number / 100) * percent}");
#endregion


#region ThirdTask
//Пользователь вводит с клавиатуры четыре цифры.
////Необходимо создать число, содержащее эти цифры. Например, если с клавиатуры введено 1, 5, 7, 8 тогда нужно
////сформировать число 1578
//Console.WriteLine("Enter your first digit");
//int firstdigit  = Convert.ToInt32(Console.ReadLine()) * 1000;
//Console.WriteLine("Enter your second digit");
//int seconddigit = Convert.ToInt32(Console.ReadLine()) * 100;
//Console.WriteLine("Enter your third digit");
//int thirddigit = Convert.ToInt32(Console.ReadLine()) * 10;
//Console.WriteLine("Enter your fourth digit");
//int fourthdigit = Convert.ToInt32(Console.ReadLine());
//Console.WriteLine($"Result: {firstdigit + seconddigit + thirddigit + fourthdigit}");
#endregion

#region FourthTask
Console.WriteLine("Enter a six-digit number");
int sixNum = Convert.ToInt32(Console.ReadLine());
if (sixNum < 100000) Console.WriteLine("Error");
else
{
    string tmp = sixNum.ToString();
    char[] charArray = tmp.ToCharArray();
    Console.WriteLine("Select the index of the first number");
    int firstNum = Convert.ToInt32(Console.ReadLine()) - 1;
    Console.WriteLine("Select the index of the second number");
    int secondNum = Convert.ToInt32(Console.ReadLine()) - 1;
    char temp = charArray[firstNum];
    charArray[firstNum] = charArray[secondNum];
    charArray[secondNum] = temp;
    tmp = new string(charArray);
    Console.WriteLine(tmp);
}
#endregion


#region FivethTask
//Console.WriteLine("Enter dd.mm.yyyy:");
//string input = Console.ReadLine();
//if (DateTime.TryParseExact(input, "dd.MM.yyyy", null, System.Globalization.DateTimeStyles.None, out DateTime date))
//{
//    string dayOfWeek = date.DayOfWeek.ToString();
//    Console.WriteLine($"Day of week: {dayOfWeek}");
//    int season = date.Month;
//    if (season == 12 || season == 1 || season == 2) Console.WriteLine("Winter");
//    else if (season == 3 || season == 4 || season == 5) Console.WriteLine("Spring");
//    else if (season == 6 || season == 7 || season == 8) Console.WriteLine("Summer");
//    else Console.WriteLine("Autumn");
//}
//else Console.WriteLine("Incorrect data");

#endregion


#region SixthTask
//Console.WriteLine("1.Celsius to Fahrenheit");
//Console.WriteLine("2.Fahrenheit to Celsius ");
//int turn = Convert.ToInt32(Console.ReadLine());
//Console.WriteLine("Enter your number to transfer");
//float number = Convert.ToInt32(Console.ReadLine());
//if (turn != 1 && turn != 2) Console.WriteLine("Error");
//else if (turn == 1) Console.WriteLine($"{number * 1.8 + 32} °F");
//else if (turn == 2) Console.WriteLine($"{(number - 32) / 1.8} °C");


#endregion

#region SeventhTask
Console.WriteLine("Enter range start");
int firstNum = Convert.ToInt32(Console.ReadLine());
Console.WriteLine("Enter range end");
int secondNum = Convert.ToInt32(Console.ReadLine());
if (firstNum > secondNum)
    Console.WriteLine("The first number must be less than the second");
for (int i = firstNum; i != secondNum + 1; i++)
    if (i % 2 == 0) Console.WriteLine(i);
#endregion