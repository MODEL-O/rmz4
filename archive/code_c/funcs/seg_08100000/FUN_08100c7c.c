// undefined FUN_08100c7c(void)
// entry 0x8100c7c


undefined4 FUN_08100c7c(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar4 + 8) != '\0') {
    return in_lr;
  }
  bVar1 = *(byte *)(iVar3 + 0x10);
  bVar2 = bVar1 & 2;
  if ((bVar1 & 2) == 0) {
    if (*(int *)(iVar4 + 0x58) < *(int *)(iVar3 + 0x58)) {
      if ((bVar1 & 1) != 0) {
        return in_lr;
      }
      *(undefined1 *)(iVar3 + 0xd) = 1;
      goto LAB_08100ce8;
    }
  }
  else {
    bVar2 = *(byte *)(DAT_08100cc4 + 4) & 8;
    if ((*(byte *)(DAT_08100cc4 + 4) & 8) != 0) {
      return in_lr;
    }
    if (*(int *)(iVar4 + 0x58) < *(int *)(iVar3 + 0x58)) {
      if ((bVar1 & 1) != 0) {
        return in_lr;
      }
      *(undefined1 *)(iVar3 + 0xd) = 1;
      goto LAB_08100ce8;
    }
  }
  if ((bVar1 & 1) == 0) {
    return in_lr;
  }
  *(undefined1 *)(iVar3 + 0xd) = 2;
LAB_08100ce8:
  *(byte *)(iVar3 + 0xe) = bVar2;
  *(undefined1 *)(iVar4 + DAT_08100d08) = 2;
  *(ushort *)(DAT_08100d0c + 0x14) = *(ushort *)(DAT_08100d0c + 0x14) | 1;
  *(int *)(iVar3 + 0xb4) = iVar4;
  return in_lr;
}


