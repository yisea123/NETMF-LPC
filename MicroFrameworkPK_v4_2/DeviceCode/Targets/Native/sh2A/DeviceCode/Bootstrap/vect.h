/***********************************************************************/
/*                                                                     */
/*  FILE        :vect.h                                                */
/*  DATE        :Thu, Mar 04, 2010                                     */
/*  DESCRIPTION :Definition of Vector                                  */
/*  CPU TYPE    :SH2A                                                 */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.9).     */
/*                                                                     */
/***********************************************************************/
                  

#ifdef SH7264_SERIAL_FLASH
typedef struct appinfo_t {
    void *app_top;          /* Start address of the application program */
    void *app_end;          /* End address of the application program */
} APPINFO;
#endif


//;<<VECTOR DATA START (POWER ON RESET)>>
//;0 Power On Reset PC
extern void PowerON_Reset_PC(void);                                                                                                                

//;<<VECTOR DATA END (POWER ON RESET)>>
// 1 Power On Reset SP

//;<<VECTOR DATA START (MANUAL RESET)>>
//;2 Manual Reset PC
extern void Manual_Reset_PC(void);
