// undefined FUN_0811f168(void)
// entry 0x811f168


undefined4 FUN_0811f168(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + DAT_0811f1dc);
  FUN_08002624(0x41);
  uVar2 = *(ushort *)(iVar4 + 0xa4);
  uVar1 = FUN_0802b61c(iVar4);
  if ((short)(uVar1 & 0xff) < (short)uVar2) {
    uVar2 = FUN_0802b61c(iVar4);
    *(ushort *)(iVar4 + 0xa4) = uVar2 & 0xff;
  }
  *DAT_0811f1e0 = (ushort)DAT_0811f1e4 & *DAT_0811f1e0;
  *DAT_0811f1e8 = 0;
  iVar3 = param_1 + DAT_0811f1ec;
  *(undefined1 *)(iVar3 + 4) = 1;
  if ((uint)*(byte *)(iVar4 + 0xf1) + (uint)*(byte *)(iVar4 + 0xf2) + (uint)*(byte *)(iVar4 + 0xf3)
      == 0) {
    FUN_081091c8(DAT_0811f204);
  }
  else if (*(char *)(iVar3 + 5) == '\0') {
    FUN_08109320(iVar4);
  }
  FUN_081126ac(param_1,DAT_0811f208);
  return in_lr;
}


