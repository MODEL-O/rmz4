// undefined FUN_0801d134(void)
// entry 0x801d134


undefined4 FUN_0801d134(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  FUN_08003518(param_1 + 0x6c);
  bVar1 = *(byte *)(*(char *)(param_1 + 0x71) * 2 +
                   *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x4e) = bVar1;
  if ((*(byte *)(param_1 + 0xb) & 4) != 0) {
    iVar2 = *(int *)((uint)*(byte *)(param_1 + 0x1e) * 4 + DAT_0801d1e4);
    if (*(int *)(param_1 + 0x3c) != iVar2) {
      *(int *)(param_1 + 0x3c) = iVar2;
    }
    bVar1 = *(byte *)((uint)bVar1 * 4 + iVar2 + 3);
    if (bVar1 != (*(byte *)(param_1 + 0x1f) & 0x7f)) {
      *(byte *)(param_1 + 0x1f) = bVar1 | 0x80;
      iVar2 = (uint)*(byte *)(param_1 + 0x1e) * 2;
      uVar3 = (uint)*(ushort *)(iVar2 + DAT_0801d1ec) + (uint)*(byte *)(param_1 + 0x22) & 0xffff;
      *(ushort *)(param_1 + 0x48) =
           (ushort)DAT_0801d1f0 & *(ushort *)(param_1 + 0x48) |
           *(short *)(iVar2 + DAT_0801d1e8) + *(short *)(param_1 + 0x20) & 0x3ffU;
      if ((*(byte *)(param_1 + 0xb) & 0x20) == 0) {
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | (byte)(uVar3 << 4);
        *(char *)(param_1 + 0x23) = (char)uVar3;
      }
    }
  }
  return in_lr;
}


