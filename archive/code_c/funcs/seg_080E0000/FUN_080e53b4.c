// undefined FUN_080e53b4(void)
// entry 0x80e53b4


undefined4 FUN_080e53b4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  iVar1 = *(int *)(*DAT_080e5404 + 0x54);
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_10 = *(int *)(param_1 + 0x58) + DAT_080e5408;
    local_14 = *(int *)(param_1 + 0x54);
    FUN_080d0dc4(0,&local_14,0x200);
    FUN_080e52b4(param_1 + 0x54,0,1);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x180;
    *(undefined4 *)(param_1 + 0x60) = DAT_080e5448;
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    if (*(int *)(param_1 + 0x54) < iVar1) {
      *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
    }
  }
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080e544c));
  *(undefined1 *)(param_1 + 0x12) = 0x14;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


