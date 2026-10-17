// undefined FUN_08002d24(void)
// entry 0x8002d24


void FUN_08002d24(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_20;
  undefined4 local_1c;
  
  local_20 = 0;
  FUN_08128be0(&local_20,param_1 + 8,0x1000000);
  local_1c = 0;
  FUN_08128be4(&local_1c,param_1 + 8,DAT_08002d8c);
  FUN_08002c94(param_1,DAT_08002d90);
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf3 | 8;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) | 0x13;
  return;
}


