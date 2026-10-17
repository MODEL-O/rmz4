// undefined FUN_080d14d0(void)
// entry 0x80d14d0


undefined4 FUN_080d14d0(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 8;
  iVar1 = *(int *)(param_1 + 0x60) + -0x60;
  *(int *)(param_1 + 0x60) = iVar1;
  if (iVar1 < DAT_080d1548) {
    *(int *)(param_1 + 0x60) = DAT_080d1548;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x74) +
       (*(int *)(param_1 + 0x5c) >> 8) *
       (int)*(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_080d154c);
  iVar1 = FUN_0801fb14(DAT_080d1550,param_1 + 0x54);
  if ((iVar1 != 0) ||
     (*(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60) * -2 < *(int *)(param_1 + 0x7c))) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d1554);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


