// undefined FUN_08007e98(void)
// entry 0x8007e98


undefined8 FUN_08007e98(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ushort *puVar7;
  undefined4 in_lr;
  
  iVar2 = DAT_08007f08;
  if (*(short *)(DAT_08007f08 + 0x1d0) == 4) {
    iVar3 = FUN_08129050(param_1 + DAT_08007f0c,0x3c000);
    param_1 = iVar3 + 0xf000;
  }
  iVar3 = 0;
  puVar7 = (ushort *)(iVar2 + 0x7e0);
  uVar6 = param_2;
  do {
    uVar1 = *(ushort *)
             ((uint)puVar7[(uint)*puVar7 * ((int)uVar6 >> 0xc) + ((int)param_1 >> 0xc) + 2] * 2 +
             *(int *)(iVar2 + 0x1b8));
    uVar5 = uVar1 & 0xf;
    if ((uVar1 & 0xf) == 0) {
      iVar4 = uVar6 - param_2;
      break;
    }
    if (uVar5 == 0xf) {
      iVar4 = uVar6 - param_2;
      break;
    }
    if (uVar1 == DAT_08007f24) {
      iVar4 = uVar6 - param_2;
      break;
    }
    if (uVar5 == 1) {
      uVar5 = (DAT_08007f34 & uVar6) - 1;
    }
    else {
      iVar4 = FUN_08128f88(param_1 & DAT_08007f5c,uVar6 & DAT_08007f5c,DAT_08007f5c,
                           *(undefined4 *)(uVar5 * 4 + DAT_08007f58));
      if (iVar4 == 0) {
        iVar4 = uVar6 - param_2;
        break;
      }
      uVar5 = uVar6 + iVar4;
      if (((uVar6 ^ uVar5) & 0x1000) == 0) {
        iVar4 = uVar5 - param_2;
        break;
      }
    }
    iVar4 = 1;
    iVar3 = iVar3 + 1;
    uVar6 = uVar5;
  } while (iVar3 < 0x10);
  return CONCAT44(in_lr,iVar4);
}


