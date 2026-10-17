// undefined FUN_080284bc(void)
// entry 0x80284bc


longlong FUN_080284bc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_lr;
  
  iVar2 = (int)*(short *)(*(int *)(param_1 + 0xc) + 4);
  iVar3 = iVar2 * 0x14;
  iVar1 = iVar3 + DAT_0802850c;
  iVar2 = iVar2 * 2;
  FUN_08001d30(iVar1,((uint)*(ushort *)(iVar2 + DAT_08028510) - (uint)(*(ushort *)(iVar1 + 6) >> 6))
                     * 0x20 + 0x10000);
  iVar3 = iVar3 + DAT_08028514;
  FUN_08002208(iVar3,((uint)*(ushort *)(iVar2 + DAT_08028518) - (uint)*(byte *)(iVar3 + 7)) * 0x20 +
                     0x200);
  return (ulonglong)in_lr << 0x20;
}


