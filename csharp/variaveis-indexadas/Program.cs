using System;

int[] valores = {10,23,36,5,9,4,6,15,30,1};

foreach(int num in valores){
    Console.Write(num + " ");    
}
Console.WriteLine("");

Console.WriteLine("Array ordenado ");

Array.Sort(valores);

foreach(int num in valores){
    Console.Write(num + " ");    
}
Console.WriteLine("");
