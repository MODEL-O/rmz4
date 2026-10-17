// undefined FUN_08053de8(void)
// entry 0x8053de8


undefined4 FUN_08053de8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x2c00);
    *(undefined4 *)(param_1 + 0x60) = 0x800;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb8) + DAT_08053e38;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  if (*(int *)(param_1 + 0x68) <= iVar1) {
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


