// undefined FUN_08103584(void)
// entry 0x8103584


undefined4 FUN_08103584(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  piVar2 = (int *)(param_1 + 0xc0);
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && ((*(byte *)(param_1 + 0x97) & 0xf0) == 0x10)) {
      local_14 = iVar1;
      local_10 = iVar1;
      iVar1 = FUN_0802adac(0,param_1,&local_14);
      *piVar2 = iVar1;
    }
    if (*(uint *)(DAT_081035ec + DAT_081035f0) ==
        (uint)*(byte *)((uint)*(byte *)(param_1 + 0x10) + DAT_081035f4)) {
      local_14 = *(int *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58) + 0x1000;
      FUN_080b7a44(&local_14,0,0);
    }
  }
  else {
    iVar1 = FUN_0802b3e4(iVar1);
    if (iVar1 != 0) {
      *piVar2 = 0;
    }
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


