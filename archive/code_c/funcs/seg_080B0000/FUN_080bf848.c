// undefined FUN_080bf848(void)
// entry 0x80bf848


undefined4 FUN_080bf848(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  FUN_0801cff0();
  if (*(int *)(param_1 + 0x60) < 0) {
    iVar3 = *(int *)(param_1 + 0x58);
    if (*(int *)(iVar4 + 0xb8) + DAT_080bf874 < iVar3 + DAT_080bf870) goto LAB_080bf890;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x58);
    if (iVar3 + 0x800 < *(int *)(iVar4 + 0xb8)) goto LAB_080bf890;
  }
  *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
LAB_080bf890:
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = iVar3 + *(int *)(param_1 + 0x60);
  uVar1 = FUN_0801fb14(DAT_080bf8ec,param_1 + 0x54);
  if (0x4000 < uVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bf8f0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


