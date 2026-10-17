// undefined FUN_08031b3c(void)
// entry 0x8031b3c


undefined4 FUN_08031b3c(int param_1)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 600) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 600) & 0x10) != 0) {
      *(undefined1 *)(param_1 + 0x4c) = 1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  iVar4 = *(int *)(param_1 + 0x5c);
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)(short)iVar4;
  iVar2 = DAT_08031c30;
  pbVar5 = (byte *)(param_1 + 0x174);
  FUN_0802b7f0(param_1,(uint)*pbVar5 * 8 + DAT_08031c30,0);
  FUN_0802b7f0(param_1,(uint)*pbVar5 * 8 + iVar2,1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  FUN_0802bfe8(param_1,(uint)*pbVar5 * 8 + iVar2,0);
  bVar1 = *(byte *)(param_1 + 0x142) & 0x10;
  if ((((*(byte *)(param_1 + 0x142) & 0x10) == 0) &&
      (sVar3 = FUN_0802baf0(param_1,(uint)*pbVar5 * 8 + iVar2,1), sVar3 != 0)) &&
     (sVar3 = FUN_0802c2d4(param_1,(uint)*pbVar5 * 8 + iVar2,0), sVar3 != 0)) {
    *(byte *)(param_1 + 0xd) = bVar1;
    *(byte *)(param_1 + 0xe) = bVar1;
    *(byte *)(param_1 + 0xf) = bVar1;
    *(int *)(param_1 + 0x5c) = (int)(short)iVar4;
    FUN_08002b10(7);
  }
  else {
    sVar3 = FUN_0803851c(param_1);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar3;
    sVar3 = FUN_080385dc(param_1);
    if ((int)sVar3 < *(int *)(param_1 + 0x60)) {
      sVar3 = FUN_080385dc(param_1);
      *(int *)(param_1 + 0x60) = (int)sVar3;
    }
  }
  return in_lr;
}


