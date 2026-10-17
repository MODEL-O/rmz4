// undefined FUN_080fb308(void)
// entry 0x80fb308


undefined4 FUN_080fb308(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb5) == '\0') {
    FUN_080e3110(param_1 + 100,(*(uint *)(param_1 + 0x8c) & 0x10000) == 0,0);
  }
  else {
    FUN_080e3110(param_1 + 100,2,0);
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  if (*(ushort *)(DAT_080fb38c + 0xc) <= DAT_080fb390) {
    *(ushort *)(DAT_080fb38c + 0xc) = *(ushort *)(DAT_080fb38c + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  FUN_0802ab88(2,0x1f,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fb394);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


