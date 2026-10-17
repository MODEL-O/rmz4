// undefined FUN_0808ce4c(void)
// entry 0x808ce4c


undefined4 FUN_0808ce4c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char cVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  FUN_08005760(param_1 + 0x74,DAT_0808cf24,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0808cf28;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  cVar5 = -1;
  if (*(char *)(param_1 + 0x10) != '\0') {
    cVar5 = '\x01';
  }
  pcVar6 = (char *)(param_1 + 0xc0);
  *pcVar6 = cVar5;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  iVar1 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1;
  iVar2 = DAT_0808cf30;
  iVar1 = FUN_08008988(*(int *)(param_1 + 0x54) + DAT_0808cf2c,iVar1 + DAT_0808cf30);
  iVar1 = *(int *)(param_1 + 0x54) - iVar1;
  if (0x2800 < iVar1) {
    iVar1 = 0x2800;
  }
  iVar2 = FUN_08008868(*(int *)(param_1 + 0x54) + 0x1600,*(int *)(param_1 + 0x58) + iVar2);
  iVar2 = iVar2 - *(int *)(param_1 + 0x54);
  if (0x2800 < iVar2) {
    iVar2 = 0x2800;
  }
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  *(int *)(param_1 + 0x68) = iVar1;
  if (iVar1 == 0x2800) {
    uVar3 = 9;
  }
  else {
    uVar3 = FUN_08128fb8(iVar1,0x480);
  }
  *(undefined4 *)(param_1 + 0x60) = uVar3;
  if (*(int *)(param_1 + 0x60) < 1) {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  iVar2 = *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x68) = iVar2 * 0x480;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808cfbc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)(param_1 + 0xe) = 2;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_0801cf00(param_1,DAT_0808cfc0);
  *(int *)(param_1 + 0x5c) = iVar2 * 0x30 * (int)*pcVar6;
  *(int *)(param_1 + 100) = (int)*pcVar6 * *(int *)(param_1 + 0x60);
  iVar2 = FUN_0807f90c(param_1);
  if (iVar2 != 0) {
    FUN_0801cf00(param_1,0x2500);
    FUN_0801cff0(param_1);
  }
  FUN_0808cfc4(param_1);
  return in_lr;
}


