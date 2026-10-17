// undefined FUN_0803cc78(void)
// entry 0x803cc78


undefined4 FUN_0803cc78(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xb4) + 0xd) == '\x01') {
    if (*(char *)(param_1 + 0xe) == '\0') {
      if (*(char *)(*(int *)(param_1 + 0xb4) + 0xe) != '\x01') {
        if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) ==
            DAT_0803ccec) {
          FUN_0801cf00(param_1,DAT_0803ccec + 1);
        }
        else {
          FUN_0801cf00(param_1,DAT_0803cd10);
        }
        FUN_0801cff0(param_1);
        FUN_08005784(param_1 + 0x74,DAT_0803cd14);
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
        return in_lr;
      }
      FUN_0801cff0(param_1);
      FUN_08005794(param_1 + 0x74,
                   *(undefined4 *)
                    (*(char *)(param_1 + 0x71) * 4 +
                    *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0803cd50)),
                   *(undefined1 *)(param_1 + 0xc1),*(undefined1 *)(param_1 + 0xc0),
                   *(undefined1 *)(param_1 + 0xc2),0xffffffff);
      return in_lr;
    }
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0x73) != '\x03') {
      return in_lr;
    }
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803cd80);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar2 = *(undefined4 *)(*piVar1 + 8);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803ccc0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar2 = *(undefined4 *)(*piVar1 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return in_lr;
}


