// undefined FUN_080b1c60(void)
// entry 0x80b1c60


undefined4 FUN_080b1c60(int param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    return in_lr;
  }
  iVar3 = *(int *)(param_1 + 0x2c);
  FUN_08006984(0x1c);
  if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)) {
    *(undefined1 *)(iVar3 + 0xb4) = 1;
    if (*DAT_080b1cd0 != 0) {
      FUN_0803a578(*DAT_080b1cd0,6,10);
    }
  }
  iVar2 = *(int *)(iVar3 + 0x54) - *param_2 >> 8;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
  }
  if (iVar2 < 5) {
    iVar2 = *(int *)(iVar3 + 0x58) - param_2[1] >> 8;
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 5) {
      uVar1 = 5;
      goto LAB_080b1cde;
    }
  }
  if (*(char *)(iVar3 + 0xd) == '\x05') {
    return in_lr;
  }
  uVar1 = 4;
LAB_080b1cde:
  *(undefined1 *)(iVar3 + 0xd) = uVar1;
  *(undefined1 *)(iVar3 + 0xe) = 0;
  return in_lr;
}


