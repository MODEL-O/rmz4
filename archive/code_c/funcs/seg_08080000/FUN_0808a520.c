// undefined FUN_0808a520(void)
// entry 0x808a520


undefined4 FUN_0808a520(int param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0808a5e0);
    *(undefined1 *)(param_1 + 0xb5) = 0;
    FUN_08005784(param_1 + 0x74,(uint)*DAT_0808a5e4 * 0x18 + DAT_0808a5e8);
    uVar4 = DAT_0808a5ec;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  FUN_0808b210(param_1,0xf);
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  FUN_0808b1a4(param_1);
  if (*(char *)(param_1 + 0xc1) == '\0') {
    iVar5 = DAT_0808a644;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      iVar5 = 0x1000;
    }
    sVar2 = FUN_08007c7c(*(int *)(param_1 + 0x54) + iVar5,*(int *)(param_1 + 0x58) + DAT_0808a648);
    if (sVar2 != 0) {
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  else if (0x2000 < *(int *)(DAT_0808a5f0 + 0x38) - (*(int *)(param_1 + 0x54) + 0x7800)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808a5f4);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  bVar1 = *(byte *)(param_1 + 0xc2) + 1;
  *(byte *)(param_1 + 0xc2) = bVar1;
  if (0x60 < bVar1) {
    *(undefined1 *)(param_1 + 0xd) = 9;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


