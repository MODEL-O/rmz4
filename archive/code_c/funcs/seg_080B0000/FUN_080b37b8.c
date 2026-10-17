// undefined FUN_080b37b8(void)
// entry 0x80b37b8


undefined4 FUN_080b37b8(int param_1)

{
  undefined1 uVar1;
  undefined4 in_lr;
  bool bVar2;
  
  bVar2 = *(char *)(param_1 + 0xb4) != '\0';
  if (bVar2) {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + DAT_080b37f4;
  }
  else {
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + 0x2c00;
  }
  *(char *)(param_1 + 0xb4) = !bVar2;
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar1 = 0xfe;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x12) = uVar1;
  return in_lr;
}


