// undefined FUN_08052438(void)
// entry 0x8052438


undefined4 FUN_08052438(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08052464);
    FUN_08005784(param_1 + 0x74,DAT_08052468);
    if (*(short *)(param_1 + 0xa4) < 0x21) {
      if (*(short *)(param_1 + 0xa4) < 0x11) {
        uVar2 = 0x20;
      }
      else {
        uVar2 = 0x28;
      }
    }
    else {
      uVar2 = 0x30;
    }
    *(undefined1 *)(param_1 + 0x12) = uVar2;
    if (*(char *)(param_1 + 0xe2) != '\0') {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    if ((*(ushort *)(DAT_080524e8 + 8) & 8) != 0) {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar5 = *DAT_080524ec;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar3;
  cVar4 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar4;
  if (cVar4 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 0x18;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


