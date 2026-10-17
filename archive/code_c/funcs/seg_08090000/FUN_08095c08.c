// undefined FUN_08095c08(void)
// entry 0x8095c08


undefined4 FUN_08095c08(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_08002b5c((int)*(short *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_08095c3c));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08095c40);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


