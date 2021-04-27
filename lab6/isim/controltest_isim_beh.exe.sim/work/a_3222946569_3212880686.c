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
static const char *ng0 = "C:/Users/XingyouLee/OneDrive/Program/VHDL/multi/control.vhd";



static void work_a_3222946569_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    unsigned int t25;

LAB0:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 9228);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB9:    t5 = (t0 + 9231);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB10:    t8 = (t0 + 9234);
    t10 = xsi_mem_cmp(t8, t2, 3U);
    if (t10 == 1)
        goto LAB5;

LAB11:    t11 = (t0 + 9237);
    t13 = xsi_mem_cmp(t11, t2, 3U);
    if (t13 == 1)
        goto LAB6;

LAB12:    t14 = (t0 + 9240);
    t16 = xsi_mem_cmp(t14, t2, 3U);
    if (t16 == 1)
        goto LAB7;

LAB13:
LAB8:    xsi_set_current_line(147, ng0);

LAB2:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 6120);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 3U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 5320);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(65, ng0);
    t17 = (t0 + 9243);
    t19 = (t0 + 5416);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t17, 3U);
    xsi_driver_first_trans_fast(t19);
    goto LAB2;

LAB4:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 9246);
    t3 = (t0 + 5416);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB5:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9249);
    t24 = 1;
    if (6U == 6U)
        goto LAB18;

LAB19:    t24 = 0;

LAB20:    if (t24 != 0)
        goto LAB15;

LAB17:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9307);
    t24 = 1;
    if (6U == 6U)
        goto LAB67;

LAB68:    t24 = 0;

LAB69:    if (t24 != 0)
        goto LAB65;

LAB66:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9319);
    t24 = 1;
    if (6U == 6U)
        goto LAB75;

LAB76:    t24 = 0;

LAB77:    if (t24 != 0)
        goto LAB73;

LAB74:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9331);
    t24 = 1;
    if (6U == 6U)
        goto LAB83;

LAB84:    t24 = 0;

LAB85:    if (t24 != 0)
        goto LAB81;

LAB82:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9343);
    t24 = 1;
    if (6U == 6U)
        goto LAB91;

LAB92:    t24 = 0;

LAB93:    if (t24 != 0)
        goto LAB89;

LAB90:
LAB16:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 9355);
    t3 = (t0 + 5416);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB6:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9358);
    t24 = 1;
    if (6U == 6U)
        goto LAB100;

LAB101:    t24 = 0;

LAB102:    if (t24 != 0)
        goto LAB97;

LAB99:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9364);
    t24 = 1;
    if (6U == 6U)
        goto LAB108;

LAB109:    t24 = 0;

LAB110:    if (t24 != 0)
        goto LAB106;

LAB107:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9370);
    t24 = 1;
    if (6U == 6U)
        goto LAB116;

LAB117:    t24 = 0;

LAB118:    if (t24 != 0)
        goto LAB114;

LAB115:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9376);
    t24 = 1;
    if (6U == 6U)
        goto LAB124;

LAB125:    t24 = 0;

LAB126:    if (t24 != 0)
        goto LAB122;

LAB123:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9382);
    t24 = 1;
    if (6U == 6U)
        goto LAB132;

LAB133:    t24 = 0;

LAB134:    if (t24 != 0)
        goto LAB130;

LAB131:
LAB98:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 9388);
    t3 = (t0 + 5416);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB7:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9391);
    t24 = 1;
    if (6U == 6U)
        goto LAB141;

LAB142:    t24 = 0;

LAB143:    if (t24 != 0)
        goto LAB138;

LAB140:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9397);
    t24 = 1;
    if (6U == 6U)
        goto LAB149;

LAB150:    t24 = 0;

LAB151:    if (t24 != 0)
        goto LAB147;

LAB148:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9403);
    t24 = 1;
    if (6U == 6U)
        goto LAB157;

LAB158:    t24 = 0;

LAB159:    if (t24 != 0)
        goto LAB155;

LAB156:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9409);
    t24 = 1;
    if (6U == 6U)
        goto LAB165;

LAB166:    t24 = 0;

LAB167:    if (t24 != 0)
        goto LAB163;

LAB164:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 9415);
    t24 = 1;
    if (6U == 6U)
        goto LAB173;

LAB174:    t24 = 0;

LAB175:    if (t24 != 0)
        goto LAB171;

LAB172:
LAB139:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 9421);
    t3 = (t0 + 5416);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB14:;
LAB15:    xsi_set_current_line(70, ng0);
    t8 = (t0 + 5480);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 9255);
    t3 = (t0 + 5608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 9257);
    t24 = 1;
    if (6U == 6U)
        goto LAB27;

