// undefined FUN_080ff5d4(void)
// entry 0x80ff5d4


undefined4 FUN_080ff5d4(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != -0x5700) {
      FUN_0801cf00(param_1);
      *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
      *(undefined1 *)(param_1 + 0x12) = 8;
    }
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(undefined1 *)(param_1 + 0x12) = 8;
      goto LAB_080ff68e;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto LAB_080ff68e;
    FUN_08002b10(0x184);
    uVar2 = 1;
  }
  else {
    *(short *)(DAT_080ff670 + DAT_080ff674) = *(short *)(DAT_080ff670 + DAT_080ff674) + 2;
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) != DAT_080ff678) {
      FUN_0801cf00(param_1);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + 0x800;
      *(undefined1 *)(param_1 + 0x12) = 0x30;
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined1 *)(param_1 + 0x12) = 0x30;
      goto LAB_080ff68e;
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 != -1) goto LAB_080ff68e;
    uVar2 = 0;
  }
  *(undefined1 *)(param_1 + 0xd) = uVar2;
LAB_080ff68e:
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return in_lr;
}


