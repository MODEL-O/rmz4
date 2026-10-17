// undefined FUN_0810c948(void)
// entry 0x810c948


undefined4 FUN_0810c948(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(byte *)(iVar1 + 1) < 2) {
    FUN_0801cff0(param_1);
    *(undefined4 *)(param_1 + 0x54) = 0x1000;
    *(undefined4 *)(param_1 + 0x58) = 0xa00;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    if (*(byte *)(iVar1 + 3) < 2) {
      *(undefined4 *)(param_1 + 0x54) =
           *(undefined4 *)((uint)*(byte *)(iVar1 + 2) * 4 + DAT_0810c988);
      iVar1 = 0xa00;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = 0x800;
      iVar1 = (uint)*(byte *)(iVar1 + DAT_0810c9b0 + 2) * 0x1000 + 0x1800;
    }
    *(int *)(param_1 + 0x58) = iVar1;
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


