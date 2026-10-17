// undefined FUN_080d9d2c(void)
// entry 0x80d9d2c


undefined4 FUN_080d9d2c(int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  undefined4 in_lr;
  
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d9ddc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar3 = *DAT_080d9de0 * DAT_080d9de4 + DAT_080d9de8;
  *DAT_080d9de0 = uVar3 & 0x7fffffff;
  cVar4 = -1;
  if (0 < *(int *)(param_1 + 0x5c)) {
    cVar4 = '\x01';
  }
  *(undefined1 *)(param_1 + 0x12) = 0x18;
  *(byte *)(param_1 + 0x75) = (((byte)(uVar3 >> 0x10) & 3) + 0x10) * cVar4;
  *(undefined1 *)(param_1 + 0x74) = uVar1;
  FUN_0801cd28(param_1);
  *(undefined1 *)(param_1 + 0x24) = uVar1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined1 *)(param_1 + 0x25) = 2;
  FUN_0801cf00(param_1,0x2400);
  FUN_0801cff0(param_1);
  FUN_080d9dec(param_1);
  return in_lr;
}


