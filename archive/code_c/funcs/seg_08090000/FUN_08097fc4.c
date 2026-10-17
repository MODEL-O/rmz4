// undefined FUN_08097fc4(void)
// entry 0x8097fc4


undefined4 FUN_08097fc4(int param_1)

{
  undefined4 in_lr;
  undefined4 local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbd) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
      else {
        local_18 = *(undefined4 *)(param_1 + 0x54);
        local_14 = *(int *)(param_1 + 0x58) + DAT_0809802c;
        FUN_080d0dc4(0,&local_18,0x200,*(undefined1 *)(param_1 + 0xbc));
        FUN_080dd574(param_1 + 0x54,3,0,*(byte *)(param_1 + 10) >> 4 & 1);
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
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08098068));
  return in_lr;
}


