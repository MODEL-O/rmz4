// undefined FUN_08005440(void)
// entry 0x8005440


void
FUN_08005440(undefined4 *param_1,char param_2,undefined4 *param_3,short param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  *param_1 = param_3;
  *(short *)(param_1 + 1) = (short)param_2;
  *(short *)((int)param_1 + 6) = param_4;
  *(short *)(param_1 + 2) = (short)param_5;
  param_1[6] = param_1 + 5;
  param_1[5] = param_1 + 5;
  param_1[4] = 0;
  *(short *)((int)param_1 + 10) = (short)param_5;
  param_5 = param_5 * 0x10000;
  if (0 < param_5) {
    puVar1 = (undefined4 *)0x0;
    do {
      puVar2 = param_3;
      *puVar2 = puVar1;
      *(char *)(puVar2 + 2) = param_2;
      param_5 = param_5 + DAT_08005490;
      puVar1 = puVar2;
      param_3 = (undefined4 *)((int)puVar2 + (int)param_4);
    } while (0 < param_5 >> 0x10);
    param_1[4] = puVar2;
  }
  return;
}


