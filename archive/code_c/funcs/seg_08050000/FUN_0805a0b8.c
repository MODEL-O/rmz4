// undefined FUN_0805a0b8(void)
// entry 0x805a0b8


undefined4 FUN_0805a0b8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = *DAT_0805a194;
  local_10 = DAT_0805a194[1];
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = 0;
    if (*DAT_0805a198 == 0x10) {
      iVar1 = 4;
    }
    FUN_08002b10(*(undefined2 *)((int)&local_14 + iVar1));
    FUN_08005784(param_1 + 0x74,DAT_0805a19c);
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_0805a1a0) {
      FUN_0801cf00(param_1);
      *(undefined1 *)(param_1 + 0xbd) = 1;
    }
    iVar1 = FUN_0805c3a8(param_1);
    *(int *)(param_1 + 0x5c) = iVar1 + 0xd000;
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0xb4) + DAT_0805a1a4;
    iVar1 = FUN_0805c3a8(param_1);
    *(int *)(param_1 + 100) = iVar1 - (*(int *)(param_1 + 0x54) + DAT_0805a1a8);
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb4) - (*(int *)(param_1 + 0x58) + DAT_0805a1ac);
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) == '\0') {
    if ((*(byte *)(DAT_0805a1d0 + 0x12) & 1) == 0) {
      FUN_0805bf8c(param_1);
    }
  }
  else {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    iVar1 = (uint)*(byte *)(param_1 + 0x12) * -*(int *)(param_1 + 100);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0x3f;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x5c) + (iVar1 >> 6);
    iVar1 = -*(int *)(param_1 + 0x68) *
            (int)*(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_0805a1b0);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x60) + (iVar1 >> 8);
  }
  return in_lr;
}


