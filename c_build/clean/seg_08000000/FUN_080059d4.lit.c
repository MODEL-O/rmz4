// undefined FUN_080059d4(void)
// entry 0x80059d4


void FUN_080059d4(undefined4 *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  byte *pbVar9;
  pbVar9 = (byte *)*param_1;
  piVar3 = (int *)param_1[2];
  iVar6 = (int)*(short *)((0xff - (param_3 & 0xff) & 0xff) * 2 + 0x0812930c);
  iVar4 = (int)*(short *)((0x3f - (param_3 & 0xff) & 0xff) * 2 + 0x0812930c);
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x7f) != 0) {
    *(byte *)(param_1 + 8) = bVar1 & 0x80 | (bVar1 & 0x7f) - 1;
  }
  iVar2 = 0x030032e0;
  if (pbVar9 != (byte *)0x0) {
    if ((pbVar9[3] == 0) && (pbVar9[8] == 0)) {
      param_1[7] = param_1[6];
      param_1[6] = 0;
    }
    else {
      if (*(byte *)(0x030032e0 + 3) < 0x40) {
        do {
          puVar7 = (undefined4 *)((uint)*(byte *)(iVar2 + 3) * 0x18 + iVar2 + 4);
          *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) + 1;
          puVar7[2] = param_1;
          puVar7[1] = pbVar9;
          iVar8 = (*(short *)(pbVar9 + 0x10) * iVar4 >> 8) +
                  (*(short *)(pbVar9 + 0x12) * iVar6 >> 8);
          iVar5 = (*(short *)(pbVar9 + 0x12) * iVar4 >> 8) -
                  (*(short *)(pbVar9 + 0x10) * iVar6 >> 8);
          if ((param_2 & 1) == 0) {
            iVar8 = *piVar3 + iVar8;
          }
          else {
            iVar8 = *piVar3 - iVar8;
          }
          puVar7[3] = iVar8;
          if ((param_2 & 2) == 0) {
            iVar5 = piVar3[1] + iVar5;
          }
          else {
            iVar5 = piVar3[1] - iVar5;
          }
          puVar7[4] = iVar5;
          *(undefined2 *)(puVar7 + 5) = *(undefined2 *)(pbVar9 + 0x14);
          *(undefined2 *)((int)puVar7 + 0x16) = *(undefined2 *)(pbVar9 + 0x16);
          *puVar7 = *(undefined4 *)(((uint)*pbVar9 * 3 + (uint)pbVar9[1]) * 4 + 0x030038e4);
          *(undefined4 **)(((uint)*pbVar9 * 3 + (uint)pbVar9[1]) * 4 + 0x030038e4) = puVar7;
        } while ((pbVar9[0xb] != 0) && (pbVar9 = pbVar9 + 0x18, *(byte *)(0x030032e0 + 3) < 0x40))
        ;
      }
      param_1[7] = param_1[6];
      param_1[6] = 0;
    }
  }
  return;
}


