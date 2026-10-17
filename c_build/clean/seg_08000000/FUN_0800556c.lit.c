// undefined FUN_0800556c(void)
// entry 0x800556c


undefined4 FUN_0800556c(int param_1)

{
  int *piVar1;
  int iVar2;
  iVar2 = (*(int *)0x02000024);
  piVar1 = *(int **)(iVar2 + 0x10);
  if (piVar1 != (int *)0x0) {
    *(int *)(iVar2 + 0x10) = *piVar1;
    *(short *)(iVar2 + 10) = *(short *)(iVar2 + 10) + -1;
    piVar1[1] = *(int *)(param_1 + 4);
    *piVar1 = param_1;
    **(undefined4 **)(param_1 + 4) = piVar1;
    *(int **)(param_1 + 4) = piVar1;
    *(undefined2 *)((int)piVar1 + 10) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
  }
  return piVar1;
}


