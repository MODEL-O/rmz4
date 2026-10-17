// undefined FUN_0809855c(void)
// entry 0x809855c


undefined4 FUN_0809855c(int param_1)

{
  bool bVar1;
  byte bVar2;
  undefined1 uVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0801cc9c(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    FUN_0801cf00(param_1,0xba00);
    FUN_0801cff0(param_1);
    bVar1 = *(int *)(param_1 + 0x54) < *(int *)(*DAT_080985b0 + 0x54);
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
    FUN_08005760(param_1 + 0x74,DAT_08098628,param_1 + 0x54,6);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_0809862c;
    *(undefined1 *)(param_1 + 0xbd) = 0;
    *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0x54) + 0x1000;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      uVar3 = 4;
    }
    else {
      uVar3 = 0xfc;
    }
    *(undefined1 *)(param_1 + 0x13) = uVar3;
    *(undefined1 *)(param_1 + 0xbe) = 0x40;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809865c);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
    FUN_080986d8(param_1);
  }
  else {
    FUN_08098660(param_1);
  }
  return in_lr;
}


