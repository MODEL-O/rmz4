// undefined FUN_08060dec(void)
// entry 0x8060dec


undefined4 FUN_08060dec(int param_1)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xd0) = 0x18;
    FUN_0801cf00(param_1,DAT_08060e4c);
    iVar3 = *DAT_08060e50;
    *(bool *)(param_1 + 0x4c) = *(int *)(param_1 + 0x54) < *(int *)(iVar3 + 0x54);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(iVar3 + 0x54);
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    FUN_08002b10(0x11c);
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0xf) == '\0') && ('\x06' < *(char *)(param_1 + 0x71))) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0x54);
      iVar3 = DAT_08060ee4;
    }
    else {
      local_10 = *(int *)(param_1 + 0x54);
      iVar3 = 0xc00;
    }
    local_10 = local_10 + iVar3;
    local_c = *(int *)(param_1 + 0x58) + DAT_08060ee8;
    FUN_08099e6c(&local_10,3,*(byte *)(param_1 + 10) >> 4 & 1,0);
    FUN_08002b10(0x13a);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0x19;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


