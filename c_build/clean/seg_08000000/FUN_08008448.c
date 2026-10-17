// undefined FUN_08008448(void)
// entry 0x8008448


undefined4 FUN_08008448(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  iVar4 = DAT_080084d8;
  if (*(short *)(DAT_080084d8 + 0x1d0) == 4) {
    iVar2 = FUN_08129050(param_1 + DAT_080084dc,0x3c000);
    param_1 = iVar2 + 0xf000;
  }
  iVar2 = 0;
  puVar8 = (ushort *)(iVar4 + 0x7e0);
  uVar6 = param_1;
  do {
    uVar1 = *(ushort *)
             ((uint)puVar8[(uint)*puVar8 * ((int)param_2 >> 0xc) + ((int)uVar6 >> 0xc) + 2] * 2 +
             *(int *)(iVar4 + 0x1b8));
    uVar5 = uVar1 & 0xf;
    uVar7 = uVar6;
    if ((((uVar1 & 0xf) == 0) || (uVar5 == 0xf)) || ((uVar1 & 0x8400) != 0)) {
LAB_0800850e:
      iVar4 = uVar7 - param_1;
      goto LAB_08008526;
    }
    if (uVar5 == 1) {
      uVar7 = uVar6 + 0x1000 & DAT_080084e0;
    }
    else {
      iVar3 = FUN_08128f88(param_2 & DAT_08008518,DAT_08008518 & ~uVar6,DAT_08008518,
                           *(undefined4 *)(uVar5 * 4 + DAT_08008514));
      if ((iVar3 == 0) || (uVar7 = uVar6 - iVar3, ((uVar6 ^ uVar7) & 0x1000) == 0))
      goto LAB_0800850e;
    }
    iVar2 = iVar2 + 1;
    uVar6 = uVar7;
  } while (iVar2 < 0x10);
  iVar4 = -1;
LAB_08008526:
  return iVar4;
}


