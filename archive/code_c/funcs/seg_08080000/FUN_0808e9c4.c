// undefined FUN_0808e9c4(void)
// entry 0x808e9c4


undefined4 FUN_0808e9c4(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_0808ea28 + 0x54);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808ea2c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xb9) = 0;
  *(undefined1 *)(param_1 + 0xba) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_0801cc9c(param_1);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  FUN_0801cf00(param_1,0x3900);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0808ea90,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0808ea94;
  FUN_0808ea98(param_1);
  return in_lr;
}


