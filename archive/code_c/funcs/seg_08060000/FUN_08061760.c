// undefined FUN_08061760(void)
// entry 0x8061760


undefined4 FUN_08061760(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 0x1f;
    FUN_0801cf00(param_1,DAT_080617bc);
    *(undefined4 *)(param_1 + 0x60) = DAT_080617c0;
    uVar3 = FUN_08128fb8(*(int *)(DAT_080617c4 + 0x38) - *(int *)(param_1 + 0x54),0x2b);
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(char *)(param_1 + 0xcf) = *(char *)(param_1 + 0xcf) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x71) != '\0') {
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else {
    iVar4 = *DAT_08061808;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar4 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar4 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (-0xc0 < iVar4) {
      *(undefined1 *)(param_1 + 0xd) = 0x20;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


