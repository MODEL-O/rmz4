// undefined FUN_080acab8(void)
// entry 0x80acab8


undefined4 FUN_080acab8(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined1 *)(param_1 + 0x12) = 0x80;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12);
  bVar2 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  uVar4 = *(undefined4 *)(iVar5 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  if ((byte)(cVar1 - 1U) < 0x40) {
    if ((bVar2 & 3) != 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_080acb26;
    }
  }
  else if ((bVar2 & 1) != 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    goto LAB_080acb26;
  }
  bVar2 = *(byte *)(param_1 + 10) | 1;
LAB_080acb26:
  *(byte *)(param_1 + 10) = bVar2;
  if ((*(char *)(param_1 + 0x73) == '\x03') || (*(char *)(param_1 + 0x12) == '\0')) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080acb58);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


