// undefined FUN_08012360(void)
// entry 0x8012360


undefined4 FUN_08012360(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_080123c0;
  if ((*(byte *)(DAT_080123b8 + DAT_080123bc) & 0xf) == 3) {
    uVar3 = *(undefined4 *)(param_1 + 0x38);
    uVar4 = *(undefined4 *)(param_1 + 0x40);
    iVar2 = ((*(uint *)(param_1 + 0x5c) & 0xffff) >> 4) * 4;
    *(ushort *)(iVar2 + DAT_080123c0) =
         ((short)*(undefined4 *)(param_1 + 0x34) * 2 + (*(ushort *)(param_1 + 0x10) >> 8)) -
         (short)*(undefined4 *)(param_1 + 0x3c);
    *(ushort *)(iVar2 + iVar1 + 2) =
         ((short)uVar3 * 2 + (*(ushort *)(param_1 + 0x12) >> 8)) - (short)uVar4;
  }
  return in_lr;
}


