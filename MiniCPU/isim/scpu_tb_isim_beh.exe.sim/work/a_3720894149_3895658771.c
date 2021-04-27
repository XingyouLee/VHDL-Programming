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
static const char *ng0 = "C:/Users/XingyouLee/OneDrive/Program/VHDL/MiniCPU/dmem.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_3499444699;

unsigned char ieee_p_3620187407_sub_2546382208_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );
unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);


static void work_a_3720894149_3895658771_p_0(char *t0)
{
    char t29[16];
    char t31[16];
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t30;

LAB0:    xsi_set_current_line(35, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t3 = (t0 + 6624U);
    t5 = (t0 + 2408U);
    t6 = *((char **)t5);
    t7 = *((int *)t6);
    t8 = (t7 + 1);
    t9 = (t8 * 4);
    t10 = (t9 - 4);
    t11 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t4, t3, t10);
    if (t11 == 1)
        goto LAB8;

LAB9:    t5 = (t0 + 1352U);
    t12 = *((char **)t5);
    t5 = (t0 + 6624U);
    t13 = (t0 + 2288U);
    t14 = *((char **)t13);
    t15 = *((int *)t14);
    t16 = (t15 * 4);
    t17 = ieee_p_3620187407_sub_2546382208_3965413181(IEEE_P_3620187407, t12, t5, t16);
    t2 = t17;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t26 = (31 - 1);
    t27 = (t26 * 1U);
    t28 = (0 + t27);
    t3 = (t4 + t28);
    t5 = (t29 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 1;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t7 = (0 - 1);
    t30 = (t7 * -1);
    t30 = (t30 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t30;
    t6 = (t0 + 531100);
    t13 = (t31 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 1;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t8 = (1 - 0);
    t30 = (t8 * 1);
    t30 = (t30 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t30;
    t2 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t3, t29, t6, t31);
    if (t2 == 1)
        goto LAB19;

LAB20:    t1 = (unsigned char)0;

LAB21:    if (t1 != 0)
        goto LAB16;

LAB18:
LAB17:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t26 = (31 - 31);
    t27 = (t26 * 1U);
    t28 = (0 + t27);
    t3 = (t4 + t28);
    t5 = (t29 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 31;
    t6 = (t5 + 4U);
    *((int *)t6) = 2;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t7 = (2 - 31);
    t30 = (t7 * -1);
    t30 = (t30 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t30;
    t8 = ieee_std_logic_arith_conv_integer_unsigned(IEEE_P_3499444699, t3, t29);
    t6 = (t0 + 2648U);
    t12 = *((char **)t6);
    t6 = (t12 + 0);
    *((int *)t6) = t8;
    xsi_set_current_line(48, ng0);
    t3 = (t0 + 992U);
    t2 = xsi_signal_has_event(t3);
    if (t2 == 1)
        goto LAB30;

LAB31:    t1 = (unsigned char)0;

LAB32:    if (t1 != 0)
        goto LAB27;

LAB29:
LAB28:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t1 = *((unsigned char *)t4);
    t2 = (t1 == (unsigned char)3);
    if (t2 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(60, ng0);
    t3 = xsi_get_transient_memory(32U);
    memset(t3, 0, 32U);
    t4 = t3;
    memset(t4, (unsigned char)4, 32U);
    t5 = (t0 + 4032);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t3, 32U);
    xsi_driver_first_trans_fast_port(t5);

LAB37:    t3 = (t0 + 3952);
    *((int *)t3) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(38, ng0);
    if ((unsigned char)0 == 0)
        goto LAB14;

LAB15:    goto LAB3;

LAB5:    t13 = (t0 + 1832U);
    t19 = *((char **)t13);
    t20 = *((unsigned char *)t19);
    t21 = (t20 == (unsigned char)3);
    if (t21 == 1)
        goto LAB11;

LAB12:    t13 = (t0 + 1992U);
    t22 = *((char **)t13);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)3);
    t18 = t24;

LAB13:    t1 = t18;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t18 = (unsigned char)1;
    goto LAB13;

LAB14:    t13 = (t0 + 531080);
    xsi_report(t13, 19U, (unsigned char)3);
    goto LAB15;

LAB16:    xsi_set_current_line(43, ng0);
    if ((unsigned char)0 == 0)
        goto LAB25;

LAB26:    goto LAB17;

LAB19:    t14 = (t0 + 1832U);
    t19 = *((char **)t14);
    t17 = *((unsigned char *)t19);
    t18 = (t17 == (unsigned char)3);
    if (t18 == 1)
        goto LAB22;

LAB23:    t14 = (t0 + 1992U);
    t22 = *((char **)t14);
    t20 = *((unsigned char *)t22);
    t21 = (t20 == (unsigned char)3);
    t11 = t21;

LAB24:    t1 = t11;
    goto LAB21;

LAB22:    t11 = (unsigned char)1;
    goto LAB24;

LAB25:    t14 = (t0 + 531102);
    xsi_report(t14, 19U, (unsigned char)3);
    goto LAB26;

LAB27:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1992U);
    t6 = *((char **)t4);
    t18 = *((unsigned char *)t6);
    t20 = (t18 == (unsigned char)3);
    if (t20 != 0)
        goto LAB33;

LAB35:
LAB34:    goto LAB28;

LAB30:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t11 = *((unsigned char *)t5);
    t17 = (t11 == (unsigned char)3);
    t1 = t17;
    goto LAB32;

LAB33:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1512U);
    t12 = *((char **)t4);
    t4 = (t0 + 2528U);
    t13 = *((char **)t4);
    t4 = (t0 + 2648U);
    t14 = *((char **)t4);
    t7 = *((int *)t14);
    t8 = (t7 - 0);
    t26 = (t8 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t7);
    t27 = (32U * t26);
    t28 = (0 + t27);
    t4 = (t13 + t28);
    memcpy(t4, t12, 32U);
    goto LAB34;

LAB36:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 2528U);
    t5 = *((char **)t3);
    t3 = (t0 + 2648U);
    t6 = *((char **)t3);
    t7 = *((int *)t6);
    t8 = (t7 - 0);
    t26 = (t8 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t7);
    t27 = (32U * t26);
    t28 = (0 + t27);
    t3 = (t5 + t28);
    t12 = (t0 + 4032);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t19 = (t14 + 56U);
    t22 = *((char **)t19);
    memcpy(t22, t3, 32U);
    xsi_driver_first_trans_fast_port(t12);
    goto LAB37;

}


void ieee_p_2592010699_sub_3130575329_503743352();

extern void work_a_3720894149_3895658771_init()
{
	static char *pe[] = {(void *)work_a_3720894149_3895658771_p_0};
	xsi_register_didat("work_a_3720894149_3895658771", "isim/scpu_tb_isim_beh.exe.sim/work/a_3720894149_3895658771.didat");
	xsi_register_executes(pe);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 5);
}
