// undefined FUN_080cea40(void)
// entry 0x80cea40


undefined4 FUN_080cea40(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  
  if (*(int *)(param_1 + 0x60) < 0) {
    sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080cea78);
    if (sVar2 != 0) {
      iVar3 = *(int *)(param_1 + 0x60) * -0x100;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xff;
      }
      *(int *)(param_1 + 0x60) = iVar3 >> 8;
      FUN_08002b10(0x16c);
LAB_080ceaa6:
      *(undefined1 *)(param_1 + 0xba) = 0;
    }
  }
  else {
    sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500);
    if (sVar2 != 0) {
      FUN_080ceb68(param_1);
      iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar3 + DAT_080ceab0;
      goto LAB_080ceaa6;
    }
    if (*(char *)(param_1 + 0xb9) == '\x01') {
      *(char *)(param_1 + 0xb9) = '\0';
    }
  }
  if (*(int *)(param_1 + 0x5c) < 1) {
    sVar2 = FUN_08007c7c(*(int *)(param_1 + 0x54) + DAT_080ceb30,*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    bVar1 = *(byte *)(param_1 + 10);
    bVar4 = ~(bVar1 >> 4) & 1;
    if (bVar4 != 0) {
      bVar1 = bVar1 | 0x10;
      goto LAB_080ceb38;
    }
  }
  else {
    sVar2 = FUN_08007c7c(*(int *)(param_1 + 0x54) + 0x500,*(undefined4 *)(param_1 + 0x58));
    if (sVar2 == 0) {
      return in_lr;
    }
    iVar3 = *(int *)(param_1 + 0x5c) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    bVar1 = *(byte *)(param_1 + 10);
    bVar4 = ~(bVar1 >> 4) & 1;
    if (bVar4 != 0) {
      bVar1 = bVar1 | 0x10;
      goto LAB_080ceb38;
    }
  }
  bVar1 = bVar1 & 0xef;
LAB_080ceb38:
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  FUN_08002b10(0x16c);
  *(undefined1 *)(param_1 + 0xba) = 0;
  return in_lr;
}


