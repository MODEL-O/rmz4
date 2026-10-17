// undefined FUN_0801b6f0(void)
// entry 0x801b6f0


undefined4 FUN_0801b6f0(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = 0;
  FUN_08007638();
  puVar3 = (uint *)FUN_08000a70(0x280);
  iVar2 = DAT_0801b758;
  if (puVar3 != (uint *)0x0) {
    *(uint **)(DAT_0801b758 + 0x174) = puVar3;
    *(undefined4 *)(iVar2 + 0x178) = DAT_0801b75c;
    *(undefined4 *)(iVar2 + 0x17c) = DAT_0801b760;
    iVar2 = DAT_0801b764;
    uVar1 = *(ushort *)(param_1 + 0x38);
    do {
      *puVar3 = *(int *)(param_1 + 0x34) +
                ((int)((uint)*(ushort *)
                              ((iVar4 * 0x20 + (uint)*(byte *)(param_1 + 0x12) & 0xff) * 2 + iVar2)
                      << 0x10) >> 0x18) & 0xffffU | (uint)uVar1 << 0x10;
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xa0);
  }
  return in_lr;
}


