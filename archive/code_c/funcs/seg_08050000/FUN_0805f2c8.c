// undefined FUN_0805f2c8(void)
// entry 0x805f2c8


undefined4 FUN_0805f2c8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) == 0) && (*(short *)(param_1 + 0xa4) != 0)) ||
     ((*(ushort *)(DAT_0805f30c + 8) & 8) != 0)) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0805f350));
    iVar3 = DAT_0805f354;
    if (1 < *(byte *)(param_1 + 0xd)) {
      iVar2 = *(int *)(DAT_0805f354 + 0x38) + DAT_0805f358;
      if (*(int *)(param_1 + 0x54) < iVar2) {
        *(int *)(param_1 + 0x54) = iVar2;
      }
      iVar3 = *(int *)(iVar3 + 0x38) + DAT_0805f35c;
      if (iVar3 < *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x54) = iVar3;
      }
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0805f310);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0805f360(param_1);
  }
  return in_lr;
}


