// undefined FUN_080d0898(void)
// entry 0x80d0898


undefined4 FUN_080d0898(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  cVar1 = FUN_08007c7c(*(int *)(param_1 + 0x54) +
                       *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080d08ec) * 0x100,
                       *(undefined4 *)(param_1 + 0x58));
  if ((cVar1 != '\0') && (cVar1 != '\x0f')) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d08f0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  if (*(char *)(param_1 + 0xb5) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    FUN_080d0984(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(char *)(param_1 + 0xb5) = '\0';
      cVar1 = '\x01';
    }
    else {
      cVar1 = *(char *)(param_1 + 0x12) + -1;
    }
    *(char *)(param_1 + 0x12) = cVar1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(param_1 + 0x54) + DAT_080d0928 <= *(int *)(DAT_080d0920 + 0x38) + DAT_080d0924)
    goto LAB_080d0952;
  }
  else if (*(int *)(DAT_080d0960 + 0x38) + DAT_080d0964 <= *(int *)(param_1 + 0x54) + 0x1000)
  goto LAB_080d0952;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d0968);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
LAB_080d0952:
  FUN_0801cff0(param_1);
  return in_lr;
}


