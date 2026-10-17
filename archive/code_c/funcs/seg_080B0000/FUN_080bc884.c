// undefined FUN_080bc884(void)
// entry 0x80bc884


undefined4 FUN_080bc884(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb4) == '\0') {
    FUN_080bc984(param_1);
    FUN_0801cff0(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_080bca38(param_1);
  }
  return in_lr;
}


