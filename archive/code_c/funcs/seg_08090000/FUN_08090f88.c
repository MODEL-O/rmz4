// undefined FUN_08090f88(void)
// entry 0x8090f88


undefined4 FUN_08090f88(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  FUN_0801cd28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x3c00);
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  bVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  *(undefined1 *)(param_1 + 0x25) = 0xf;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + 0x400;
    iVar2 = -(int)*(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_0809108c);
  }
  else {
    *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + DAT_08091010;
    iVar2 = (int)*(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_08091014);
  }
  *(int *)(param_1 + 0x5c) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + DAT_08091090;
  *(int *)(param_1 + 0x60) = -(int)*(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_08091094);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08091098,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0809109c;
  *(undefined1 *)(param_1 + 0xbe) = 2;
  *(undefined1 *)(param_1 + 0xbd) = 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0xbf) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  return in_lr;
}


