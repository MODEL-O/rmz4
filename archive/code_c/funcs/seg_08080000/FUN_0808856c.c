// undefined FUN_0808856c(void)
// entry 0x808856c


undefined4 FUN_0808856c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080885c0);
    FUN_0801cf00(param_1,DAT_080885c4);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801d1f4(param_1);
  if ((*(char *)(param_1 + 0x12) != '\0') && (iVar2 = FUN_08088c9c(param_1), iVar2 != 0)) {
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    if (*(char *)(param_1 + 0x12) == '\0') {
      bVar1 = *(byte *)(param_1 + 10) & 0x20;
      if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
        *(undefined1 *)(param_1 + 0xd) = 7;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 8;
      *(byte *)(param_1 + 0xe) = bVar1;
    }
    else {
      *(undefined1 *)(param_1 + 0xe) = 1;
      bVar1 = 0;
    }
    *(byte *)(param_1 + 0xf) = bVar1;
  }
  return in_lr;
}


