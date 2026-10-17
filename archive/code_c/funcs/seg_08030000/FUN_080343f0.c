// undefined FUN_080343f0(void)
// entry 0x80343f0


undefined4 FUN_080343f0(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_08034418) == '\0') {
    *(undefined1 *)(param_1 + 0x100) = 0;
    uVar1 = FUN_0802b7d8(param_1);
    FUN_0801cf00(param_1,uVar1);
  }
  else {
    *(undefined1 *)(param_1 + DAT_0803441c) = 1;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08034440(param_1);
  }
  return in_lr;
}