LAB28:    t24 = 0;

LAB29:    if (t24 != 0)
        goto LAB24;

LAB26:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 9267);
    t24 = 1;
    if (6U == 6U)
        goto LAB35;

LAB36:    t24 = 0;

LAB37:    if (t24 != 0)
        goto LAB33;

LAB34:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 9277);
    t24 = 1;
    if (6U == 6U)
        goto LAB43;

LAB44:    t24 = 0;

LAB45:    if (t24 != 0)
        goto LAB41;

LAB42:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 9287);
    t24 = 1;
    if (6U == 6U)
        goto LAB51;

LAB52:    t24 = 0;

LAB53:    if (t24 != 0)
        goto LAB49;

LAB50:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 9297);
    t24 = 1;
    if (6U == 6U)
        goto LAB59;

LAB60:    t24 = 0;

LAB61:    if (t24 != 0)
        goto LAB57;

LAB58:
LAB25:    goto LAB16;

LAB18:    t25 = 0;

LAB21:    if (t25 < 6U)
        goto LAB22;
    else
        goto LAB20;

LAB22:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB19;

LAB23:    t25 = (t25 + 1);
    goto LAB21;

LAB24:    xsi_set_current_line(74, ng0);
    t8 = (t0 + 9263);
    t11 = (t0 + 5672);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 4U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB25;

LAB27:    t25 = 0;

LAB30:    if (t25 < 6U)
        goto LAB31;
    else
        goto LAB29;

LAB31:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB28;

LAB32:    t25 = (t25 + 1);
    goto LAB30;

LAB33:    xsi_set_current_line(76, ng0);
    t8 = (t0 + 9273);
    t11 = (t0 + 5672);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 4U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB25;

LAB35:    t25 = 0;

LAB38:    if (t25 < 6U)
        goto LAB39;
    else
        goto LAB37;

LAB39:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB36;

LAB40:    t25 = (t25 + 1);
    goto LAB38;

LAB41:    xsi_set_current_line(78, ng0);
    t8 = (t0 + 9283);
    t11 = (t0 + 5672);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 4U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB25;

LAB43:    t25 = 0;

LAB46:    if (t25 < 6U)
        goto LAB47;
    else
        goto LAB45;

LAB47:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB44;

LAB48:    t25 = (t25 + 1);
    goto LAB46;

LAB49:    xsi_set_current_line(80, ng0);
    t8 = (t0 + 9293);
    t11 = (t0 + 5672);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 4U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB25;

LAB51:    t25 = 0;

LAB54:    if (t25 < 6U)
        goto LAB55;
    else
        goto LAB53;

LAB55:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB52;

LAB56:    t25 = (t25 + 1);
    goto LAB54;

LAB57:    xsi_set_current_line(82, ng0);
    t8 = (t0 + 9303);
    t11 = (t0 + 5672);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 4U);
    xsi_driver_first_trans_fast_port(t11);
    goto LAB25;

LAB59:    t25 = 0;

LAB62:    if (t25 < 6U)
        goto LAB63;
    else
        goto LAB61;

LAB63:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB60;

LAB64:    t25 = (t25 + 1);
    goto LAB62;

LAB65:    xsi_set_current_line(85, ng0);
    t8 = (t0 + 5480);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 9313);
    t3 = (t0 + 5608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 9315);
    t3 = (t0 + 5672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB16;

LAB67:    t25 = 0;

LAB70:    if (t25 < 6U)
        goto LAB71;
    else
        goto LAB69;

LAB71:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB68;

LAB72:    t25 = (t25 + 1);
    goto LAB70;

LAB73:    xsi_set_current_line(90, ng0);
    t8 = (t0 + 5544);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 9325);
    t3 = (t0 + 5608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 9327);
    t3 = (t0 + 5672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB16;

LAB75:    t25 = 0;

LAB78:    if (t25 < 6U)
        goto LAB79;
    else
        goto LAB77;

LAB79:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB76;

LAB80:    t25 = (t25 + 1);
    goto LAB78;

LAB81:    xsi_set_current_line(94, ng0);
    t8 = (t0 + 5544);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 9337);
    t3 = (t0 + 5608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 9339);
    t3 = (t0 + 5672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB16;

LAB83:    t25 = 0;

LAB86:    if (t25 < 6U)
        goto LAB87;
    else
        goto LAB85;

LAB87:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB84;

LAB88:    t25 = (t25 + 1);
    goto LAB86;

LAB89:    xsi_set_current_line(98, ng0);
    t8 = (t0 + 5480);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 9349);
    t3 = (t0 + 5608);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 9351);
    t3 = (t0 + 5672);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);
    goto LAB16;

