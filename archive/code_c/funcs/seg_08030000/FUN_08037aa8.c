// undefined FUN_08037aa8(void)
// entry 0x8037aa8


undefined4 FUN_08037aa8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = DAT_08037ae4;
  FUN_0803a3b0(param_1,DAT_08037ae4);
  FUN_0803a3f0(param_1,uVar1);
  if (*(char *)(param_1 + DAT_08037ae8) == '\x02') {
    *(undefined1 *)(param_1 + DAT_08037aec) = 2;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08037af0(param_1);
  }
  return in_lr;
}


