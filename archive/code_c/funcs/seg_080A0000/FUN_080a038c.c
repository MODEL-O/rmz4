// undefined FUN_080a038c(void)
// entry 0x80a038c


undefined4 FUN_080a038c(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    FUN_0801cf00(param_1,DAT_080a03d4);
    *(undefined4 *)(param_1 + 100) = 0x48;
    *(undefined1 *)(param_1 + 0x12) = 1;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  uVar3 = *(byte *)(param_1 + 0x13) + 1;
  *(char *)(param_1 + 0x13) = (char)uVar3;
  if (*(int *)(param_1 + 100) < 0x18) {
    if ((uVar3 & 1) == 0) {
LAB_080a03ec:
      uVar3 = (uint)*(byte *)(param_1 + 10);
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      uVar3 = 1;
      bVar1 = *(byte *)(param_1 + 10) | 1;
    }
  }
  else {
    if (0x2f < *(int *)(param_1 + 100)) goto LAB_080a03f4;
    if ((uVar3 & 3) == 0) goto LAB_080a03ec;
    uVar3 = 1;
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
LAB_080a03f4:
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_0801cff0(param_1,uVar3,0);
    *(undefined1 *)(param_1 + 0x12) = 0;
    FUN_08005784(param_1 + 0x74,DAT_080a0460);
    iVar4 = *(int *)(param_1 + 100) + -1;
    *(int *)(param_1 + 100) = iVar4;
    if (iVar4 == 0) {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a0464);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
      *(undefined1 *)(param_1 + 0xd) = 3;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      FUN_080a0468(param_1);
    }
  }
  else {
    FUN_08005784(param_1 + 0x74,DAT_080a0418);
    if (*(char *)(param_1 + 0x12) != '\0') {
      FUN_0801cff0(param_1);
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  return in_lr;
}


