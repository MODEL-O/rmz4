// undefined FUN_08076bd0(void)
// entry 0x8076bd0


undefined4 FUN_08076bd0(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cc9c(param_1);
    FUN_0801ceec(param_1);
    FUN_0801cf00(param_1,DAT_08076c5c);
    FUN_08002b5c(0xdb);
    FUN_08005784(param_1 + 0x74,DAT_08076c60);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x2700;
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar4 = *DAT_08076c64;
  *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar4 + 0x54);
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar4 + 0x54);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 0x11;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


