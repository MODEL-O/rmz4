// undefined FUN_08128d84(void)
// entry 0x8128d84


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_08128d84(uint param_1,ushort *param_2,char param_3)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined4 in_lr;
  undefined1 auStack_c4 [130];
  undefined2 auStack_42 [17];
  short local_20;
  ushort local_1e;
  uint local_18;
  
  param_1 = param_1 & 0xffff;
  uVar7 = DAT_08128da4;
  if (param_1 < *(ushort *)(*DAT_08128da0 + 4)) {
    bVar3 = *(byte *)(*DAT_08128de8 + 8);
    auStack_42[bVar3 + 1] = 0;
    puVar6 = auStack_42 + bVar3;
    bVar3 = 0;
    do {
      uVar5 = (uint)*param_2;
      param_2 = param_2 + 1;
      bVar2 = 0;
      do {
        *puVar6 = (short)uVar5;
        puVar6 = puVar6 + -1;
        uVar5 = uVar5 >> 1;
        bVar2 = bVar2 + 1;
      } while (bVar2 < 0x10);
      bVar3 = bVar3 + 1;
    } while (bVar3 < 4);
    iVar4 = *DAT_08128de8;
    for (bVar3 = 0; bVar3 < *(byte *)(iVar4 + 8); bVar3 = bVar3 + 1) {
      *puVar6 = (short)param_1;
      puVar6 = puVar6 + -1;
      param_1 = param_1 >> 1;
      iVar4 = *DAT_08128de8;
    }
    *puVar6 = 0;
    puVar6[-1] = 1;
    FUN_08128c40(auStack_c4,&DAT_0d000000,*(byte *)(*DAT_08128e6c + 8) + 0x43);
    uVar7 = 0;
    local_20 = 0;
    local_1e = *DAT_08128e70;
    local_18 = 0;
    if ((_DAT_0d000000 & 1) != 0) goto LAB_08128ed0;
    do {
      do {
        uVar1 = *DAT_08128e70;
        if (uVar1 != local_1e) {
          if (local_1e < uVar1) {
            iVar4 = (uint)uVar1 - (uint)local_1e;
          }
          else {
            iVar4 = (uVar1 + 0xe4) - (uint)local_1e;
          }
          local_18 = iVar4 + local_18;
          local_1e = uVar1;
          if (0x88 < local_18) {
            if ((local_20 == 0) && ((_DAT_0d000000 & 1) == 0)) {
              uVar7 = DAT_08128eac;
            }
            goto LAB_08128edc;
          }
        }
      } while ((local_20 != 0) || ((_DAT_0d000000 & 1) == 0));
LAB_08128ed0:
      local_20 = local_20 + 1;
    } while (param_3 != '\0');
  }
LAB_08128edc:
  return CONCAT44(in_lr,uVar7);
}


