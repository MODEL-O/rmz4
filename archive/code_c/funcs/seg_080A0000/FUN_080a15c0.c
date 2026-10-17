// undefined FUN_080a15c0(void)
// entry 0x80a15c0


undefined4 FUN_080a15c0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    FUN_0801cf00(param_1,DAT_080a15f8);
    *(undefined4 *)(param_1 + 0x60) = DAT_080a15fc;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  return in_lr;
}


