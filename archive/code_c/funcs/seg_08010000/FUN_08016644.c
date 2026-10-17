// undefined FUN_08016644(void)
// entry 0x8016644


undefined4 FUN_08016644(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_08016678;
  iVar2 = ((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 4;
  *(short *)(iVar2 + DAT_08016678) =
       (short)*(undefined4 *)(param_1 + 0x4c) +
       (short)((uint)(*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34)) >> 8);
  *(short *)(iVar2 + iVar1 + 2) =
       (short)*(undefined4 *)(param_1 + 0x50) +
       (short)((uint)(*(int *)(param_1 + 0x38) * *(int *)(param_1 + 0x48)) >> 8);
  return in_lr;
}


