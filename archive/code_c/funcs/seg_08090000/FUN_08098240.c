// undefined FUN_08098240(void)
// entry 0x8098240


undefined4 FUN_08098240(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(undefined4 *)(param_1 + 0x58);
  FUN_080d0c88(1,&local_14);
  FUN_08002b10(0x2a);
  FUN_0802ab88(2,0x32,param_1 + 0x54);
  if (*(ushort *)(DAT_080982a4 + 0xc) <= DAT_080982a8) {
    *(ushort *)(DAT_080982a4 + 0xc) = *(ushort *)(DAT_080982a4 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080982ac);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


