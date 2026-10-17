// undefined FUN_08002c40(void)
// entry 0x8002c40


void FUN_08002c40(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int *piVar2;
  if (param_2 == (undefined4 *)0x0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
  }
  else {
    piVar1 = (int *)*param_2;
    *param_1 = *piVar1;
    param_1[1] = piVar1[1];
    piVar2 = (int *)param_2[1];
    param_1[2] = ((*piVar1 >> 8) + (*piVar2 >> 8) + -0x78) * 0x100;
    param_1[3] = ((piVar1[1] >> 8) + (piVar2[1] >> 8) + -0x50) * 0x100;
    param_1[4] = *piVar2;
    param_1[5] = piVar2[1];
  }
  return;
}


