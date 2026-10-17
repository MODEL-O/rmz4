// undefined FUN_08027c1c(void)
// entry 0x8027c1c


undefined4 FUN_08027c1c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar4 = 0;
  iVar5 = 0;
  iVar2 = *DAT_08027ccc;
  iVar3 = DAT_08027ccc[1];
  if (*(int *)(param_1 + 0x10) != 0) {
    if ((*(ushort *)(DAT_08027cd0 + 0x1d0) & 0x7f) == 4) {
      iVar2 = 0x78000000;
    }
    if ('\x03' < *(char *)(DAT_08027cd4 + 0x18)) {
      iVar4 = *(int *)(DAT_08027cd4 + 0x5c);
      iVar5 = *(int *)(DAT_08027cd4 + 100);
      iVar2 = *(int *)(DAT_08027cd4 + 0x60);
      iVar3 = *(int *)(DAT_08027cd4 + 0x68);
    }
    if (iVar4 < *(int *)(DAT_08027cd0 + DAT_08027cd8)) {
      iVar4 = *(int *)(DAT_08027cd0 + DAT_08027cd8);
    }
    if (iVar5 < *(int *)(DAT_08027cd0 + DAT_08027cdc)) {
      iVar5 = *(int *)(DAT_08027cd0 + DAT_08027cdc);
    }
    if (*(int *)(DAT_08027cd0 + DAT_08027ce0) < iVar2) {
      iVar2 = *(int *)(DAT_08027cd0 + DAT_08027ce0);
    }
    if (*(int *)(DAT_08027cd0 + DAT_08027ce4) < iVar3) {
      iVar3 = *(int *)(DAT_08027cd0 + DAT_08027ce4);
    }
    FUN_0802cbec(*(int *)(param_1 + 0x10),iVar4,iVar5,iVar2,iVar3);
    iVar1 = *(int *)(param_1 + 0x20);
    if ((iVar1 != 0) && (*(char *)(iVar1 + 8) == '\0')) {
      FUN_0802cbec(iVar1,iVar4,iVar5,iVar2,iVar3);
    }
  }
  return in_lr;
}


