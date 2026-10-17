// undefined FUN_0807fd44(void)
// entry 0x807fd44


undefined4 FUN_0807fd44(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (*(char *)(param_1 + 0xc1) != '\0') {
      bVar2 = *(byte *)(param_1 + 0x12) ^ 1;
      if (bVar2 == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xef;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 0x10;
      }
      *(byte *)(param_1 + 10) = bVar1;
      bVar2 = bVar2 & 1;
      *(byte *)(param_1 + 0x4c) = bVar2;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
    }
    if (*(char *)(param_1 + 0xc3) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 0x10000) == 0) {
        FUN_0801cf00(param_1,DAT_0807fe4c);
        *(undefined1 *)(param_1 + 0x12) = 0x20;
        *(undefined1 *)(param_1 + 0xd) = 0;
      }
      else {
        FUN_0801cf00(param_1,DAT_0807fe00);
        *(undefined1 *)(param_1 + 0x12) = 0x18;
        local_18 = *(int *)(param_1 + 0x54) + 0x800 + (uint)*(byte *)(param_1 + 0xc0) * -0x1000;
        local_14 = *(int *)(param_1 + 0x58) + DAT_0807fe04;
        FUN_080d0dc4(0,&local_18,0x200,*(byte *)(param_1 + 0xc0));
        FUN_080d6784(param_1,*(undefined1 *)(param_1 + 0xc2));
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
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807fe50));
  return in_lr;
}


