// undefined FUN_0810ae6c(void)
// entry 0x810ae6c


undefined4 FUN_0810ae6c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_0801cf00(param_1,DAT_0810ae94);
    uVar1 = 0x800;
  }
  else {
    FUN_0801cf00(param_1,DAT_0810aeec);
    uVar1 = 0x8800;
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined4 *)(param_1 + 0x54) = 0x5800;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810aef0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0810ada0(param_1);
  return in_lr;
}


