/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/XingyouLee/OneDrive/Program/VHDL/divider/divider.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3926497698_3212880686_p_0(char *t0)
{
    char t7[16];
    char t8[16];
    char t27[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 1808U);
    t3 = *((char **)t1);
    t4 = (63 - 31);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t3 + t6);
    memcpy(t1, t2, 32U);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t1 = (t0 + 5376U);
    t3 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t8, t2, t1, (unsigned char)0);
    t9 = (t8 + 12U);
    t4 = *((unsigned int *)t9);
    t4 = (t4 * 1U);
    t10 = xsi_vhdl_bitvec_sll(t10, t3, t4, 1);
    t11 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t7, t10, t8);
    t12 = (t0 + 1808U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    t14 = (t7 + 12U);
    t5 = *((unsigned int *)t14);
    t5 = (t5 * 1U);
    memcpy(t12, t11, t5);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 5608);
    *((int *)t1) = 0;
    t2 = (t0 + 5612);
    *((int *)t2) = 31;
    t15 = 0;
    t16 = 31;

LAB2:    if (t15 <= t16)
        goto LAB3;

LAB5:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t4 = (63 - 63);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t3 = (t27 + 0U);
    t9 = (t3 + 0U);
    *((int *)t9) = 63;
    t9 = (t3 + 4U);
    *((int *)t9) = 31;
    t9 = (t3 + 8U);
    *((int *)t9) = -1;
    t15 = (31 - 63);
    t18 = (t15 * -1);
    t18 = (t18 + 1);
    t9 = (t3 + 12U);
    *((unsigned int *)t9) = t18;
    t9 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t8, t1, t27, (unsigned char)0);
    t10 = (t8 + 12U);
    t18 = *((unsigned int *)t10);
    t18 = (t18 * 1U);
    t11 = xsi_vhdl_bitvec_srl(t11, t9, t18, 1);
    t12 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t7, t11, t8);
    t13 = (t0 + 1808U);
    t14 = *((char **)t13);
    t19 = (63 - 63);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t13 = (t14 + t21);
    t25 = (t7 + 12U);
    t22 = *((unsigned int *)t25);
    t22 = (t22 * 1U);
    memcpy(t13, t12, t22);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t4 = (63 - 31);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t3 = (t0 + 3312);
    t9 = (t3 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t4 = (63 - 63);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t3 = (t0 + 3376);
    t9 = (t3 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 32U);
    xsi_driver_first_trans_fast_port(t3);
    t1 = (t0 + 3232);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 1808U);
    t9 = *((char **)t3);
    t3 = (t0 + 1928U);
    t10 = *((char **)t3);
    t3 = (t10 + 0);
    memcpy(t3, t9, 64U);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t4 = (63 - 63);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t3 = (t8 + 0U);
    t9 = (t3 + 0U);
    *((int *)t9) = 63;
    t9 = (t3 + 4U);
    *((int *)t9) = 32;
    t9 = (t3 + 8U);
    *((int *)t9) = -1;
    t17 = (32 - 63);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t9 = (t3 + 12U);
    *((unsigned int *)t9) = t18;
    t9 = (t0 + 1032U);
    t10 = *((char **)t9);
    t9 = (t0 + 5312U);
    t11 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t7, t1, t8, t10, t9);
    t12 = (t0 + 1808U);
    t13 = *((char **)t12);
    t18 = (63 - 63);
    t19 = (t18 * 1U);
    t20 = (0 + t19);
    t12 = (t13 + t20);
    t14 = (t7 + 12U);
    t21 = *((unsigned int *)t14);
    t22 = (1U * t21);
    memcpy(t12, t11, t22);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t17 = (63 - 63);
    t4 = (t17 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t23 = *((unsigned char *)t1);
    t24 = (t23 == (unsigned char)2);
    if (t24 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1928U);
    t2 = *((char **)t1);
    t1 = (t0 + 1808U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    memcpy(t1, t2, 64U);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t1 = (t0 + 5376U);
    t3 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t8, t2, t1, (unsigned char)0);
    t9 = (t8 + 12U);
    t4 = *((unsigned int *)t9);
    t4 = (t4 * 1U);
    t10 = xsi_vhdl_bitvec_sll(t10, t3, t4, 1);
    t11 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t7, t10, t8);
    t12 = (t0 + 1808U);
    t13 = *((char **)t12);
    t12 = (t13 + 0);
    t14 = (t7 + 12U);
    t5 = *((unsigned int *)t14);
    t5 = (t5 * 1U);
    memcpy(t12, t11, t5);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t17 = (0 - 63);
    t4 = (t17 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    *((unsigned char *)t1) = (unsigned char)2;

LAB7:
LAB4:    t1 = (t0 + 5608);
    t15 = *((int *)t1);
    t2 = (t0 + 5612);
    t16 = *((int *)t2);
    if (t15 == t16)
        goto LAB5;

LAB9:    t17 = (t15 + 1);
    t15 = t17;
    t3 = (t0 + 5608);
    *((int *)t3) = t15;
    goto LAB2;

LAB6:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1808U);
    t9 = *((char **)t3);
    t3 = (t0 + 5376U);
    t10 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t8, t9, t3, (unsigned char)0);
    t11 = (t8 + 12U);
    t18 = *((unsigned int *)t11);
    t18 = (t18 * 1U);
    t12 = xsi_vhdl_bitvec_sll(t12, t10, t18, 1);
    t13 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t7, t12, t8);
    t14 = (t0 + 1808U);
    t25 = *((char **)t14);
    t14 = (t25 + 0);
    t26 = (t7 + 12U);
    t19 = *((unsigned int *)t26);
    t19 = (t19 * 1U);
    memcpy(t14, t13, t19);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1808U);
    t2 = *((char **)t1);
    t17 = (0 - 63);
    t4 = (t17 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    *((unsigned char *)t1) = (unsigned char)3;
    goto LAB7;

}


extern void work_a_3926497698_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3926497698_3212880686_p_0};
	xsi_register_didat("work_a_3926497698_3212880686", "isim/asdfcad_isim_beh.exe.sim/work/a_3926497698_3212880686.didat");
	xsi_register_executes(pe);
}
