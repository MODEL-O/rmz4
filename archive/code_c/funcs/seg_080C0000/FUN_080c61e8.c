// undefined FUN_080c61e8(void)
// entry 0x80c61e8


undefined4 FUN_080c61e8(int param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar5 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar5;
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (((cVar1 == '\0') || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) ||
     (sVar2 = FUN_08007c7c(iVar5,*(undefined4 *)(param_1 + 0x58)), sVar2 != 0)) {
    FUN_080d0c88(2,param_1 + 0x54);
    FUN_08002b10(0x2a);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c624c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080c6288(param_1);
  }
  else {
    uVar4 = FUN_0801fb14(DAT_080c6280,param_1 + 0x54);
    if (0x1000 < uVar4) {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c6284);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      FUN_080c6288(param_1);
    }
  }
  return in_lr;
}


