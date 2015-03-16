/*
 * main.c
 *
 *  Created on: 15 mar 2015
 *      Author: piwl
 */

#include <avr/io.h>
#include <util/delay.h>

int main (void) {


	DDRB |= (1<<PB1);

	while (1) {
		PORTB ^= (1<<PB1);
		_delay_ms(1000);
	}
}


