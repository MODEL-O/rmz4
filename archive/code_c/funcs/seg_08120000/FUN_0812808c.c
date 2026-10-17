// undefined FUN_0812808c(void)
// entry 0x812808c


undefined4 FUN_0812808c(undefined4 param_1,byte *param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  
  if ((*param_2 & 1) != 0) {
    uVar4 = (uint)param_2[0x12] * (uint)param_2[0x13] >> 5;
    if (param_2[0x18] == 1) {
      uVar4 = uVar4 * ((char)param_2[0x16] + 0x80) >> 7;
    }
    iVar2 = (char)param_2[0x14] * 2 + (int)(char)param_2[0x15];
    if (param_2[0x18] == 2) {
      iVar2 = iVar2 + (char)param_2[0x16];
    }
    iVar3 = -0x80;
    if ((-0x81 < iVar2) && (iVar3 = iVar2, 0x7f < iVar2)) {
      iVar3 = 0x7f;
    }
    param_2[0x10] = (byte)(uVar4 * (iVar3 + 0x80) >> 8);
    param_2[0x11] = (byte)(uVar4 * (0x7f - iVar3) >> 8);
  }
  if ((*param_2 & 4) != 0) {
    sVar1 = (ushort)param_2[0xd] +
            ((short)(char)param_2[0xc] + (ushort)param_2[0xf] * (short)(char)param_2[0xe]) * 4 +
            (char)param_2[10] * 0x100 + (char)param_2[0xb] * 0x100;
    if (param_2[0x18] == 0) {
      sVar1 = sVar1 + (char)param_2[0x16] * 0x10;
    }
    param_2[8] = (byte)((ushort)sVar1 >> 8);
    param_2[9] = (byte)sVar1;
  }
  *param_2 = *param_2 & 0xfa;
  return in_lr;
}


