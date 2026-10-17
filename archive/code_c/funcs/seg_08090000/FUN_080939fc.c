// undefined FUN_080939fc(void)
// entry 0x80939fc


undefined4 FUN_080939fc(int param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  cVar2 = *(char *)(param_1 + 0x10);
  uVar3 = *(undefined1 *)(param_1 + 0x11);
  uVar7 = (uint)*(byte *)(param_1 + 0x13);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08093a98);
    FUN_0801cf00(param_1,DAT_08093a9c);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    bVar1 = *(int *)(*DAT_08093aa0 + 0x54) <= *(int *)(param_1 + 0x54);
    uVar7 = (uint)bVar1;
    *(uint *)(param_1 + 0x5c) = (uVar7 * 2 + -1) * 0x80;
    *(undefined1 *)(param_1 + 0x12) = 0xc;
    *(bool *)(param_1 + 0x13) = bVar1;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  FUN_08094a38(param_1);
  iVar6 = *(int *)(param_1 + 0x5c) * 3 >> 2;
  *(int *)(param_1 + 0x5c) = iVar6;
  iVar6 = *(int *)(param_1 + 0x54) + iVar6;
  if (uVar7 == 0) {
    iVar5 = FUN_0809482c(param_1,iVar6);
    if (iVar5 != 0) {
      FUN_08094b14(param_1,iVar6);
      goto LAB_08093abc;
    }
  }
  else {
    iVar5 = FUN_08094934(param_1,iVar6);
    if (iVar5 != 0) {
      FUN_08094c64(param_1,iVar6);
      goto LAB_08093abc;
    }
  }
  *(int *)(param_1 + 0x54) = iVar6;
LAB_08093abc:
  iVar6 = FUN_080947b4(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar6 != 0) {
    FUN_08094a38(param_1);
  }
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
    if ((cVar2 == '\x01') &&
       (bVar4 = *(byte *)(DAT_08093b0c + DAT_08093b10), uVar7 = FUN_08129120(uVar3,3),
       ((int)(uint)bVar4 >> (uVar7 & 0xff) & 1U) != 0)) {
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


