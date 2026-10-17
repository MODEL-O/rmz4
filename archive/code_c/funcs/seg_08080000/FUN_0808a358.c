// undefined FUN_0808a358(void)
// entry 0x808a358


undefined4 FUN_0808a358(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 10);
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        FUN_0801cf00(param_1,DAT_0808a3ec);
        bVar2 = bVar2 >> 4 & 1 ^ 1;
        if (bVar2 == 0) {
          bVar1 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar1 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar1;
        *(byte *)(param_1 + 0x4c) = bVar2;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      FUN_0801cff0(param_1);
      FUN_0808b1a4(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 4;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0808a3c4);
    FUN_08005784(param_1 + 0x74,(uint)*(byte *)(DAT_0808a3c8 + 2) * 0x18 + DAT_0808a3cc);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_0808b1a4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


