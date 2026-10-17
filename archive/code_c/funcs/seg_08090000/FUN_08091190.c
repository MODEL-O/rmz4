// undefined FUN_08091190(void)
// entry 0x8091190


undefined4 FUN_08091190(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080911dc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080911e0);
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  bVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef | bVar4 << 4;
  bVar1 = *(byte *)(iVar6 + 10) >> 5;
  bVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4d) = bVar4;
  *pbVar5 = *pbVar5 & 0xdf | bVar4 << 5;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar6 + 0x1c);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = 0x80;
    uVar3 = 0xfffffffe;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xffffff80;
    uVar3 = 2;
  }
  *(undefined4 *)(param_1 + 100) = uVar3;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return in_lr;
}


