// undefined FUN_080c3318(void)
// entry 0x80c3318


undefined4 FUN_080c3318(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar5 + 0xc) < 2) {
    FUN_0801cff0(param_1);
    iVar4 = *(int *)(iVar5 + 0x58);
    iVar2 = (*(int *)(iVar5 + 0x54) - *(int *)(param_1 + 0xb8)) * -0x200;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + (iVar2 >> 8);
    iVar2 = (iVar4 - *(int *)(param_1 + 0xbc)) * -0x200;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xff;
    }
    *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + (iVar2 >> 8);
    uVar3 = *(undefined4 *)(iVar5 + 0x58);
    *(int *)(param_1 + 0xb8) = *(int *)(iVar5 + 0x54);
    *(undefined4 *)(param_1 + 0xbc) = uVar3;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c335c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  return in_lr;
}


