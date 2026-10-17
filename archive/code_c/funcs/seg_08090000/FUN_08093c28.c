// undefined FUN_08093c28(void)
// entry 0x8093c28


undefined4 FUN_08093c28(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  uVar2 = *(undefined1 *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08093cac);
    FUN_0801cf00(param_1,0x4000);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar5;
  if (0x700 < iVar5) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar5 = FUN_080947b4(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar5 != 0) {
    FUN_08094a38(param_1);
    if ((cVar1 == '\x01') &&
       (bVar3 = *(byte *)(DAT_08093cb0 + DAT_08093cb4), uVar4 = FUN_08129120(uVar2,3),
       ((int)(uint)bVar3 >> (uVar4 & 0xff) & 1U) != 0)) {
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


