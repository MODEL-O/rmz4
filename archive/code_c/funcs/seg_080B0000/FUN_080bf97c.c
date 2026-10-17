// undefined FUN_080bf97c(void)
// entry 0x80bf97c


undefined4 FUN_080bf97c(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  byte abStack_18 [4];
  
  FUN_08129258(abStack_18,DAT_080bf9e4,2);
  bVar1 = *(byte *)(param_1 + 0x11);
  uVar4 = (uint)bVar1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (uVar4 < 2) {
      FUN_08005784(param_1 + 0x74,(uint)abStack_18[uVar4] * 0x18 + DAT_080bf9e8);
    }
    if (uVar4 == 0) {
      FUN_0801cc9c(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(byte *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      FUN_0801cf00(param_1,0x2b00);
    }
    else if (uVar4 == 2) {
      FUN_0801cc9c(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      FUN_0801cf00(param_1,0x2b00);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080bfa84;
    }
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if (iVar3 < *(int *)(DAT_080bfa88 + 0x38) + DAT_080bfa8c) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bfa90);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


