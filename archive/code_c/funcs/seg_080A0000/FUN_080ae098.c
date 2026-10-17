// undefined FUN_080ae098(void)
// entry 0x80ae098


undefined8 FUN_080ae098(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_08001d30(DAT_080ae128,
               ((uint)*(ushort *)(DAT_080ae12c + 0x144) - (uint)(*(ushort *)(DAT_080ae128 + 6) >> 6)
               ) * 0x20 + 0x10000);
  FUN_08002208(DAT_080ae130,
               ((uint)*(ushort *)(DAT_080ae134 + 0x144) - (uint)*(byte *)(DAT_080ae130 + 7)) * 0x20
               + 0x200);
  iVar2 = FUN_08005500(*DAT_080ae138);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0x25) = 0x18;
    iVar1 = DAT_080ae13c;
    *(undefined1 *)(iVar2 + 9) = 0x50;
    *(undefined4 *)(iVar2 + 0x14) = **(undefined4 **)(iVar1 + 0x140);
    *(undefined2 *)(iVar2 + 0x20) = 0;
    *(undefined1 *)(iVar2 + 0x22) = 0;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(iVar2 + 0x1d) = *(undefined1 *)(iVar2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x28) = param_1;
    *(undefined1 *)(iVar2 + 0x10) = param_2;
    *(undefined1 *)(iVar2 + 0x11) = param_3;
  }
  return CONCAT44(in_lr,iVar2);
}


