// undefined FUN_080960b0(void)
// entry 0x80960b0


undefined4 FUN_080960b0(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xbc);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if ((1 < *(byte *)(iVar4 + 0xc)) || ((*(uint *)(param_1 + 0x8c) & 0x200) != 0)) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080960f8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_08096224(param_1);
    return in_lr;
  }
  FUN_0801cff0(param_1);
  uVar3 = *(uint *)(param_1 + 0xb8) - 1;
  *(uint *)(param_1 + 0xb8) = uVar3;
  if (uVar3 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    return in_lr;
  }
  if ((int)uVar3 < 0x1e) {
    if ((uVar3 & 2) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_08096148;
    }
  }
  else {
    if (0x3b < (int)uVar3) {
      return in_lr;
    }
    if ((uVar3 & 1) == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xfe;
      goto LAB_08096148;
    }
  }
  bVar1 = *(byte *)(param_1 + 10) | 1;
LAB_08096148:
  *(byte *)(param_1 + 10) = bVar1;
  return in_lr;
}


