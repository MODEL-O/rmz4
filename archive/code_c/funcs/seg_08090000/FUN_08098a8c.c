// undefined FUN_08098a8c(void)
// entry 0x8098a8c


undefined4 FUN_08098a8c(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x204) == 0) {
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
    sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54));
    if (sVar1 != 0) {
      FUN_080c3998(param_1 + 0x54,0,3,*(byte *)(param_1 + 10) >> 4 & 1);
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08098b1c);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      FUN_08098b20(param_1);
    }
  }
  else {
    FUN_080d0c88(1,param_1 + 0x54);
    FUN_08002b10(0x35);
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08098ac8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_08098b20(param_1);
  }
  return in_lr;
}


