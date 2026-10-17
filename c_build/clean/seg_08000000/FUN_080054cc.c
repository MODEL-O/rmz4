// undefined FUN_080054cc(void)
// entry 0x80054cc


undefined4 FUN_080054cc(int param_1)

{
  int *piVar1;
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    *(int *)(param_1 + 0x10) = *piVar1;
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
    *piVar1 = param_1 + 0x14;
    piVar1[1] = *(int *)(param_1 + 0x18);
    **(undefined4 **)(param_1 + 0x18) = piVar1;
    *(int **)(param_1 + 0x18) = piVar1;
    *(undefined2 *)((int)piVar1 + 10) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
  }
  return piVar1;
}


