// undefined FUN_08002208(void)
// entry 0x8002208


void FUN_08002208(int *param_1,int param_2)

{
  int *piVar1;
  piVar1 = DAT_08002258;
  if ((short)param_1[1] != 0) {
    param_2 = param_2 + (uint)*(byte *)((int)param_1 + 7) * 0x20;
    if (*(char *)((int)param_1 + 6) == '\0') {
      *(int *)DAT_08002258 = (int)param_1 + *param_1;
      piVar1[1] = param_2 + DAT_0800225c;
      piVar1[2] = *(ushort *)(param_1 + 1) >> 2 | 0x84000000;
    }
    else {
      FUN_08128bec((int)param_1 + *param_1,param_2 + DAT_08002230);
    }
  }
  return;
}


