// undefined FUN_0808e7c4(void)
// entry 0x808e7c4


undefined4 FUN_0808e7c4(int param_1)

{
  int *piVar1;
  uint uVar2;
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
    iVar3 = FUN_08128fb8(*(ushort *)(param_1 + 0xb8) - 0xb0,5);
    uVar2 = *DAT_0808e880 * DAT_0808e884 + DAT_0808e888;
    *DAT_0808e880 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x68) = iVar3 + ((uVar2 & 0x7fffffff) >> 0x10 & 7) + 0x20;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_0808e894;
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
  if ((*(int *)(param_1 + 0xb4) + DAT_0808e88c < iVar3) || (*(char *)(iVar4 + 0xc) == '\x04')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808e890);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
    return in_lr;
  }
LAB_0808e894:
  FUN_0801cff0(param_1);
  return in_lr;
}


