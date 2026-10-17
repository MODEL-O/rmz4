// undefined FUN_08008748(void)
// entry 0x8008748


undefined8 FUN_08008748(uint param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar5 = DAT_08008790;
  if (*(short *)(DAT_08008790 + 0x1d0) == 4) {
    iVar3 = FUN_08129050(param_1 + DAT_08008794,0x3c000);
    param_1 = iVar3 + 0xf000;
  }
  uVar2 = DAT_08008804;
  uVar6 = (int)param_2 >> 0xc;
  if (DAT_08008798 < (uint)((int)param_1 >> 0xc)) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar8 = 0;
    uVar7 = param_2;
    if (uVar6 <= DAT_08008800) {
      do {
        uVar1 = *(ushort *)
                 ((uint)((ushort *)(iVar5 + 0x7e0))
                        [uVar6 * *(ushort *)(iVar5 + 0x7e0) + ((int)param_1 >> 0xc) + 2] * 2 +
                 *DAT_08008808);
        iVar3 = FUN_08128f84(param_1 & uVar2,uVar2 & ~uVar7,
                             *(undefined4 *)((uVar1 & 0xf) * 4 + DAT_0800880c));
        if ((iVar3 != 0) && ((uVar1 & 0x8400) == 0)) break;
        if ((uVar8 & 1) == 0) {
          uVar7 = ((int)uVar7 >> 0xc) << 0xc;
        }
        else {
          uVar7 = uVar7 - 1;
        }
        uVar6 = (int)uVar7 >> 0xc;
        uVar8 = uVar8 + 1;
        if (0x7f < (int)uVar8) goto LAB_08008826;
      } while (uVar6 <= DAT_08008834);
    }
    if ((int)uVar8 < 0x80) {
      iVar5 = FUN_08007f8c(param_1,uVar7);
      uVar4 = DAT_08008864;
      if (-1 < iVar5) {
        uVar4 = FUN_0800972c(param_1,param_2,uVar7 + iVar5);
      }
    }
    else {
LAB_08008826:
      uVar4 = FUN_0800972c(param_1,param_2,0);
    }
  }
  return CONCAT44(in_lr,uVar4);
}


