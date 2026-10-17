// undefined FUN_08011ce4(void)
// entry 0x8011ce4


undefined4 FUN_08011ce4(int param_1)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08011d40;
  if ((*(byte *)(DAT_08011d38 + DAT_08011d3c) & 0xf) == 3) {
    iVar2 = ((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 4;
    *(ushort *)(iVar2 + DAT_08011d40) =
         (*(ushort *)(param_1 + 0x68) >> 4) -
         ((short)*(undefined4 *)(param_1 + 0x6c) - (short)*(undefined4 *)(param_1 + 0x34));
    puVar3 = (ushort *)(iVar2 + iVar1 + 2);
    *puVar3 = (short)*(undefined4 *)(param_1 + 0x50) +
              (short)((uint)(*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x38)) >> 8);
    iVar1 = *(int *)(param_1 + 0x70) - (uint)*puVar3;
    if (iVar1 < 0x100) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0xff;
    }
    *(ushort *)(DAT_08011d58 + 10) = (ushort)iVar1 & 0xff;
  }
  return in_lr;
}


