// undefined FUN_080c1448(void)
// entry 0x80c1448


undefined4 FUN_080c1448(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  bVar4 = *(byte *)(param_1 + 0x11);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c1490);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  FUN_0801cc9c(param_1);
  if (bVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar4 = bVar4 & 1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)bVar1 * 4 + DAT_080c14f8));
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c14fc,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080c1500(param_1);
  return in_lr;
}


