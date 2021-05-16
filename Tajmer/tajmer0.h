/**
 * @file timer0.h
 * @brief Datoteka koja se koristi za upravljanje tajmerom 0
 * @author Dejan Micic
 * @date 16-5-2021
 * @version 1.0
 */
#ifndef TAJMER0_H_
#define TAJMER0_H_

#include <avr/interrupt.h>

/**
 * timer0DelayMs - Funkcija koja implementira pauzu u broju milisekundi koji je prosledjen
 * kao parametar
 * @param delay_length - ulaz tipa unsigned long - Duzina pauze u milisekundama
 * @return Povratna vrednost je tipa unsigned long i ima vrednost broja milisekundi
 * proteklih od pocetka aplikacije do trenutka izlaska iz funkcije
 */
unsigned long timer0DelayMs(unsigned long delay_length);

/**
 * timer0InteruptInit - Funkcija koja inicijalizuje timer 0 tako da pravi prekide
 * svake milisekunde
 * @return Nema povratnu vrednost
 */
void timer0InteruptInit();

#endif /* TAJMER0_H_ */
