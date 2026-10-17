// undefined FUN_080e68c0(void)
// entry 0x80e68c0


undefined4 FUN_080e68c0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,DAT_080e68dc);
  *(undefined1 *)(param_1 + 0x12) = 0x50;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar2 = 0x40;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x11);
    uVar3 = *DAT_080e693c * DAT_080e6940 + DAT_080e6944;
    *DAT_080e693c = uVar3 & 0x7fffffff;
    iVar2 = DAT_080e6948;
    uVar3 = (bVar1 - 1) * 0x40 + ((uVar3 & 0x7fffffff) >> 0x10 & 0x6f);
    iVar4 = (int)*(short *)((uVar3 * 0x1000000 + 0x40000000 >> 0x17) + DAT_080e6948);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 2;
    iVar2 = (int)*(short *)((uVar3 & 0xff) * 2 + iVar2);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    iVar2 = iVar2 >> 2;
  }
  *(int *)(param_1 + 0x60) = iVar2;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


