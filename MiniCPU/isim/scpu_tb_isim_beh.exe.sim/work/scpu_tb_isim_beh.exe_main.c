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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *STD_STANDARD;
char *STD_TEXTIO;
char *IEEE_P_3564397177;
char *IEEE_P_2592010699;
char *IEEE_P_1242562249;
char *IEEE_P_3499444699;
char *IEEE_P_3620187407;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_3499444699_init();
    ieee_p_3620187407_init();
    ieee_p_1242562249_init();
    std_textio_init();
    ieee_p_3564397177_init();
    work_a_2530074510_0427617860_init();
    work_a_1991350011_3212880686_init();
    work_a_4240026036_3212880686_init();
    work_a_1350853198_0427524003_init();
    work_a_3527312285_3212880686_init();
    work_a_0832606739_3212880686_init();
    work_a_0943117531_3212880686_init();
    work_a_2750190074_3212880686_init();
    work_a_4106131694_3212880686_init();
    work_a_3466268235_3212880686_init();
    work_a_2563939991_3212880686_init();
    work_a_2781792794_3212880686_init();
    work_a_2857180054_3212880686_init();
    work_a_2899283264_3212880686_init();
    work_a_2571642661_3212880686_init();
    work_a_3814580604_3212880686_init();
    work_a_2900255942_3212880686_init();
    work_a_3538056418_3212880686_init();
    work_a_0564253557_3212880686_init();
    work_a_3720894149_3895658771_init();
    work_a_0739323090_3212880686_init();
    work_a_3162238118_1637741553_init();


    xsi_register_tops("work_a_3162238118_1637741553");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_3564397177 = xsi_get_engine_memory("ieee_p_3564397177");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    IEEE_P_3499444699 = xsi_get_engine_memory("ieee_p_3499444699");
    IEEE_P_3620187407 = xsi_get_engine_memory("ieee_p_3620187407");

    return xsi_run_simulation(argc, argv);

}
