// undefined FUN_080ecbf8(void)
// entry 0x80ecbf8


undefined4 FUN_080ecbf8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x2f00);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080ecc64;
  *(undefined1 *)(param_1 + 0x12) = 0x78;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ecc68);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080ecc6c(param_1);
  return in_lr;
}


