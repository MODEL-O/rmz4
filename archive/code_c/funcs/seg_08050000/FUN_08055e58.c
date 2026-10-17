// undefined FUN_08055e58(void)
// entry 0x8055e58


undefined4 FUN_08055e58(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    FUN_08005784(param_1 + 0x74,DAT_08055ed4);
    *(undefined1 *)(param_1 + 0x12) = 0x30;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    iVar4 = FUN_08059844(param_1);
    *(int *)(param_1 + 0x54) = iVar4;
    iVar5 = *DAT_08055ed8;
    *(bool *)(param_1 + 0x4c) = iVar4 < *(int *)(iVar5 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar5 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(undefined1 *)(param_1 + 0xd) = 0xd;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


