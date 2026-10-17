// undefined FUN_080d13dc(void)
// entry 0x80d13dc


undefined4 FUN_080d13dc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  iVar2 = *(int *)(param_1 + 0x5c) + 8;
  *(int *)(param_1 + 0x5c) = iVar2;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x74) +
       (iVar2 >> 8) * (int)*(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_080d1444);
  iVar2 = FUN_0801fb14(DAT_080d1448,param_1 + 0x54);
  if ((iVar2 != 0) ||
     (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) * -2 < *(int *)(param_1 + 0x7c))) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d144c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  }
  return in_lr;
}


