// undefined FUN_08089690(void)
// entry 0x8089690


undefined4 FUN_08089690(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08089708 + (uint)*(byte *)(param_1 + 0xc0));
    FUN_08005784(param_1 + 0x74,
                 (uint)*(byte *)((uint)*(byte *)(param_1 + 0xc0) + DAT_0808970c) * 0x18 +
                 DAT_08089710);
    *(undefined1 *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = FUN_08129198(*(undefined1 *)(param_1 + 0x12),6);
  if (cVar1 == '\0') {
    if ((*(byte *)(DAT_08089714 + DAT_08089718) & 0xf) == 1) {
      FUN_080be240(param_1,param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1,1);
    }
    else {
      FUN_080be240(param_1,param_1 + 0x54,*(byte *)(param_1 + 10) >> 4 & 1,3);
    }
  }
  if ((*(byte *)(param_1 + 0x12) & 0x1f) == 0) {
    FUN_08002b10(0x13c);
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


