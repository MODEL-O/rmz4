// undefined FUN_080ffbb4(void)
// entry 0x80ffbb4


undefined4 FUN_080ffbb4(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  uVar1 = FUN_0801fb14(DAT_080ffbe4,param_1 + 0x54);
  if (0xf000 < uVar1) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ffbe8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


