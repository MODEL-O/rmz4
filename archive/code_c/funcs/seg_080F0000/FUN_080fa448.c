// undefined FUN_080fa448(void)
// entry 0x80fa448


undefined4 FUN_080fa448(int param_1)

{
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
      else {
        local_14 = *(undefined4 *)(param_1 + 100);
        local_10 = *(int *)(param_1 + 0x68) + DAT_080fa4a0;
        FUN_080d0dc4(0,&local_14,0x200,*(undefined1 *)(param_1 + 0xbc));
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 2;
    }
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x68);
    *(int *)(param_1 + 0x40) = param_1 + 0x54;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080fa4f0));
  return in_lr;
}


