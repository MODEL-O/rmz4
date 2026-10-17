// undefined FUN_08093f84(void)
// entry 0x8093f84


undefined4 FUN_08093f84(int param_1)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_08093fe4);
    FUN_0801cf00(param_1,0x4000);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08094a38(param_1);
  bVar2 = *(byte *)(DAT_08093fe8 + DAT_08093fec);
  uVar3 = FUN_08129120(uVar1,3);
  if (((int)(uint)bVar2 >> (uVar3 & 0xff) & 1U) != 0) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


