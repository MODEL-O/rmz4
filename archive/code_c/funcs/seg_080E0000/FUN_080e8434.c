// undefined FUN_080e8434(void)
// entry 0x80e8434


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080e8434(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  undefined4 local_24 [4];
  
  local_24[0] = *DAT_080e84bc;
  local_24[1] = DAT_080e84bc[1];
  local_24[2] = 0;
  local_24[3] = 0;
  bVar1 = *(byte *)(param_1 + 0x10);
  uVar4 = DAT_080e84c4 * *DAT_080e84c0 + DAT_080e84c8;
  uVar5 = (uVar4 & 0x7fffffff) >> 0x10 & 1;
  uVar4 = DAT_080e84c4 * (uVar4 & 0x7fffffff) + DAT_080e84c8;
  *DAT_080e84c0 = uVar4 & 0x7fffffff;
  uVar4 = (uVar4 & 0x7fffffff) >> 0x10 & 1;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e84cc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x60) = local_24[bVar1];
  *(undefined4 *)(param_1 + 0x68) = local_24[bVar1 + 2];
  *(undefined1 *)(param_1 + 0x12) = 0x10;
  FUN_0801cc9c(param_1);
  if (uVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  pbVar3 = (byte *)(param_1 + 0x4a);
  *pbVar3 = *pbVar3 & 0xef | (byte)(uVar5 << 4);
  if (uVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4d) = (char)uVar4;
  *pbVar3 = *pbVar3 & 0xdf | (byte)(uVar4 << 5);
  FUN_0801cf00(param_1,_FUN_080e8538);
  FUN_080e853c(param_1);
  return in_lr;
}


