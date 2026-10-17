// undefined FUN_080a3698(void)
// entry 0x80a3698


undefined4 FUN_080a3698(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0xd) == '\0') {
    iVar2 = DAT_080a3710;
    if (*(char *)(iVar4 + 0xd4 + (uint)*(byte *)(param_1 + 0x11)) != '\0') {
      iVar2 = DAT_080a36c0;
    }
    uVar3 = (uint)*(byte *)(param_1 + 0x11) + iVar2 & 0xffff;
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != uVar3) {
      FUN_0801cf00(param_1,uVar3);
    }
    if (1 < *(byte *)(iVar5 + 0xc)) {
      FUN_0801cf00(param_1,DAT_080a3714 + (uint)*(byte *)(param_1 + 0x11) & 0xffff);
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar4 + 0x1c);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if ((*(char *)(param_1 + 0xd) == '\x01') && ((*(byte *)(iVar4 + 10) & 1) == 0)) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a3744);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080a32fc(param_1);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


