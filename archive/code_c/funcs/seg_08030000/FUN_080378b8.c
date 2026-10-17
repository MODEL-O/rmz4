// undefined FUN_080378b8(void)
// entry 0x80378b8


undefined4 FUN_080378b8(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cf00(param_1,0x2c00);
  *(undefined1 *)(param_1 + DAT_080378ec) = 0;
  *(undefined1 *)(param_1 + 0x152) = 4;
  *(undefined1 *)(param_1 + 0x101) = 1;
  FUN_080378f0(param_1);
  return in_lr;
}


