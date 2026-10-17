// undefined FUN_080ddb04(void)
// entry 0x80ddb04


undefined4 FUN_080ddb04(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_0801cf00(param_1,DAT_080ddb48);
  }
  else {
    FUN_0801cf00(param_1,DAT_080ddb28);
  }
  FUN_0801cff0(param_1);
  uVar1 = DAT_080ddb4c;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar1 = 0x180;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = DAT_080ddb7c;
  *(undefined1 *)(param_1 + 0x12) = 0x10;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ddb80);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080dd6c8(param_1);
  return in_lr;
}


