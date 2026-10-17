// undefined FUN_080bbed8(void)
// entry 0x80bbed8


undefined4 FUN_080bbed8(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  local_18[1] = DAT_080bbf90[1];
  local_18[0] = *DAT_080bbf90;
  bVar2 = *(byte *)(param_1 + 0x10);
  uVar4 = (uint)*(byte *)(param_1 + 0x12);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x194);
    FUN_08005784(param_1 + 0x74,DAT_080bbf94);
    FUN_0801cf00(param_1,*(undefined2 *)(local_18 + bVar2));
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_080bbf98 + 0x54);
    uVar4 = (uint)bVar1;
    *(uint *)(param_1 + 0x5c) = (uVar4 * 2 + -1) * 0x380;
    *(bool *)(param_1 + 0x12) = bVar1;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(undefined4 *)(param_1 + 0x68) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(int *)(param_1 + 0x68) != 0) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    if (-1 < (int)((iVar3 - *(int *)(*DAT_080bbf98 + 0x54)) * (uVar4 * 2 + -1))) {
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    if (*(char *)(param_1 + 0x13) != '\0') {
      return in_lr;
    }
  }
  if (*(int *)(param_1 + 0x68) == 0) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


