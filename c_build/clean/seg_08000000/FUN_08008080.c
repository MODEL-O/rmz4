// undefined FUN_08008080(void)
// entry 0x8008080


undefined4 FUN_08008080(uint param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  iVar4 = DAT_0800810c;
  if (*(short *)(DAT_0800810c + 0x1d0) == 4) {
    iVar2 = FUN_08129050(param_1 + DAT_08008110,0x3c000);
    param_1 = iVar2 + 0xf000;
  }
  iVar2 = 0;
  puVar8 = (ushort *)(iVar4 + 0x7e0);
  uVar6 = param_2;
  do {
    uVar1 = *(ushort *)
             ((uint)puVar8[(uint)*puVar8 * ((int)uVar6 >> 0xc) + ((int)param_1 >> 0xc) + 2] * 2 +
             *(int *)(iVar4 + 0x1b8));
    uVar5 = uVar1 & 0xf;
    uVar7 = uVar6;
    if ((((uVar1 & 0xf) == 0) || (uVar5 == 0xf)) || ((uVar1 & 0x8400) != 0)) {
LAB_08008142:
      iVar4 = uVar7 - param_2;
      goto LAB_0800815e;
    }
    if (uVar5 == 1) {
      uVar7 = uVar6 + 0x1000 & DAT_08008114;
    }
    else {
      iVar3 = FUN_08128f88(param_1 & DAT_0800814c,DAT_0800814c & ~uVar6,DAT_0800814c,
                           *(undefined4 *)(uVar5 * 4 + DAT_08008148));
      if ((iVar3 == 0) || (uVar7 = uVar6 - iVar3, ((uVar6 ^ uVar7) & 0x1000) == 0))
      goto LAB_08008142;
    }
    iVar2 = iVar2 + 1;
    uVar6 = uVar7;
  } while (iVar2 < 0x10);
  iVar4 = -1;
LAB_0800815e:
  return iVar4;
}


