// undefined FUN_0800d020(void)
// entry 0x800d020


undefined4 FUN_0800d020(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 in_lr;
  undefined4 local_24 [2];
  
  uVar3 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (((*(byte *)(DAT_0800d058 + 4) & 0x20) == 0) &&
     (*(char *)(DAT_0800d05c + DAT_0800d060) != '\x01')) {
    *DAT_0800d064 = (ushort)(uVar3 << 8) | *DAT_0800d064;
  }
  else {
    *DAT_0800d10c = *DAT_0800d10c & ~(ushort)(uVar3 << 8);
  }
  iVar1 = DAT_0800d110;
  if (*(short *)(DAT_0800d114 + DAT_0800d110) != 0) {
    puVar5 = (ushort *)((uVar3 >> 4) * 2 + DAT_0800d118);
    local_24[0] = 0;
    FUN_08128be0(local_24,(*puVar5 & 0x1f00) * 8 + 0x6000000,DAT_0800d11c);
    FUN_08128be0(*DAT_0800d120 + DAT_0800d124,(*puVar5 & 0x1f00) * 8 + DAT_0800d128,0x200);
  }
  iVar2 = DAT_0800d12c;
  iVar4 = (uVar3 >> 4) * 4;
  *(short *)(iVar4 + DAT_0800d12c) =
       ((short)*(undefined4 *)(param_1 + 0x34) -
       (short)((uint)*(undefined4 *)(DAT_0800d130 + iVar1) >> 8)) + 0x50 +
       (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 8);
  *(short *)(iVar4 + iVar2 + 2) =
       ((short)*(undefined4 *)(param_1 + 0x38) -
       (short)((uint)*(undefined4 *)(DAT_0800d134 + iVar1) >> 8)) + 0xb8 +
       (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 8);
  return in_lr;
}


