/* 
 * File:   main.c
 * Author: L03038590
 *
 * Created on 9 de febrero de 2022, 08:38 PM
 */

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>
#include<avr/interrupt.h>
int time_count;
int bandera = 0;
int nota = 38;
int flag = 0;

ISR (TIMER0_OVF_vect) {
TCNT0 = 56; /*set for 100 us timeout*/
TIFR0 = 1<<TOV0;
++time_count; /*increment .5 second counter*/
if (time_count == nota && bandera == 0)
{
PORTB = 0x01; /*complement port bit to blink LED*/
time_count = 0; /*reset time counter for next .5 second*/
bandera = 1;
}
if (time_count == nota && bandera == 1)
{
PORTB = 0x00; /*complement port bit to blink LED*/
time_count = 0; /*reset time counter for next .5 second*/
bandera = 0;
}
}
/*
 * 
 */
int main(void) {
    DDRC = 0x00;
    DDRB = 0xFF;
    TCCR0B = 0x01;
TCNT0=0x00;
TIFR0 = 1<<TOV0;
TIMSK0 = 1<<TOIE0;

    while(1){
        while(flag == 1){
            if ( (PINC & (1 << PINC5)) == (1 << PINC5) ) {
                flag =0;
                //Star wars tema
                nota = 34;  //RE
                sei();
                _delay_ms(500);

                nota = 0;  //silencio
                sei();
                _delay_ms(40);

                nota = 34;  //RE
                sei();
                _delay_ms(500);

                nota = 0;  //silencio
                sei();
                _delay_ms(40);

                nota = 34;  //RE
                sei();
                _delay_ms(500);

                nota = 25;  //SOL
                sei();
                _delay_ms(800);

                nota = 17;  //RE
                sei();
                _delay_ms(600);
    
                nota = 19;  //DO
                sei();
                _delay_ms(500);

                nota = 20;  //SI
                sei();
                _delay_ms(600);

                nota = 22;  //LA
                sei();
                _delay_ms(500);

                nota = 12;  //SOL
                sei();
                _delay_ms(800);

                nota = 34;  //RE
                sei();
                _delay_ms(600);

                nota = 19;  //DO
                sei();
                _delay_ms(500);

                nota = 20;  //SI
                sei();
                _delay_ms(600);

                nota = 22;  //LA
                sei();
                _delay_ms(500);

                nota = 12;  //SOL
                sei();
                _delay_ms(800);

                nota = 34;  //RE
                sei();
                _delay_ms(600);

                nota = 19;  //DO
                sei();
                _delay_ms(500);

                nota = 20;  //SI
                sei();
                _delay_ms(700);

                nota = 19;  //DO
                sei();
                _delay_ms(600);

                nota = 22;  //LA
                sei();
                _delay_ms(800);

                nota = 0; 
                sei();
                _delay_ms(900);

                nota = 0; 
                sei();
                _delay_ms(900);
            }
            if ( (PINC & (1 << PINC4)) == (1 << PINC4) ) {
                flag = 0;
                //Marcha imperial
                nota = 22; //SOL
                sei();
                _delay_ms(700);

                nota = 0;  //silencio
                sei();
                _delay_ms(40);

                nota = 22; //SOL
                sei();
                _delay_ms(700);

                nota = 0;  //silencio
                sei();
                _delay_ms(40);

                nota = 22; //SOL
                sei();
                _delay_ms(700);

                nota = 32; //RE'
                sei();
                _delay_ms(600);

                nota = 24; //SI'
                sei();
                _delay_ms(300);

                nota = 22; //SOL
                sei();
                _delay_ms(900);

                nota = 32; //RE'
                sei();
                _delay_ms(500);

                nota = 24; //SI'
                sei();
                _delay_ms(300);

                nota = 22; //SOL
                sei();
                _delay_ms(900);

                nota = 18; //RE
                sei();
                _delay_ms(700);

                nota = 0;  //silencio
                sei();
                _delay_ms(40);

                nota = 18; //RE
                sei();
                _delay_ms(700);

                nota = 0;  //silencio
                sei();
                _delay_ms(40);

                nota = 18; //RE
                sei();
                _delay_ms(700);

                nota = 16; //RE
                sei();
                _delay_ms(500);

                nota = 24; //SI'
                sei();
                _delay_ms(400);

                nota = 27; //MI'
                sei();
                _delay_ms(500);

                nota = 32; //RE'
                sei();
                _delay_ms(500);

                nota = 24; //SI'
                sei();
                _delay_ms(400);

                nota = 22; //SOL
                sei();
                _delay_ms(700);

                nota = 13; //SOL
                sei();
                _delay_ms(700);

                nota = 22; //SOL
                sei();
                _delay_ms(700);

                nota = 0;  //silencio
                sei();
                _delay_ms(40);

                nota = 22; //SOL
                sei();
                _delay_ms(400);

                nota = 13; //SOL
                sei();
                _delay_ms(700);

                nota = 13; //FA'
                sei();
                _delay_ms(500);

                nota = 14; //FA
                sei();
                _delay_ms(700);

                nota = 15; //MI
                sei();
                _delay_ms(700);

                nota = 16; //RE'
                sei();
                _delay_ms(300);

                nota = 15; //MI
                sei();
                _delay_ms(700);

                nota = 27; // AB
                sei();
                _delay_ms(500);

                nota = 18; //DB
                sei();
                _delay_ms(500);

                nota = 19; //DO C5
                sei();
                _delay_ms(700);

                nota = 20; //SI
                sei();
                _delay_ms(500);

                nota = 21; //Bb
                sei();
                _delay_ms(400);

                nota = 22; //LA
                sei();
                _delay_ms(500);

                nota = 21; //Bb
                sei();
                _delay_ms(400);

                nota = 32; //RE'
                sei();
                _delay_ms(500);

                nota = 27; //MI'
                sei();
                _delay_ms(600);

                nota = 32; //RE'
                sei();
                _delay_ms(500);

                nota = 27; //MI'
                sei();
                _delay_ms(300);

                nota = 21; //SI'
                sei();
                _delay_ms(700);

                nota = 25; //SOL
                sei();
                _delay_ms(600);

                nota = 21; //SI'
                sei();
                _delay_ms(300);

                nota = 17; //RE
                sei();
                _delay_ms(700);

                nota = 0; 
                sei();
                _delay_ms(900);

                nota = 0; 
                sei();
                _delay_ms(900);

            }
            if ( (PINC & (1 << PINC3)) == (1 << PINC3) ) {
                flag = 0;
                //Pantera rosa
                nota = 36;  //DO
                sei();
                _delay_ms(500);

                nota = 34;  //RE
                sei();
                _delay_ms(900);

                nota = 32;  //RE'
                sei();
                _delay_ms(500);

                nota = 27;  //FA'
                sei();
                _delay_ms(900);

                nota = 25;  //SOL
                sei();
                _delay_ms(800);

                nota = 32;  //RE'
                sei();
                _delay_ms(500);

                nota = 30;  //MI
                sei();
                _delay_ms(700);

                nota = 27;  //FA'
                sei();
                _delay_ms(500);

                nota = 25;  //SOL
                sei();
                _delay_ms(800);

                nota = 19;  //DO
                sei();
                _delay_ms(600);

                nota = 20;  //SI
                sei();
                _delay_ms(800);

                nota = 30;  //MI
                sei();
                _delay_ms(500);

                nota = 25;  //SOL
                sei();
                _delay_ms(800);

                nota = 20;  //SI
                sei();
                _delay_ms(600);

                nota = 21;  //SI'
                sei();
                _delay_ms(1000);

                nota = 22;  //LA
                sei();
                _delay_ms(700);

                nota = 25;  //SOL
                sei();
                _delay_ms(600);

                nota = 30;  //MI
                sei();
                _delay_ms(600);

                nota = 34;  //RE
                sei();
                _delay_ms(500);

                nota = 30;  //MI
                sei();
                _delay_ms(1000);
            }
        }
        if ( (PINC & (1 << PINC5)) == (1 << PINC5) ) {
            flag =1;
        }
        if ( (PINC & (1 << PINC4)) == (1 << PINC4) ) {
            flag =1;
        }
        if ( (PINC & (1 << PINC3)) == (1 << PINC3) ) {
            flag =1;
        }
    }   
}

