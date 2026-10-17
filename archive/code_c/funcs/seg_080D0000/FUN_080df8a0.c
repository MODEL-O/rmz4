// undefined FUN_080df8a0(void)
// entry 0x80df8a0


undefined4 FUN_080df8a0(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_0801cf00(param_1,DAT_080df8cc);
    FUN_080df71c(param_1,*(undefined1 *)(param_1 + 0x11));
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_080df7ac(param_1);
  return in_lr;
}


