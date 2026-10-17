// undefined FUN_08007f8c(void)
// entry 0x8007f8c


undefined8 FUN_08007f8c(uint param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar5 = DAT_08008010;
  if (*(short *)(DAT_08008010 + 0x1d0) == 4) {
    iVar3 = FUN_08129050(param_1 + DAT_08008014,0x3c000);
    param_1 = iVar3 + 0xf000;
  }
  uVar2 = DAT_08008018;
  iVar3 = 0;
  uVar6 = param_2;
  while( true ) {
    uVar1 = *(ushort *)
             ((uint)DAT_0800801c
                    [(uint)*DAT_0800801c * ((int)uVar6 >> 0xc) + ((int)param_1 >> 0xc) + 2] * 2 +
             *(int *)(iVar5 + 0x1b8));
    uVar7 = uVar6;
    if (((uVar1 & 0xf) == 0) || ((uVar1 & 0x8400) != 0)) break;
    if ((uVar1 & 0xf) == 1) {
      uVar7 = uVar6 + 0x1000 & DAT_08008020;
    }
    else {
      iVar4 = FUN_08128f84(param_1 & uVar2,uVar2 & ~uVar6,
                           *(undefined4 *)((uVar1 & 0xf) * 4 + DAT_08008068));
      if ((iVar4 == 0) || (uVar7 = uVar6 - iVar4, ((uVar6 ^ uVar7) & 0x1000) == 0)) break;
    }
    iVar3 = iVar3 + 1;
    uVar6 = uVar7;
    if (0xf < iVar3) break;
  }
  if (iVar3 < 0x10) {
    iVar5 = FUN_080094a8(param_1,uVar7);
    iVar5 = iVar5 - param_2;
  }
  else {
    iVar5 = -1;
  }
  return CONCAT44(in_lr,iVar5);
}


