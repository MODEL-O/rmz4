// undefined FUN_0801b78c(void)
// entry 0x801b78c


undefined4 FUN_0801b78c(int param_1)

{
  undefined2 *puVar1;
  undefined4 in_lr;
  
  puVar1 = DAT_0801b7b4;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_0801b7b4 = (short)DAT_0801b7b8;
    puVar1[1] = (short)DAT_0801b7bc;
    *(undefined4 *)(DAT_0801b7c0 + DAT_0801b7c4) = 0x55000;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return in_lr;
}


