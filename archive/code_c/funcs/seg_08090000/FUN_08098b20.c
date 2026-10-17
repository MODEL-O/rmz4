// undefined FUN_08098b20(void)
// entry 0x8098b20


undefined4 FUN_08098b20(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(char *)(param_1 + 0xbd) == '\0') {
        if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
          *(undefined1 *)(param_1 + 0xd) = 0;
        }
        else {
          FUN_080d0dc4(0,param_1 + 0x54,0x200,*(undefined1 *)(param_1 + 0xbc));
          *(undefined1 *)(param_1 + 0xd) = 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 2;
      }
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08098bac));
  }
  else {
    FUN_08098bb0(param_1);
  }
  return in_lr;
}


