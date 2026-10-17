// undefined FUN_080d136c(void)
// entry 0x80d136c


undefined4 FUN_080d136c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\b';
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       *(int *)(param_1 + 0x5c) +
       ((int)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_080d13d0) << 0x10) >> 0x12
       );
  iVar1 = FUN_0801fb14(DAT_080d13d4,param_1 + 0x54);
  if ((iVar1 != 0) ||
     (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) * -2 < *(int *)(param_1 + 0x7c))) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d13d8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


