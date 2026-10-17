// undefined FUN_08031150(void)
// entry 0x8031150


undefined4 FUN_08031150(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_080311d4) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    FUN_0801cfc8(param_1,DAT_080311d4,1,4);
  }
  pcVar4 = (char *)(param_1 + 0x13c);
  if ((*pcVar4 != '\0') && (*pcVar4 = *pcVar4 + -1, (*(uint *)(param_1 + 600) & 4) != 0)) {
    FUN_08002b10(8);
    *pcVar4 = '\0';
    sVar1 = FUN_08038790(param_1);
    *(int *)(param_1 + 0x5c) = (int)sVar1;
    if (*(int *)(param_1 + 0x108) == 0) {
      uVar2 = FUN_080d2690(param_1);
      *(undefined4 *)(param_1 + 0x108) = uVar2;
    }
  }
  if (*(int *)(param_1 + 0x11c) == 0) {
    if ((*(uint *)(param_1 + 600) & 0x20) == 0) {
      if ((*(uint *)(param_1 + 600) & 0x10) == 0) {
        sVar1 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x5c);
        if (iVar3 < 0) {
          iVar3 = -iVar3;
        }
        sVar1 = (short)iVar3;
        *(undefined1 *)(param_1 + 0x4c) = 1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x5c);
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      sVar1 = -(short)iVar3;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    }
  }
  else {
    sVar1 = (short)*(int *)(param_1 + 0x11c);
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + (int)sVar1;
  iVar3 = DAT_080312e8;
  pbVar5 = (byte *)(param_1 + 0x174);
  sVar1 = FUN_0802b7f0(param_1,(uint)*pbVar5 * 8 + DAT_080312e8,0);
  if (sVar1 != 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  sVar1 = FUN_0802b7f0(param_1,(uint)*pbVar5 * 8 + iVar3,1);
  if (sVar1 != 0) {
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar1 = FUN_0803851c(param_1);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar1;
  sVar1 = FUN_0802bfe8(param_1,(uint)*pbVar5 * 8 + iVar3,0);
  if (sVar1 == 0) {
    sVar1 = FUN_0802c2d4(param_1,(uint)*pbVar5 * 8 + iVar3,1);
  }
  if ((0 < *(int *)(param_1 + 0x60)) || (sVar1 != 0)) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


