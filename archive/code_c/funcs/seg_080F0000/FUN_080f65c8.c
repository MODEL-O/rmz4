// undefined FUN_080f65c8(void)
// entry 0x80f65c8


undefined4 FUN_080f65c8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (DAT_080f65f0 < *(int *)(param_1 + 0x54)) {
    FUN_0801cf00(param_1,0x7e00);
  }
  else {
    FUN_0801cf00(param_1,0x4b00);
  }
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(uint *)(param_1 + 0x30) = (uint)*(byte *)(param_1 + 0x10) * 8 + DAT_080f6654;
  *(short *)(param_1 + 0x26) = (short)DAT_080f6658;
  iVar1 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + 1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_080f6a24(param_1,*(undefined1 *)(param_1 + 0x10));
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f665c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0xd);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_1 + 0xe);
  FUN_080f64c0(param_1);
  return in_lr;
}


