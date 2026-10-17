// undefined FUN_0805a344(void)
// entry 0x805a344


undefined4 FUN_0805a344(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_0805a3a0);
    FUN_0801cf00(param_1,DAT_0805a3a4);
    *(undefined1 *)(param_1 + 0xbd) = 1;
    bVar1 = bVar1 >> 4 & 1 ^ 1;
    *(byte *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    FUN_0805bf8c(param_1);
  }
  return in_lr;
}


