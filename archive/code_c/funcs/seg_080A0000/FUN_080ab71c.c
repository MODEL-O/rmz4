// undefined FUN_080ab71c(void)
// entry 0x80ab71c


undefined4 FUN_080ab71c(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  uVar3 = (uint)*(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ab774);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(uint *)(param_1 + 0x5c) = (uVar3 * -2 + 1) * 0x60;
  *(undefined4 *)(param_1 + 0x60) = 0xffffffe0;
  *(undefined1 *)(param_1 + 0x12) = 0x30;
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  if (uVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)(uVar3 & 1);
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)((uVar3 & 1) << 4);
  FUN_0801cf00(param_1,DAT_080ab7bc);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x10;
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(iVar4 + 0x1c);
  FUN_080ab7c0(param_1);
  return in_lr;
}


