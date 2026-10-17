// undefined FUN_080c9860(void)
// entry 0x80c9860


undefined4 FUN_080c9860(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined4 in_lr;
  
  bVar5 = *(byte *)(param_1 + 0x11);
  bVar1 = *(byte *)(param_1 + 0xb4);
  FUN_08002b10(0x13c);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c98e0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar4 = DAT_080c98e4;
  iVar3 = *(short *)((bVar1 + 0x40 & 0xff) * 2 + DAT_080c98e4) * 0x280;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar3 >> 8;
  iVar4 = *(short *)((uint)bVar1 * 2 + iVar4) * 0x280;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar4 >> 8;
  FUN_0801cc9c(param_1);
  if (bVar5 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar5 = bVar5 & 1;
  *(byte *)(param_1 + 0x4c) = bVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
  FUN_0801cf00(param_1,0x5800);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c9944,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080c9948(param_1);
  return in_lr;
}


