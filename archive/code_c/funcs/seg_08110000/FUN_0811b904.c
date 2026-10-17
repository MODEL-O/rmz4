// undefined FUN_0811b904(void)
// entry 0x811b904


undefined4 FUN_0811b904(int param_1,ushort param_2,uint param_3,short param_4)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 in_lr;
  
  param_3 = param_3 & 0xffff;
  if (param_2 == 4) {
    if (DAT_0811b99c < param_3) {
      puVar1 = (ushort *)(param_3 * 2 + param_1);
      uVar2 = param_4 * 0x1000;
      puVar1[-3] = uVar2 | 0xbc;
      puVar1[-2] = uVar2 | 0xbd;
      puVar1[-1] = uVar2 | 0xbe;
      *puVar1 = uVar2 | 0xbf;
    }
    else {
      puVar1 = (ushort *)(param_3 * 2 + param_1);
      uVar2 = param_4 * 0x1000;
      puVar1[-2] = uVar2 | 0xbc;
      puVar1[-1] = uVar2 | 0xbd;
      *puVar1 = uVar2 | 0xbe;
      puVar1[1] = uVar2 | 0xbf;
      param_3 = param_3 + 1 & 0xffff;
    }
  }
  else {
    if (param_2 < 5) {
      if (param_2 == 1) {
        puVar1 = (ushort *)(param_3 * 2 + param_1);
        uVar2 = 0xb0;
      }
      else {
        if (param_2 != 2) goto LAB_0811b9ca;
        puVar1 = (ushort *)(param_3 * 2 + param_1);
        uVar2 = 0xb1;
      }
    }
    else if (param_2 == 0x100) {
      puVar1 = (ushort *)(param_3 * 2 + param_1);
      uVar2 = 0xb3;
    }
    else {
      if (param_2 != 0x200) goto LAB_0811b9ca;
      puVar1 = (ushort *)(param_3 * 2 + param_1);
      uVar2 = 0xb2;
    }
    *puVar1 = param_4 << 0xc | uVar2;
  }
LAB_0811b9ca:
  if (param_3 <= DAT_0811b9fc) {
    param_1 = param_3 * 2 + param_1;
    uVar2 = param_4 * 0x1000;
    *(ushort *)(param_1 + 2) = uVar2 | 0xa0;
    *(ushort *)(param_1 + 4) = uVar2 | 0xa1;
    *(ushort *)(param_1 + 6) = uVar2 | 0xa2;
    *(ushort *)(param_1 + 8) = uVar2 | 0xa3;
  }
  return in_lr;
}


