// undefined FUN_080e5a20(void)
// entry 0x80e5a20


undefined4 FUN_080e5a20(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  local_18 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = local_18;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  if (*(char *)(param_1 + 0x12) == '\0') {
    local_14 = *(int *)(param_1 + 0x58) + DAT_080e5a6c;
    FUN_080d0c88(1,&local_18);
    FUN_08002b10(0x2a);
    if (*(char *)(param_1 + 0x11) == '\0') {
      FUN_080e56d0(param_1 + 0x54,DAT_080e5a70,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    else {
      FUN_080e56d0(param_1 + 0x54,DAT_080e5ab8,*(byte *)(param_1 + 10) >> 4 & 1);
      FUN_080e56d0(param_1 + 0x54,0x102,*(byte *)(param_1 + 10) >> 4 & 1);
    }
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e5abc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}


