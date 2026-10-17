// undefined FUN_0804458c(void)
// entry 0x804458c


undefined4 FUN_0804458c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  cVar1 = FUN_0803a99c(param_1,3);
  if (*(char *)(iVar3 + 0xfa) == '\x02') {
    cVar1 = '\x01';
  }
  if (cVar1 == '\0') {
    if ((*(uint *)(param_1 + 0x8c) & 4) != 0) {
      cVar1 = '\x01';
    }
    if (cVar1 == '\0') {
      FUN_0801cff0(param_1);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      return in_lr;
    }
  }
  if (cVar1 != -1) {
    FUN_080d0c88(2,param_1 + 0x54);
  }
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080445e8);
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  FUN_08044600(param_1);
  return in_lr;
}


