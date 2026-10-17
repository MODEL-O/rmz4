// undefined FUN_080ef7f4(void)
// entry 0x80ef7f4


undefined4 FUN_080ef7f4(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_0801cf00(param_1,0x7c00);
    if (*(char *)(param_1 + 0x11) == '\x01') {
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 100) = 0xffffffe0;
    }
    else {
      *(int *)(param_1 + 0x5c) = DAT_080ef894;
      *(undefined4 *)(param_1 + 100) = 0;
    }
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (*(char *)(param_1 + 0xd) != '\x01') goto LAB_080ef878;
  if (DAT_080ef894 < *(int *)(param_1 + 0x5c)) {
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  }
  iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar3;
  if ((1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) ||
     (0x2000 < *(int *)(DAT_080ef898 + 0x38) - (iVar3 + 0x7800))) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ef89c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080ed7e0(param_1);
  }
LAB_080ef878:
  if (*(char *)(param_1 + 0x11) == '\x01') {
    bVar1 = *(char *)(param_1 + 0x12) + 1;
    *(byte *)(param_1 + 0x12) = bVar1;
    if ((bVar1 & 1) != 0) {
      FUN_0801cff0(param_1);
    }
  }
  else {
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


