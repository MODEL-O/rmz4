// undefined FUN_0808516c(void)
// entry 0x808516c


undefined4 FUN_0808516c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(undefined4 *)(param_1 + 0x58);
  FUN_080d0c88(1,&local_14);
  FUN_08002b10(0x2a);
  FUN_080d72e4(param_1,&local_14,DAT_080851ec,3);
  FUN_0802ab88(1,0xc,param_1 + 0x54);
  if (*(ushort *)(DAT_080851f0 + 0xc) <= DAT_080851f4) {
    *(ushort *)(DAT_080851f0 + 0xc) = *(ushort *)(DAT_080851f0 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080851f8);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


