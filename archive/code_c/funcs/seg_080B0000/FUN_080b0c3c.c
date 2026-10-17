// undefined FUN_080b0c3c(void)
// entry 0x80b0c3c


undefined4 FUN_080b0c3c(int param_1)

{
  undefined4 in_lr;
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0xb4) != '\0';
  if (bVar1) {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + DAT_080b0c78;
  }
  else {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 0xa00;
  }
  *(char *)(param_1 + 0xb4) = !bVar1;
  *(undefined1 *)(param_1 + 0x13) = 0xff;
  return in_lr;
}


