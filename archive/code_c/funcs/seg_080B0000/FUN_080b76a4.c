// undefined FUN_080b76a4(void)
// entry 0x80b76a4


undefined4 FUN_080b76a4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xb6) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      uVar2 = 5;
    }
    else {
      uVar2 = 4;
    }
    FUN_080e1508(param_1 + 0x54,uVar2,0);
  }
  else {
    FUN_080e1508(param_1 + 0x54,6,0);
  }
  if (*(ushort *)(DAT_080b7720 + 0xc) <= DAT_080b7724) {
    *(ushort *)(DAT_080b7720 + 0xc) = *(ushort *)(DAT_080b7720 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  FUN_0802ab88(2,7,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b7728);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


