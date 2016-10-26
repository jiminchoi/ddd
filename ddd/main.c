//
//  main.c
//  ddd
//
//  Created by ChoiJimin on 2016/08/03.
//  Copyright © 2016年 ChoiJimin. All rights reserved.
// シンプルな入力貰った時間を表示プログラム
#include<stdio.h>

int main( int argc, char **argv ){
 int hour, minute;
        
        printf(" 時間と分を入力してください。\n");
        scanf(" %d", &hour);
        scanf(" %d", &minute);
        
    while( hour >= 24 ){
        hour = hour - 24 ;
        printf("時刻を  %d : %d に変えました。\n", hour , minute );       
    }

    while( minute >= 60 ){
        minute =  minute - 60 ; 
        hour = hour + 1 ;
        printf("時刻を  %d : %d に変えました。\n", hour , minute );       
    }

    printf("現在の時刻は %d : %d です。\n", hour , minute );

 return( 0 );
}

