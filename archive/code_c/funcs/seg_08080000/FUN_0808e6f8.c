// undefined FUN_0808e6f8(void)
// entry 0x808e6f8


undefined4 FUN_0808e6f8(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x58);
    uVar1 = *DAT_0808e7a4 * DAT_0808e7a8 + DAT_0808e7ac;
    *DAT_0808e7a4 = uVar1 & 0x7fffffff;
    *(uint *)(param_1 + 0x68) = ((uVar1 & 0x7fffffff) >> 0x10 & 7) + 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_0808e7b8;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60);
  iVar3 = *(int *)(param_1 + 0x60) + 0x40;
  *(int *)(param_1 + 0x60) = iVar3;
  if (0x700 < iVar3) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  iVar3 = *(int *)(param_1 + 0x5c) * *(int *)(param_1 + 0x68);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xff;
  }
  iVar3 = *(int *)(param_1 + 100) + (iVar3 >> 8);
  *(int *)(param_1 + 0x58) = iVar3;
  if ((*(int *)(param_1 + 0xb4) + DAT_0808e7b0 < iVar3) || (*(char *)(iVar4 + 0xc) == '\x04')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808e7b4);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
    return in_lr;
  }
LAB_0808e7b8:
  FUN_0801cff0(param_1);
  return in_lr;
}


