// undefined FUN_080ce138(void)
// entry 0x80ce138


undefined4 FUN_080ce138(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar1 = FUN_0801fb14(DAT_080ce180,param_1 + 0x54);
  if (0x3000 < uVar1) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ce184);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080cde30(param_1);
  }
  return in_lr;
}


