// undefined FUN_08102394(void)
// entry 0x8102394


undefined4 FUN_08102394(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,*(undefined2 *)(param_1 + 0xbe));
    uVar2 = *DAT_081023f0 * DAT_081023f4 + DAT_081023f8;
    *DAT_081023f0 = uVar2 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar2 >> 0x10) & 0x3f) + 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((*(int *)(param_1 + 0x5c) != 0) &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == -1)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


