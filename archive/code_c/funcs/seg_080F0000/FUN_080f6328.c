// undefined FUN_080f6328(void)
// entry 0x80f6328


undefined4 FUN_080f6328(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = 0;
  FUN_0801cff0();
  if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
    iVar1 = *(int *)(param_1 + 0x58) * 7 + 0x800 + *(int *)(DAT_080f63e8 + DAT_080f63ec);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    *(int *)(param_1 + 0x58) = iVar1 >> 3;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x58) * 7 + *(int *)(DAT_080f6370 + DAT_080f6374);
    iVar3 = iVar1 + 0x1000;
    if (iVar3 < 0) {
      iVar3 = iVar1 + 0x1007;
    }
    *(int *)(param_1 + 0x58) = iVar3 >> 3;
    iVar3 = *(int *)(*DAT_080f6378 + 0x54) - *(int *)(param_1 + 0x54);
  }
  piVar2 = (int *)(param_1 + 0xb4);
  iVar3 = *piVar2 * 7 + iVar3;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 7;
  }
  *piVar2 = iVar3 >> 3;
  *(char *)(param_1 + 0x24) = (char)(iVar3 >> 0xe);
  iVar3 = *piVar2 * (int)*(short *)((*piVar2 >> 0xb & 0xffU) * 2 + DAT_080f63f0);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x58) - ((iVar3 >> 8) + 0x1000);
  return in_lr;
}


