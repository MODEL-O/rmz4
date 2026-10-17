// undefined FUN_0809bb30(void)
// entry 0x809bb30


undefined4 FUN_0809bb30(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  uVar7 = (uint)*(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809bb90);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  bVar3 = *(byte *)(uVar7 + DAT_0809bb94);
  if (bVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar3 = bVar3 & 1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  pbVar4 = (byte *)(param_1 + 0x4a);
  *pbVar4 = *pbVar4 & 0xef | bVar3 << 4;
  bVar3 = *(byte *)(uVar7 + DAT_0809bbd0);
  if (bVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar3 = bVar3 & 1;
  *(byte *)(param_1 + 0x4d) = bVar3;
  *pbVar4 = *pbVar4 & 0xdf | bVar3 << 5;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar6 + 0x1c);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,*(undefined4 *)*DAT_0809bc50,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar5 = 0;
  do {
    FUN_0809baa8(param_1,param_1 + 0x54,uVar7,uVar5 & 0xff);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 5);
  FUN_0809bd58(param_1);
  return in_lr;
}


