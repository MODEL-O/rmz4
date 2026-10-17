// undefined FUN_08042e98(void)
// entry 0x8042e98


undefined4 FUN_08042e98(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  iVar7 = *(int *)(param_1 + 0x2c);
  if (*(byte *)(iVar6 + 0xc) < 2) {
    FUN_0801cff0(param_1);
    bVar1 = *(byte *)(iVar6 + 10) >> 4;
    bVar4 = bVar1 & 1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
    iVar5 = *(int *)(iVar6 + 0x54);
    iVar3 = FUN_08128fb8(*(int *)(iVar7 + 0x54) - iVar5,5);
    *(uint *)(param_1 + 0x54) = iVar5 + (*(byte *)(param_1 + 0x11) + 1) * iVar3;
    iVar3 = *(int *)(iVar6 + 0x58);
    iVar6 = FUN_08128fb8(*(int *)(iVar7 + 0x58) - iVar3,5);
    *(uint *)(param_1 + 0x58) = iVar3 + (*(byte *)(param_1 + 0x11) + 1) * iVar6;
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08042ebc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  return in_lr;
}


