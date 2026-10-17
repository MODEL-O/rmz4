// undefined FUN_08031dbc(void)
// entry 0x8031dbc


undefined4 FUN_08031dbc(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x174) = 2;
  iVar4 = DAT_08031df4;
  uVar3 = FUN_0802c24c(param_1,DAT_08031df4 + 0x10,0);
  if ((uVar3 & 0x10) == 0) {
    if ((*(uint *)(param_1 + 600) & 0x10) != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x100;
    }
    if ((*(uint *)(param_1 + 600) & 0x20) != 0) {
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + DAT_08031e78;
    }
    FUN_0802b7f0(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + iVar4,0);
    sVar2 = FUN_08038640(param_1);
    iVar4 = (int)sVar2;
    *(int *)(param_1 + 0x60) = iVar4;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar4;
    if (iVar4 == 0) {
      *(char *)(param_1 + 0x10c) = (char)sVar2;
      if ((CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == 0x500) &&
         ('\x03' < *(char *)(param_1 + 0x71))) {
        FUN_0801cfc8(param_1,0x500,5,2);
      }
    }
    else {
      pcVar5 = (char *)(param_1 + 0x10c);
      cVar1 = *pcVar5;
      *pcVar5 = cVar1 + -1;
      if ((char)(cVar1 + -1) == -1) {
        *pcVar5 = '\x04';
        FUN_080d1d60(param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1);
        FUN_08002b10(9);
      }
    }
    iVar4 = DAT_08031ef4;
    sVar2 = FUN_0802baf0(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + DAT_08031ef4,1);
    if ((sVar2 != 0) &&
       (sVar2 = FUN_0802c2d4(param_1,(uint)*(byte *)(param_1 + 0x174) * 8 + iVar4,0), sVar2 != 0)) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      FUN_08002b10(7);
    }
  }
  else {
    FUN_08038988(param_1);
    FUN_08032278(param_1);
  }
  return in_lr;
}


