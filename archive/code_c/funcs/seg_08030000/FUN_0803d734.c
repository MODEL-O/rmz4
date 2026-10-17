// undefined FUN_0803d734(void)
// entry 0x803d734


undefined4 FUN_0803d734(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  bVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar5 + 0x54);
    iVar3 = DAT_0803d7a0;
  }
  else {
    iVar2 = *(int *)(iVar5 + 0x54);
    iVar3 = 0x1100;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + DAT_0803d7a4;
  return in_lr;
}


