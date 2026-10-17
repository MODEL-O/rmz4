// undefined FUN_0805ffd8(void)
// entry 0x805ffd8


undefined4 FUN_0805ffd8(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 6;
    FUN_0801cf00(param_1,DAT_08060040);
    uVar4 = FUN_080de5d0(param_1);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    iVar5 = *DAT_08060044;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    FUN_08005784(param_1 + 0x74,DAT_08060068);
    uVar4 = DAT_0806006c;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar4 = 0x400;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = DAT_080600b8;
    *(undefined1 *)(param_1 + 0x12) = 0xc;
    FUN_08002b10(0x116);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 7;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


