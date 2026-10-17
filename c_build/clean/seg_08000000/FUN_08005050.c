// undefined FUN_08005050(void)
// entry 0x8005050


void FUN_08005050(int *param_1,int *param_2,int param_3,ushort *param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  iVar7 = *param_2;
  iVar4 = param_2[1];
  uVar1 = *param_4;
  param_4 = param_4 + (iVar7 >> 4) + (iVar4 >> 4) * (uint)uVar1 + 2;
  uVar5 = 0;
  iVar2 = param_1[3];
  do {
    uVar3 = 0;
    do {
      uVar6 = (int)(short)uVar3 + (iVar7 >> 4);
      puVar8 = (undefined4 *)
               (param_3 + (((int)(uVar5 * 0x10000) >> 0x10) + (iVar4 >> 4) & 0xfU) * 0x80 +
                (uVar6 & 0xf) * 4 + (uVar6 & 0x10) * 0x80);
      *puVar8 = *(undefined4 *)((uint)*param_4 * 8 + iVar2);
      puVar8[0x10] = *(undefined4 *)((uint)*param_4 * 8 + iVar2 + 4);
      param_4 = param_4 + 1;
      uVar6 = (int)(short)uVar3 + 1;
      uVar3 = uVar6 & 0xffff;
    } while ((int)(uVar6 * 0x10000) >> 0x10 < 0x12);
    param_4 = param_4 + (uVar1 - 0x12);
    uVar3 = uVar5 * 0x10000 + 0x10000;
    uVar5 = uVar3 >> 0x10;
  } while ((int)uVar3 >> 0x10 < 0xc);
  iVar4 = *param_2;
  uVar1 = (ushort)DAT_08005120;
  *(ushort *)(param_1 + 2) = (ushort)iVar4 & uVar1;
  iVar2 = param_2[1];
  *(ushort *)((int)param_1 + 10) = (ushort)iVar2 & uVar1;
  *param_1 = iVar4;
  param_1[1] = iVar2;
  return;
}


