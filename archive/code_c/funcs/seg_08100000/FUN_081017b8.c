// undefined FUN_081017b8(void)
// entry 0x81017b8


undefined4 FUN_081017b8(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = *(byte *)(param_1 + 0x11) + 0x45;
  if (((int)(uint)*(byte *)(((int)uVar2 >> 3) + DAT_081017f4 + 4) >> (uVar2 & 7) & 1U) == 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08101818);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
    FUN_08101788(param_1);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081017f8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_081017a0(param_1);
  }
  return in_lr;
}


