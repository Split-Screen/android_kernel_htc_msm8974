/*
 * based on work from:
 *	Chad Froebel <chadfroebel@gmail.com> &
 *	Jean-Pierre Rasquin <yank555.lu@gmail.com>
 * for backwards compatibility
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 */

#ifndef _LINUX_FASTCHG_H
#define _LINUX_FASTCHG_H

extern int force_fast_charge;
extern int fast_charge_level;

#define FAST_CHARGE_DISABLED		0	/* default */
#define FAST_CHARGE_FORCE_AC		1
#define FAST_CHARGE_FORCE_CUSTOM_MA	2

#define FAST_CHARGE_500		500
#define FAST_CHARGE_700		700
#define FAST_CHARGE_900		900
#define FAST_CHARGE_1100	1100
#define FAST_CHARGE_1300	1300
#define FAST_CHARGE_1500	1500
#define FAST_CHARGE_1700	1700
#ifdef CONFIG_ENABLE_21_AMP
#define FAST_CHARGE_1900	1900
#define FAST_CHARGE_2100	2100
#endif

#ifdef CONFIG_ENABLE_21_AMP
#define FAST_CHARGE_LEVELS	"500 700 900 1100 1300 1500 1700 1900 2100"
#else
#define FAST_CHARGE_LEVELS	"500 700 900 1100 1300 1500 1700"
#endif

#endif
