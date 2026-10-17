// undefined FUN_08013360(void)
// entry 0x8013360


undefined4 FUN_08013360(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_0801338c;
  iVar2 = ((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 4;
  *(ushort *)(iVar2 + DAT_0801338c) =
       (short)*(undefined4 *)(param_1 + 0x34) + (*(ushort *)(param_1 + 0x10) >> 3);
  *(short *)(iVar2 + iVar1 + 2) = (short)((uint)(*(int *)(param_1 + 0x38) * 7) >> 3);
  return in_lr;
}


