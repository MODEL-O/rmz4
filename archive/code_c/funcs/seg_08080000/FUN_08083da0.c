// undefined FUN_08083da0(void)
// entry 0x8083da0


undefined4 FUN_08083da0(int param_1)

{
  undefined1 uVar1;
  short sVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xbe) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
      else {
        local_1c = *(undefined4 *)(param_1 + 0x54);
        local_18 = *(int *)(param_1 + 0x58) + DAT_08083df4;
        FUN_080d0dc4(0,&local_1c,0x200,*(undefined1 *)(param_1 + 0xbc));
        if (*(int *)(param_1 + 0x2c) == 0) {
          sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0xb00);
          uVar1 = 0;
          if (sVar2 != 0) {
            uVar1 = 2;
          }
          *(undefined1 *)(param_1 + 0xd) = uVar1;
        }
        else {
          *(undefined1 *)(param_1 + 0xd) = 0;
        }
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined1 *)(param_1 + 0xbd) = 1;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08083e50));
  return in_lr;
}


