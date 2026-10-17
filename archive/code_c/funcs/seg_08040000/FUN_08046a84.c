// undefined FUN_08046a84(void)
// entry 0x8046a84


undefined4 FUN_08046a84(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  FUN_0801cff0();
  iVar4 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar4;
  iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar3;
  if (((*(uint *)(param_1 + 0x8c) & DAT_08046ae8) != 0) ||
     (sVar1 = FUN_08046b50(iVar4,iVar3), sVar1 != 0)) {
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) != 0) {
      FUN_08002b10(0x2b);
    }
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08046aec);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_08046af0(param_1);
  }
  return in_lr;
}


