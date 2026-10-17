// undefined FUN_0811eb20(void)
// entry 0x811eb20


undefined4 FUN_0811eb20(int param_1,byte param_2)

{
  ushort *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar3 = (uint)param_2;
  param_1 = param_1 + DAT_0811eb9c;
  *(byte *)(param_1 + 6) = param_2;
  piVar2 = DAT_0811eba8;
  puVar1 = DAT_0811eba4;
  FUN_08001ea4(DAT_0811eba0,(*DAT_0811eba4 & 0xc) * 0x1000 + DAT_0811eba8[1]);
  if (uVar3 != 0) {
    FUN_08001ea4(uVar3 * 0x14 + DAT_0811eba0,(*puVar1 & 0xc) * 0x1000 + *piVar2);
    FUN_08002208(uVar3 * 0x14 + DAT_0811ebac,0x20);
    if (uVar3 == 0x29) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if ((uVar3 - 0x2c & 0xff) < 2) {
      *(undefined1 *)(param_1 + 6) = 0x29;
    }
  }
  return in_lr;
}


