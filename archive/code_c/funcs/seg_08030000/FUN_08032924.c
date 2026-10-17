// undefined FUN_08032924(void)
// entry 0x8032924


undefined4 FUN_08032924(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  short sVar4;
  char *pcVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + DAT_08032950) = 1;
  bVar2 = FUN_080396a8(param_1);
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
  pcVar5 = (char *)(param_1 + DAT_080329c4);
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
  iVar1 = DAT_08032a6c;
  if ((*(char *)(param_1 + 0x95) == '\0') || ((*(uint *)(param_1 + 0x8c) & 0x400) == 0)) {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    FUN_08030794(param_1);
  }
  else {
    pbVar6 = (byte *)(param_1 + 0x174);
    FUN_0802b7f0(param_1,(uint)*pbVar6 * 8 + DAT_08032a6c,0);
    FUN_0802b7f0(param_1,(uint)*pbVar6 * 8 + iVar1,1);
    FUN_0802baf0(param_1,(uint)*pbVar6 * 8 + iVar1,0);
    sVar4 = FUN_0802c2d4(param_1,(uint)*pbVar6 * 8 + iVar1,0);
    if (sVar4 == 0) {
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


