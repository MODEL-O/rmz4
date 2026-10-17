// undefined FUN_0807fb14(void)
// entry 0x807fb14


undefined4 FUN_0807fb14(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x1a00);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0807fb94,param_1 + 0x54,0xe);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0807fb98;
  iVar5 = *(int *)(*DAT_0807fb9c + 0x54);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 < iVar5) {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(bool *)(param_1 + 0x4c) = iVar2 < iVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (iVar2 < iVar5) << 4;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar3;
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xb8) = 1;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x11) = 1;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xc2) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  *(undefined1 *)(param_1 + 0xb9) = 0x3c;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0807fc28);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_0807fc2c(param_1);
  return in_lr;
}


