// undefined FUN_080c8614(void)
// entry 0x80c8614


undefined4 FUN_080c8614(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  
  piVar3 = DAT_080c8660;
  iVar4 = *DAT_080c8660;
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080c8664);
    *(undefined1 *)(param_1 + 0x22) = 1;
    FUN_0801cf00(param_1,DAT_080c8668);
    *(undefined4 *)(param_1 + 100) = 0x5a;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar2 = *(int *)(param_1 + 100) + -1;
  *(int *)(param_1 + 100) = iVar2;
  if (((iVar2 == 0) || ((*(uint *)(param_1 + 0x8c) & 0x800) == 0)) || (iVar4 == 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c86c0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  else {
    iVar2 = *piVar3;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar2 + 0x54);
    *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + DAT_080c86f4;
    iVar2 = DAT_080c86f8;
    *(undefined1 *)(iVar4 + DAT_080c86f8) = 1;
    *(undefined1 *)(iVar4 + iVar2 + 1) = 0;
    if ((int)*(uint *)(param_1 + 100) < 0x16) {
      if ((*(uint *)(param_1 + 100) & 1) == 0) {
        bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar1 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar1;
    }
  }
  return in_lr;
}


