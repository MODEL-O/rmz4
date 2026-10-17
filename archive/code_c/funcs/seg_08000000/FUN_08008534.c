// undefined FUN_08008534(void)
// entry 0x8008534


undefined8 FUN_08008534(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  iVar2 = DAT_08008578;
  if (*(short *)(DAT_08008578 + 0x1d0) == 4) {
    iVar1 = FUN_08129050(param_1 + DAT_0800857c,0x3c000);
    param_1 = iVar1 + 0xf000;
  }
  uVar4 = (int)param_2 >> 0xc;
  if (DAT_08008580 < (uint)((int)param_1 >> 0xc)) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar6 = 0;
    uVar5 = param_2;
    if (uVar4 <= DAT_080085e0) {
      do {
        uVar4 = (uint)*(ushort *)
                       ((uint)((ushort *)(iVar2 + 0x7e0))
                              [uVar4 * *(ushort *)(iVar2 + 0x7e0) + ((int)param_1 >> 0xc) + 2] * 2 +
                       *DAT_080085e4);
        iVar1 = FUN_08128f88(param_1 & DAT_080085ec,uVar5 & DAT_080085ec,DAT_080085ec,
                             *(undefined4 *)((uVar4 & 0xf) * 4 + DAT_080085e8));
        if ((iVar1 != 0) && (uVar4 != DAT_080085f0)) break;
        if ((uVar6 & 1) == 0) {
          uVar5 = ((int)(uVar5 + 0x1000) >> 0xc) * 0x1000 - 1;
        }
        else {
          uVar5 = uVar5 + 1;
        }
        uVar4 = (int)uVar5 >> 0xc;
        uVar6 = uVar6 + 1;
        iVar1 = DAT_0800861c;
        if (0x7f < (int)uVar6) goto LAB_08008630;
      } while (uVar4 <= DAT_08008618);
    }
    iVar1 = DAT_0800861c;
    if ((int)uVar6 < 0x80) {
      iVar2 = FUN_08007db4(param_1,uVar5);
      if (0 < iVar2) {
        uVar3 = 0;
        goto LAB_0800863c;
      }
      iVar1 = uVar5 + iVar2;
    }
LAB_08008630:
    uVar3 = FUN_08009688(param_1,param_2,iVar1);
  }
LAB_0800863c:
  return CONCAT44(in_lr,uVar3);
}


