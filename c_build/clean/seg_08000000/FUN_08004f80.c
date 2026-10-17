// undefined FUN_08004f80(void)
// entry 0x8004f80


void FUN_08004f80(int *param_1,int *param_2,int param_3,ushort *param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  iVar4 = *param_2;
  iVar2 = param_2[1];
  uVar1 = *param_4;
  param_4 = param_4 + (iVar4 >> 4) + (iVar2 >> 4) * (uint)uVar1 + 2;
  uVar5 = 0;
  iVar8 = param_1[3];
  do {
    uVar3 = 0;
    do {
      uVar6 = (int)(short)uVar3 + (iVar4 >> 4);
      puVar7 = (undefined4 *)
               (param_3 + (((int)(uVar5 * 0x10000) >> 0x10) + (iVar2 >> 4) & 0xfU) * 0x80 +
                (uVar6 & 0xf) * 4 + (uVar6 & 0x10) * 0x80);
      *puVar7 = *(undefined4 *)((uint)*param_4 * 8 + iVar8);
      puVar7[0x10] = *(undefined4 *)((uint)*param_4 * 8 + iVar8 + 4);
      param_4 = param_4 + 1;
      uVar6 = (int)(short)uVar3 + 1;
      uVar3 = uVar6 & 0xffff;
    } while ((int)(uVar6 * 0x10000) >> 0x10 < 0x10);
    param_4 = param_4 + (uVar1 - 0x10);
    uVar3 = uVar5 * 0x10000 + 0x10000;
    uVar5 = uVar3 >> 0x10;
  } while ((int)uVar3 >> 0x10 < 0xb);
  iVar4 = *param_2;
  uVar1 = (ushort)DAT_0800504c;
  *(ushort *)(param_1 + 2) = (ushort)iVar4 & uVar1;
  iVar2 = param_2[1];
  *(ushort *)((int)param_1 + 10) = (ushort)iVar2 & uVar1;
  *param_1 = iVar4;
  param_1[1] = iVar2;
  return;
}


