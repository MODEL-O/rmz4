// undefined FUN_08093b28(void)
// entry 0x8093b28


undefined4 FUN_08093b28(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  bool bVar6;
  
  cVar1 = *(char *)(param_1 + 0x10);
  uVar2 = *(undefined1 *)(param_1 + 0x11);
  bVar6 = false;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08093c00);
    FUN_0801cf00(param_1,DAT_08093c04);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x13) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  iVar4 = FUN_080947b4(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar4 == 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar4;
    if (0x700 < iVar4) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar4 = FUN_080947b4(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    bVar6 = iVar4 == 0;
    if ((*(char *)(param_1 + 0x13) != '\0') && (*(int *)(param_1 + 0x2c) == 0)) {
      FUN_08005784(param_1 + 0x74,DAT_08093c08);
      FUN_0801cf00(param_1,0x4000);
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
  }
  if (!bVar6) {
    FUN_08094a38(param_1);
  }
  FUN_0801cff0(param_1);
  if (((*(char *)(param_1 + 0x73) == '\x03') && (*(int *)(param_1 + 0x2c) == 0)) && (!bVar6)) {
    if ((cVar1 == '\x01') &&
       (bVar3 = *(byte *)(DAT_08093c0c + DAT_08093c10), uVar5 = FUN_08129120(uVar2,3),
       ((int)(uint)bVar3 >> (uVar5 & 0xff) & 1U) != 0)) {
      *(undefined1 *)(param_1 + 0xd) = 10;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


