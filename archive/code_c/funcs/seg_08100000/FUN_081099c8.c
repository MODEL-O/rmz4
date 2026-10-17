// undefined FUN_081099c8(void)
// entry 0x81099c8


undefined4 FUN_081099c8(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  iVar2 = *(int *)(param_1 + 0xb8);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  FUN_0801cf00(param_1,DAT_08109a34);
  *(byte *)(param_1 + 0x4c) = *(byte *)(iVar4 + 10) >> 4 & 1;
  bVar1 = *(byte *)(iVar4 + 10) >> 4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (bVar1 & 1) << 4;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  if (*(char *)(iVar4 + 0xd) != '\x02') goto LAB_08109adc;
  if (CONCAT11(*(undefined1 *)(iVar4 + 0x1e),*(undefined1 *)(iVar4 + 0x70)) == 0x500) {
    if (*(char *)(iVar4 + 0x71) < '\x03') goto LAB_08109adc;
    *(byte *)(param_1 + 0x4c) = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    bVar1 = (*(byte *)(param_1 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1 == 0) goto LAB_08109ad4;
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    *(byte *)(param_1 + 0x4c) = (*(byte *)(iVar4 + 10) >> 4 ^ 1) & 1;
    bVar1 = (*(byte *)(iVar4 + 10) >> 4 ^ 1) & 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
    if (bVar1 == 0) {
LAB_08109ad4:
      bVar1 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x10;
    }
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_08109adc:
  FUN_0801cff0(param_1);
  if (*(char *)(iVar4 + 0xf5) == '\x05') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar3 = DAT_08109b00;
  }
  else if (*(char *)(iVar4 + 0xf5) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar3 = DAT_08109b18;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar3 = DAT_08109b58;
  }
  FUN_08005760(param_1 + 0x74,uVar3,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar3 = *(undefined4 *)(iVar2 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  uVar3 = DAT_08109b6c;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar3 = 0x600;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  return in_lr;
}


