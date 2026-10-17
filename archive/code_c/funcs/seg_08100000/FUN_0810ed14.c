// undefined FUN_0810ed14(void)
// entry 0x810ed14


undefined4 FUN_0810ed14(undefined4 param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(DAT_0810edc8 + 4);
  iVar3 = (*(short *)((param_2 & 0xff) * 2 + DAT_0810edc4) * 7 >> 3) + 7 >> 3;
  *(ushort *)(DAT_0810edcc + 4) = (short)iVar3 * 8 + 0xcU & 0xff | 0x400;
  if (iVar3 != 0) {
    FUN_08000ab4(DAT_0810edd0,iVar2 + DAT_0810edd4,iVar3 * 2);
    FUN_08000ab4(DAT_0810edd8,iVar2 + DAT_0810eddc,iVar3 * 2);
  }
  sVar1 = (short)DAT_0810ede0;
  *(short *)(iVar2 + 0x400) = sVar1;
  *(short *)(iVar2 + 0x440) = sVar1 + 1;
  *(short *)(iVar2 + 0x480) = sVar1 + 2;
  *(short *)(iVar2 + 0x4c0) = sVar1 + 3;
  iVar2 = iVar3 * 2 + iVar2;
  sVar1 = (short)DAT_0810ede4;
  *(short *)(iVar2 + 0x402) = sVar1;
  *(short *)(iVar2 + DAT_0810ede8) = sVar1 + 1;
  *(short *)(iVar2 + DAT_0810edec) = sVar1 + 2;
  *(undefined2 *)(iVar2 + DAT_0810eddc) = 0x6d0;
  return in_lr;
}


