// undefined FUN_08096de0(void)
// entry 0x8096de0


undefined4 FUN_08096de0(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_08096edc(param_1);
  }
  else {
    FUN_0801cc9c(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    FUN_0801cf00(param_1,0x5000);
    FUN_0801cff0(param_1);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_08096e34 + 0x54);
    if (bVar1) {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(bool *)(param_1 + 0x4c) = bVar1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_08096ed0,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_08096ed4;
    uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0xbe) = 0;
    *(undefined1 *)(param_1 + 0xbd) = 0x70;
    *(undefined1 *)(param_1 + 0xbf) = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
    FUN_08096d8c(param_1);
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08096ed8);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
    FUN_08096f58(param_1);
  }
  return in_lr;
}


