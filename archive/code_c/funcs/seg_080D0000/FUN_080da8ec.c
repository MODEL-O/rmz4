// undefined FUN_080da8ec(void)
// entry 0x80da8ec


undefined4 FUN_080da8ec(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (((*(byte *)(iVar3 + 0xc) < 2) && (*(char *)(iVar3 + 0xd) == '\x06')) &&
     ((byte)(*(char *)(iVar3 + 0xe) - 4U) < 2)) {
    FUN_0801cff0(param_1);
    uVar2 = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080da924);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_080da93c(param_1);
  }
  return in_lr;
}


