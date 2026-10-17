// undefined FUN_0800a02c(void)
// entry 0x800a02c


undefined4 FUN_0800a02c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  undefined4 in_lr;
  undefined4 local_24 [2];
  
  uVar3 = *(uint *)(param_1 + 0x5c) & 0xffff;
  if (*(char *)(DAT_0800a058 + DAT_0800a05c) == '\0') {
    *DAT_0800a158 = *DAT_0800a158 & ~(ushort)(uVar3 << 8);
  }
  else {
    *DAT_0800a060 = (ushort)(uVar3 << 8) | *DAT_0800a060;
  }
  iVar1 = DAT_0800a15c;
  if (*(short *)(DAT_0800a160 + DAT_0800a15c) != 0) {
    puVar5 = (ushort *)((uVar3 >> 4) * 2 + DAT_0800a16c);
    FUN_08128be0(*DAT_0800a164 + DAT_0800a168,(*puVar5 & 0x1f00) * 8 + 0x6000000,0x200);
    local_24[0] = 0;
    FUN_08128be0(local_24,(*puVar5 & 0x1f00) * 8 + DAT_0800a170,0x1000200);
  }
  iVar2 = *(int *)(DAT_0800a174 + iVar1);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar1 + DAT_0800a178) = *(undefined4 *)(iVar2 + 0x54);
    *(undefined4 *)(iVar1 + DAT_0800a17c) = *(undefined4 *)(iVar2 + 0x58);
    iVar4 = DAT_0800a184;
    if ((*(uint *)((uint)(*(byte *)(iVar2 + 0x1d) >> 5) * 4 + DAT_0800a180) &
        1 << (*(byte *)(iVar2 + 0x1d) & 0x1f)) != 0) {
      *(undefined2 *)(DAT_0800a184 + DAT_0800a188) = 0x180;
      *(undefined2 *)(iVar4 + DAT_0800a18c) = 0x20;
    }
  }
  iVar2 = DAT_0800a190;
  iVar4 = (uVar3 >> 4) * 4;
  *(short *)(iVar4 + DAT_0800a190) =
       ((short)*(undefined4 *)(param_1 + 0x34) -
       (short)((uint)*(undefined4 *)(iVar1 + DAT_0800a178) >> 8)) + 0x30 +
       (short)((uint)*(undefined4 *)(param_1 + 0x2c) >> 8);
  *(short *)(iVar4 + iVar2 + 2) =
       ((short)*(undefined4 *)(param_1 + 0x38) -
       (short)((uint)*(undefined4 *)(iVar1 + DAT_0800a17c) >> 8)) + 0x90 +
       (short)((uint)*(undefined4 *)(param_1 + 0x30) >> 8);
  return in_lr;
}


