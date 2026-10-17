// undefined FUN_08002e0c(void)
// entry 0x8002e0c


void FUN_08002e0c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_18 [2];
  
  local_18[0] = 0;
  FUN_08128be0(local_18,param_1,DAT_08002e60);
  FUN_08002c94(param_1,DAT_08002e64);
  *(byte *)(param_1 + 0x15) = *(byte *)(param_1 + 0x15) & 0xf3 | 8;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  *(undefined2 *)(param_1 + 0x1c) = 0x100;
  *(undefined2 *)(param_1 + 0x1e) = 0x100;
  *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfc | 0x11;
  return;
}


