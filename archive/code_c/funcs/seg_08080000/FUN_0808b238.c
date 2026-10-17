// undefined FUN_0808b238(void)
// entry 0x808b238


undefined4 FUN_0808b238(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_0808b2ac + 0x54);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808b2b0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar4 = FUN_08008534(*(int *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(bool *)(param_1 + 0xb8) = bVar1;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined1 *)(param_1 + 0xbd) = 0;
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
  FUN_0801cf00(param_1,0x2100);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0808b350,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0808b354;
  iVar5 = FUN_0808bfc8(param_1,param_1 + 0x54,0,0);
  if (iVar5 == 0) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808b358);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  else {
    FUN_0808b368(param_1);
  }
  return in_lr;
}


