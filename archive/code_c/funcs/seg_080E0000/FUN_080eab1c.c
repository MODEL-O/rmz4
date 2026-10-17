// undefined FUN_080eab1c(void)
// entry 0x80eab1c


undefined4 FUN_080eab1c(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if ((*(short *)(iVar2 + 0xba) == 0) && (*(char *)(iVar3 + 8) == '\0')) {
    bVar1 = *(byte *)(iVar2 + 0x10);
    if ((bVar1 & 2) == 0) {
      if (*(int *)(iVar3 + 0x58) < *(int *)(iVar2 + 0x58)) {
        if ((bVar1 & 1) != 0) {
          return in_lr;
        }
        *(undefined1 *)(iVar2 + 0xd) = 1;
      }
      else {
        if ((bVar1 & 1) == 0) {
          return in_lr;
        }
        *(undefined1 *)(iVar2 + 0xd) = 2;
      }
      *(byte *)(iVar2 + 0xe) = bVar1 & 2;
    }
    else {
      bVar1 = *(byte *)(DAT_080eab68 + 4) & 8;
      if ((*(byte *)(DAT_080eab68 + 4) & 8) != 0) {
        return in_lr;
      }
      if (*(int *)(iVar3 + 0x58) < *(int *)(iVar2 + 0x58)) {
        *(undefined1 *)(iVar2 + 0xd) = 1;
        *(byte *)(iVar2 + 0xe) = bVar1;
      }
      else {
        *(undefined1 *)(iVar2 + 0xd) = 2;
        *(byte *)(iVar2 + 0xe) = bVar1;
      }
    }
    *(undefined1 *)(iVar3 + DAT_080eabb4) = 2;
    *(ushort *)(DAT_080eabb8 + 0x14) = *(ushort *)(DAT_080eabb8 + 0x14) | 1;
    *(int *)(iVar2 + 0xb4) = iVar3;
  }
  return in_lr;
}


