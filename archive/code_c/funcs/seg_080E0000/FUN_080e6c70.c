// undefined FUN_080e6c70(void)
// entry 0x80e6c70


undefined4 FUN_080e6c70(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_080e6b5c(param_1 + 0x54,1,*(byte *)(param_1 + 10) >> 4 & 1);
    local_18 = *(undefined4 *)(param_1 + 0x54);
    local_14 = *(int *)(param_1 + 0x58) + DAT_080e6ccc;
    FUN_080d0dc4(0,&local_18,0x200,*(byte *)(param_1 + 10) >> 4 & 1);
    local_14 = *(int *)(param_1 + 0x58) + DAT_080e6cd0;
    FUN_080d0c88(2,&local_18);
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x14;
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    iVar2 = DAT_080e6d3c;
    iVar1 = (int)*(short *)(DAT_080e6d3c + 0xa0);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 0xf;
    }
    *(int *)(param_1 + 100) = iVar1 >> 4;
    iVar2 = (int)*(short *)(iVar2 + 0x20);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    *(int *)(param_1 + 0x68) = iVar2 >> 4;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar2 = (iVar1 >> 4) * -0x100;
      if (iVar2 < 0) {
        iVar2 = iVar2 + 0xff;
      }
      *(int *)(param_1 + 100) = iVar2 >> 8;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    *(undefined1 *)(param_1 + 0x12) = 0xff;
  }
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080e6d40));
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


