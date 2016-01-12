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
static const char *ng0 = "D:/Users/Mokykla/Desktop/SensorWorking/Sensor/Sensor/FSM.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3643194780_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 5096);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 5096);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_3643194780_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6};

LAB0:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 5016);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t4 = (t0 + 5160);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 5224);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 5288);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 5352);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 5416);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 5480);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB8:    goto LAB2;

LAB4:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5160);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 5224);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 5288);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 5352);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 5416);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 5480);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB11:    goto LAB2;

LAB5:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5160);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 5224);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 5288);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 5352);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 5416);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 5480);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB2;

LAB6:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 5160);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 5224);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 5288);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 5352);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 5416);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(151, ng0);
    t1 = (t0 + 5480);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(157, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t6 = (t3 == (unsigned char)3);
    if (t6 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 5672);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB10:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 5672);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 5672);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 5608);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t7 = *((char **)t5);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 5672);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

}


extern void work_a_3643194780_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3643194780_3212880686_p_0,(void *)work_a_3643194780_3212880686_p_1};
	xsi_register_didat("work_a_3643194780_3212880686", "isim/newTB_isim_beh.exe.sim/work/a_3643194780_3212880686.didat");
	xsi_register_executes(pe);
}
