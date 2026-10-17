// undefined FUN_0808a9e8(void)
// entry 0x808a9e8


undefined4 FUN_0808a9e8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,*(byte *)(param_1 + 0xc0) | 0x2000);
    FUN_08005784(param_1 + 0x74,
                 (uint)*(byte *)((uint)*(byte *)(param_1 + 0xc0) + DAT_0808aa84) * 0x18 +
                 DAT_0808aa88);
    *(undefined1 *)(param_1 + 0x12) = 8;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x73) == '\x03') &&
     ((*(char *)(param_1 + 0x12) == '\0' ||
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0'))))
  {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xc0) + '\x04';
    *(undefined1 *)(param_1 + 0xe) = 0;
    if (*(char *)(param_1 + 0xc1) == '\0') {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        if (*(int *)(*DAT_0808aa8c + 0x54) - *(int *)(param_1 + 0x54) < 1) {
          return in_lr;
        }
      }
      else if (-1 < *(int *)(*DAT_0808aab0 + 0x54) - *(int *)(param_1 + 0x54)) {
        return in_lr;
      }
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xc0) + '\x02';
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}


