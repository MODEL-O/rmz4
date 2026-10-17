// undefined FUN_0807f6a4(void)
// entry 0x807f6a4


undefined4 FUN_0807f6a4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0807f704);
    FUN_08005784(param_1 + 0x74,DAT_0807f708);
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    FUN_08002b10(0x15c);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)(param_1 + 0xe) = 2;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0807f70c);
    FUN_0801cff0(param_1);
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0x13) = 0;
    FUN_080b4aec(param_1,0,0);
  }
  else {
    if (*(char *)(param_1 + 0xf) != '\x01') {
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) {
      return in_lr;
    }
    if (*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0x54)) {
      bVar3 = *(byte *)(param_1 + 0x13);
    }
    else {
      bVar3 = *(char *)(param_1 + 0x13) + 1;
    }
    uVar2 = FUN_080b3f44(param_1,bVar3 & 1,0);
    *(undefined4 *)(param_1 + 0xbc + (uint)*(byte *)(param_1 + 0x13) * 4) = uVar2;
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    cVar1 = *(char *)(param_1 + 0x13) + '\x01';
    *(char *)(param_1 + 0x13) = cVar1;
    if (cVar1 != '\x04') {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0807f77c);
    FUN_0801cff0(param_1);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  return in_lr;
}


