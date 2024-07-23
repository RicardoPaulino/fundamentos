
using generics;

public class Programa
{
    public static void Main()
    {
        // Usando uma classe genérica com um int
        Genericos<int> intObj = new Genericos<int>(10);
        Console.WriteLine(intObj.GetDado());

        // Usando uma classe genérica com um string
        Genericos<string> stringObj = new Genericos<string>("Olá, Generics!");
        Console.WriteLine(stringObj.GetDado());
    }
}
