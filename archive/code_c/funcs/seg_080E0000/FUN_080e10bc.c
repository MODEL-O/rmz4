// undefined FUN_080e10bc(void)
// entry 0x80e10bc


undefined4 FUN_080e10bc(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  undefined4 in_lr;
  
  bVar4 = *(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e1114);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x60) = DAT_080e1118;
  uVar3 = *DAT_080e111c * DAT_080e1120 + DAT_080e1124;
  *DAT_080e111c = uVar3 & 0x7fffffff;
  *(byte *)(param_1 + 0x12) = ((byte)(uVar3 >> 0x10) & 3) + 0x20;
  FUN_0801cc9c(param_1);
  if (bVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar4 = bVar4 & 1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  FUN_0801cf00(param_1,DAT_080e1160);
  FUN_080e1164(param_1);
  return in_lr;
}


