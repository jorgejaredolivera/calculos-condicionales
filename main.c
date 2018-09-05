/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: olivera
 *
 * Created on 1 de septiembre de 2018, 08:21 PM
 */

#include <stdio.h>


/*
 * 
 */
int main (){
    int n,cambio;
    scanf("%d",&n);
    if(n>=1){
    if (n%2==0){
        n = n/2;
        cambio = 1;
        if (n>=100){
        n = n/100;
        cambio = cambio+1;
        if(n%3==0){
            n = n-1;
            cambio = cambio+1;
        }
    }
    else{
        if(n>=10){
            n = n/10;
            cambio = cambio+1;
            if(n%3==0){
            n = n-1;
            cambio = cambio+1;
        }
        }
    }
    }
    else{
        n = n+1;
        cambio = 1;
         if (n>=100){
        n = n/100;
        cambio = cambio+1;
        if(n%3==0){
            n = n-1;
            cambio = cambio+1;
        }
    }
    else{
        if(n>=10){
            n = n/10;
            cambio = cambio+1;
            if(n%3==0){
            n = n-1;
            cambio = cambio+1;
        }
        }
    }
        
    }
   printf("%d  %d",n,cambio);
    }
    
    
        
    
    return 0;
}

