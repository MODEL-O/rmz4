// undefined FUN_0801d390(void)
// entry 0x801d390


ulonglong FUN_0801d390(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0801d3cc;
  if ((*(byte *)(param_1 + 0xb) & 4) != 0) {
    iVar1 = DAT_0801d3a8;
  }
  return CONCAT44(in_lr,(uint)*(ushort *)((uint)*(byte *)(param_1 + 0x1e) * 2 + iVar1) +
                        (uint)*(byte *)(param_1 + 0x22)) & 0xffffffff000000ff;
}


