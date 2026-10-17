// undefined FUN_08105154(void)
// entry 0x8105154


undefined4 FUN_08105154(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081051bc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  if (*(char *)(param_1 + 0x11) == '\x04') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_08105234,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_081051c0,param_1 + 0x54,0x80);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = DAT_08105238;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  iVar2 = *(int *)(param_1 + 0x54) +
          *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0810523c) * 0x100;
  *(int *)(param_1 + 0x54) = iVar2;
  iVar2 = FUN_08008534(iVar2,*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar2 + DAT_08105240;
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_08105244));
  FUN_08105248(param_1);
  return in_lr;
}


