// undefined FUN_080ea22c(void)
// entry 0x80ea22c


undefined4 FUN_080ea22c(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  if ((*(byte *)(DAT_080ea248 + 0x14) & 0x40) == 0) {
    bVar1 = 0x14;
  }
  else {
    bVar1 = 0xcb;
  }
  *(byte *)(param_1 + 0xb8) = bVar1;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 0x800;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x800;
  uVar4 = (uint)*(byte *)(param_1 + 0xb8);
  iVar6 = uVar4 * 0x14;
  iVar2 = iVar6 + DAT_080ea2e8;
  iVar5 = uVar4 * 2;
  FUN_08001d30(iVar2,((uint)*(ushort *)(iVar5 + DAT_080ea2ec) - (uint)(*(ushort *)(iVar2 + 6) >> 6))
                     * 0x20 + 0x10000);
  iVar6 = iVar6 + DAT_080ea2f0;
  FUN_08002208(iVar6,((uint)*(ushort *)(iVar5 + DAT_080ea2f4) - (uint)*(byte *)(iVar6 + 7)) * 0x20 +
                     0x200);
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ea2f8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_080ea2fc(param_1);
  return in_lr;
}


