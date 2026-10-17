// undefined FUN_0810d85c(void)
// entry 0x810d85c


undefined4 FUN_0810d85c(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0810d8b0;
  if (*(short *)(DAT_0810d8b0 + 4) < 0x60) {
    *(undefined4 *)(*(short *)(DAT_0810d8b0 + 4) * 4 + DAT_0810d8b0 + 8) = param_1;
    *(undefined1 *)((int)*(short *)(iVar1 + 4) + iVar1 + 0x188) = param_2;
    *(undefined1 *)((int)*(short *)(iVar1 + 4) + iVar1 + 0x1e8) = param_3;
    *(short *)(*(short *)(iVar1 + 4) * 2 + iVar1 + 0x248) = (short)DAT_0810d8b4;
    *(short *)(iVar1 + 4) = *(short *)(iVar1 + 4) + 1;
  }
  return in_lr;
}


