// undefined FUN_080c8a38(void)
// entry 0x80c8a38


undefined4 FUN_080c8a38(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *DAT_080c8a74;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
  FUN_08005760(param_1 + 0x74,DAT_080c8a78,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x60) = DAT_080c8a7c;
  uVar2 = DAT_080c8ac0;
  if (*(char *)(param_1 + 0x11) != '\0') {
    uVar2 = 0x800;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar2;
  if (iVar3 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c8ac4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  else {
    uVar2 = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c8af0);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
    FUN_080c88a4(param_1);
  }
  return in_lr;
}


