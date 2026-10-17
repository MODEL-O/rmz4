// undefined FUN_08031c6c(void)
// entry 0x8031c6c


undefined4 FUN_08031c6c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  short sVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  iVar2 = DAT_08031d14;
  pbVar5 = (byte *)(param_1 + 0x174);
  FUN_0802b7f0(param_1,(uint)*pbVar5 * 8 + DAT_08031d14,0);
  FUN_0802b7f0(param_1,(uint)*pbVar5 * 8 + iVar2,1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  FUN_0802bfe8(param_1,(uint)*pbVar5 * 8 + iVar2,0);
  uVar4 = *(byte *)(param_1 + 0x142) & 0x10;
  if ((((*(byte *)(param_1 + 0x142) & 0x10) == 0) &&
      (sVar3 = FUN_0802baf0(param_1,(uint)*pbVar5 * 8 + iVar2,1), sVar3 != 0)) &&
     (sVar3 = FUN_0802c2d4(param_1,(uint)*pbVar5 * 8 + iVar2,0), sVar3 != 0)) {
    uVar1 = (undefined1)uVar4;
    *(undefined1 *)(param_1 + 0xd) = uVar1;
    *(undefined1 *)(param_1 + 0xe) = uVar1;
    *(undefined1 *)(param_1 + 0xf) = uVar1;
    *(undefined1 *)(param_1 + DAT_08031d18) = 8;
    *(undefined1 *)(param_1 + 0x102) = uVar1;
    *(uint *)(param_1 + 0x5c) = uVar4;
    *(byte *)(param_1 + DAT_08031d1c) = *(byte *)(param_1 + DAT_08031d1c) & 0xf7;
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


