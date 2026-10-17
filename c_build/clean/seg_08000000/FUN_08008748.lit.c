// undefined FUN_08008748(void)
// entry 0x8008748


undefined4 FUN_08008748(uint param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  iVar5 = 0x02000ab0;
  if (*(short *)(0x02000ab0 + 0x1d0) == 4) {
    iVar3 = FUN_08129050(param_1 + 0xffff1000,0x3c000);
    param_1 = iVar3 + 0xf000;
  }
  uVar2 = 0x00000fff;
  uVar6 = (int)param_2 >> 0xc;
  if (0x0000077f < (uint)((int)param_1 >> 0xc)) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar8 = 0;
    uVar7 = param_2;
    if (uVar6 <= 0x000004ff) {
      do {
        uVar1 = *(ushort *)
                 ((uint)((ushort *)(iVar5 + 0x7e0))
                        [uVar6 * *(ushort *)(iVar5 + 0x7e0) + ((int)param_1 >> 0xc) + 2] * 2 +
                 (*(int *)0x02000c68));
        iVar3 = FUN_08128f84(param_1 & uVar2,uVar2 & ~uVar7,
                             *(undefined4 *)((uVar1 & 0xf) * 4 + 0x0882b114));
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
      } while (uVar6 <= 0x000004ff);
    }
    if ((int)uVar8 < 0x80) {
      iVar5 = FUN_08007f8c(param_1,uVar7);
      uVar4 = 0x7fffffff;
      if (-1 < iVar5) {
        uVar4 = FUN_0800972c(param_1,param_2,uVar7 + iVar5);
      }
    }
    else {
LAB_08008826:
      uVar4 = FUN_0800972c(param_1,param_2,0);
    }
  }
  return uVar4;
}


