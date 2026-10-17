// undefined FUN_08005534(void)
// entry 0x8005534


undefined4 FUN_08005534(int *param_1)

{
  int *piVar1;
  int iVar2;
  iVar2 = *(int *)DAT_08005568;
  piVar1 = *(int **)(iVar2 + 0x10);
  if (piVar1 != (int *)0x0) {
    *(int *)(iVar2 + 0x10) = *piVar1;
    *(short *)(iVar2 + 10) = *(short *)(iVar2 + 10) + -1;
    *piVar1 = *param_1;
    piVar1[1] = (int)param_1;
    *(int **)(*param_1 + 4) = piVar1;
    *param_1 = (int)piVar1;
    *(undefined2 *)((int)piVar1 + 10) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
  }
  return piVar1;
}


