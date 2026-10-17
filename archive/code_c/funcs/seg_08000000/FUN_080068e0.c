// undefined FUN_080068e0(void)
// entry 0x80068e0


undefined8 FUN_080068e0(void)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = 0;
  if ((((*(char *)(DAT_08006944 + 0x12) == *(char *)(DAT_08006948 + 0x14)) ||
       ((ushort)*(byte *)(DAT_08006944 + 0x13) == (*(ushort *)(DAT_08006948 + 0x16) & 0xff))) ||
      ((ushort)*(byte *)(DAT_08006944 + 0x14) == (*(ushort *)(DAT_08006948 + 0x18) & 0xff))) ||
     ((((ushort)*(byte *)(DAT_08006944 + 0x15) == (*(ushort *)(DAT_08006948 + 0x1a) & 0xff) ||
       ((ushort)*(byte *)(DAT_08006944 + 0x16) == (*(ushort *)(DAT_08006948 + 0x1c) & 0xff))) ||
      (((ushort)*(byte *)(DAT_08006944 + 0x17) == (*(ushort *)(DAT_08006948 + 0x1e) & 0xff) ||
       ((ushort)*(byte *)(DAT_08006944 + 0x18) == (*(ushort *)(DAT_08006948 + 0x20) & 0xff))))))) {
    uVar1 = 1;
  }
  return CONCAT44(in_lr,uVar1);
}


