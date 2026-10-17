// undefined FUN_08029ba8(void)
// entry 0x8029ba8


undefined4 FUN_08029ba8(undefined1 *param_1)

{
  undefined2 *puVar1;
  undefined4 in_lr;
  
  FUN_0802aa44();
  puVar1 = DAT_08029bd8;
  *DAT_08029bd8 = 0;
  *(undefined1 *)(puVar1 + 7) = 0xff;
  *DAT_08029bdc = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return in_lr;
}


