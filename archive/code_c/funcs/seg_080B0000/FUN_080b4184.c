// undefined FUN_080b4184(void)
// entry 0x80b4184


undefined4 FUN_080b4184(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar1 = *(char *)(param_1 + 0xb8);
    if (cVar1 != '\0') {
      if (cVar1 == '\x03') {
        FUN_080cee84(param_1,0,0);
        FUN_080cee84(param_1,0,1);
      }
      else if (cVar1 == '\x01') {
        FUN_080cee84(param_1,0,0);
      }
      else {
        FUN_080cee84(param_1,0,1);
      }
    }
    if (*(char *)(param_1 + 0xbd) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
      else {
        local_14 = *(undefined4 *)(param_1 + 0x54);
        local_10 = *(int *)(param_1 + 0x58) + DAT_080b4218;
        FUN_080d0dc4(0,&local_14,0x200,*(undefined1 *)(param_1 + 0xbc));
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
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080b4254));
  return in_lr;
}


