// undefined FUN_080608a0(void)
// entry 0x80608a0


undefined4 FUN_080608a0(int param_1)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 0xe;
    FUN_0801cf00(param_1,DAT_08060900);
    iVar4 = *DAT_08060904;
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
    FUN_08002b10(DAT_08060940);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(undefined1 *)(param_1 + 0x12) = 6;
      *(undefined1 *)(param_1 + 0xf) = 1;
    }
  }
  else if (*(char *)(param_1 + 0xf) == '\x01') {
    cVar3 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar3;
    if (cVar3 == -1) {
      FUN_0801cf00(param_1,DAT_08060968);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0xf;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


