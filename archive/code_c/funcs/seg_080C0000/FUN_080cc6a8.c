// undefined FUN_080cc6a8(void)
// entry 0x80cc6a8


undefined4 FUN_080cc6a8(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x28) != 0) {
    *(int *)(param_1 + 0x58) = iVar3 + *(int *)(*(int *)(param_1 + 0x28) + 0x60);
  }
  if (*(byte *)(param_1 + 0x12) < 0x10) {
    if (*(byte *)(param_1 + 0x13) == (*(byte *)(param_1 + 0x12) & 1)) {
      FUN_08005784(param_1 + 0x74,DAT_080cc6f0);
    }
    else {
      FUN_08005784(param_1 + 0x74,DAT_080cc72c);
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cc730);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080cc0bc(param_1);
  }
  return in_lr;
}


