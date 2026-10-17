// undefined FUN_080bd124(void)
// entry 0x80bd124


undefined4 FUN_080bd124(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cd28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  FUN_08005760(param_1 + 0x74,DAT_080bd180,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bd184);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cf00(param_1,DAT_080bd188);
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined4 *)(param_1 + 0x5c) = DAT_080bd18c;
    uVar1 = 0xc0;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x180;
    uVar1 = 0x40;
  }
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0xb8) = 1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_080bd1bc(param_1);
  return in_lr;
}


