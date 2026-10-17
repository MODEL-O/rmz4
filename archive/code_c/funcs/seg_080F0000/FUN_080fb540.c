// undefined FUN_080fb540(void)
// entry 0x80fb540


undefined4 FUN_080fb540(int param_1)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xb4) == '\0') {
      FUN_0801cf00(param_1,DAT_080fb5e4);
    }
    else {
      FUN_0801cf00(param_1,DAT_080fb560);
    }
    FUN_08002b10(DAT_080fb5e8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  uVar2 = (uint)*(byte *)(param_1 + 0x71);
  pbVar3 = (byte *)(param_1 + 0xb4);
  if (*pbVar3 != 0) {
    uVar2 = 5 - uVar2 & 0xff;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + *(int *)(uVar2 * 4 + DAT_080fb5ec);
  if ((uVar2 - 1 & 0xff) < 4) {
    FUN_08005784(param_1 + 0x74,uVar2 * 0x48 + DAT_080fb5f0);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    bVar1 = *pbVar3;
    *pbVar3 = bVar1 ^ 1;
    *(bool *)(param_1 + 0xd) = (bVar1 ^ 1) != 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


