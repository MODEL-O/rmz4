// undefined FUN_080ed44c(void)
// entry 0x80ed44c


undefined4 FUN_080ed44c(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    uVar3 = *DAT_080ed4a0 * DAT_080ed4a4 + DAT_080ed4a8;
    *DAT_080ed4a0 = uVar3 & 0x7fffffff;
    bVar2 = FUN_08129198((uVar3 & 0x7fffffff) >> 0x10,9);
    *(byte *)(param_1 + 0x12) = (bVar2 & 3) + 1;
    FUN_080ed4f0(param_1 + 0x54);
  }
  if (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc)) {
    FUN_080e954c(param_1);
  }
  return in_lr;
}


