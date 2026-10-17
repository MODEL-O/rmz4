// undefined FUN_0803d7a8(void)
// entry 0x803d7a8


undefined4 FUN_0803d7a8(int param_1)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  bVar3 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar5 + 0x54) - (int)*(short *)(*(char *)(iVar5 + 0x71) * 4 + DAT_0803d850);
    iVar4 = DAT_0803d850;
  }
  else {
    iVar2 = *(int *)(iVar5 + 0x54) + (int)*(short *)(*(char *)(iVar5 + 0x71) * 4 + DAT_0803d814);
    iVar4 = DAT_0803d814;
  }
  *(int *)(param_1 + 0x54) = iVar2;
  *(int *)(param_1 + 0x58) =
       *(int *)(iVar5 + 0x58) + (int)*(short *)(*(char *)(iVar5 + 0x71) * 4 + iVar4 + 2);
  return in_lr;
}


