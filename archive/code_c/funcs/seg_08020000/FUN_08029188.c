// undefined FUN_08029188(void)
// entry 0x8029188


longlong FUN_08029188(int param_1)

{
  byte bVar1;
  int iVar2;
  uint in_lr;
  
  iVar2 = *(int *)(param_1 + 0xc);
  bVar1 = *(byte *)(iVar2 + 1);
  if (bVar1 == 1) {
    *(ushort *)(DAT_080291d0 + DAT_080291d4) =
         (ushort)DAT_080291d8 & *(ushort *)(DAT_080291d0 + DAT_080291d4);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(ushort *)(DAT_080291b8 + DAT_080291bc) = *(ushort *)(DAT_080291b8 + DAT_080291bc) | 1;
    }
  }
  else if (bVar1 == 2) {
    FUN_0801e0d0(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(DAT_080291f0 + 0x460));
  }
  else if (bVar1 == 3) {
    FUN_0801e0d0(*(undefined4 *)(DAT_08029208 + DAT_0802920c),*(undefined4 *)(iVar2 + 4));
  }
  return (ulonglong)in_lr << 0x20;
}


