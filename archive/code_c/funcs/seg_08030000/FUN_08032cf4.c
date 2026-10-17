// undefined FUN_08032cf4(void)
// entry 0x8032cf4


undefined4 FUN_08032cf4(int param_1)

{
  int iVar1;
  char cVar2;
  short sVar3;
  byte *pbVar4;
  uint *puVar5;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) | 0x10;
  puVar5 = (uint *)(param_1 + 600);
  if ((*puVar5 & 0x10) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x180;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
  }
  if ((*puVar5 & 0x20) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_08032e18;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  }
  iVar1 = DAT_08032e1c;
  pbVar4 = (byte *)(param_1 + 0x174);
  FUN_0802b7f0(param_1,(uint)*pbVar4 * 8 + DAT_08032e1c,0);
  FUN_0802b7f0(param_1,(uint)*pbVar4 * 8 + iVar1,1);
  if ((*puVar5 & 0x40) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_08032e18;
  }
  if ((*puVar5 & 0x80) != 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x180;
  }
  FUN_0802bfe8(param_1,(uint)*pbVar4 * 8 + iVar1,0);
  sVar3 = FUN_0802baf0(param_1,(uint)*pbVar4 * 8 + iVar1,1);
  if (sVar3 != 0) {
    FUN_0802c2d4(param_1,(uint)*pbVar4 * 8 + iVar1,0);
  }
  cVar2 = *(char *)(param_1 + DAT_08032e20) + -1;
  *(char *)(param_1 + DAT_08032e20) = cVar2;
  if ((cVar2 == -1) || ((*puVar5 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
    sVar3 = FUN_080386d4(param_1);
    *(int *)(param_1 + 0x5c) = (int)sVar3;
  }
  return in_lr;
}


