// undefined FUN_080c7388(void)
// entry 0x80c7388


undefined4 FUN_080c7388(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10) >> 4;
  bVar7 = bVar2 & 1;
  bVar1 = *(byte *)(param_1 + 0x11);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c73ec);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xb4) = 6;
  puVar4 = (undefined4 *)(param_1 + 0x54);
  iVar6 = 1;
  do {
    puVar4[2] = *puVar4;
    puVar4[3] = puVar4[1];
    puVar4 = puVar4 + 2;
    iVar6 = iVar6 + -1;
  } while (-1 < iVar6);
  FUN_0801cc9c(param_1);
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar7 << 4;
  FUN_0801cf00(param_1,DAT_080c7460);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c7464,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar5 = bVar1 - 1;
  if (uVar5 != 0) {
    FUN_080c7220(param_1,param_1 + 0x54,uVar5 & 0xff);
  }
  FUN_080c7468(param_1);
  return in_lr;
}


