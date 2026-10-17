// undefined FUN_0809bc54(void)
// entry 0x809bc54


undefined4 FUN_0809bc54(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
  bVar4 = *(byte *)(param_1 + 0x11);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809bcb4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xb4) = 1;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  bVar2 = *(byte *)((uint)bVar4 + DAT_0809bcb8);
  if (bVar2 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar2 = bVar2 & 1;
  *(byte *)(param_1 + 0x4c) = bVar2;
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef | bVar2 << 4;
  bVar4 = *(byte *)((uint)bVar4 + DAT_0809bcf4);
  if (bVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar4 = bVar4 & 1;
  *(byte *)(param_1 + 0x4d) = bVar4;
  *pbVar5 = *pbVar5 & 0xdf | bVar4 << 5;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar6 + 0x1c);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,*(undefined4 *)*DAT_0809bd54,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_0809bd58(param_1);
  return in_lr;
}


