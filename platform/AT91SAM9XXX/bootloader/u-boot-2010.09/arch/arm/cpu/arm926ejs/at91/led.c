/*
 * (C) Copyright 2007-2008
 * Stelian Pop <stelian.pop@leadtechdesign.com>
 * Lead Tech Design <www.leadtechdesign.com>
 *
 * See file CREDITS for list of people who contributed to this
 * project.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 */

#include <common.h>
#include <asm/arch/at91_pmc.h>
#include <asm/arch/at91_pio.h>
#include <asm/arch/gpio.h>
#include <asm/arch/io.h>

#if 0 /*Comment by guowenxue*/
#ifdef CONFIG_RED_LED
void red_LED_on(void)
{
	at91_set_gpio_value(CONFIG_RED_LED, 1);
}

void red_LED_off(void)
{
	at91_set_gpio_value(CONFIG_RED_LED, 0);
}
#endif

#ifdef CONFIG_GREEN_LED
void green_LED_on(void)
{
	at91_set_gpio_value(CONFIG_GREEN_LED, 0);
}

void green_LED_off(void)
{
	at91_set_gpio_value(CONFIG_GREEN_LED, 1);
}
#endif

#ifdef CONFIG_YELLOW_LED
void yellow_LED_on(void)
{
	at91_set_gpio_value(CONFIG_YELLOW_LED, 0);
}

void yellow_LED_off(void)
{
	at91_set_gpio_value(CONFIG_YELLOW_LED, 1);
}
#endif
#endif /*Comment by guowenxue*/