// undefined FUN_08006a94(void)
// entry 0x8006a94


void FUN_08006a94(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  iVar4 = 0x02000ab0;
  if (*(short *)(0x02000ab0 + 0x1d0) == 4) {
    iVar1 = FUN_08129050(*param_2 + 0xffff1000,0x3c000);
    *(int *)(iVar4 + 0x1c8) = iVar1 + 0xf000;
    *(int *)(iVar4 + 0x1cc) = param_2[1];
  }
  else {
    *(int *)(0x02000ab0 + 0x1c8) = *param_2;
    *(int *)(iVar4 + 0x1cc) = param_2[1];
  }
  piVar7 = *(int **)((uint)(*(byte *)(iVar4 + 0x0002c010) >> 4) * 4 + param_1 * 8 + 0x0882c5d4);
  iVar1 = *piVar7;
  (*(int *)0x02000a00) = (ushort)0x0000c1ff & (*(int *)0x02000a00);
  FUN_08002c94(iVar4,0x08007989);
  *(int *)(iVar4 + 8) = iVar4;
  *(undefined2 *)(iVar4 + 0x0002c002) = 0;
  *(ushort *)(iVar4 + 0x1d0) = (ushort)iVar1 | 0x80;
  piVar2 = (int *)(iVar1 * 0xc + 0x08cd9000);
  FUN_08005328(iVar4 + 0x1b8,piVar2[1] + (int)piVar2,*piVar2 + (int)piVar2,piVar2[2] + (int)piVar2,
               piVar7[3]);
  *(short *)(iVar4 + 0x000007d4) = (short)0x0000ffff;
  *(undefined2 *)(iVar4 + 0x000007d6) = 0xffff;
  *(int *)(iVar4 + 0x0002c004) = piVar7[0x1e];
  *(int *)(iVar4 + 0x0002c008) = piVar7[0x1f];
  FUN_08007220(piVar7,piVar7[3]);
  uVar3 = 0;
  do {
    FUN_08007560((int)(short)uVar3,piVar7);
    iVar4 = 0x02000ab0;
    uVar5 = (int)(short)uVar3 + 1;
    uVar3 = uVar5 & 0xffff;
  } while ((int)(uVar5 * 0x10000) >> 0x10 < 3);
  *(undefined4 *)(0x02000ab0 + 0x0002c00c) = 0x7fffffff;
  puVar8 = (undefined4 *)(iVar4 + 0x0002c014);
  *puVar8 = 0;
  *(undefined4 *)(iVar4 + 0x0002c018) = 0;
  puVar6 = (undefined4 *)(iVar4 + 0x0002c01c);
  *puVar6 = 0x3c0000;
  *(undefined4 *)(iVar4 + 0x0002c020) = 0x280000;
  if ((*(ushort *)(iVar4 + 0x1d0) & 0x7f) == 4) {
    *puVar8 = 0;
    *puVar6 = 0x78000000;
  }
  *(undefined1 *)(iVar4 + 0x1d2) = 0;
  *(undefined1 *)(iVar4 + 0x000001d3) = 0;
  uVar3 = 0;
  iVar4 = iVar4 + 0x0002d024;
  do {
    *(undefined1 *)((short)uVar3 + iVar4) = 0;
    uVar5 = (int)(short)uVar3 + 1;
    uVar3 = uVar5 & 0xffff;
  } while ((int)(uVar5 * 0x10000) >> 0x10 < 4);
  return;
}


