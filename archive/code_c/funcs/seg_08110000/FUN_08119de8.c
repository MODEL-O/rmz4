// undefined FUN_08119de8(void)
// entry 0x8119de8


undefined4 FUN_08119de8(int param_1)

{
  undefined2 *puVar1;
  undefined4 in_lr;
  
  *DAT_08119e14 = 0;
  puVar1 = DAT_08119e18;
  *DAT_08119e18 = 0;
  *(undefined1 *)(puVar1 + 7) = 0xff;
  *(undefined1 *)(param_1 + 0xdd1) = 1;
  FUN_08002624(*(byte *)(param_1 + 0xdd0) + 0x14);
  FUN_08002624(0x43);
  return in_lr;
}


