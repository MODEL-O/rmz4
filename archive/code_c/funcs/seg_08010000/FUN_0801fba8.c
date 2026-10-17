// undefined FUN_0801fba8(void)
// entry 0x801fba8


undefined4 FUN_0801fba8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    *(undefined2 *)(param_1 + 0x22) = 0;
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x4c) = iVar3;
  iVar1 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x54) = iVar1;
  piVar2 = *(int **)(param_1 + 0x48);
  if (piVar2 != (int *)0x0) {
    *(int *)(param_1 + 0x30) = *piVar2 + iVar3;
    *(int *)(param_1 + 0x34) = piVar2[1] + iVar1;
  }
  FUN_0801f998(param_1,*(undefined1 *)(param_1 + 0x19));
  return in_lr;
}


