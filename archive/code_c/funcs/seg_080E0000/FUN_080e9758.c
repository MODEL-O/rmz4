// undefined FUN_080e9758(void)
// entry 0x80e9758


undefined4 FUN_080e9758(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080e97b0));
  return in_lr;
}


