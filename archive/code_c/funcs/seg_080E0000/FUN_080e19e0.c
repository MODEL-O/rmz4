// undefined FUN_080e19e0(void)
// entry 0x80e19e0


undefined4 FUN_080e19e0(int param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if ((*(char *)(param_1 + 0x11) != '\x01') && (sVar1 = FUN_08007c7c(iVar3), sVar1 != 0)) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e1a24);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


