// undefined FUN_080c4dcc(void)
// entry 0x80c4dcc


undefined4 FUN_080c4dcc(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  bVar4 = bVar1 & 1;
  uVar5 = (uint)*(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c4e14);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(uint *)(param_1 + 0x60) = uVar5 * 0x800 + DAT_080c4e18;
  FUN_0801cc9c(param_1);
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  pbVar3 = (byte *)(param_1 + 0x4a);
  *pbVar3 = *pbVar3 & 0xef | bVar4 << 4;
  if (uVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4d) = (char)(uVar5 & 1);
  *pbVar3 = *pbVar3 & 0xdf | (byte)((uVar5 & 1) << 5);
  FUN_0801cf00(param_1,DAT_080c4ea4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c4ea8,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080c4eac(param_1);
  return in_lr;
}


