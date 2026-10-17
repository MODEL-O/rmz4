// undefined FUN_0800f870(void)
// entry 0x800f870


undefined4 FUN_0800f870(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_lr;
  
  puVar2 = DAT_0800f8d8;
  iVar1 = DAT_0800f8b4;
  if ((*(ushort *)(DAT_0800f8b4 + 8) & 2) == 0) {
    if ((DAT_0800f8bc < (uint)(*(int *)(*DAT_0800f8b0 + 0x54) + DAT_0800f8b8)) ||
       (*(int *)(*DAT_0800f8b0 + 0x58) <= DAT_0800f8c0)) {
      *DAT_0800f8d8 = 0xa000;
      puVar2[1] = 0x280000;
    }
    else {
      *(undefined4 *)(DAT_0800f8b4 + 0x14c) = 0x128000;
      *(undefined4 *)(iVar1 + 0x150) = 0x280000;
    }
  }
  return in_lr;
}


