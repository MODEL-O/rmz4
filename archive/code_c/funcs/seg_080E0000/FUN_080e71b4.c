// undefined FUN_080e71b4(void)
// entry 0x80e71b4


undefined4 FUN_080e71b4(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) != '\x02') {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080e71dc));
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


