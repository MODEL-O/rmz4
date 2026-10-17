// undefined FUN_08008d04(void)
// entry 0x8008d04


void FUN_08008d04(undefined2 param_1,undefined2 param_2,int *param_3,short *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  iVar5 = 0x02000ab0;
  uVar1 = (uint)*(byte *)(0x02000ab0 + 0x1d2);
  if (0x1f < uVar1 + 1) {
    return;
  }
  *(byte *)(0x02000ab0 + 0x1d2) = (byte)(uVar1 + 1);
  iVar6 = uVar1 * 0x18;
  *(undefined2 *)(iVar6 + iVar5 + 0x1d4) = param_1;
  *(undefined2 *)(iVar6 + iVar5 + 0x1d6) = param_2;
  if (*(short *)(iVar5 + 0x1d0) == 4) {
    iVar2 = FUN_08129050(*param_3 + 0xffff1000,0x3c000);
    *(int *)(iVar6 + iVar5 + 0x1dc) = iVar2 + *param_4 + 0xf000;
  }
  else {
    *(int *)(iVar6 + iVar5 + 0x1dc) = *param_3 + (int)*param_4;
  }
  iVar2 = uVar1 * 0x18;
  *(int *)(iVar2 + iVar5 + 0x1dc) = *param_3 + (int)*param_4;
  *(int *)(iVar2 + iVar5 + 0x1e0) = param_3[1] + (int)param_4[1];
  iVar6 = 0;
  if (*(byte *)(iVar5 + 0x000001d3) != 0) {
    iVar3 = iVar5;
    do {
      if (*(short *)(iVar3 + 0x000004d4) == *(short *)(iVar2 + iVar5 + 0x000001d3 + 1)) break;
      iVar3 = iVar3 + 0x18;
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*(byte *)(iVar5 + 0x000001d3));
    if (iVar6 < (int)(uint)*(byte *)(0x000001d3 + iVar5)) {
      iVar6 = iVar6 * 0x18;
      *(undefined4 *)(iVar2 + iVar5 + 0x1e4) = *(undefined4 *)(iVar6 + 0x000004dc + iVar5);
      puVar4 = (undefined4 *)(iVar2 + iVar5 + 0x1e8);
      iVar2 = 0x4e0;
      goto LAB_08008e5a;
    }
  }
  iVar6 = uVar1 * 0x18;
  *(undefined4 *)(iVar6 + iVar5 + 0x1e4) = *(undefined4 *)(iVar6 + iVar5 + 0x1dc);
  puVar4 = (undefined4 *)(iVar6 + iVar5 + 0x1e8);
  iVar2 = 0x1e0;
LAB_08008e5a:
  *puVar4 = *(undefined4 *)(iVar6 + iVar2 + iVar5);
  iVar5 = uVar1 * 0x18 + iVar5;
  *(ushort *)(iVar5 + 0x1d8) = (ushort)param_4[2] >> 1;
  *(ushort *)(iVar5 + 0x1da) = (ushort)param_4[3] >> 1;
  return;
}


