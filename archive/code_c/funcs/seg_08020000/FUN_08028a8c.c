// undefined FUN_08028a8c(void)
// entry 0x8028a8c


longlong FUN_08028a8c(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint in_lr;
  
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(uint *)(iVar3 + 4) == 0) {
    *(undefined4 *)(param_1 + 0x150) = 0;
    uVar1 = (ushort)DAT_08028aac & *DAT_08028aa8;
    puVar2 = DAT_08028aa8;
  }
  else {
    *(uint *)(param_1 + 0x150) =
         *(uint *)(iVar3 + 4) & DAT_08028ae0 | (uint)*(byte *)(iVar3 + 1) << 0x10 |
         (int)*(short *)(iVar3 + 2) << 0x18;
    uVar1 = *DAT_08028ae4 | 0x100;
    puVar2 = DAT_08028ae4;
  }
  *puVar2 = uVar1;
  return (ulonglong)in_lr << 0x20;
}


