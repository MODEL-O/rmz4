// undefined FUN_08018d34(void)
// entry 0x8018d34


undefined4 FUN_08018d34(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 in_lr;
  undefined4 local_24 [2];
  
  uVar3 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (((*(byte *)(DAT_08018d6c + 4) & 0x20) == 0) &&
     (*(char *)(DAT_08018d70 + DAT_08018d74) != '\x01')) {
    *DAT_08018d78 = (ushort)(uVar3 << 8) | *DAT_08018d78;
  }
  else {
    *DAT_08018e30 = *DAT_08018e30 & ~(ushort)(uVar3 << 8);
  }
  iVar1 = DAT_08018e34;
  if (*(short *)(DAT_08018e38 + DAT_08018e34) != 0) {
    puVar5 = (ushort *)((uVar3 >> 4) * 2 + DAT_08018e3c);
    local_24[0] = 0;
    FUN_08128be0(local_24,(*puVar5 & 0x1f00) * 8 + 0x6000000,DAT_08018e40);
    FUN_08128be0(*DAT_08018e44 + DAT_08018e48,(*puVar5 & 0x1f00) * 8 + DAT_08018e4c,0x200);
  }
  iVar2 = DAT_08018e50;
  iVar4 = (uVar3 >> 4) * 4;
  *(short *)(iVar4 + DAT_08018e50) =
       ((short)*(undefined4 *)(param_1 + 0x34) -
       (short)((uint)*(undefined4 *)(DAT_08018e54 + iVar1) >> 8)) + 0x50 +
       *(short *)(DAT_08018e58 + iVar1) + (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 8);
  *(short *)(iVar4 + iVar2 + 2) =
       ((short)*(undefined4 *)(param_1 + 0x38) -
       (short)((uint)*(undefined4 *)(DAT_08018e5c + iVar1) >> 8)) + *(short *)(DAT_08018e60 + iVar1)
       + (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 8);
  return in_lr;
}


