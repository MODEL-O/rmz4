// undefined FUN_08037804(void)
// entry 0x8037804


undefined4 FUN_08037804(int param_1)

{
  undefined4 in_lr;
  
  FUN_0803a3b0(param_1,0x2400);
  FUN_0803a3f0(param_1,0x2400);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    FUN_0801cfc8(param_1,0x500,4,1);
    *(undefined1 *)(param_1 + 0x100) = 0;
  }
  return in_lr;
}


