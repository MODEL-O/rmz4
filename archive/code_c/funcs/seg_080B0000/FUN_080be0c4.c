// undefined FUN_080be0c4(void)
// entry 0x80be0c4


undefined4 FUN_080be0c4(int param_1)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  uVar2 = *(byte *)(DAT_080be114 + 9) & 4;
  if ((*(byte *)(DAT_080be114 + 9) & 4) == 0) {
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(int *)(param_1 + 0x60) <= DAT_080be17c) {
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      if (((*(uint *)(param_1 + 0x8c) & 4) != 0) ||
         (sVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54)), sVar1 != 0)) {
        FUN_0801cf00(param_1,DAT_080be180);
        FUN_0801cff0(param_1);
        FUN_08002b10(0x35);
        FUN_08005784(param_1 + 0x74,DAT_080be184);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
    }
    else {
      if (*(char *)(param_1 + 0x71) == '\x02') {
        *(uint *)(param_1 + 0x8c) = uVar2;
        *(uint *)(param_1 + 0x90) = uVar2;
        *(char *)(param_1 + 0x94) = (char)uVar2;
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      }
      if (*(char *)(param_1 + 0x73) == '\x03') {
        piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080be1d4);
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
        FUN_080be1d8(param_1);
      }
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080be118);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


