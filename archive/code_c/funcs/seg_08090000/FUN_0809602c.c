// undefined FUN_0809602c(void)
// entry 0x809602c


undefined4 FUN_0809602c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x28);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) && ((*(uint *)(param_1 + 0x8c) & 0x200) == 0))
  {
    FUN_0801d1f4(param_1);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x60) + 0x40;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    iVar3 = *(int *)(iVar3 + 0xb4);
    if (iVar3 <= *(int *)(param_1 + 0x58)) {
      *(int *)(param_1 + 0x58) = iVar3;
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08096074);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_08096224(param_1);
  }
  return in_lr;
}


