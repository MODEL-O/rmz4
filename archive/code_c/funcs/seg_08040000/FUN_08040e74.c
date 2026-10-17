// undefined FUN_08040e74(void)
// entry 0x8040e74


undefined4 FUN_08040e74(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08040ef0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  uVar3 = (uint)*(byte *)(iVar4 + 0xc0);
  if (uVar3 < 3) {
    uVar3 = (uint)*(byte *)(iVar4 + 0xc1);
  }
  uVar1 = *(undefined2 *)((uint)*(byte *)(iVar4 + 0xc3) * 0xc + *(int *)(uVar3 * 4 + DAT_08040ef4));
  FUN_0801cd28(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  FUN_0801cf00(param_1,uVar1);
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x12) = 8;
  FUN_08040d54(param_1);
  return in_lr;
}


