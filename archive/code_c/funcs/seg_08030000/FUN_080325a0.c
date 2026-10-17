// undefined FUN_080325a0(void)
// entry 0x80325a0


undefined4 FUN_080325a0(int param_1)

{
  int iVar1;
  short sVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar1 = DAT_08032654;
  pbVar3 = (byte *)(param_1 + 0x174);
  sVar2 = FUN_0802b7f0(param_1,(uint)*pbVar3 * 8 + DAT_08032654,0);
  if (sVar2 != 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  sVar2 = FUN_0802b7f0(param_1,(uint)*pbVar3 * 8 + iVar1,1);
  if (sVar2 != 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  FUN_0802bfe8(param_1,(uint)*pbVar3 * 8 + iVar1,0);
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + *(int *)(param_1 + 0x130);
  *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + *(int *)(param_1 + 0x134);
  if ((((*(byte *)(param_1 + 0x142) & 0x10) == 0) &&
      (sVar2 = FUN_0802baf0(param_1,(uint)*pbVar3 * 8 + iVar1,1), sVar2 != 0)) &&
     (sVar2 = FUN_0802c2d4(param_1,(uint)*pbVar3 * 8 + iVar1,0), sVar2 != 0)) {
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  else {
    sVar2 = FUN_0803851c(param_1);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar2;
    sVar2 = FUN_080385dc(param_1);
    if ((int)sVar2 < *(int *)(param_1 + 0x60)) {
      sVar2 = FUN_080385dc(param_1);
      *(int *)(param_1 + 0x60) = (int)sVar2;
    }
  }
  return in_lr;
}


