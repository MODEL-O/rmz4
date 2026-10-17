// undefined FUN_08032528(void)
// entry 0x8032528


undefined4 FUN_08032528(int param_1)

{
  int iVar1;
  short sVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + DAT_08032598) = 1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar1 = DAT_0803259c;
  pbVar3 = (byte *)(param_1 + 0x174);
  FUN_0802b7f0(param_1,(uint)*pbVar3 * 8 + DAT_0803259c,0);
  FUN_0802b7f0(param_1,(uint)*pbVar3 * 8 + iVar1,1);
  FUN_0802baf0(param_1,(uint)*pbVar3 * 8 + iVar1,0);
  sVar2 = FUN_0802c2d4(param_1,(uint)*pbVar3 * 8 + iVar1,0);
  if (sVar2 == 0) {
    *(undefined1 *)(param_1 + 0xf) = 2;
  }
  return in_lr;
}


