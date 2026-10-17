// undefined FUN_0810362c(void)
// entry 0x810362c


undefined4 FUN_0810362c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar3 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar3 | 3;
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar3 = bVar3 & 0xef | 3;
  }
  else {
    bVar3 = bVar3 | 0x13;
  }
  *(byte *)(param_1 + 10) = bVar3;
  bVar3 = *(byte *)(param_1 + 0x10) & 1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081036cc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_081036d0,param_1 + 0x54,0x80);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_081036d4;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  FUN_0801cf00(param_1,0xcf00);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar2 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    uVar2 = DAT_081036d8;
  }
  else {
    uVar2 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x54) = uVar2;
    uVar2 = 0x100;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  bVar3 = *(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_08103744);
  if (((int)(uint)*(byte *)((uint)(bVar3 >> 3) + DAT_08103740 + 4) >> (bVar3 & 7) & 1U) != 0) {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c) * 0xc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  FUN_08103748(param_1);
  return in_lr;
}


