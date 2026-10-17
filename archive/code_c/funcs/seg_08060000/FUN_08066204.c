// undefined FUN_08066204(void)
// entry 0x8066204


void FUN_08066204(void)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  FUN_08129258(auStack_40,DAT_080662c4,8);
  iVar2 = DAT_080662d0;
  iVar1 = DAT_080662cc;
  iVar4 = *DAT_080662c8;
  local_38 = *(int *)(iVar4 + 0x54);
  local_34 = *(int *)(iVar4 + 0x58) + DAT_080662cc;
  local_28 = (*(byte *)(iVar4 + 10) >> 4 & 1) * 2 + -1;
  iVar4 = 0;
  do {
    local_30 = local_28 * *(int *)(iVar4 * 8 + iVar2) + local_38 + iVar1;
    local_2c = *(int *)(iVar4 * 8 + DAT_080662d4) + local_34 + iVar1;
    iVar9 = 0;
    iVar5 = iVar4 + 1;
    do {
      iVar8 = 0;
      local_24 = iVar4;
      do {
        iVar6 = local_30;
        if (iVar9 != 0) {
          iVar6 = local_30 + -1 + iVar9 * 0x1000;
        }
        iVar7 = local_2c;
        if (iVar8 != 0) {
          iVar7 = local_2c + -1 + iVar8 * 0x1000;
        }
        sVar3 = FUN_08007c7c(iVar6,iVar7);
        iVar4 = local_24;
        if (((sVar3 != 0) || (0xd000 < (*(int *)(DAT_080662d8 + 0x38) - iVar6) + 0x6800U)) ||
           (0x8000 < (*(int *)(DAT_080662d8 + 0x3c) - iVar7) + 0x4000U)) {
          auStack_40[local_24] = 0;
          break;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < 3);
    } while ((2 < iVar8) && (iVar9 = iVar9 + 1, iVar9 < 3));
    iVar4 = iVar5;
    if (7 < iVar5) {
      FUN_0806635c(auStack_40,8);
      return;
    }
  } while( true );
}


