// undefined FUN_080b1370(void)
// entry 0x80b1370


undefined4 FUN_080b1370(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xc2) == '\0') {
    if (*(char *)(param_1 + 0x12) == '\0') {
      uVar1 = FUN_080b1008(param_1 + 0x54,(uint)*(byte *)(param_1 + 0x10) << 8 | 3);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      *(char *)(param_1 + 0xc2) = '\x01';
      return in_lr;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((iVar3 != 0) && (1 < *(byte *)(iVar3 + 0xc))) {
    if (*(char *)(iVar3 + 0xc2) == -1) {
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b13cc);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    }
    else {
      *(undefined1 *)(param_1 + 0x12) = 0x50;
      *(undefined1 *)(param_1 + 0xc2) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  return in_lr;
}


