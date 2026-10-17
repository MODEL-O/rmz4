// undefined FUN_0801bf54(void)
// entry 0x801bf54


undefined4 FUN_0801bf54(int param_1)

{
  undefined4 in_lr;
  
  FUN_08002b10(0x76);
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x12) = 8;
  *(undefined2 *)(DAT_0801bf80 + 2) = 0x1000;
  *(char *)(DAT_0801bf84 + DAT_0801bf88) = *(char *)(DAT_0801bf84 + DAT_0801bf88) + '\x01';
  return in_lr;
}


