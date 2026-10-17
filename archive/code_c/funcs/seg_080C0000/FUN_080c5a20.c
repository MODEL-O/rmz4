// undefined FUN_080c5a20(void)
// entry 0x80c5a20


undefined4 FUN_080c5a20(int param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  undefined4 in_lr;
  byte abStack_1c [4];
  undefined4 local_18 [2];
  
  local_18[1] = DAT_080c5a9c[1];
  local_18[0] = *DAT_080c5a9c;
  FUN_08129258(abStack_1c,DAT_080c5aa0,2);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,(uint)abStack_1c[bVar1] * 0x18 + DAT_080c5aa4);
    FUN_0801cf00(param_1,*(undefined2 *)(local_18 + bVar1));
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((*(uint *)(param_1 + 0x8c) & 0x800) == 0) {
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar4 = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x60) = iVar4;
    if (iVar4 < DAT_080c5b00) {
      *(int *)(param_1 + 0x60) = DAT_080c5b00;
    }
    if ((*(char *)(param_1 + 0x12) != '\0') &&
       (sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
       sVar2 != 0)) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    bVar1 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    if ((bVar1 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
    *(byte *)(param_1 + 10) = bVar1;
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(uint *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c5b50);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    FUN_08128f80(param_1,*(undefined4 *)(DAT_080c5aa8 + 4));
  }
  return in_lr;
}


