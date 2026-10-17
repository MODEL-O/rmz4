// undefined FUN_080b9658(void)
// entry 0x80b9658


undefined4 FUN_080b9658(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    uVar2 = FUN_0801fb14(DAT_080b96ec,param_1 + 0x54);
    if (0x1400 < uVar2) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b96f0);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b9688);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080b96f4(param_1);
  }
  return in_lr;
}


