using System;
using BenchmarkDotNet.Attributes;
using BenchmarkDotNet.Running;

public class Program
{
    static void Main(string[] args)
    {
        // Run benchmark
        var summary = BenchmarkRunner.Run<SortBenchmark>();
    }
}

public class SortBenchmark
{
    private int[] numbers = { 90, 69, 88, 5, 63 };

    [Benchmark]
    public void BenchmarkSelectionSort()
    {
        // Create a copy of the array to avoid sorting already sorted array in repeated runs.
        int[] numbersCopy = (int[])numbers.Clone();
        SelectionSort(numbersCopy, numbersCopy.Length);
    }

    public void SelectionSort(int[] numbers, int tamanho)
    {
        int menor, troca;
        for (int i = 0; i < tamanho - 1; i++)
        {
            menor = i;
            for (int j = i + 1; j < tamanho; j++)
            {
                if (numbers[j] < numbers[menor])
                {
                    menor = j;
                }
            }
            if (i != menor)
            {
                troca = numbers[i];
                numbers[i] = numbers[menor];
                numbers[menor] = troca;
            }
        }
    }
}
