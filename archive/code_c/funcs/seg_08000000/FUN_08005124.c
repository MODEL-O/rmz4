// undefined FUN_08005124(void)
// entry 0x8005124


undefined4 FUN_08005124(uint *param_1,uint *param_2,int param_3,ushort *param_4)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  uint unaff_r8;
  int unaff_r9;
  undefined4 in_lr;
  int local_2c;
  uint local_28;
  
  bVar3 = false;
  uVar7 = *param_2;
  if ((uVar7 & 0x10) == (*param_1 & 0x10)) {
    bVar3 = true;
    uVar7 = param_2[1];
  }
  else {
    if ((int)*param_1 < (int)uVar7) {
      uVar7 = uVar7 + 0xf0;
    }
    unaff_r8 = (int)uVar7 >> 4;
    uVar7 = param_2[1];
    unaff_r9 = (int)uVar7 >> 4;
  }
  bVar2 = false;
  if ((uVar7 & 0x10) == (param_1[1] & 0x10)) {
    bVar2 = true;
  }
  else {
    if ((int)param_1[1] < (int)uVar7) {
      uVar7 = uVar7 + 0xa0;
    }
    local_28 = (int)uVar7 >> 4;
    local_2c = (int)*param_2 >> 4;
  }
  if (!bVar3) {
    uVar1 = *param_4;
    puVar8 = param_4 + unaff_r8 + unaff_r9 * (uint)uVar1 + 2;
    uVar7 = 0;
    uVar5 = param_1[3];
    do {
      puVar4 = (undefined4 *)
               (param_3 + (unaff_r8 & 0xf) * 4 + (unaff_r8 & 0x10) * 0x80 +
               ((short)uVar7 + unaff_r9 & 0xfU) * 0x80);
      *puVar4 = *(undefined4 *)((uint)*puVar8 * 8 + uVar5);
      puVar4[0x10] = *(undefined4 *)((uint)*puVar8 * 8 + uVar5 + 4);
      puVar8 = puVar8 + uVar1;
      uVar6 = (int)(short)uVar7 + 1;
      uVar7 = uVar6 & 0xffff;
    } while ((int)(uVar6 * 0x10000) >> 0x10 < 0xb);
  }
  if (!bVar2) {
    param_4 = param_4 + local_2c + local_28 * *param_4 + 2;
    uVar7 = 0;
    uVar5 = param_1[3];
    do {
      uVar6 = (short)uVar7 + local_2c;
      puVar4 = (undefined4 *)
               ((uVar6 & 0xf) * 4 + param_3 + (local_28 & 0xf) * 0x80 + (uVar6 & 0x10) * 0x80);
      *puVar4 = *(undefined4 *)((uint)*param_4 * 8 + uVar5);
      puVar4[0x10] = *(undefined4 *)((uint)*param_4 * 8 + uVar5 + 4);
      param_4 = param_4 + 1;
      uVar6 = (int)(short)uVar7 + 1;
      uVar7 = uVar6 & 0xffff;
    } while ((int)(uVar6 * 0x10000) >> 0x10 < 0x10);
  }
  uVar5 = *param_2;
  uVar1 = (ushort)DAT_080052b0;
  *(ushort *)(param_1 + 2) = (ushort)uVar5 & uVar1;
  uVar7 = param_2[1];
  *(ushort *)((int)param_1 + 10) = (ushort)uVar7 & uVar1;
  *param_1 = uVar5;
  param_1[1] = uVar7;
  return in_lr;
}


