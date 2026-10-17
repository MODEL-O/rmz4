// undefined FUN_080bd1bc(void)
// entry 0x80bd1bc


undefined4 FUN_080bd1bc(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar2;
    iVar3 = iVar2 - *(int *)(param_1 + 0xb4);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_1 + 0xb4) - iVar2;
    }
    if (0x11800 < iVar3) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bd25c);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
    }
    FUN_0801cff0(param_1);
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bd1f0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    FUN_080bd260(param_1);
  }
  return in_lr;
}


