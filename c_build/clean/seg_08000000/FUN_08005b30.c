// undefined FUN_08005b30(void)
// entry 0x8005b30


undefined4 FUN_08005b30(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  iVar3 = *(int *)(param_2 + 4);
  bVar1 = *(byte *)(param_2 + 0x3b) | *(byte *)(iVar3 + 9);
  if (((((*(int *)DAT_08005b7c & 0x80) == 0) && (*(char *)(iVar3 + 8) != -1)) && ((bVar1 & 2) == 0)) &&
     (iVar2 = *(int *)((uint)*(byte *)(param_1 + 0x38) * 4 + (uint)*(byte *)(iVar3 + 8) * 0x10 +
                      DAT_08005b80), iVar2 != 9)) {
    iVar2 = (int)(iVar2 * (uint)*(byte *)(param_1 + 0x37)) >> 2;
    if (*(char *)(iVar3 + 2) == '\x01') {
      if (((*(byte *)(DAT_08005be0 + 8) & 0x10) != 0) && (*(byte *)(param_1 + 0x37) == 0xfe)) {
        iVar2 = 8;
      }
      if ((*(char *)(*(int *)(param_2 + 4) + 2) == '\x01') &&
         ((*(byte *)(DAT_08005be0 + 4) & 4) != 0)) {
        iVar2 = iVar2 / 2;
      }
    }
    if ((bVar1 & 0x80) != 0) {
      iVar2 = iVar2 << 1;
    }
    if ((bVar1 & 0x20) != 0) {
      iVar2 = iVar2 / 2;
    }
    if (iVar2 == 0) {
      iVar2 = 1;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


