/**
 * @file Arrays.h
 * @brief biblioteka koja se koristi za odredivanje clanova aritmetickog niza i sume
 * @author Dejan Micic
 * @date 16-05-2021
 * @version 1.0
 */

#ifndef ARRAYS_H_
#define ARRAYS_H_

#include <stdint.h>


/**
 * Element - Funkcija koja trazi vrednost aritmetickog niza
 * @param first_element - ulaz tipa 16-stog bitnog intidzera - prvi element niza
 * @param difference -ulaz tipa 16-stog bitnog intidzera  - razlika izmedzu dva susedna elementa
 * @param value -ulaz tipa 16-stog bitnog intidzera - broj clana elementa koji se trazi vrednost
 * @return vraca vrednost clana kojeg trazimo
 */
int16_t Element(int16_t first_element, int16_t difference, int16_t n);


/**
 * Sum - Funkcija koja trazi suma niza
 * @param first_element - ulaz tipa 16-stog bitnog intidzera - prvi element niza
 * @param difference -ulaz tipa 16-stog bitnog intidzera  - razlika izmedzu dva susedna elementa
 * @param value -ulaz tipa 16-stog bitnog intidzera - broj clana elementa koji se trazi vrednost
 * @param mode - ulaz tipa char - nacin na koji se trazi suma
 * @return vraca vrednost clana kojeg trazimo
 */
int16_t Sum(int16_t first_element, int16_t difference, int16_t n,int8_t mode);


#endif /* ARRAYS_H_ */
