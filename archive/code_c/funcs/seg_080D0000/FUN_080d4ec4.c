// undefined FUN_080d4ec4(void)
// entry 0x80d4ec4


undefined4 FUN_080d4ec4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x7c);
  if ((*(byte *)(iVar2 + 3) & 1) != 0) {
    FUN_080d0c88(3,param_1 + 0x54);
  }
  if ((*(byte *)(iVar2 + 3) & 2) != 0) {
    FUN_080d0c88(2,param_1 + 0x54);
  }
  if ((*(byte *)(iVar2 + 3) & 4) != 0) {
    FUN_080d0c88(1,param_1 + 0x54);
    if (*(int *)(DAT_080d4f1c + DAT_080d4f20) < *(int *)(param_1 + 0x58)) {
      FUN_08002b10(0x31);
    }
    else {
      FUN_08002b10(0x2a);
    }
  }
  if ((*(byte *)(iVar2 + 3) & 8) != 0) {
    FUN_080d0c88(1,param_1 + 0x54);
    if (*(int *)(DAT_080d4f54 + DAT_080d4f58) < *(int *)(param_1 + 0x58)) {
      FUN_08002b10(0x31);
    }
    else {
      FUN_08002b10(0x35);
    }
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d4f7c);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


