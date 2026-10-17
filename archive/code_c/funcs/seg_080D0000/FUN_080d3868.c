// undefined FUN_080d3868(void)
// entry 0x80d3868


undefined4 FUN_080d3868(int param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x22) = 1;
  FUN_0801cc9c(param_1);
  uVar3 = *DAT_080d38a0 * DAT_080d38a4 + DAT_080d38a8;
  *DAT_080d38a0 = uVar3 & 0x7fffffff;
  uVar3 = (uVar3 & 0x7fffffff) >> 0x10 & 1;
  if (uVar3 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef | (byte)(uVar3 << 4);
  puVar1 = DAT_080d38f4;
  uVar3 = *DAT_080d38f4 * DAT_080d38f8 + DAT_080d38fc;
  *DAT_080d38f4 = uVar3 & 0x7fffffff;
  uVar3 = (uVar3 & 0x7fffffff) >> 0x10 & 1;
  if (uVar3 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4d) = (char)uVar3;
  *pbVar5 = *pbVar5 & 0xdf | (byte)(uVar3 << 5);
  uVar3 = *puVar1 * DAT_080d3944 + DAT_080d3948;
  *puVar1 = uVar3 & 0x7fffffff;
  if (((uVar3 & 0x7fffffff) >> 0x10 & 3) == 0) {
    FUN_0801cf00(param_1,DAT_080d394c);
  }
  else {
    FUN_0801cf00(param_1,DAT_080d3980);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d3984);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_080d3988(param_1);
  return in_lr;
}


