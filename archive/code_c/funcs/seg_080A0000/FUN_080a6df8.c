// undefined FUN_080a6df8(void)
// entry 0x80a6df8


undefined4 FUN_080a6df8(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_080a6e88(param_1);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
      else {
        local_14 = *(undefined4 *)(param_1 + 0x54);
        local_10 = *(int *)(param_1 + 0x58) + DAT_080a6e48;
        FUN_080d0dc4(0,&local_14,0x200,*(undefined1 *)(param_1 + 0xbc));
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080a6e84));
  }
  return in_lr;
}


