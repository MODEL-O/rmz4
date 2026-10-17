// undefined FUN_080d8570(void)
// entry 0x80d8570


undefined4 FUN_080d8570(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0x11);
  uVar5 = bVar2 & 1;
  bVar6 = bVar2 >> 1 & 1;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d85d4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(uint *)(param_1 + 0x5c) = (uVar5 * -2 + 1) * 0x60;
  *(uint *)(param_1 + 100) = (uVar5 * 2 + -1) * 4;
  *(undefined1 *)(param_1 + 0x12) = 0x18;
  *(char *)(param_1 + 0x74) = (char)uVar5;
  FUN_0801cc9c(param_1);
  FUN_0801cf00(param_1,DAT_080d85d8);
  if ((bVar2 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar5;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | (byte)(uVar5 << 4);
  if ((bVar2 >> 1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4d) = bVar6;
  *pbVar4 = *pbVar4 & 0xdf | bVar6 << 5;
  FUN_080d8710(param_1);
  return in_lr;
}


