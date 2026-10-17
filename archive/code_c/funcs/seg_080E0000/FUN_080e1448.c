// undefined FUN_080e1448(void)
// entry 0x80e1448


undefined4 FUN_080e1448(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0x78) != 0) {
    **(byte **)(param_1 + 0x74) = **(byte **)(param_1 + 0x74) ^ *(byte *)(param_1 + 0x78);
    FUN_080d0c88(3,param_1 + 0x54);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e1480);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


