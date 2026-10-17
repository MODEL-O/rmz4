// undefined FUN_081148ec(void)
// entry 0x81148ec


undefined4 FUN_081148ec(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 2) == '\0') {
    FUN_08002b10(6);
    *(undefined2 *)(param_1 + 4) = 0x1c20;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
  }
  else if ((*(char *)(param_1 + 2) == '\x01') &&
          ((sVar1 = *(short *)(param_1 + 4) + -1, *(short *)(param_1 + 4) = sVar1, sVar1 == 0 ||
           (iVar2 = FUN_08002bb4(6), iVar2 == 0)))) {
    FUN_081126ac(param_1,0x300);
  }
  return in_lr;
}


