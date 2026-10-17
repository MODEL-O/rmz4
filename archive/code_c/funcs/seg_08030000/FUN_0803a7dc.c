// undefined FUN_0803a7dc(void)
// entry 0x803a7dc


undefined4 FUN_0803a7dc(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  
  uVar1 = DAT_0803a82c;
  uVar6 = 0;
  iVar4 = DAT_0803a828;
  do {
    puVar3 = (ushort *)(uVar6 * 2 + iVar4);
    uVar2 = (uint)*puVar3;
    if (uVar2 != uVar1) {
      if (*(char *)(uVar6 + DAT_0803a830) == '\0') {
        iVar5 = (uint)*puVar3 * 0x20 + DAT_0803a89c;
        iVar4 = (uint)*(byte *)(uVar6 + DAT_0803a8a0) * 0x20 + DAT_0803a8a4;
        FUN_08128be0(iVar5,iVar4,0);
        FUN_08128be4(iVar5,iVar4,&DAT_04000005);
      }
      else {
        FUN_08128be0(uVar2 * 0x20 + DAT_0803a834,
                     (uint)*(byte *)(uVar6 + DAT_0803a838) * 0x20 + DAT_0803a83c,8);
      }
      iVar4 = DAT_0803a8a8;
      puVar3 = (ushort *)(uVar6 * 2 + DAT_0803a8a8);
      *puVar3 = *puVar3 | (ushort)DAT_0803a8ac;
    }
    uVar6 = uVar6 + 1 & 0xffff;
  } while (uVar6 < 2);
  FUN_0801c924(*DAT_0803a8b0,param_1);
  return in_lr;
}


