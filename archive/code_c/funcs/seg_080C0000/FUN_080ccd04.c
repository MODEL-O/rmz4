// undefined FUN_080ccd04(void)
// entry 0x80ccd04


undefined4 FUN_080ccd04(undefined4 *param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  FUN_08001d30(DAT_080ccd88,
               ((uint)*(ushort *)(DAT_080ccd8c + 0x17a) - (uint)(*(ushort *)(DAT_080ccd88 + 6) >> 6)
               ) * 0x20 + 0x10000);
  FUN_08002208(DAT_080ccd90,
               ((uint)*(ushort *)(DAT_080ccd94 + 0x17a) - (uint)*(byte *)(DAT_080ccd90 + 7)) * 0x20
               + 0x200);
  iVar2 = FUN_08005500(*DAT_080ccd98);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 8;
    iVar1 = DAT_080ccd9c;
    *(undefined1 *)(iVar2 + 9) = 0x2c;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0xb0);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    uVar3 = param_1[1];
    *(undefined4 *)(iVar2 + 0x54) = *param_1;
    *(undefined4 *)(iVar2 + 0x58) = uVar3;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
  }
  return in_lr;
}


