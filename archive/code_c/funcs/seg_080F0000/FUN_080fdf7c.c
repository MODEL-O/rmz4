// undefined FUN_080fdf7c(void)
// entry 0x80fdf7c


undefined4 FUN_080fdf7c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if ((*(byte *)(param_1 + 0x23) & 0xf0) == 0x20) {
    iVar2 = *(int *)(iVar3 + 0x58) - *(int *)(param_2 + 4);
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_2 + 4) - *(int *)(iVar3 + 0x58);
    }
    cVar1 = FUN_08128fb8(iVar2,0x1200);
    *(char *)(iVar3 + 0xb8) = cVar1;
    if (cVar1 < '\0') {
      cVar1 = '\0';
    }
    else {
      if (cVar1 < '\x04') goto LAB_080fdfc4;
      cVar1 = '\x03';
    }
    *(char *)(iVar3 + 0xb8) = cVar1;
  }
LAB_080fdfc4:
  *(byte *)(iVar3 + 10) = *(byte *)(iVar3 + 10) | 1;
  return in_lr;
}


