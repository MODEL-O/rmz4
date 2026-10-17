// undefined FUN_080d8638(void)
// entry 0x80d8638


undefined4 FUN_080d8638(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 0x11);
  uVar6 = bVar2 & 1;
  bVar1 = bVar2 >> 1;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d8674);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if ((bVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x5c) = (uVar6 * -2 + 1) * 0x40;
    uVar4 = DAT_080d86ac;
  }
  else {
    *(uint *)(param_1 + 0x5c) = (uVar6 * -2 + 1) * 0x40;
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  *(undefined1 *)(param_1 + 0x12) = 0xff;
  *(char *)(param_1 + 0x74) = (char)uVar6;
  FUN_0801cc9c(param_1);
  FUN_0801cf00(param_1,DAT_080d86b0);
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4c) = (char)uVar6;
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef | (byte)(uVar6 << 4);
  if ((bVar1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4d) = bVar1 & 1;
  *pbVar5 = *pbVar5 & 0xdf | (bVar1 & 1) << 5;
  FUN_080d8710(param_1);
  return in_lr;
}


