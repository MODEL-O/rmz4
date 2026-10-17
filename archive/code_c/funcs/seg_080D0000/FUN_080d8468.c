// undefined FUN_080d8468(void)
// entry 0x80d8468


undefined4 FUN_080d8468(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  undefined1 auStack_24 [4];
  undefined4 local_20 [2];
  
  FUN_08129258(auStack_24,DAT_080d8500,2);
  local_20[1] = DAT_080d8504[1];
  local_20[0] = *DAT_080d8504;
  uVar7 = (uint)*(byte *)(param_1 + 0x10);
  bVar2 = *(byte *)(param_1 + 0x11);
  uVar6 = bVar2 & 1;
  uVar8 = bVar2 >> 1 & 1;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d8508);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(uint *)(param_1 + 0x5c) = ((uVar6 + uVar7 & 1) * 2 + -1) * 0x40;
  uVar4 = uVar8 + 1 & 1;
  *(uint *)(param_1 + 0x60) = uVar4 * -0x300;
  *(undefined1 *)(param_1 + 0x12) = 0x3c;
  *(undefined1 *)(param_1 + 0x13) = 1;
  FUN_0801cc9c(param_1,uVar4,0);
  FUN_0801cf00(param_1,*(undefined2 *)(local_20 + uVar7));
  *(undefined1 *)(param_1 + 0x25) = auStack_24[uVar7];
  if ((bVar2 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar6;
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef | (byte)(uVar6 << 4);
  if ((bVar2 >> 1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(char *)(param_1 + 0x4d) = (char)uVar8;
  *pbVar5 = *pbVar5 & 0xdf | (byte)(uVar8 << 5);
  FUN_080d8710(param_1);
  return in_lr;
}


