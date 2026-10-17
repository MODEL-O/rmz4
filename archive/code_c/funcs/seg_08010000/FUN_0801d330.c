// undefined FUN_0801d330(void)
// entry 0x801d330


undefined4 FUN_0801d330(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0801d38c;
  if ((*(byte *)(param_1 + 0xb) & 4) != 0) {
    iVar1 = DAT_0801d348;
  }
  uVar2 = (uint)*(ushort *)((uint)*(byte *)(param_1 + 0x1e) * 2 + iVar1) +
          (uint)*(byte *)(param_1 + 0x22) & 0xffff;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf | (byte)(uVar2 << 4);
  *(char *)(param_1 + 0x23) = (char)uVar2;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xdf;
  return in_lr;
}


