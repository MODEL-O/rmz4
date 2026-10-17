// undefined FUN_08000d84(void)
// entry 0x8000d84


undefined4 FUN_08000d84(void)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = DAT_08000df8;
  uVar2 = *DAT_08000df4;
  bVar1 = *(byte *)(DAT_08000df8 + DAT_08000dfc);
  if ((bVar1 & 2) == 0) {
    *(byte *)(DAT_08000df8 + DAT_08000dfc) = bVar1 | 2;
    if (uVar2 == 0) {
      *(int *)(iVar3 + 0x160) = *(int *)(iVar3 + 0x160) + 1;
    }
    if ((uVar2 == *(byte *)(iVar3 + 0x166)) && (*(int *)(iVar3 + 0x15c) != 0)) {
      FUN_08128f7c();
    }
    iVar3 = DAT_08000df8;
    if (uVar2 < *(byte *)(DAT_08000df8 + 0x166)) {
      *DAT_08000e00 = *(byte *)(DAT_08000df8 + 0x166);
    }
    else {
      *DAT_08000e1c = 0;
    }
    *(byte *)(iVar3 + DAT_08000e20) = *(byte *)(iVar3 + DAT_08000e20) ^ 2;
  }
  return in_lr;
}


