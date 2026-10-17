// undefined FUN_080a1e0c(void)
// entry 0x80a1e0c


undefined4 FUN_080a1e0c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb6) == '\0') {
    FUN_080e1508(param_1 + 0x54,(*(uint *)(param_1 + 0x8c) & 0x10000) == 0,0);
  }
  else {
    FUN_080e1508(param_1 + 0x54,2,0);
  }
  if (*(ushort *)(DAT_080a1e88 + 0xc) <= DAT_080a1e8c) {
    *(ushort *)(DAT_080a1e88 + 0xc) = *(ushort *)(DAT_080a1e88 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  FUN_0802ab88(2,7,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a1e90);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


