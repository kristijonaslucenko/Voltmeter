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
static const char *ng0 = "D:/Users/Mokykla/Desktop/SensorWorking/Sensor/Sensor/mux.vhd";



static void work_a_0916399279_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5896);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB10:    t5 = (t0 + 5900);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB11:    t8 = (t0 + 5904);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB12:    t11 = (t0 + 5908);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB13:    t14 = (t0 + 5912);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB7;

LAB14:    t17 = (t0 + 5916);
    t19 = xsi_mem_cmp(t17, t2, 4U);
    if (t19 == 1)
        goto LAB8;

LAB15:
LAB9:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 3712);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 3632);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(27, ng0);
    t20 = (t0 + 1032U);
    t21 = *((char **)t20);
    t20 = (t0 + 3712);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t21, 4U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB2;

LAB4:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 3712);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 3712);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3712);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 3712);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 3712);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB16:;
}


extern void work_a_0916399279_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0916399279_3212880686_p_0};
	xsi_register_didat("work_a_0916399279_3212880686", "isim/newTB_isim_beh.exe.sim/work/a_0916399279_3212880686.didat");
	xsi_register_executes(pe);
}
