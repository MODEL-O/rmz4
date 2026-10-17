// undefined FUN_080d0afc(void)
// entry 0x80d0afc


undefined4 FUN_080d0afc(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *DAT_080d0b50;
  *(int *)(param_1 + 0x54) =
       *(int *)(iVar2 + 0x54) +
       *(int *)(((int)-(*(byte *)(iVar2 + 10) & 0x10) >> 0x1f & 4U) + DAT_080d0b54) * 0x100;
  *(int *)(param_1 + 0x58) = *(int *)(iVar2 + 0x58) + DAT_080d0b58;
  if (*(char *)(param_1 + 0x12) == '\0') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d0b5c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  return in_lr;
}


