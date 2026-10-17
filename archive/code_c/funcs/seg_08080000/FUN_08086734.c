// undefined FUN_08086734(void)
// entry 0x8086734


undefined4 FUN_08086734(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  FUN_080d0c88(1,param_1 + 0x54);
  if (*(ushort *)(DAT_08086788 + 0xc) <= DAT_0808678c) {
    *(ushort *)(DAT_08086788 + 0xc) = *(ushort *)(DAT_08086788 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08086790);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


