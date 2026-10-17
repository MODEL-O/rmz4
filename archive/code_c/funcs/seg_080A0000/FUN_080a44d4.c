// undefined FUN_080a44d4(void)
// entry 0x80a44d4


undefined4 FUN_080a44d4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0802ab88(0,0xf,param_1 + 0x54);
  if (*(ushort *)(DAT_080a4514 + 0xc) <= DAT_080a4518) {
    *(ushort *)(DAT_080a4514 + 0xc) = *(ushort *)(DAT_080a4514 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a451c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


