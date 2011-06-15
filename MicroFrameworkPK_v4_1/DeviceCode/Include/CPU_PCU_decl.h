////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _DRIVERS_PCU_DECL_H_
#define _DRIVERS_PCU_DECL_H_ 1

//--//

void CPU_PCU_Regulator_Switcher1_On    ();
void CPU_PCU_Regulator_Switcher1_Off   ();
BOOL CPU_PCU_Regulator_Switcher1_Status();
void CPU_PCU_Regulator_Linear1_On      ();
void CPU_PCU_Regulator_Linear1_Off     ();
BOOL CPU_PCU_Regulator_Linear1_Status  ();
void CPU_PCU_Regulator_Linear2_On      ();
void CPU_PCU_Regulator_Linear2_Off     ();
BOOL CPU_PCU_Regulator_Linear2_Status  ();

//--//

#endif // _DRIVERS_PCU_DECL_H_
