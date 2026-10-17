// undefined FUN_0801fe64(void)
// entry 0x801fe64


undefined4 FUN_0801fe64(uint param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  undefined4 in_lr;
  
  iVar2 = DAT_0801feb8;
  if ((param_1 & 0xff) != 0) {
    puVar4 = (ushort *)(DAT_0801feb8 + 0x19c);
    uVar3 = (uint)*puVar4;
    if (uVar3 < 0x10) {
      iVar1 = uVar3 * 0xc;
      *(undefined4 *)(iVar1 + DAT_0801feb8 + 8) = *param_2;
      *(undefined4 *)(iVar1 + iVar2 + 0xc) = param_2[1];
      iVar2 = iVar2 + 4;
      *(uint *)(iVar1 + iVar2) = param_1 & 0xff;
      *(undefined4 *)((uVar3 + 1) * 0xc + iVar2) = 0;
      *puVar4 = (ushort)(uVar3 + 1);
    }
  }
  return in_lr;
}


