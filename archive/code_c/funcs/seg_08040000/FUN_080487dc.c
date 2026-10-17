// undefined FUN_080487dc(void)
// entry 0x80487dc


undefined4 FUN_080487dc(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  undefined4 in_lr;
  
  FUN_0801cff0();
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  sVar2 = FUN_080488e4();
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if ((((cVar1 == -1) || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) || (sVar2 != 0)) ||
     ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0)) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08048844);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_08048458(param_1);
  }
  return in_lr;
}


