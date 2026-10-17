// undefined FUN_08114938(void)
// entry 0x8114938


undefined4 FUN_08114938(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  int iVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + DAT_081149e4 + 2) = 0;
  uVar2 = DAT_081149f4;
  iVar3 = DAT_081149e8;
  puVar6 = (undefined4 *)(DAT_081149e8 + DAT_081149ec);
  *(undefined4 *)(DAT_081149e8 + DAT_081149f0) = DAT_081149f4;
  *puVar6 = uVar2;
  pbVar8 = (byte *)(param_1 + DAT_081149f8);
  FUN_0801e8d8(pbVar8);
  FUN_0801e944(param_1 + 0x6300);
  FUN_08108e04(param_1 + DAT_081149fc);
  FUN_08108f48(param_1 + DAT_08114a00);
  iVar7 = param_1 + DAT_08114a04;
  FUN_08038034(iVar7);
  *(byte *)(DAT_08114a08 + 4) = *(byte *)(DAT_08114a08 + 4) | 0x40;
  *pbVar8 = *pbVar8 | 0x40;
  *(undefined2 *)(iVar7 + 0x20) = 1;
  *(undefined2 *)(iVar7 + 0x22) = 0x200;
  *(undefined2 *)(iVar7 + 0x24) = 2;
  *(undefined2 *)(iVar7 + 0x26) = 0x100;
  *(undefined1 *)(param_1 + DAT_08114a0c) = 0;
  iVar7 = DAT_08114a10;
  *(undefined1 *)(param_1 + DAT_08114a10) = 1;
  *(undefined1 *)(param_1 + iVar7 + 1) = 0;
  sVar1 = *(short *)(param_1 + DAT_08114a14);
  if (sVar1 == 3) {
    iVar3 = iVar3 + DAT_08114a04;
    *(undefined1 *)(iVar3 + 0xc) = 2;
    *(undefined1 *)(iVar3 + 0xd) = 0;
    *(undefined1 *)(DAT_08114a18 + DAT_08114a1c) = 3;
  }
  else {
    if (sVar1 == 4) {
      iVar3 = iVar3 + DAT_08114a38;
      *(undefined1 *)(iVar3 + 0xc) = 0;
      *(undefined1 *)(iVar3 + 0xd) = 1;
      puVar4 = (undefined1 *)(DAT_08114a3c + DAT_08114a40);
      uVar5 = 0x12;
    }
    else if (sVar1 == 5) {
      iVar3 = iVar3 + DAT_08114a5c;
      *(undefined1 *)(iVar3 + 0xc) = 2;
      *(undefined1 *)(iVar3 + 0xd) = 1;
      puVar4 = (undefined1 *)(DAT_08114a60 + DAT_08114a64);
      uVar5 = 0x13;
    }
    else {
      iVar3 = iVar3 + DAT_08114a9c;
      *(undefined1 *)(iVar3 + 0xc) = 2;
      *(undefined1 *)(iVar3 + 0xd) = 0;
      puVar4 = (undefined1 *)(DAT_08114aa0 + DAT_08114aa4);
      uVar5 = 0x10;
    }
    *puVar4 = uVar5;
  }
  FUN_0801f124(*(undefined1 *)(param_1 + DAT_08114aa8));
  FUN_081126ac(param_1,0x300);
  return in_lr;
}


