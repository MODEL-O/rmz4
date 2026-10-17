// undefined FUN_080d880c(void)
// entry 0x80d880c


undefined4 FUN_080d880c(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  FUN_0801cff0();
  local_1c = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = local_1c;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + *(int *)(param_1 + 100);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    uVar2 = DAT_080d889c * *DAT_080d8898 + DAT_080d88a0;
    local_1c = local_1c + (((uVar2 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    uVar2 = DAT_080d889c * (uVar2 & 0x7fffffff) + DAT_080d88a0;
    *DAT_080d8898 = uVar2 & 0x7fffffff;
    local_18 = *(int *)(param_1 + 0x58) + (((uVar2 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
    FUN_080d0c88(2,&local_1c);
    FUN_080d8998(param_1);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d88a4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080d8978(param_1);
  }
  return in_lr;
}


