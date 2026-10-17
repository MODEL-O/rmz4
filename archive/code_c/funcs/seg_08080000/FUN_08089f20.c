// undefined FUN_08089f20(void)
// entry 0x8089f20


undefined4 FUN_08089f20(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  FUN_08005760(param_1 + 0x74,DAT_08089f68,param_1 + 0x54,4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08089f6c;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0x10) & 1;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 < 2) {
    *(byte *)(param_1 + 0xc0) = bVar1;
    *(undefined1 *)(param_1 + 0xc1) = 0;
  }
  else {
    *(byte *)(param_1 + 0xc0) = bVar1 - 2;
    *(undefined1 *)(param_1 + 0xc1) = 1;
  }
  pbVar5 = (byte *)(param_1 + 0xc0);
  *(undefined1 *)(param_1 + 0xc3) = 0;
  if (*(char *)(param_1 + 0xc1) == '\0') {
    if (*pbVar5 == 0) {
      uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
    else {
      uVar2 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    }
  }
  else {
    uVar2 = DAT_08089fdc;
    if (*pbVar5 != 0) {
      uVar2 = 0x1f000;
    }
  }
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  iVar3 = FUN_0807f90c(param_1);
  if (iVar3 != 0) {
    FUN_0801cf00(param_1,*pbVar5 | 0x2000);
    FUN_0801cff0(param_1);
  }
  *(undefined1 *)(param_1 + 0xc2) = 0;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808a050);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  *(byte *)(param_1 + 0xd) = *pbVar5;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_0808a054(param_1);
  return in_lr;
}


