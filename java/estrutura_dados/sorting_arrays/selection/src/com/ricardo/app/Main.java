package com.ricardo.app;

public class Main{
    public static void main(String[] args){
        System.out.println("helo java");
    }

    static void Selection_Sorting(int numbers[], int size){
        int menor, aux;

        for(int i = 0; i < size - 1; i++){
            menor = i;
            for(int j = i + 1; j < size; j++){
                if(numbers[i] < numbers[menor]){
                    menor = j;
                }
            }
        }
    }
}