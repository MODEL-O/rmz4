// undefined FUN_08032a70(void)
// entry 0x8032a70


undefined4 FUN_08032a70(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 in_lr;
  
  bVar2 = FUN_080396a8();
  if (bVar2 != 0) {
    bVar3 = *(byte *)(param_1 + 0x95);
    if (bVar3 != 0xff) {
      if (bVar3 < bVar2) {
        bVar3 = 0;
      }
      else {
        bVar3 = bVar3 - bVar2;
      }
      *(byte *)(param_1 + 0x95) = bVar3;
      if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == 0x4b00) {
        FUN_0801cfc8(param_1,0x4a00,3,4);
      }
      else {
        FUN_0801cfc8(param_1,0x4b00,3,4);
      }
    }
  }
  pcVar5 = (char *)(param_1 + DAT_08032b00);
  if (*pcVar5 != '\0') {
    if (*(char *)(param_1 + 0x172) == '\0') {
      if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != 0x4b00) {
        FUN_0801cfc8(param_1,0x4b00,3,4);
      }
    }
    else if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != 0x4a00) {
      FUN_0801cfc8(param_1,0x4a00,3,4);
    }
    *pcVar5 = '\0';
  }
  iVar1 = DAT_08032be0;
  if ((*(char *)(param_1 + 0x95) == '\0') || ((*(uint *)(param_1 + 0x8c) & 0x400) == 0)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_08030e50(param_1);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x54);
    pbVar7 = (byte *)(param_1 + 0x174);
    FUN_0802b7f0(param_1,(uint)*pbVar7 * 8 + DAT_08032be0,0);
    FUN_0802b7f0(param_1,(uint)*pbVar7 * 8 + iVar1,1);
    if (iVar6 != *(int *)(param_1 + 0x54)) {
      FUN_0802bfe8(param_1,(uint)*pbVar7 * 8 + iVar1,0);
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    bVar2 = *(byte *)(param_1 + 0x142);
    if ((((bVar2 & 0x10) == 0) &&
        (sVar4 = FUN_0802baf0(param_1,(uint)*pbVar7 * 8 + iVar1,1), sVar4 != 0)) &&
       (sVar4 = FUN_0802c2d4(param_1,(uint)*pbVar7 * 8 + iVar1,0), sVar4 != 0)) {
      *(undefined1 *)(param_1 + 0xe) = 1;
      *(byte *)(param_1 + 0xf) = bVar2 & 0x10;
    }
    else {
      sVar4 = FUN_0803851c(param_1);
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + (int)sVar4;
      sVar4 = FUN_080385dc(param_1);
      if ((int)sVar4 < *(int *)(param_1 + 0x60)) {
        sVar4 = FUN_080385dc(param_1);
        *(int *)(param_1 + 0x60) = (int)sVar4;
      }
    }
  }
  return in_lr;
}


