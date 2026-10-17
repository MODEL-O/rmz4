// undefined FUN_080f8f94(void)
// entry 0x80f8f94


undefined4 FUN_080f8f94(int param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  ushort uVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 in_lr;
  undefined4 local_24;
  undefined4 local_20;
  
  local_20 = *(undefined4 *)(param_1 + 0x58);
  local_24 = *(undefined4 *)(param_1 + 0x54);
  uVar2 = FUN_080f872c(param_1 + 0x54);
  cVar3 = FUN_08129198(uVar2,3);
  uVar4 = DAT_080f8fc8;
  if (cVar3 == '\0') {
    for (uVar8 = 1; uVar8 <= uVar4; uVar8 = uVar8 + 1 & 0xffff) {
      uVar2 = FUN_080f8f20(&local_24);
      cVar3 = FUN_08129198(uVar2,3);
      if (cVar3 != '\0') break;
    }
  }
  uVar4 = DAT_080f8ff8;
  uVar8 = 0;
  bVar6 = 0;
  do {
    bVar6 = bVar6 + 1;
    for (uVar9 = 0; uVar9 <= uVar4; uVar9 = uVar9 + 1 & 0xffff) {
      uVar2 = FUN_080f8f20(&local_24);
      cVar3 = FUN_08129198(uVar2,3);
      if (cVar3 != '\0') break;
    }
    uVar8 = uVar8 + uVar9 & 0xffff;
  } while (bVar6 < 2);
  uVar5 = *(ushort *)(DAT_080f9048 + 0x1d0) & 0x7f;
  iVar7 = DAT_080f904c;
  if (((uVar5 == 10) || (iVar7 = DAT_080f9058, uVar5 == 0xd)) ||
     (iVar7 = DAT_080f9070, uVar5 == 0xf)) {
    uVar4 = FUN_08129198(*(undefined4 *)(DAT_080f9048 + iVar7),(uVar8 + 2 & 0xffff) << 5);
  }
  else {
    uVar4 = 0;
  }
  puVar1 = DAT_080f90d8;
  uVar8 = 0;
  if (uVar4 != 0) {
    do {
      local_24 = *(undefined4 *)(param_1 + 0x54);
      local_20 = *(undefined4 *)(param_1 + 0x58);
      iVar7 = param_1 + 0x54;
      if (uVar8 + 0x10 < uVar4) {
        uVar2 = FUN_080f872c(iVar7);
        cVar3 = FUN_08129198(uVar2,3);
        if (cVar3 != '\0') goto LAB_080f90c4;
        uVar2 = FUN_080f8f20(&local_24);
        cVar3 = FUN_08129198(uVar2,3);
        if (cVar3 != '\0') goto LAB_080f90c4;
        FUN_08128f88(iVar7,param_1 + 0xb9,0x10,*puVar1);
        uVar8 = uVar8 + 0xf & 0xffff;
      }
      else {
LAB_080f90c4:
        FUN_08128f88(iVar7,param_1 + 0xb9,1,*puVar1);
      }
      uVar8 = uVar8 + 1 & 0xffff;
    } while (uVar8 < uVar4);
  }
  return in_lr;
}


