// undefined FUN_080897e4(void)
// entry 0x80897e4


undefined4 FUN_080897e4(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08089864 + (uint)*(byte *)(param_1 + 0xc0));
    FUN_08005784(param_1 + 0x74,
                 (uint)*(byte *)((uint)*(byte *)(param_1 + 0xc0) + DAT_08089868) * 0x18 +
                 DAT_0808986c);
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  if ((*(char *)(param_1 + 0x12) != '\0') &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
    return in_lr;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    if (0 < *(int *)(*DAT_08089870 + 0x54) - *(int *)(param_1 + 0x54)) {
LAB_08089882:
      uVar2 = 2;
      goto LAB_08089890;
    }
  }
  else if (*(int *)(*DAT_08089888 + 0x54) - *(int *)(param_1 + 0x54) < 0) goto LAB_08089882;
  uVar2 = 1;
LAB_08089890:
  *(undefined1 *)(param_1 + 0xd) = uVar2;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return in_lr;
}


