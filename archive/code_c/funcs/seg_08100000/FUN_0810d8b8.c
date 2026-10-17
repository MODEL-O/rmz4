// undefined FUN_0810d8b8(void)
// entry 0x810d8b8


undefined4 FUN_0810d8b8(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined2 param_4)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = DAT_0810d918;
  if (*(short *)(DAT_0810d918 + 4) < 0x60) {
    *(undefined4 *)(*(short *)(DAT_0810d918 + 4) * 4 + DAT_0810d918 + 8) = param_1;
    *(undefined1 *)((int)*(short *)(iVar1 + 4) + iVar1 + 0x188) = param_2;
    *(undefined1 *)((int)*(short *)(iVar1 + 4) + iVar1 + 0x1e8) = param_3;
    *(undefined2 *)(*(short *)(iVar1 + 4) * 2 + iVar1 + 0x248) = param_4;
    *(short *)(iVar1 + 4) = *(short *)(iVar1 + 4) + 1;
  }
  return in_lr;
}


