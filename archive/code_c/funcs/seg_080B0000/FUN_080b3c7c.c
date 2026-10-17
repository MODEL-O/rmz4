// undefined FUN_080b3c7c(void)
// entry 0x80b3c7c


undefined4 FUN_080b3c7c(int param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  short sVar4;
  int *piVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar6 = 0;
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080b3d48);
    *(undefined1 *)(param_1 + 0x12) = 10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  iVar1 = DAT_080b3d50;
  if ((*(byte *)(param_1 + 0x12) & 2) != 0) {
    uVar6 = (uint)(*(int *)(param_1 + 0x54) < *(int *)(*DAT_080b3d4c + 0x54));
    sVar4 = FUN_08007c7c(*(int *)(param_1 + 0x54) + *(int *)(uVar6 * 8 + DAT_080b3d50) * 0x100,
                         *(int *)(param_1 + 0x58) + DAT_080b3d54);
    if (sVar4 == 0) {
      piVar5 = (int *)(uVar6 * 8 + iVar1 + 4);
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *piVar5 * 0x100;
      cVar2 = FUN_080b3eac(param_1);
      if (cVar2 != '\0') {
        *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + *piVar5 * 0x100;
      }
    }
  }
  cVar2 = FUN_080b3f2c(param_1);
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0x100;
    if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_080b3d4c + 0x54)) {
      uVar6 = 1;
    }
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0xffffff00;
    }
    cVar2 = FUN_080b3eac(param_1);
    if ((cVar2 == '\0') || ((~(uint)(*(byte *)(param_1 + 10) >> 4) & 1) != uVar6)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 2;
    }
    *(undefined1 *)(param_1 + 0xd) = uVar3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


