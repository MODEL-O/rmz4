// undefined FUN_08041584(void)
// entry 0x8041584


undefined4 FUN_08041584(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  cVar1 = FUN_0803a99c(param_1,3);
  if (*(char *)(iVar3 + 0xfa) == '\x02') {
    cVar1 = '\x01';
  }
  if (cVar1 == '\0') {
    FUN_0801cff0(param_1);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080415bc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080415d4(param_1);
  }
  return in_lr;
}


