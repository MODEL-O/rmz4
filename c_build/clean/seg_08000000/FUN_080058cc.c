// undefined FUN_080058cc(void)
// entry 0x80058cc


void FUN_080058cc(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  pbVar5 = (byte *)*param_1;
  piVar6 = (int *)param_1[2];
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x7f) != 0) {
    *(byte *)(param_1 + 8) = bVar1 & 0x80 | (bVar1 & 0x7f) - 1;
  }
  iVar2 = DAT_08005958;
  if (pbVar5 != (byte *)0x0) {
    if ((pbVar5[3] == 0) && (pbVar5[8] == 0)) {
      param_1[7] = param_1[6];
      param_1[6] = 0;
    }
    else {
      if (*(byte *)(DAT_08005958 + 3) < 0x40) {
        iVar7 = DAT_0800595c + DAT_08005958;
        do {
          puVar4 = (undefined4 *)((uint)*(byte *)(iVar2 + 3) * 0x18 + iVar2 + 4);
          *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) + 1;
          puVar4[2] = param_1;
          puVar4[1] = pbVar5;
          if ((param_2 & 1) == 0) {
            iVar3 = *piVar6 + (int)*(short *)(pbVar5 + 0x10);
          }
          else {
            iVar3 = *piVar6 - (int)*(short *)(pbVar5 + 0x10);
          }
          puVar4[3] = iVar3;
          if ((param_2 & 2) == 0) {
            iVar3 = piVar6[1] + (int)*(short *)(pbVar5 + 0x12);
          }
          else {
            iVar3 = piVar6[1] - (int)*(short *)(pbVar5 + 0x12);
          }
          puVar4[4] = iVar3;
          *(undefined2 *)(puVar4 + 5) = *(undefined2 *)(pbVar5 + 0x14);
          *(undefined2 *)((int)puVar4 + 0x16) = *(undefined2 *)(pbVar5 + 0x16);
          *puVar4 = *(undefined4 *)(((uint)*pbVar5 * 3 + (uint)pbVar5[1]) * 4 + iVar7);
          *(undefined4 **)(((uint)*pbVar5 * 3 + (uint)pbVar5[1]) * 4 + iVar7) = puVar4;
        } while ((pbVar5[0xb] != 0) && (pbVar5 = pbVar5 + 0x18, *(byte *)(iVar2 + 3) < 0x40));
      }
      param_1[7] = param_1[6];
      param_1[6] = 0;
    }
  }
  return;
}


