// undefined FUN_080f684c(void)
// entry 0x80f684c


undefined4 FUN_080f684c(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x68) = 0x10;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      iVar3 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x300 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x300;
      }
      iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      iVar3 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),iVar3 + 0x2000);
      if (iVar3 == 0) {
        return in_lr;
      }
      iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar3 + DAT_080f68dc;
      cVar2 = '\0';
      *(undefined1 *)(param_1 + 0xd) = 0;
      goto LAB_080f68d2;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x3c;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_080f68d2:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}


