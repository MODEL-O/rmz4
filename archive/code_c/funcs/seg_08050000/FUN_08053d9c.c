// undefined FUN_08053d9c(void)
// entry 0x8053d9c


undefined4 FUN_08053d9c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,0x2c00);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xbc) + DAT_08053de4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0) {
    *(undefined1 *)(param_1 + 0xe) = 1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


