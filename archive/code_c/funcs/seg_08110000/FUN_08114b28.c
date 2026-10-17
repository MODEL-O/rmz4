// undefined FUN_08114b28(void)
// entry 0x8114b28


undefined4 FUN_08114b28(int param_1)

{
  ushort uVar1;
  short sVar2;
  uint *puVar3;
  char cVar4;
  ushort uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  puVar3 = DAT_08114b5c;
  if ((*DAT_08114b5c != 0) && (uVar6 = *DAT_08114b5c - 1, *DAT_08114b5c = uVar6, (uVar6 & 3) == 3))
  {
    cVar4 = FUN_0802b63c(*(undefined4 *)(param_1 + DAT_08114b60),4);
    if (cVar4 == '\0') {
      *puVar3 = 0;
    }
    else {
      FUN_08002b10(0x22);
    }
  }
  puVar3 = DAT_08114bfc;
  uVar1 = *(ushort *)(DAT_08114bf8 + 8);
  if ((uVar1 & 8) == 0) {
    if ((*DAT_08114bfc != 0) &&
       (sVar2 = *(short *)(*(int *)(param_1 + DAT_08114c00) + 0xa4), uVar5 = FUN_0802b61c(),
       (short)(uVar5 & 0xff) <= sVar2)) {
      *DAT_08114c04 = *DAT_08114c04 + *puVar3;
      *puVar3 = uVar1 & 8;
    }
    puVar3 = DAT_08114c04;
    if ((*DAT_08114c04 != 0) && (uVar6 = *DAT_08114c04 - 1, *DAT_08114c04 = uVar6, (uVar6 & 3) == 3)
       ) {
      cVar4 = FUN_0802b674(*(undefined4 *)(param_1 + DAT_08114c00));
      if (cVar4 == '\0') {
        *puVar3 = 0;
      }
    }
    puVar3 = DAT_08114bfc;
    if ((*DAT_08114bfc != 0) && (uVar6 = *DAT_08114bfc - 1, *DAT_08114bfc = uVar6, (uVar6 & 3) == 3)
       ) {
      cVar4 = FUN_0802b5c4(*(undefined4 *)(param_1 + DAT_08114c00));
      if (cVar4 == '\0') {
        *puVar3 = 0;
      }
    }
  }
  else {
    *DAT_08114c14 = 0;
  }
  return in_lr;
}


