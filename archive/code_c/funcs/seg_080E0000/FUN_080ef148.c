// undefined FUN_080ef148(void)
// entry 0x80ef148


undefined4 FUN_080ef148(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = 0x700;
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  FUN_0801cff0(param_1);
  return in_lr;
}


