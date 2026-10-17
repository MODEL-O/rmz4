// undefined FUN_08081b88(void)
// entry 0x8081b88


undefined4 FUN_08081b88(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  FUN_08002b10(0x2a);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  uVar1 = DAT_08081c38 * *DAT_08081c34 + DAT_08081c3c;
  local_1c = *(int *)(param_1 + 0x54) + (((uVar1 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  uVar1 = DAT_08081c38 * (uVar1 & 0x7fffffff) + DAT_08081c3c;
  *DAT_08081c34 = uVar1 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + (((uVar1 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  FUN_080d0c88(1,&local_1c);
  FUN_0802ab88(4,0x2e,param_1 + 0x54);
  if (*(ushort *)(DAT_08081c40 + 0xc) <= DAT_08081c44) {
    *(ushort *)(DAT_08081c40 + 0xc) = *(ushort *)(DAT_08081c40 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08081c48);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


