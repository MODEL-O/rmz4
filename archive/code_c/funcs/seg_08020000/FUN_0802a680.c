// undefined FUN_0802a680(void)
// entry 0x802a680


undefined4 FUN_0802a680(uint param_1,uint param_2,uint param_3)

{
  short sVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  short *psVar8;
  undefined4 in_lr;
  
  uVar3 = param_1;
  if ((int)param_1 < 0) {
    uVar3 = -param_1;
  }
  uVar4 = 1;
  uVar6 = 10;
  if (9 < uVar3) {
    do {
      uVar4 = uVar4 + 1 & 0xffff;
      uVar6 = uVar6 * 10;
    } while (uVar6 <= uVar3);
  }
  if ((int)param_1 < 0) {
    uVar4 = uVar4 + 1 & 0xffff;
  }
  iVar7 = uVar4 * 2;
  puVar2 = (undefined2 *)FUN_08000a70(iVar7);
  if (puVar2 != (undefined2 *)0x0) {
    iVar5 = (param_2 & 0xff) - uVar4;
    if ((uint)-((int)param_1 >> 0x1f) < uVar4) {
      psVar8 = puVar2 + (uVar4 - 1);
      do {
        sVar1 = FUN_08129198(uVar3,10);
        *psVar8 = sVar1 + (short)DAT_0802a754;
        psVar8 = psVar8 + -1;
        uVar4 = uVar4 - 1;
        uVar3 = FUN_08129120(uVar3,10);
      } while ((uint)-((int)param_1 >> 0x1f) < uVar4);
    }
    if ((int)param_1 < 0) {
      *puVar2 = (short)DAT_0802a758;
    }
    FUN_08001f1c(puVar2,(*DAT_0802a75c & 0x1f00) * 8 + (iVar5 + (param_3 & 0xff) * 0x20 + 1) * 2,
                 iVar7);
  }
  return in_lr;
}


