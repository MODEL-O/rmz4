// undefined FUN_0800580c(void)
// entry 0x800580c


void FUN_0800580c(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int *piVar5;
  int iVar6;
  pbVar4 = (byte *)*param_1;
  piVar5 = (int *)param_1[2];
  bVar1 = *(byte *)(param_1 + 8);
  if ((bVar1 & 0x7f) != 0) {
    *(byte *)(param_1 + 8) = bVar1 & 0x80 | (bVar1 & 0x7f) - 1;
  }
  iVar2 = DAT_080058c4;
  if (pbVar4 != (byte *)0x0) {
    if ((pbVar4[3] == 0) && (pbVar4[8] == 0)) {
      param_1[7] = param_1[6];
      param_1[6] = 0;
    }
    else {
      if (*(byte *)(DAT_080058c4 + 3) < 0x40) {
        iVar6 = DAT_080058c8 + DAT_080058c4;
        do {
          puVar3 = (undefined4 *)((uint)*(byte *)(iVar2 + 3) * 0x18 + iVar2 + 4);
          *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) + 1;
          puVar3[2] = param_1;
          puVar3[1] = pbVar4;
          puVar3[3] = *piVar5 + (int)*(short *)(pbVar4 + 0x10);
          puVar3[4] = piVar5[1] + (int)*(short *)(pbVar4 + 0x12);
          *(undefined2 *)(puVar3 + 5) = *(undefined2 *)(pbVar4 + 0x14);
          *(undefined2 *)((int)puVar3 + 0x16) = *(undefined2 *)(pbVar4 + 0x16);
          *puVar3 = *(undefined4 *)(((uint)*pbVar4 * 3 + (uint)pbVar4[1]) * 4 + iVar6);
          *(undefined4 **)(((uint)*pbVar4 * 3 + (uint)pbVar4[1]) * 4 + iVar6) = puVar3;
          if (pbVar4[0xb] == 0) break;
          pbVar4 = pbVar4 + 0x18;
        } while (*(byte *)(iVar2 + 3) < 0x40);
      }
      param_1[7] = param_1[6];
      param_1[6] = 0;
    }
  }
  return;
}


