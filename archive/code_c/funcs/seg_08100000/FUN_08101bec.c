// undefined FUN_08101bec(void)
// entry 0x8101bec


undefined4 FUN_08101bec(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = *(byte *)(param_1 + 0x11) + 0x45;
  if (((int)(uint)*(byte *)(((int)uVar2 >> 3) + DAT_08101c28 + 4) >> (uVar2 & 7) & 1U) == 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08101c2c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_081017a0(param_1);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08101c4c);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
    FUN_08101788(param_1);
  }
  return in_lr;
}