LAB91:    t25 = 0;

LAB94:    if (t25 < 6U)
        goto LAB95;
    else
        goto LAB93;

LAB95:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB92;

LAB96:    t25 = (t25 + 1);
    goto LAB94;

LAB97:    xsi_set_current_line(107, ng0);
    t8 = (t0 + 5800);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 5928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB98;

LAB100:    t25 = 0;

LAB103:    if (t25 < 6U)
        goto LAB104;
    else
        goto LAB102;

LAB104:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB101;

LAB105:    t25 = (t25 + 1);
    goto LAB103;

LAB106:    xsi_set_current_line(111, ng0);
    t8 = (t0 + 5800);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 5928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB98;

LAB108:    t25 = 0;

LAB111:    if (t25 < 6U)
        goto LAB112;
    else
        goto LAB110;

LAB112:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB109;

LAB113:    t25 = (t25 + 1);
    goto LAB111;

LAB114:    xsi_set_current_line(115, ng0);
    t8 = (t0 + 5800);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 5928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB98;

LAB116:    t25 = 0;

LAB119:    if (t25 < 6U)
        goto LAB120;
    else
        goto LAB118;

LAB120:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB117;

LAB121:    t25 = (t25 + 1);
    goto LAB119;

LAB122:    xsi_set_current_line(119, ng0);
    t8 = (t0 + 5800);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 5928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB98;

LAB124:    t25 = 0;

LAB127:    if (t25 < 6U)
        goto LAB128;
    else
        goto LAB126;

LAB128:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB125;

LAB129:    t25 = (t25 + 1);
    goto LAB127;

LAB130:    xsi_set_current_line(123, ng0);
    t8 = (t0 + 5800);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 5928);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB98;

LAB132:    t25 = 0;

LAB135:    if (t25 < 6U)
        goto LAB136;
    else
        goto LAB134;

LAB136:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB133;

LAB137:    t25 = (t25 + 1);
    goto LAB135;

LAB138:    xsi_set_current_line(131, ng0);
    t8 = (t0 + 5992);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 6056);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB139;

LAB141:    t25 = 0;

LAB144:    if (t25 < 6U)
        goto LAB145;
    else
        goto LAB143;

LAB145:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB142;

LAB146:    t25 = (t25 + 1);
    goto LAB144;

LAB147:    xsi_set_current_line(134, ng0);
    t8 = (t0 + 5992);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 6056);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB139;

LAB149:    t25 = 0;

LAB152:    if (t25 < 6U)
        goto LAB153;
    else
        goto LAB151;

LAB153:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB150;

LAB154:    t25 = (t25 + 1);
    goto LAB152;

LAB155:    xsi_set_current_line(137, ng0);
    t8 = (t0 + 6056);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB139;

LAB157:    t25 = 0;

LAB160:    if (t25 < 6U)
        goto LAB161;
    else
        goto LAB159;

LAB161:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB158;

LAB162:    t25 = (t25 + 1);
    goto LAB160;

LAB163:    xsi_set_current_line(139, ng0);
    t8 = (t0 + 6056);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB139;

LAB165:    t25 = 0;

LAB168:    if (t25 < 6U)
        goto LAB169;
    else
        goto LAB167;

LAB169:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB166;

LAB170:    t25 = (t25 + 1);
    goto LAB168;

LAB171:    xsi_set_current_line(141, ng0);
    t8 = (t0 + 5992);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 6056);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB139;

LAB173:    t25 = 0;

LAB176:    if (t25 < 6U)
        goto LAB177;
    else
        goto LAB175;

LAB177:    t5 = (t2 + t25);
    t6 = (t1 + t25);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB174;

LAB178:    t25 = (t25 + 1);
    goto LAB176;

}

static void work_a_3222946569_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;

LAB0:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5336);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 9424);
    t6 = (t0 + 6184);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(160, ng0);
    t5 = (t0 + 3592U);
    t6 = *((char **)t5);
    t5 = (t0 + 6184);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 3U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB7:    t1 = (t0 + 992U);
    t12 = xsi_signal_has_event(t1);
    t3 = t12;
    goto LAB9;

}


extern void work_a_3222946569_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3222946569_3212880686_p_0,(void *)work_a_3222946569_3212880686_p_1};
	xsi_register_didat("work_a_3222946569_3212880686", "isim/controltest_isim_beh.exe.sim/work/a_3222946569_3212880686.didat");
	xsi_register_executes(pe);
}
