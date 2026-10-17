// undefined FUN_080664bc(void)
// entry 0x80664bc


undefined4 FUN_080664bc(int *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 in_lr;
  int local_3c [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int *local_24;
  
  puVar1 = DAT_0806658c;
  local_24 = param_1;
  local_3c[0] = *DAT_08066584;
  local_3c[1] = DAT_08066584[1];
  local_3c[2] = DAT_08066584[2];
  local_3c[3] = *DAT_08066588;
  uStack_2c = DAT_08066588[1];
  uStack_28 = DAT_08066588[2];
  iVar2 = local_3c[param_2 & 0xff];
  uVar3 = DAT_08066590 * *DAT_0806658c + DAT_08066594;
  *DAT_0806658c = uVar3 & 0x7fffffff;
  iVar4 = local_3c[(param_3 & 0xff) + 3] - ((uVar3 & 0x7fffffff) >> 0x10 & 1);
  if (0 < iVar4) {
    do {
      iVar8 = *local_24;
      uVar3 = DAT_08066590 * *puVar1 + DAT_08066594;
      uVar9 = uVar3 & 0x7fffffff;
      *puVar1 = uVar9;
      iVar5 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,iVar2);
      iVar7 = local_24[1];
      uVar3 = DAT_08066590 * uVar9 + DAT_08066594;
      *puVar1 = uVar3 & 0x7fffffff;
      iVar6 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,iVar2);
      FUN_080d0ff4(iVar8 + -iVar2 / 2 + iVar5,iVar7 + -iVar2 / 2 + iVar6,0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return in_lr;
}


