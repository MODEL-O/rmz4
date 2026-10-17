// undefined FUN_080df840(void)
// entry 0x80df840


undefined4 FUN_080df840(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_0801cf00(param_1,DAT_080df86c);
    FUN_080df71c(param_1,*(undefined1 *)(param_1 + 0x11));
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_080df7ac(param_1);
  return in_lr;
}


