// undefined FUN_08008868(void)
// entry 0x8008868


undefined4 FUN_08008868(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  iVar2 = 0x02000ab0;
  iVar7 = 0;
  uVar4 = param_1;
  if (*(short *)(0x02000ab0 + 0x1d0) == 4) {
    iVar7 = FUN_08129050(0xffff1000 + param_1,0x3c000);
    uVar4 = iVar7 + 0xf000;
    iVar7 = param_1 - uVar4;
  }
  uVar3 = (int)uVar4 >> 0xc;
  if (0x000004ff < (uint)((int)param_2 >> 0xc)) {
    iVar2 = -1;
  }
  else {
    uVar6 = 0;
    uVar5 = uVar4;
    if (uVar3 <= 0x0000077f) {
      do {
        uVar3 = (uint)*(ushort *)
                       ((uint)((ushort *)(iVar2 + 0x7e0))
                              [((int)param_2 >> 0xc) * (uint)*(ushort *)(iVar2 + 0x7e0) + uVar3 + 2]
                        * 2 + (*(int *)0x02000c68));
        if ((uVar3 != 0x0000800f) &&
           (iVar1 = FUN_08128f88(param_2 & 0x00000fff,uVar5 & 0x00000fff,0x00000fff,
                                 *(undefined4 *)((uVar3 & 0xf) * 4 + 0x0882b154)), iVar1 != 0))
        break;
        if ((uVar6 & 1) == 0) {
          uVar5 = ((int)(uVar5 + 0x1000) >> 0xc) * 0x1000 - 1;
        }
        else {
          uVar5 = uVar5 + 1;
        }
        uVar3 = (int)uVar5 >> 0xc;
        uVar6 = uVar6 + 1;
        iVar1 = 0x7fffffff;
        if (0x7f < (int)uVar6) goto LAB_0800896c;
      } while (uVar3 <= 0x0000077f);
    }
    iVar1 = 0x7fffffff;
    if ((int)uVar6 < 0x80) {
      iVar2 = FUN_0800816c(uVar5,param_2);
      if (0 < iVar2) {
        iVar2 = 0;
        goto LAB_0800897a;
      }
      iVar1 = uVar5 + iVar2;
    }
LAB_0800896c:
    iVar2 = FUN_080097e4(uVar4,param_2,iVar1);
    iVar2 = iVar2 + iVar7;
  }
LAB_0800897a:
  return iVar2;
}


