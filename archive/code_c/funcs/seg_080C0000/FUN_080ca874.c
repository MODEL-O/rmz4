// undefined FUN_080ca874(void)
// entry 0x80ca874


undefined4 FUN_080ca874(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar1 = FUN_0801fb14(DAT_080ca8b8,param_1 + 0x54);
  if (0x6000 < uVar1) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ca8bc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


