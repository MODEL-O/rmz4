// undefined FUN_080e9bb4(void)
// entry 0x80e9bb4


undefined4 FUN_080e9bb4(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (*(char *)(iVar3 + 8) == '\0') {
    if ((*(int *)(iVar3 + 0x58) <= *(int *)(iVar2 + 0x58)) &&
       (*(int *)(iVar2 + 0x58) - *(int *)(iVar3 + 0x58) < 0x801)) {
      bVar1 = *(byte *)(iVar2 + 0x10);
      if ((bVar1 & 2) == 0) {
        if (*(int *)(iVar3 + 0x54) < *(int *)(iVar2 + 0x54)) {
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
        bVar1 = *(byte *)(DAT_080e9c08 + 4) & 8;
        if ((*(byte *)(DAT_080e9c08 + 4) & 8) != 0) {
          return in_lr;
        }
        if (*(int *)(iVar3 + 0x54) < *(int *)(iVar2 + 0x54)) {
          *(undefined1 *)(iVar2 + 0xd) = 1;
          *(byte *)(iVar2 + 0xe) = bVar1;
        }
        else {
          *(undefined1 *)(iVar2 + 0xd) = 2;
          *(byte *)(iVar2 + 0xe) = bVar1;
        }
      }
      *(undefined1 *)(iVar3 + DAT_080e9c50) = 1;
      *(ushort *)(DAT_080e9c54 + 0x14) = *(ushort *)(DAT_080e9c54 + 0x14) | 1;
      *(int *)(iVar2 + 0xb4) = iVar3;
    }
  }
  return in_lr;
}


