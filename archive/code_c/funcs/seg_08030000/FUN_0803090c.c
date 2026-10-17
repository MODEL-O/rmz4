// undefined FUN_0803090c(void)
// entry 0x803090c


undefined4 FUN_0803090c(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + DAT_08030928) == '\x01') || (*(char *)(param_1 + DAT_08030928) == '\x03')
     ) {
    FUN_0801cf00(param_1,DAT_0803092c);
  }
  else {
    uVar1 = FUN_0802b7d8(param_1);
    FUN_0801cf00(param_1,uVar1);
  }
  if (*(int *)(param_1 + 0x108) != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x11) = 1;
    *(undefined4 *)(param_1 + 0x108) = 0;
  }
  *(undefined1 *)(param_1 + 0xf) = 1;
  FUN_08030964(param_1);
  return in_lr;
}


