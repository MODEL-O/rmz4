// undefined FUN_080d30cc(void)
// entry 0x80d30cc


undefined4 FUN_080d30cc(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  bVar1 = *(byte *)(param_1 + 0x12);
  *(byte *)(param_1 + 0x12) = bVar1 + 1;
  if ((bVar1 & 3) < 2) {
    *(uint *)(iVar3 + 0x8c) = *(uint *)(iVar3 + 0x8c) & 0xfffffffe;
    *(uint *)(iVar3 + 0x90) = *(uint *)(iVar3 + 0x90) & 0xfffffffe;
    FUN_0801d330(iVar3);
    *(undefined1 *)(param_1 + 0x11) = 0;
  }
  else {
    *(uint *)(iVar3 + 0x8c) = *(uint *)(iVar3 + 0x8c) | 1;
    *(uint *)(iVar3 + 0x90) = *(uint *)(iVar3 + 0x90) | 1;
    FUN_0801d3fc(iVar3);
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  if (*(char *)(iVar3 + 0xc) == '\x04') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d3150);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  }
  return in_lr;
}


