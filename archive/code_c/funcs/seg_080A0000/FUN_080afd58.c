// undefined FUN_080afd58(void)
// entry 0x80afd58


undefined4 FUN_080afd58(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sVar1 = CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
    if ((sVar1 == -0x5a00) || (sVar1 == -0x59fa)) {
      if (*(char *)(param_1 + 0x71) == '\0') {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
        if ((byte)(*(char *)(param_1 + 0x71) - 1U) < 2) {
          uVar4 = 6;
        }
      }
      FUN_0801cfc8(param_1,DAT_080afe44 + (uint)*(byte *)(param_1 + 0xb7) & 0xffff,uVar4,1);
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xd) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0xe) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (((*(char *)(param_1 + 0x11) == '\0') &&
        (sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),
                              *(int *)(param_1 + 0x58) + DAT_080afe48), sVar1 == 0)) &&
       (uVar2 = FUN_08007020(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080afe48
                            ), (uVar2 & 0x8000) == 0)) {
      iVar3 = *(int *)(param_1 + 0x60) * -0x100;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar3 >> 8;
    }
    iVar5 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar5;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    iVar3 = iVar5;
    if (iVar5 < 0) {
      iVar3 = -iVar5;
    }
    if (0x4c < iVar3) {
      *(int *)(param_1 + 0x5c) = iVar5 + *(int *)(param_1 + 100);
    }
    if (0 < *(int *)(param_1 + 0x60)) {
      FUN_080b0064(param_1);
    }
  }
  return in_lr;
}


